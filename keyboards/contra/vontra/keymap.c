#include QMK_KEYBOARD_H

enum layers { _BASE, _RAISE, _MIDI };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_ortho_4x12( \
		KC_LGUI, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS, \
		KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, \
		KC_LALT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_EQL , \
		KC_ESC , KC_CAPS, KC_APP , KC_INS , MO(1)  , KC_SPC , KC_RALT, KC_LSFT, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT  \
	),

	[_RAISE] = LAYOUT_ortho_4x12( \
		_______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_F12 , \
		_______, KC_DEL , KC_BSPC, KC_TAB , KC_ENT , KC_NUBS, KC_NUHS, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV , KC_INT2, \
		_______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , \
		TO(2)  , QK_BOOT, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END   \
	),

	[_MIDI] = LAYOUT_ortho_4x12( \
		MI_Gs  , MI_A   , MI_As  , MI_B   , MI_Gs1 , MI_A1  , MI_As1 , MI_B1  , MI_Gs2 , MI_A2  , MI_As2 , MI_B2  , \
		MI_E   , MI_F   , MI_Fs  , MI_G   , MI_E1  , MI_F1  , MI_Fs1 , MI_G1  , MI_E2  , MI_F2  , MI_Fs2 , MI_G2  , \
		MI_C   , MI_Cs  , MI_D   , MI_Ds  , MI_C1  , MI_Cs1 , MI_D1  , MI_Ds1 , MI_C2  , MI_Cs2 , MI_D2  , MI_Ds2 , \
		TO(0)  , MI_TOGG, MI_OCTD, MI_OCTU, _______, _______, _______, _______, _______, _______, _______, _______  \
	),
};
