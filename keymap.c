/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"


#if 0
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* 0: plain Qwerty without layer switching
     *         ,---------------. ,---------------. ,---------------.
     *         |F13|F14|F15|F16| |F17|F18|F19|F20| |F21|F22|F23|F24|
     * ,---.   |---------------| |---------------| |---------------| ,-----------. ,---------------. ,-------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau| |VDn|VUp|Mut|Pwr| | Help  |
     * `---'   `---------------' `---------------' `---------------' `-----------' `---------------' `-------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------. ,-------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|JPY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -| |Stp|Agn|
     * |-----------------------------------------------------------| |-----------| |---------------| |-------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +| |Mnu|Und|
     * |-----------------------------------------------------------| `-----------' |---------------| |-------|
     * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  :|  #|Retn|               |  4|  5|  6|KP,| |Sel|Cpy|
     * |-----------------------------------------------------------|     ,---.     |---------------| |-------|
     * |Shft|  <|  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /| RO|Shift |     |Up |     |  1|  2|  3|KP=| |Exe|Pst|
     * |-----------------------------------------------------------| ,-----------. |---------------| |-------|
     * |Ctl|Gui|Alt|MHEN|HNJ| Space  |H/E|HENK|KANA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |  0    |  .|Ent| |Fnd|Cut|
     * `-----------------------------------------------------------' `-----------' `---------------' `-------'
     */
    KEYMAP_ALL(
              F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24,
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,PWR,     HELP,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, JYEN,BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,    STOP,AGIN,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,     BSLS,     DEL, END, PGDN,    P7,  P8,  P9,  PPLS,    MENU,UNDO,
    CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     NUHS,ENT,                         P4,  P5,  P6,  PCMM,    SLCT,COPY,
    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RO,  RSFT,          UP,           P1,  P2,  P3,  PEQL,    EXEC,PSTE,
    LCTL,LGUI,LALT,MHEN,HANJ,     SPC,      HAEN,HENK,KANA,RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT,    FIND,CUT
    ),
};

const action_t fn_actions[] PROGMEM = {};
#endif


/*
 * Keymap samples
 */
#if 0
    /* ANSI layout
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|    Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +|
     * |-----------------------------------------------------------| `-----------' |-----------|   |
     * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  Return|               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |Ctl|Gui|Alt|           Space               |Alt|Gui|App|Ctl| |Lef|Dow|Rig| |      0|  .|Ent|
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    KEYMAP(
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,      PSCR,SLCK,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, END, PGDN,    P7,  P8,  P9,
    LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,          UP,           P1,  P2,  P3,
    LCTL,LGUI,LALT,          SPC,                     RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

    /* ISO layout
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  ^|    Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| Retn| |Del|End|PgD| |  7|  8|  9|  +|
     * |------------------------------------------------------`    | `-----------' |-----------|   |
     * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #|    |               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shft|\  |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|Ent|
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |Ctl|Gui|Alt|           Space       |HNK|KNA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |      0|  .|   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    KEYMAP_ISO(
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,      PSCR,SLCK,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,ENT,      DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,                             P4,  P5,  P6,
    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,          UP,           P1,  P2,  P3,  PENT,
    LCTL,LGUI,LALT,          SPC,                     RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT 
    ),

    /* JIS layout
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  ^|JPY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  @|  [| Retn| |Del|End|PgD| |  7|  8|  9|  +|
     * |------------------------------------------------------`    | `-----------' |-----------|   |
     * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  :|  ]|    |               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shft    |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /| RO|Shift |     |Up |     |  1|  2|  3|Ent|
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |Ctl|Gui|Alt|MHEN|      Space      |HENK|KNA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |      0|  .|   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    KEYMAP_JIS(
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, JPY, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,     ENT,      DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,                                  P4,  P5,  P6,
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RO,  RSFT,          UP,           P1,  P2,  P3,  PENT,
    LCTL,LGUI,LALT,MHEN,     SPC,                HENK,KANA,RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT 
    ),

    /* Colemak http://colemak.com
     * ,-----------------------------------------------------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspa|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  F|  P|  G|  J|  L|  U|  Y|  ;|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |BackSp|  A|  R|  S|  T|  D|  H|  N|  E|  I|  O|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  K|  M|  ,|  ,|  /|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl |Gui |Alt |         Space         |Alt |Gui |Menu|Ctrl|
     * `----------------------------------------------------------'
     */
    KEYMAP_ALL(
              F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24,
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,PWR,     HELP,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, JYEN,BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,    STOP,AGIN,
    TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,LBRC,RBRC,     BSLS,     DEL, END, PGDN,    P7,  P8,  P9,  PPLS,    MENU,UNDO,
    BSPC,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT,     NUHS,ENT,                         P4,  P5,  P6,  PCMM,    SLCT,COPY,
    LSFT,NUBS,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,     RO,  RSFT,          UP,           P1,  P2,  P3,  PEQL,    EXEC,PSTE,
    LCTL,LGUI,LALT,MHEN,HANJ,     SPC,      HAEN,HENK,KANA,RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT,    FIND,CUT
    ),

    /* Dvorak http://en.wikipedia.org/wiki/Dvorak_Simplified_Keyboard
     * ,-----------------------------------------------------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  [|  ]|Backspa|
     * |-----------------------------------------------------------|
     * |Tab  |  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|    \|
     * |-----------------------------------------------------------|
     * |BackSp|  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  ;|  Q|  J|  K|  X|  B|  M|  Wl  V|  Z|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl |Gui |Alt |         Space         |Alt |Gui |Menu|Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ALL(
              F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24,
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,PWR,     HELP,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC,JYEN,BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,    STOP,AGIN,
    TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL,      BSLS,     DEL, END, PGDN,    P7,  P8,  P9,  PPLS,    MENU,UNDO,
    CAPS,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,     NUHS,ENT,                         P4,  P5,  P6,  PCMM,    SLCT,COPY,
    LSFT,NUBS,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,        RO,  RSFT,          UP,           P1,  P2,  P3,  PEQL,    EXEC,PSTE,
    LCTL,LGUI,LALT,MHEN,HANJ,     SPC,      HAEN,HENK,KANA,RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT,    FIND,CUT
    ),

    /* Workman http://viralintrospection.wordpress.com/2010/09/06/a-different-philosophy-in-designing-keyboard-layouts/
     * ,-----------------------------------------------------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspa|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  D|  R|  W|  B|  J|  F|  U|  P|  ;|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |CapsLo|  A|  S|  H|  T|  G|  Y|  N|  E|  O|  I|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  M|  C|  V|  K|  L|  ,|  ,|  /|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl |Gui |Alt |         Space         |Alt |Gui |Menu|Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ALL(
              F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24,
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,PWR,     HELP,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, JYEN,BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,    STOP,AGIN,
    TAB, Q,   D,   R,   W,   B,   J,   F,   U,   P,   SCLN,LBRC,RBRC,     BSLS,     DEL, END, PGDN,    P7,  P8,  P9,  PPLS,    MENU,UNDO,
    CAPS,A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,   QUOT,     NUHS,ENT,                         P4,  P5,  P6,  PCMM,    SLCT,COPY,
    LSFT,NUBS,Z,   X,   M,   C,   V,   K,   L,   COMM,DOT, SLSH,     RO,  RSFT,          UP,           P1,  P2,  P3,  PEQL,    EXEC,PSTE,
    LCTL,LGUI,LALT,MHEN,HANJ,     SPC,      HAEN,HENK,KANA,RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT,    FIND,CUT
    ),
#endif

/*
 * SpaceFN layout
 * http://geekhack.org/index.php?topic=51069.0
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: plain Qwerty
     *         ,---------------. ,---------------. ,---------------.
     *         |F13|F14|F15|F16| |F17|F18|F19|F20| |F21|F22|F23|F24|
     * ,---.   |---------------| |---------------| |---------------| ,-----------. ,---------------. ,-------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau| |VDn|VUp|Mut|Pwr| | Help  |
     * `---'   `---------------' `---------------' `---------------' `-----------' `---------------' `-------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------. ,-------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|JPY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -| |Stp|Agn|
     * |-----------------------------------------------------------| |-----------| |---------------| |-------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +| |Mnu|Und|
     * |-----------------------------------------------------------| `-----------' |---------------| |-------|
     * |LCtrl |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  :|  #|Retn|               |  4|  5|  6|KP,| |Sel|Cpy|
     * |-----------------------------------------------------------|     ,---.     |---------------| |-------|
     * |Shft|  <|  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /| RO|Shift |     |Up |     |  1|  2|  3|KP=| |Exe|Pst|
     * |-----------------------------------------------------------| ,-----------. |---------------| |-------|
     * |Ctl|Gui|Alt|MHEN|HNJ| Space  |H/E|HENK|KANA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |  0    |  .|Ent| |Fnd|Cut|
     * `-----------------------------------------------------------' `-----------' `---------------' `-------'
     */

    /*
       FN0: Hanja, Layer1 key
       FN1: LBRC ([), ctrl-[, to Eng
       FN2: Ctrl-Insert, Copy
       FN3: Shift-Insert, Paste
       FN4: Caplock -> LCTRL
       FN5: Hanja-Tab -> Alt-TAB
       FN6: Ctrl-L, to Eng
    */
    [0] = KEYMAP_ALL(
/* */              F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24,
/*F*/    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,PWR,     HELP,
/*1*/    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, JYEN,BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,    STOP,AGIN,
/*Q*/    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   FN1,RBRC,     BSLS,     DEL, END, PGDN,    P7,  P8,  P9,  PPLS,    MENU,UNDO,
/*A*/    FN4, A,   S,   D,   F,   G,   H,   J,   K, FN6,   SCLN,QUOT,     NUHS,ENT,                         P4,  P5,  P6,  PCMM,    SLCT,COPY,
/*Z*/    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RO,  RSFT,          UP,           P1,  P2,  P3,  PEQL,    EXEC,PSTE,
/*C*/    LCTL,LGUI,LALT,MHEN,FN0,     SPC,       HAEN,HENK,KANA,RALT,RGUI,APP, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT,    FIND,CUT
    ),

    /* 1: SpaceFN
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |Caps |   |   |Esc|   |   |   |Hom|Up |End|Psc|Slk|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |PgU|Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|PgD|`  |~  |   |Men|          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    [1] = KEYMAP_ALL(
/* */              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
/*F*/    TRNS,       F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,          TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,    TRNS,
/*1*/    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,DEL,      TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,    TRNS,TRNS,
/*Q*/    FN5 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME, FN2, END, FN3,TRNS,TRNS,     INS,      TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,    TRNS,TRNS,
/*A*/    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,  UP,RGHT,BSPC,TRNS,     TRNS,TRNS,                        TRNS,TRNS,TRNS,TRNS,    TRNS,TRNS,
/*Z*/    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, ENT,TRNS,TRNS,TRNS,     TRNS,TRNS,          TRNS,         TRNS,TRNS,TRNS,TRNS,    TRNS,TRNS,
/*C*/    TRNS,TRNS,TRNS,TRNS,TRNS,     HENK,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS,    TRNS,TRNS
    ),
};

enum function_id {
	_HANJ = 0      // FN0
	, _LBRC        // FN1
	, _TAB         // FN5
	, _L           // FN6
};

const action_t PROGMEM fn_actions[] = {
    //[0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    //[1] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),    // tilde
    //[0] = ACTION_LAYER_MOMENTARY(1),
    //[2] = ACTION_LAYER_MODS(2, MOD_LCTL),
    //[3] = ACTION_FUNCTION(_ENG),
    [0] = ACTION_FUNCTION_TAP(_HANJ),
    [1] = ACTION_FUNCTION(_LBRC),
    [2] = ACTION_MODS_KEY(MOD_LCTL, KC_INS),
    [3] = ACTION_MODS_KEY(MOD_LSFT, KC_INS),
    [4] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_MHEN),
    [5] = ACTION_FUNCTION(_TAB),
    [6] = ACTION_FUNCTION(_L),
};

/********************** not used ******************************
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case _ENG:
            return ((1 == record->event.pressed) ?
                    MACRO( T(LBRC), I(50), D(LALT), D(LSHIFT), D(0), U(0), U(LSHIFT), U(LALT), END ) :
                    MACRO_NONE );

				if(1 == record->event.pressed)
					return MACRO_NONE;
				return MACRO( I(0), T(H), T(E), T(L), T(L), W(255), T(O), END );
    }
    return MACRO_NONE;
}
***************************************************************/

/***************************************************************
  #define KC_MHEN KC_INT5, scanCode: 0x7B
  MHEN: Japanese 無変換(Non Conversion) or Korean Hanja
	--> to Eng

  #define KC_HENK KC_INT4, scanCode: 0x79
  HENK: Japanese 変換(Conversion) or Korean Hangul/English
	--> to Kor
****************************************************************/

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
	switch(id) {
	case _HANJ:
//xprintf("===> cnt=[%d]\n", record->tap.count);
		if(1 == record->event.pressed) {
			layer_move(1);
		} else { // released.
			layer_move(0);
			if(1 == record->tap.count) {
				//register_code(KC_HENK);   // to KOR
				//unregister_code(KC_HENK);
				register_code(KC_MHEN);   // to ENG
				unregister_code(KC_MHEN);
				send_keyboard_report();
			}
			if((get_mods() & MOD_BIT(KC_LALT))) {
				unregister_code(KC_LALT);
				send_keyboard_report();
			}
			/*
			if(1 == record->tap.count) {
				// Send IME macro (ENG)
				print("===> ENG!!!\n");
				add_weak_mods(MOD_BIT(KC_LALT));
				add_weak_mods(MOD_BIT(KC_LSHIFT));
            send_keyboard_report();
				register_code(KC_0);
            unregister_code(KC_0);
            del_weak_mods(MOD_BIT(KC_LSHIFT));
            del_weak_mods(MOD_BIT(KC_LALT));
            send_keyboard_report();
			}
			*/
		}
		break;
	case _LBRC:
		if(1 == record->event.pressed) {
			register_code(KC_LBRC);
			// conv to ENG.
			if(get_mods() & MOD_BIT(KC_LCTRL)) {
			  register_code(KC_MHEN); // scancode: 0x7B, to ENG
			  unregister_code(KC_MHEN);
			}
		} else { // Release
			unregister_code(KC_LBRC);
		}
		send_keyboard_report();
		break;
	case _TAB:
		if(1 == record->event.pressed) {
			if(!(get_mods() & MOD_BIT(KC_LALT))) {
				register_code(KC_LALT);
				send_keyboard_report();
			}
			register_code(KC_TAB);
		} else {
			unregister_code(KC_TAB);
		}
		send_keyboard_report();
		break;
	case _L:
		if(1 == record->event.pressed) {
			register_code(KC_L);
			// conv to ENG.
			if(get_mods() & MOD_BIT(KC_LCTRL)) {
			  register_code(KC_MHEN); // scancode: 0x7B, to ENG
			  unregister_code(KC_MHEN);
			}
		} else { // Release
			unregister_code(KC_L);
		}
		send_keyboard_report();
		break;
	default:
		break;
	}
}
