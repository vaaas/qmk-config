#include QMK_KEYBOARD_H

#define SFT_ENT SFT_T(KC_ENT)
#define CTL_ESC CTL_T(KC_ESC)
#define ALT_BSP ALT_T(KC_BSPC)
#define L1_TAB  LT(1, KC_TAB)

enum layers { _NUMS, _FS };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_NUMS] = LAYOUT_ortho_4x4(
      KC_EQL , KC_7   , KC_8   , KC_9   ,
      KC_MINS, KC_4   , KC_5   , KC_6   ,
      KC_0   , KC_1   , KC_2   , KC_3   ,
      L1_TAB , ALT_BSP, CTL_ESC, SFT_ENT
   ),

	[_FS] = LAYOUT_ortho_4x4(
      KC_F12 , KC_F7  , KC_F8  , KC_F9  ,
      KC_F11 , KC_F4  , KC_F5  , KC_F6  ,
      KC_F10 , KC_F1  , KC_F2  , KC_F3  ,
      L1_TAB , _______, _______, _______
	),
};
