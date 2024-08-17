#include QMK_KEYBOARD_H

enum layers { _BASE, _RAISE };

#define L1_TAB  LT(1, KC_TAB)
#define SFT_ENT SFT_T(KC_ENT)
#define CTL_ESC CTL_T(KC_ESC)
#define ALT_BSP ALT_T(KC_BSPC)
#define WIN_CAP WIN_T(KC_CAPS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_ortho_5x4(
		L1_TAB , KC_Z   , KC_A   , KC_Q   ,
		SFT_ENT, KC_X   , KC_S   , KC_W   ,
		CTL_ESC, KC_C   , KC_D   , KC_E   ,
		ALT_BSP, KC_V   , KC_F   , KC_R   ,
		WIN_CAP, KC_B   , KC_G   , KC_T
	),

	[_RAISE] = LAYOUT_ortho_5x4(
		L1_TAB , KC_GRV , KC_6   , KC_1   ,
		KC_LSFT, KC_MINS, KC_7   , KC_2   ,
		KC_LCTL, KC_EQL , KC_8   , KC_3   ,
		KC_LALT, KC_SLSH, KC_9   , KC_4   ,
		KC_LGUI, KC_BSLS, KC_0   , KC_5
	),
};
