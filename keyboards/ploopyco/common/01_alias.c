#define PLOOPY_DPI_SNIPE 0

#define CONFIG_DBLCLK LT(_CONFIG, KC_0)

#define HT_DRAG_SCROLL LT(0, KC_0)
#define HT_SNIPE LT(0, KC_1)

enum layers {
	_DEFAULT = 0,
	_CONFIG,
};

enum custom_keycodes {
	PRINT_DPI = SAFE_RANGE,
	SCROLL_CONFIG,
	DOUBLE_CLICK,
	HSCROLL_TOGGLE,
};