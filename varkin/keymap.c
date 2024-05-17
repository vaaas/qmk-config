#include QMK_KEYBOARD_H

enum LayerName {
	_BASE  = 0,
	_RAISE = 1,
	_LOWER = 2,
	_SYS   = 4,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_ortho_3x10(
		KC_G   , KC_C   , KC_D   , KC_M   , KC_F   , KC_B   , KC_W   , KC_U   , KC_O   , KC_P   ,
		KC_R   , KC_S   , KC_T   , KC_N   , KC_H   , KC_Y   , KC_I   , KC_E   , KC_A   , KC_L   ,
		KC_LGUI, KC_LALT, MO(2)  , MO(1)  , KC_SPC , KC_LCTL, KC_LSFT, KC_RCTL, KC_RALT, KC_RGUI
	),

	[_RAISE] = LAYOUT_ortho_3x10( // alpha 2 layer
		KC_GRV , KC_Q   , KC_K   , KC_J   , KC_EQL , KC_BSLS, KC_COMM, KC_DOT , KC_RBRC, KC_LBRC,
		KC_X   , KC_Z   , KC_V   , KC_QUOT, KC_MINS, KC_SLSH, KC_ENT , KC_TAB , KC_BSPC, KC_SCLN,
		_______, _______, MO(3)  , _______, _______, _______, _______, _______, _______, _______
	),

	[_LOWER] = LAYOUT_ortho_3x10(
		KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
		KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_DEL , KC_ESC , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT,
		_______, _______, _______, MO(3)  , _______, _______, _______, _______, _______, _______
	),

	[_SYS] = LAYOUT_ortho_3x10(
		KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,
		KC_F11 , KC_F12 , KC_INS , KC_CAPS, KC_PAUS, KC_PSCR, KC_APP , KC_VOLD, KC_VOLU, KC_MUTE
		_______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT
	),
};
