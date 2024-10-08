#include QMK_KEYBOARD_H

#define SFT_SPC MT(MOD_LSFT, KC_SPC)
#define CTL_ESC MT(MOD_LCTL, KC_ESC)
#define ALT_CAP MT(MOD_LALT, KC_CAPS)
#define GUI_DEL MT(MOD_LGUI, KC_DEL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_3x10(
		KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,
		KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , _______,
		KC_Z   , KC_X   , KC_C   , KC_V   , SFT_SPC, KC_B   , KC_N   , KC_M   , _______, _______
	),

	[1] = LAYOUT_ortho_3x10(
		KC_GRV , KC_Q   , KC_K   , KC_J   , KC_EQL , KC_BSLS, KC_COMM, KC_DOT , KC_LBRC, KC_RBRC,
		KC_X   , KC_Z   , KC_V   , KC_QUOT, KC_MINS, KC_SLSH, KC_ENT , KC_TAB , KC_BSPC, KC_SCLN,
		KC_HOME, KC_PGDN, _______, _______, _______, TG(3)  , _______, _______, KC_PGUP, KC_END
	),

	[2] = LAYOUT_ortho_3x10(
		KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
		KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,
		KC_F11 , KC_F12 , _______, _______, _______, _______, _______, _______, _______, QK_BOOT
	),

	[3] = LAYOUT_ortho_3x10(
		KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_HOME, KC_UP  , KC_END , KC_DEL ,
		KC_TAB , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL,
		KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_RSFT, KC_LALT, KC_ENT , TG(3)
	)
};
