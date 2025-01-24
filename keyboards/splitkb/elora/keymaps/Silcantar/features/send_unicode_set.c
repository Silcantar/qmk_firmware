#include "send_unicode_set.h"

bool send_unicode_set(
	char default_value[],
	char shift_value[],
	char rctl_value[],
	char rctl_shift_value[]) {
	
	uint8_t all_mods = (get_mods() | get_weak_mods() | get_oneshot_mods());
	
	if (all_mods == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RCTL)) || all_mods == (MOD_BIT(KC_RSFT) | MOD_BIT(KC_RCTL))) {
		if (rctl_shift_value[0] == '\0') {
			return true;
		} else {
			send_unicode_string(rctl_shift_value);
			return false;
		}
	} else if (all_mods & MOD_MASK_SHIFT) {
		if (shift_value[0] == '\0') {
			return true;
		} else {
			send_unicode_string(shift_value);
			return false;
		}
	} else if (all_mods & MOD_BIT(KC_RCTL)) {
		if (rctl_value[0] == '\0') {
			return true;
		} else {
			send_unicode_string(rctl_value);
			return false;
		}
	} else {
		if (default_value[0] == '\0') {
			return true;
		} else {
			send_unicode_string(default_value);
			return false;
		}
	}
}