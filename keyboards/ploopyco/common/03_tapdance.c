/* Return an integer that corresponds to what kind of tap dance should be executed.
 *
 * How to figure out tap dance state: interrupted and pressed.
 *
 * Interrupted: If the state of a dance is "interrupted", that means that another key has been hit
 *  under the tapping term. This is typically indicative that you are trying to "tap" the key.
 *
 * Pressed: Whether or not the key is still being pressed. If this value is true, that means the tapping term
 *  has ended, but the key is still being pressed down. This generally means the key is being "held".
 *
 * One thing that is currently not possible with qmk software in regards to tap dance is to mimic the "permissive hold"
 *  feature. In general, advanced tap dances do not work well if they are used with commonly typed letters.
 *  For example "A". Tap dances are best used on non-letter keys that are not hit while typing letters.
 *
 * Good places to put an advanced tap dance:
 *  z,q,x,j,k,v,b, any function key, home/end, comma, semi-colon
 *
 * Criteria for "good placement" of a tap dance key:
 *  Not a key that is hit frequently in a sentence
 *  Not a key that is used frequently to double tap, for example 'tab' is often double tapped in a terminal, or
 *    in a web form. So 'tab' would be a poor choice for a tap dance.
 *  Letters used in common words as a double. For example 'p' in 'pepper'. If a tap dance function existed on the
 *    letter 'p', the word 'pepper' would be quite frustrating to type.
 *
 * For the third point, there does exist the 'TD_DOUBLE_SINGLE_TAP', however this is not fully tested
 *
 */

 typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_TAP,
    TD_DOUBLE_HOLD,
    TD_DOUBLE_SINGLE_TAP, // Send two single taps
    TD_TRIPLE_TAP,
    TD_TRIPLE_HOLD
} td_state_t;

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;

// Tap dance enums
enum {
    TD_DRAG_SCROLL,
    TD_SNIPE,
};

td_state_t cur_dance(tap_dance_state_t *state);

// For the x tap dance. Put it here so it can be used in any keymap
void td_drag_scroll_finished(tap_dance_state_t *state, void *user_data);
void td_drag_scroll_reset(tap_dance_state_t *state, void *user_data);
void td_snipe_finished(tap_dance_state_t *state, void *user_data);
void td_snipe_reset(tap_dance_state_t *state, void *user_data);

 td_state_t cur_dance(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
        // Key has not been interrupted, but the key is still held. Means you want to send a 'HOLD'.
        else return TD_SINGLE_HOLD;
    } else if (state->count == 2) {
        // TD_DOUBLE_SINGLE_TAP is to distinguish between typing "pepper", and actually wanting a double tap
        // action when hitting 'pp'. Suggested use case for this return value is when you want to send two
        // keystrokes of the key, and not the 'double tap' action/macro.
        if (state->interrupted) return TD_DOUBLE_SINGLE_TAP;
        else if (state->pressed) return TD_DOUBLE_HOLD;
        else return TD_DOUBLE_TAP;
    }

    // Assumes no one is trying to type the same letter three times (at least not quickly).
    // If your tap dance key is 'KC_W', and you want to type "www." quickly - then you will need to add
    // an exception here to return a 'TD_TRIPLE_SINGLE_TAP', and define that enum just like 'TD_DOUBLE_SINGLE_TAP'
    if (state->count == 3) {
        if (state->interrupted || !state->pressed) return TD_TRIPLE_TAP;
        else return TD_TRIPLE_HOLD;
    } else return TD_UNKNOWN;
}

// Create an instance of 'td_tap_t' for the 'drag scroll' tap dance.
static td_tap_t td_drag_scroll_tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};

// Create an instance of 'td_tap_t' for the 'snipe' tap dance.
static td_tap_t td_snipe_tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};

void td_drag_scroll_finished(tap_dance_state_t *state, void *user_data) {
    td_drag_scroll_tap_state.state = cur_dance(state);
    switch (td_drag_scroll_tap_state.state) {
        case TD_SINGLE_TAP: /*Debug tap_code16(KC_A)*/; toggle_drag_scroll(); break;
        case TD_SINGLE_HOLD: /*Debug tap_code16(KC_B)*/; set_drag_scroll(true); break;
        default: break;
    }
}

void td_drag_scroll_reset(tap_dance_state_t *state, void *user_data) {
    switch (td_drag_scroll_tap_state.state) {
        case TD_SINGLE_TAP: break;
        case TD_SINGLE_HOLD: /*Debug tap_code16(KC_C)*/; set_drag_scroll(false); break;
        default: break;
    }
    td_drag_scroll_tap_state.state = TD_NONE;
}

void td_snipe_finished(tap_dance_state_t *state, void *user_data) {
    td_snipe_tap_state.state = cur_dance(state);
    switch (td_snipe_tap_state.state) {
        case TD_SINGLE_TAP: /*Debug tap_code16(KC_X)*/; cycle_dpi(); break;
        case TD_SINGLE_HOLD: /*Debug tap_code16(KC_Y)*/; pointing_device_set_cpi(dpi_array[PLOOPY_DPI_SNIPE]); break;
        default: break;
    }
}

void td_snipe_reset(tap_dance_state_t *state, void *user_data) {
    switch (td_snipe_tap_state.state) {
        case TD_SINGLE_TAP: break;
        case TD_SINGLE_HOLD: /*Debug tap_code16(KC_Z)*/; pointing_device_set_cpi(dpi_array[PLOOPY_DPI_DEFAULT]); break;
        default: break;
    }
    td_snipe_tap_state.state = TD_NONE;
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_DRAG_SCROLL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_drag_scroll_finished, td_drag_scroll_reset),
    [TD_SNIPE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_snipe_finished, td_snipe_reset)
};