#include QMK_KEYBOARD_H

//                                             ___              __                           
//                                            / _ \ _   _  ___ / _|_ __ ___ _ __   ___ _   _ 
//                                           | | | | | | |/ _ \ |_| '__/ _ \ '_ \ / __| | | |
//                                           | |_| | |_| |  __/  _| | |  __/ | | | (__| |_| |
//                                            \__\_\\__,_|\___|_| |_|  \___|_| |_|\___|\__, |
//                                                                                     |___/ 
//  ______________________________________________________________        ________________________________________________________________________________
// |    ESC |      ! |      " |      £ |      $ |      % |      ^ |      |      & |      * |      ( |      ) |      _ |      + |      ~ |   BACK |   HOME |
// |        |      1 |      2 |      3 |      4 |      5 |      6 |      |      7 |      8 |      9 |      0 |      - |      = |      # |  SPACE |        |
// |________|________|________|________|________|________|________|  ____|________|________|________|________|________|________|________|________|________|
// |        TAB |      Q |      W |      E |      R |      T |      |      Y |      U |      I |      O |      P |      { |      } |           | |    END |
// | 1.5        |        |        |        |        |        |      |        |        |        |        |        |      [ |      ] | 1.5       \ |        |
// |____________|________|________|________|________|________|_     |________|________|________|________|________|________|________|_____________|________|
// |         CAPS |      A |      S |      D |      F |      G |      |      H |      J |      K |      L |      : |      @ |              ENTER |   PAGE |
// | 1.75         |        |        |        |        |        |      |        |        |        |        |      ; |      ' | 2.25               |   DOWN |
// |______________|________|________|________|________|________|____  |________|________|________|________|________|________|____________________|________|
// |             SHIFT |      Z |      X |      C |      V |      B |      |      N |      M |      < |      > |      ? |         SHIFT |     UP |   PAGE |
// | 2.25              |        |        |        |        |        |      |        |        |      , |      . |      / | 1.75          |        |     UP |
// |___________________|________|________|________|________|________|      |________|________|________|________|________|_______________|________|________|
// |     CTRL |      WIN |      ALT |       FN |              SPACE |      |                  SPACE |    ALT |     FN |   CTRL |   LEFT |   DOWN |  RIGHT |
// | 1.25     | 1.25     | 1.25     | 1.25     | 2.25               |      | 2.75                   |        |        |        |        |        |        |
// |__________|__________|__________|__________|____________________|      |________________________|________|________|________|________|________|________|

#define ___x___ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_65(
//  ______________________________________________________________        ________________________________________________________________________________
// |        |        |        |        |        |        |        |      |        |        |        |        |        |        |        |        |        |
      KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,           KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_NUHS, KC_BSPC, KC_HOME,
// |________|________|________|________|________|________|________|  ____|________|________|________|________|________|________|________|________|________|
// |            |        |        |        |        |        |      |        |        |        |        |        |        |        |             |        |
          KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,      KC_NUBS,  KC_END,
// |____________|________|________|________|________|________|_     |________|________|________|________|________|________|________|_____________|________|
// |              |        |        |        |        |        |      |        |        |        |        |        |        |                    |        |
            KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,              KC_ENT, KC_PGUP, 
// |______________|________|________|________|________|________|____  |________|________|________|________|________|________|____________________|________|
// |                   |        |        |        |        |        |      |        |        |        |        |        |               |        |        |
                KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,           KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,        KC_RSFT,   KC_UP, KC_PGDN, 
// |___________________|________|________|________|________|________|      |________|________|________|________|________|_______________|________|________|
// |          |          |          |          |                    |      |                        |        |        |        |        |        |        |
       KC_LCTL,   KC_LGUI,   KC_LALT,     MO(1),              KC_SPC,                 KC_SPC, KC_SPC, KC_RALT,   MO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
// |__________|__________|__________|__________|____________________|      |________________________|________|________|________|________|________|________|
),

	[1] = LAYOUT_65(
//  ______________________________________________________________        ________________________________________________________________________________
// |        |        |        |        |        |        |        |      |        |        |        |        |        |        |        |        |        |
      KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,         KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, ___x___,  KC_DEL, _______,
// |________|________|________|________|________|________|________|  ____|________|________|________|________|________|________|________|________|________|
// |            |        |        |        |        |        |      |        |        |        |        |        |        |        |             |        |
         _______, ___x___, ___x___, ___x___, ___x___, ___x___,        ___x___, ___x___,  KC_INS, ___x___, KC_PSCR, ___x___, ___x___,      ___x___, _______,
// |____________|________|________|________|________|________|_     |________|________|________|________|________|________|________|_____________|________|
// |              |        |        |        |        |        |      |        |        |        |        |        |        |                    |        |
             TT(2), ___x___, ___x___, ___x___, ___x___, ___x___,        KC_MPRV, KC_MPLY, KC_MNXT, ___x___, ___x___, ___x___,             _______, _______,
// |______________|________|________|________|________|________|____  |________|________|________|________|________|________|____________________|________|
// |                   |        |        |        |        |        |      |        |        |        |        |        |               |        |        |
                _______, ___x___,  KC_APP, KC_CALC, ___x___, ___x___,        KC_VOLD, KC_MUTE, KC_VOLU, ___x___, ___x___,        _______, KC_PGUP, _______,
// |___________________|________|________|________|________|________|      |________|________|________|________|________|_______________|________|________|
// |          |          |          |          |                    |      |                        |        |        |        |        |        |        |
       _______,   _______,   _______,   _______,             _______,               _______, _______, _______, _______, _______, KC_HOME, KC_PGDN,  KC_END
// |__________|__________|__________|__________|____________________|      |________________________|________|________|________|________|________|________|
),

	[2] = LAYOUT_65(

//  ______________________________________________________________        ________________________________________________________________________________
// |        |        |        |        |        |        |        |      |        |        |        |        |        |        |        |        |        |
     _______, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          KC_P7,   KC_P8,   KC_P9, KC_PSLS, KC_LPRN, KC_RPRN, ___x___, _______, _______,
// |________|________|________|________|________|________|________|  ____|________|________|________|________|________|________|________|________|________|
// |            |        |        |        |        |        |      |        |        |        |        |        |        |        |             |        |
         _______, ___x___, ___x___, ___x___, ___x___, ___x___,        KC_NLCK,   KC_P4,   KC_P5,   KC_P6, KC_PAST, ___x___, ___x___,      ___x___, _______,
// |____________|________|________|________|________|________|_     |________|________|________|________|________|________|________|_____________|________|
// |              |        |        |        |        |        |      |        |        |        |        |        |        |                    |        |
             TG(2), ___x___, ___x___, ___x___, ___x___, ___x___,        ___x___,   KC_P1,   KC_P2,   KC_P3, KC_PMNS, ___x___,             _______, _______,
// |______________|________|________|________|________|________|____  |________|________|________|________|________|________|____________________|________|
// |                   |        |        |        |        |        |      |        |        |        |        |        |               |        |        |
                _______, ___x___, ___x___, ___x___, ___x___, ___x___,        ___x___,   KC_P0, KC_PDOT, KC_PENT, KC_PPLS,        _______, _______, _______,
// |___________________|________|________|________|________|________|      |________|________|________|________|________|_______________|________|________|
// |          |          |          |          |                    |      |                        |        |        |        |        |        |        |
       _______,   _______,   _______,   _______,             _______,               _______, _______, _______, _______, _______, _______, _______, _______
// |__________|__________|__________|__________|____________________|      |________________________|________|________|________|________|________|________|
)
};

