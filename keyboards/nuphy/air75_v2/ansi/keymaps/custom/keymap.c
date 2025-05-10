/*
Copyright 2023 @ Nuphy <https://nuphy.com/>

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

#include QMK_KEYBOARD_H

enum unicode_names {
	Agrave, // U+00C0	À
	Aacute, // U+00C1	Á
	Acirc, // U+00C2	Â
	Atilde, // U+00C3	Ã
	Auml, // U+00C4	Ä
	Aring, // U+00C5	Å
	Aelig, // U+00C6	Æ
	Ccedil, // U+00C7	Ç
	Egrave, // U+00C8	È
	Eacute, // U+00C9	É
	Ecirc, // U+00CA	Ê
	Euml, // U+00CB	Ë
	Igrave, // U+00CC	Ì
	Iacute, // U+00CD	Í
	Icirc, // U+00CE	Î
	Iuml, // U+00CF	Ï
	ETH, // U+00D0	Ð
	Ntilde, // U+00D1	Ñ
	Ograve, // U+00D2	Ò
	Oacute, // U+00D3	Ó
	Ocirc, // U+00D4	Ô
	Otilde, // U+00D5	Õ
	Ouml, // U+00D6	Ö
	Oelig, // U+0152	Œ
	Oslash, // U+00D8	Ø
	Ugrave, // U+00D9	Ù
	Uacute, // U+00DA	Ú
	Ucirc, // U+00DB	Û
	Uuml, // U+00DC	Ü
  Yacute, // U+00DD	Ý
	THORN, // U+00DE	Þ
	szlig, // U+00DF	ß
	agrave, // U+00E0	à
	aacute, // U+00E1	á
	acirc, // U+00E2	â
	atilde, // U+00E3	ã
	auml, // U+00E4	ä
	aring, // U+00E5	å
	aelig, // U+00E6	æ
	ccedil, // U+00E7	ç
	egrave, // U+00E8	è
	eacute, // U+00E9	é
	ecirc, // U+00EA	ê
	euml, // U+00EB	ë
	igrave, // U+00EC	ì
	iacute, // U+00ED	í
	icirc, // U+00EE	î
	iuml, // U+00EF	ï
	ntilde, // U+00F1	ñ
	ograve, // U+00F2	ò
	oacute, // U+00F3	ó
	ocirc, // U+00F4	ô
	otilde, // U+00F5	õ
	ouml, // U+00F6	ö
	oelig, // U+0153	œ
	oslash, // U+00F8	ø
	ugrave, // U+00F9	ù
	uacute, // U+00FA	ú
	ucirc, // U+00FB	û
	uuml, // U+00FC	ü
	yacute, // U+00FD	ý
	thorn, // U+00FE	þ
	yuml, // U+00FF	ÿ
};


const uint32_t PROGMEM unicode_map[] = {
	[Agrave] = 0x00C0, // U+00C0	À
	[Aacute] = 0x00C1, // U+00C1	Á
	[Acirc] = 0x00C2, // U+00C2	Â
	[Atilde] = 0x00C3, // U+00C3	Ã
	[Auml] = 0x00C4, // U+00C4	Ä
	[Aring] = 0x00C5, // U+00C5	Å
	[Aelig] = 0x00C6, // U+00C6	Æ
	[Ccedil] = 0x00C7, // U+00C7	Ç
	[Egrave] = 0x00C8, // U+00C8	È
	[Eacute] = 0x00C9, // U+00C9	É
	[Ecirc] = 0x00CA, // U+00CA	Ê
	[Euml] = 0x00CB, // U+00CB	Ë
	[Igrave] = 0x00CC, // U+00CC	Ì
	[Iacute] = 0x00CD, // U+00CD	Í
	[Icirc] = 0x00CE, // U+00CE	Î
	[Iuml] = 0x00CF, // U+00CF	Ï
	[ETH] = 0x00D0, // U+00D0	Ð
	[Ntilde] = 0x00D1, // U+00D1	Ñ
	[Ograve] = 0x00D2, // U+00D2	Ò
	[Oacute] = 0x00D3, // U+00D3	Ó
	[Ocirc] = 0x00D4, // U+00D4	Ô
	[Otilde] = 0x00D5, // U+00D5	Õ
	[Ouml] = 0x00D6, // U+00D6	Ö
	[Oelig] = 0x0152, // U+00D6	Œ
	[Oslash] = 0x00D8, // U+00D8	Ø
	[Ugrave] = 0x00D9, // U+00D9	Ù
	[Uacute] = 0x00DA, // U+00DA	Ú
	[Ucirc] = 0x00DB, // U+00DB	Û
	[Uuml] = 0x00DC, // U+00DC	Ü
  [Yacute] = 0x00DD, // U+00DD	Ý
	[THORN] = 0x00DE, // U+00DE	Þ
	[szlig] = 0x00DF, // U+00DF	ß
	[agrave] = 0x00E0, // U+00E0	à
	[aacute] = 0x00E1, // U+00E1	á
	[acirc] = 0x00E2, // U+00E2	â
	[atilde] = 0x00E3, // U+00E3	ã
	[auml] = 0x00E4, // U+00E4	ä
	[aring] = 0x00E5, // U+00E5	å
	[aelig] = 0x00E6, // U+00E6	æ
	[ccedil] = 0x00E7, // U+00E7	ç
	[egrave] = 0x00E8, // U+00E8	è
	[eacute] = 0x00E9, // U+00E9	é
	[ecirc] = 0x00EA, // U+00EA	ê
	[euml] = 0x00EB, // U+00EB	ë
	[igrave] = 0x00EC, // U+00EC	ì
	[iacute] = 0x00ED, // U+00ED	í
	[icirc] = 0x00EE, // U+00EE	î
	[iuml] = 0x00EF, // U+00EF	ï
	[ntilde] = 0x00F1, // U+00F1	ñ
	[ograve] = 0x00F2, // U+00F2	ò
	[oacute] = 0x00F3, // U+00F3	ó
	[ocirc] = 0x00F4, // U+00F4	ô
	[otilde] = 0x00F5, // U+00F5	õ
	[ouml] = 0x00F6, // U+00F6	ö
	[oelig] = 0x0153, // U+0153	œ
	[oslash] = 0x00F8, // U+00F8	ø
	[ugrave] = 0x00F9, // U+00F9	ù
	[uacute] = 0x00FA, // U+00FA	ú
	[ucirc] = 0x00FB, // U+00FB	û
	[uuml] = 0x00FC, // U+00FC	ü
	[yacute] = 0x00FD, // U+00FD	ý
	[thorn] = 0x00FE, // U+00FE	þ
	[yuml] = 0x00FF, // U+00FF	ÿ
};

enum {
	M_CREDS = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// layer Mac
[0] = LAYOUT_ansi_84(
    KC_ESC,     KC_BRID,   KC_BRIU,     KC_MCTL,   MAC_SEARCH, MAC_VOICE,   MAC_DND,   KC_MPRV,    KC_MPLY,     KC_MNXT,   KC_MUTE,    KC_VOLD,    KC_VOLU,     MAC_PRTA,   KC_INS,     KC_DEL,
    KC_GRV,     KC_1,      KC_2,        KC_3,      KC_4,       KC_5,        KC_6,      KC_7,       KC_8,        KC_9,      KC_0,       KC_MINS,    KC_EQL,                  KC_BSPC,    KC_PGUP,
    KC_TAB,     KC_Q,      KC_W,        KC_E,      KC_R,       KC_T,        KC_Y,      KC_U,       KC_I,        KC_O,      KC_P,       KC_LBRC,    KC_RBRC,                 KC_BSLS,    KC_PGDN,
    KC_CAPS,    KC_A,      KC_S,        KC_D,      KC_F,       KC_G,        KC_H,      KC_J,       KC_K,        KC_L,      KC_SCLN,    KC_QUOT,                             KC_ENT,     KC_HOME,
    KC_LSFT,               KC_Z,        KC_X,      KC_C,       KC_V,        KC_B,      KC_N,       KC_M,        KC_COMM,   KC_DOT,     KC_SLSH,                 KC_RSFT,    KC_UP,      KC_END,
    KC_LCTL,    KC_LALT,   KC_LGUI,                                         KC_SPC,                             KC_RGUI,   MO(1),      KC_RCTL,                 KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer Mac Fn
[1] = LAYOUT_ansi_84(
    _______,    KC_F1,      KC_F2,      KC_F3,     KC_F4,      KC_F5,       KC_F6,     KC_F7,      KC_F8,       KC_F9,     KC_F10,     KC_F11,     KC_F12,      MAC_PRT,    _______,    _______,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,  LNK_RF,     _______,     _______,   _______,    _______,     _______,   _______,    _______,    _______,                 _______,    UC_NEXT,
    _______,    _______,    _______,    UM(eacute),UM(egrave), UM(ecirc),   UM(euml),  UM(ugrave), UM(icirc),   UM(ocirc), _______,    DEV_RESET,  SLEEP_MODE,              BAT_SHOW,   UC_PREV,
    _______,    UM(agrave), UM(acirc),  UM(aelig), _______,    _______,     _______,   UM(ucirc),  UM(iuml),    UM(oelig), _______,    _______,                             _______,    _______,
    MO(5),                  _______,    _______,   UM(ccedil), RGB_TEST,    BAT_NUM,   UM(uuml),   MO(4),       RGB_SPD,   RGB_SPI,    _______,                 _______,    RGB_VAI,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(1),      _______,                 RGB_MOD,    RGB_VAD,    RGB_HUI),

// layer win
[2] = LAYOUT_ansi_84(
    KC_ESC,     KC_F1,     KC_F2,       KC_F3,     KC_F4,      KC_F5,       KC_F6,     KC_F7,      KC_F8,       KC_F9,     KC_F10,     KC_F11,     KC_F12,      KC_PSCR,    KC_INS,     KC_DEL,
    KC_GRV,     KC_1,      KC_2,        KC_3,      KC_4,       KC_5,        KC_6,      KC_7,       KC_8,        KC_9,      KC_0,       KC_MINS,    KC_EQL,                  KC_BSPC,    KC_PGUP,
    KC_TAB,     KC_Q,      KC_W,        KC_E,      KC_R,       KC_T,        KC_Y,      KC_U,       KC_I,        KC_O,      KC_P,       KC_LBRC,    KC_RBRC,                 KC_BSLS,    KC_PGDN,
    KC_CAPS,    KC_A,      KC_S,        KC_D,      KC_F,       KC_G,        KC_H,      KC_J,       KC_K,        KC_L,      KC_SCLN,    KC_QUOT,                             KC_ENT,     KC_HOME,
    KC_LSFT,               KC_Z,        KC_X,      KC_C,       KC_V,        KC_B,      KC_N,       KC_M,        KC_COMM,   KC_DOT,     KC_SLSH,                 KC_RSFT,    KC_UP,      KC_END,
    KC_LCTL,    KC_LGUI,   KC_LALT,                                         KC_SPC,                             KC_RALT,   MO(3),      KC_RCTL,                 KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer win Fn
[3] = LAYOUT_ansi_84(
    _______,    KC_BRID,    KC_BRIU,    _______,   _______,    _______,     _______,   KC_MPRV,    KC_MPLY,     KC_MNXT,   KC_MUTE,    KC_VOLD,    KC_VOLU,     _______,    _______,    _______,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,  LNK_RF,     _______,     _______,   _______,    _______,     _______,   _______,    _______,    _______,                 _______,    UC_NEXT,
    _______,    _______,    _______,    UM(eacute),UM(egrave), UM(ecirc),   UM(euml),  UM(ugrave), UM(icirc),   UM(ocirc), _______,    DEV_RESET,  SLEEP_MODE,              BAT_SHOW,   UC_PREV,
    _______,    UM(agrave), UM(acirc),  UM(aelig), UM(auml),   _______,     _______,   UM(ucirc),  UM(iuml),    UM(oelig), _______,    _______,                             _______,    _______,
    MO(6),                  _______,    _______,   UM(ccedil), RGB_TEST,    BAT_NUM,   UM(uuml),   MO(4),       RGB_SPD,   RGB_SPI,    _______,                 _______,    RGB_VAI,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(3),      _______,                 RGB_MOD,    RGB_VAD,    RGB_HUI),

// layer 4
[4] = LAYOUT_ansi_84(
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______, 
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,                _______,    _______,   _______,    _______,     _______,   _______,    _______,     SIDE_SPD,  SIDE_SPI,   _______,                 _______,    SIDE_VAI,   _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(4),      _______,                 SIDE_MOD,   SIDE_VAD,   SIDE_HUI),
		
// layer mac MAJ UNICODE Fn + Shift		
[5] = LAYOUT_ansi_84(
    _______,    KC_F1,      KC_F2,      KC_F3,     KC_F4,      KC_F5,       KC_F6,     KC_F7,      KC_F8,       KC_F9,     KC_F10,     KC_F11,     KC_F12,      MAC_PRT,    _______,    _______,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,  LNK_RF,     _______,     _______,   _______,    _______,     _______,   _______,    _______,    _______,                 _______,    UC_NEXT,
    _______,    _______,    _______,    UM(Eacute),UM(Egrave), UM(Ecirc),   UM(Euml),  UM(Ugrave), UM(Icirc),   UM(Ocirc), _______,    DEV_RESET,  SLEEP_MODE,              BAT_SHOW,   UC_PREV,
    _______,    UM(Agrave), UM(Acirc),  UM(Aelig), _______,    _______,     _______,   UM(Ucirc),  UM(Iuml),    UM(Oelig), _______,    _______,                             _______,    _______,
    MO(5),                  _______,    _______,   UM(Ccedil), RGB_TEST,    BAT_NUM,   UM(Uuml),   MO(4),       RGB_SPD,   RGB_SPI,    _______,                 _______,    RGB_VAI,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(3),      _______,                 RGB_MOD,    RGB_VAD,    RGB_HUI),
		
// layer win MAJ UNICODE Fn + Shift
[6] = LAYOUT_ansi_84(
    _______,    KC_BRID,    KC_BRIU,    _______,   _______,    _______,     _______,   KC_MPRV,    KC_MPLY,     KC_MNXT,   KC_MUTE,    KC_VOLD,    KC_VOLU,     _______,    _______,    _______,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,  LNK_RF,     _______,     _______,   _______,    _______,     _______,   _______,    _______,    _______,                 _______,    UC_NEXT,
    _______,    _______,    _______,    UM(Eacute),UM(Egrave), UM(Ecirc),   UM(Euml),  UM(Ugrave), UM(Icirc),   UM(Ocirc), _______,    DEV_RESET,  SLEEP_MODE,              BAT_SHOW,   UC_PREV,
    _______,    UM(Agrave), UM(Acirc),  UM(Aelig), _______,    _______,     _______,   UM(Ucirc),  UM(Iuml),    UM(Oelig), _______,    _______,    _______,                             _______,
    MO(6),                  _______,    _______,   UM(Ccedil), RGB_TEST,    BAT_NUM,   UM(Uuml),   MO(4),       RGB_SPD,   RGB_SPI,    _______,                 _______,    RGB_VAI,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(3),      _______,                 RGB_MOD,    RGB_VAD,    RGB_HUI)
};

// Add M_CREDS instead of _______ where you want to send this macro, not recommanded to use something easily pressed by mistake
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case M_CREDS:
            if (record->event.pressed) {
                send_string_with_delay("string_to_send", 10);
            }
            return false;
    }

    return true;
}