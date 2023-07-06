#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#include "sendstring_uk.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                 KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,      
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           TD(DANCE_0),                    KC_NONUS_BSLASH,KC_J,           KC_L,           KC_U,           KC_Y,           KC_LBRACKET,    KC_RBRACKET,    
    KC_BSPACE,      KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           KC_GRAVE,                       KC_NONUS_HASH,  KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_SCOLON,      
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                                           KC_K,           KC_H,           KC_DOT,         KC_SLASH,       KC_UP,          MT(MOD_RSFT, KC_ENTER),
    KC_LCTRL,       KC_LALT,        KC_TRANSPARENT, KC_QUOTE,       KC_LGUI,                        LGUI(LSFT(KC_D)),              TD(DANCE_1),                     KC_MINUS,       KC_COMMA,       KC_LEFT,        KC_DOWN,        KC_RIGHT,       
                                                    LT(1,KC_SPACE), OSL(2),         LALT(LGUI(LSFT(LCTL(KC_D)))),                                   LALT(LGUI(LSFT(LCTL(KC_T)))),     KC_TAB,         MT(MOD_RSFT, KC_ENTER)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_DELETE,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_F)),LCTL(LSFT(KC_P)),LCTL(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_TRANSPARENT, 
    KC_DELETE,     KC_TRANSPARENT, LCTL(KC_R),     LCTL(KC_S), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     KC_TRANSPARENT, LCTL(KC_V),                                     KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_PGUP,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_PGDOWN,      KC_END,         
                     KC_TRANSPARENT, TO(3), TO(0), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_7,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, ST_MACRO_8,     ST_MACRO_9,     KC_TRANSPARENT, ST_MACRO_10,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT,       KC_TRANSPARENT,           KC_TRANSPARENT,           KC_TRANSPARENT,           KC_TRANSPARENT,           KC_TRANSPARENT,           KC_TRANSPARENT,      
    KC_TRANSPARENT,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TD(DANCE_0),                    KC_TRANSPARENT,KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,    
    KC_TRANSPARENT,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                       KC_NONUS_HASH,  KC_H,           KC_J,           KC_K,           KC_L,           KC_O,           KC_TRANSPARENT,      
    KC_TRANSPARENT,      KC_LBRACKET,    KC_Z,           KC_X,           KC_C,           KC_V,                                                           KC_B,           KC_N,           KC_M,           KC_SLASH,       KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,      KC_TRANSPARENT,        KC_TRANSPARENT, KC_TRANSPARENT,       KC_TRANSPARENT,                        KC_TRANSPARENT,              KC_TRANSPARENT,                     KC_TRANSPARENT,       KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,        KC_TRANSPARENT,       
                                                KC_TRANSPARENT, TO(0), KC_TRANSPARENT,                                  KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][4] = {
    [0] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,245,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {25,244,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {25,244,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {74,255,255}, {25,244,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,245,245}, {25,244,245}, {25,244,245}, {0,245,245}, {74,255,255}, {152,255,255}, {25,244,245}, {152,255,255}, {74,255,255}, {74,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {25,244,245}, {74,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {25,244,245}, {25,244,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {25,244,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {25,244,245}, {25,244,245}, {25,244,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {131,255,255}, {0,0,0}, {152,255,255}, {152,255,255}, {0,0,0}, {131,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {131,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {152,255,255}, {0,0,0}, {152,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {25,244,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {131,255,255}, {0,245,245}, {74,255,255}, {0,245,245}, {0,245,245}, {131,255,255}, {0,245,245}, {74,255,255}, {188,255,255}, {0,245,245}, {131,255,255}, {0,245,245}, {74,255,255}, {188,255,255}, {0,0,0}, {131,255,255}, {0,245,245}, {74,255,255}, {188,255,255}, {0,0,0}, {131,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {152,255,255}, {152,255,255}, {0,245,245}, {152,255,255}, {0,245,245}, {152,255,255}, {0,245,245}, {0,245,245}, {152,255,255}, {25,244,245}, {152,255,255}, {152,255,255}, {0,245,245}, {152,255,255}, {25,244,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {74,255,255}, {25,244,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,245,245}, {25,244,245}, {25,244,245}, {0,245,245}, {74,255,255}, {152,255,255}, {25,244,245}, {152,255,255}, {74,255,255}, {74,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {25,244,245}, {74,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {25,244,245}, {25,244,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {25,244,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {25,244,245}, {25,244,245}, {25,244,245}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255} },


};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return;
  }
  if (keyboard_config.disable_layer_led) { return; }     
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING("git push -f\n");
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING("git push\n");
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING("git diff --name-only --diff-filter=AMR origin/master -- '***.py' | xargs black\n");
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING("git checkout master\ngit pull\ngit checkout -\ngit rebase master\n");
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING("git status\n");
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING("git commit -am ''" SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING("git commit --amend -a --no-edit\n");
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
        SEND_STRING("git pull\n");
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING("git checkout master\n");
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING("git checkout -b theed/");
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING("git rebase -i master\n");
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[2];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_PSCREEN)));
        tap_code16(LCTL(LSFT(KC_PSCREEN)));
        tap_code16(LCTL(LSFT(KC_PSCREEN)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_PSCREEN)));
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_PSCREEN))); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_PSCREEN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_PSCREEN))); register_code16(LCTL(LSFT(KC_PSCREEN)));
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_PSCREEN))); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_PSCREEN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_PSCREEN))); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_D));
        tap_code16(LGUI(KC_D));
        tap_code16(LGUI(KC_D));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_D));
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_D)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(KC_D))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_D)); register_code16(LGUI(KC_D));
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_D)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(KC_D))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_D)); break;
    }
    dance_state[1].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};
