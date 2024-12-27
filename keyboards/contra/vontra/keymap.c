#include QMK_KEYBOARD_H

enum layers { _BASE, _RAISE, _MIDI };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_ortho_4x12( \
		KC_LGUI, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS, \
		KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, \
		KC_LALT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_EQL , \
		TO(3)  , _______, _______, _______, MO(1)  , KC_SPC , KC_RALT, KC_LSFT, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT  \
	),

	[_RAISE] = LAYOUT_ortho_4x12( \
		KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , \
		_______, KC_DEL , KC_BSPC, KC_TAB , KC_ENT , KC_NUBS, KC_NUHS, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV , KC_CAPS, \
		_______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_APP , \
		_______, _______, _______, _______, _______, KC_INS , KC_ESC , _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END   \
	),

	[_MIDI] = LAYOUT_ortho_4x12( \
		MI_Gs  , MI_A   , MI_As  , MI_B   , MI_Gs2 , MI_A2  , MI_As2 , MI_B2  , MI_Gs3 , MI_A3  , MI_As3 , MI_B3  , \
		MI_E   , MI_F   , MI_Fs  , MI_G   , MI_E2  , MI_F2  , MI_Fs2 , MI_G2  , MI_E3  , MI_F3  , MI_Fs3 , MI_G3  , \
		MI_C   , MI_Cs  , MI_D   , MI_Ds  , MI_C2  , MI_Cs2 , MI_D2  , MI_Ds2 , MI_C3  , MI_Cs3 , MI_D3  , MI_Ds3 , \
		TO(1)  , MI_OFF , MI_ON  , _______, _______, _______, _______, _______, MI_CHND, MI_CHNU, MI_OCTD, MI_OCTU  \
	),
};
