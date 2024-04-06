#include QMK_KEYBOARD_H

enum LayerName {
	_BASE  = 0,
	_RAISE = 1,
};

/*
g c d m f b w u o p
r s t n h y i e a l
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_ortho_3x10(
		KC_G   , KC_C   , KC_D   , KC_M   , KC_F   , KC_B   , KC_W   , KC_U   , KC_O   , KC_P   ,
		KC_R   , KC_S   , KC_T   , KC_N   , KC_H   , KC_Y   , KC_I   , KC_E   , KC_A   , KC_L   ,
		KC_LCTL, KC_LGUI, KC_LALT, MO(1)  , KC_SPC , KC_LSFT, MO(1)  , KC_BTN1, KC_BTN2, KC_BTN3
	),

	[_RAISE] = LAYOUT_ortho_3x10( // alpha 2 layer
		KC_COMM, KC_Q   , KC_K   , KC_J   , KC_DOT , _______, KC_SCLN, KC_GRV , _______, _______,
		KC_X   , KC_Z   , KC_V   , KC_QUOT, KC_MINS, KC_EQL , KC_RBRC, KC_LBRC, KC_SLSH, KC_BSLS,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT
	),
};
