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
	AElig, // U+00C6	Æ
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
	[AElig] = 0x00C6, // U+00C6	Æ
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
	[oslash] = 0x00F8, // U+00F8	ø
	[ugrave] = 0x00F9, // U+00F9	ù
	[uacute] = 0x00FA, // U+00FA	ú
	[ucirc] = 0x00FB, // U+00FB	û
	[uuml] = 0x00FC, // U+00FC	ü
	[yacute] = 0x00FD, // U+00FD	ý
	[thorn] = 0x00FE, // U+00FE	þ
	[yuml] = 0x00FF, // U+00FF	ÿ
};

const uint16_t PROGMEM Agrave_combo[] = {KC_LSFT, KC_A, KC_1, COMBO_END};
const uint16_t PROGMEM Aacute_combo[] = {KC_LSFT, KC_A, KC_2, COMBO_END};
const uint16_t PROGMEM Acirc_combo[] = {KC_LSFT, KC_A, KC_3, COMBO_END};
const uint16_t PROGMEM Atilde_combo[] = {KC_LSFT, KC_A, KC_4, COMBO_END};
const uint16_t PROGMEM Auml_combo[] = {KC_LSFT, KC_A, KC_5, COMBO_END};
const uint16_t PROGMEM Aring_combo[] = {KC_LSFT, KC_A, KC_6, COMBO_END};
const uint16_t PROGMEM AElig_combo[] = {KC_LSFT, KC_A, KC_7, COMBO_END};

const uint16_t PROGMEM Ccedil_combo[] = {KC_LSFT, KC_C, KC_1, COMBO_END};

const uint16_t PROGMEM Egrave_combo[] = {KC_LSFT, KC_E, KC_1, COMBO_END};
const uint16_t PROGMEM Eacute_combo[] = {KC_LSFT, KC_E, KC_2, COMBO_END};
const uint16_t PROGMEM Ecirc_combo[] = {KC_LSFT, KC_E, KC_3, COMBO_END};
const uint16_t PROGMEM Euml_combo[] = {KC_LSFT, KC_E, KC_4, COMBO_END};

const uint16_t PROGMEM Igrave_combo[] = {KC_LSFT, KC_I, KC_1, COMBO_END};
const uint16_t PROGMEM Iacute_combo[] = {KC_LSFT, KC_I, KC_2, COMBO_END};
const uint16_t PROGMEM Icirc_combo[] = {KC_LSFT, KC_I, KC_3, COMBO_END};
const uint16_t PROGMEM Iuml_combo[] = {KC_LSFT, KC_I, KC_4, COMBO_END};

const uint16_t PROGMEM ETH_combo[] = {KC_LSFT, KC_D, KC_1, COMBO_END};

const uint16_t PROGMEM Ntilde_combo[] = {KC_LSFT, KC_N, KC_1, COMBO_END};

const uint16_t PROGMEM Ograve_combo[] = {KC_LSFT, KC_O, KC_1, COMBO_END};
const uint16_t PROGMEM Oacute_combo[] = {KC_LSFT, KC_O, KC_2, COMBO_END};
const uint16_t PROGMEM Ocirc_combo[] = {KC_LSFT, KC_O, KC_3, COMBO_END};
const uint16_t PROGMEM Otilde_combo[] = {KC_LSFT, KC_O, KC_4, COMBO_END};
const uint16_t PROGMEM Ouml_combo[] = {KC_LSFT, KC_O, KC_5, COMBO_END};
const uint16_t PROGMEM Oslash_combo[] = {KC_LSFT, KC_O, KC_6, COMBO_END};

const uint16_t PROGMEM Ugrave_combo[] = {KC_LSFT, KC_U, KC_1, COMBO_END};
const uint16_t PROGMEM Uacute_combo[] = {KC_LSFT, KC_U, KC_2, COMBO_END};
const uint16_t PROGMEM Ucirc_combo[] = {KC_LSFT, KC_U, KC_3, COMBO_END};
const uint16_t PROGMEM Uuml_combo[] = {KC_LSFT, KC_U, KC_4, COMBO_END};

const uint16_t PROGMEM Yacute_combo[] = {KC_LSFT, KC_Y, KC_1, COMBO_END};
	
const uint16_t PROGMEM THORN_combo[] = {KC_LSFT, KC_P, KC_1, COMBO_END};

const uint16_t PROGMEM Agrave_combo_r[] = {KC_RSFT, KC_A, KC_1, COMBO_END};
const uint16_t PROGMEM Aacute_combo_r[] = {KC_RSFT, KC_A, KC_2, COMBO_END};
const uint16_t PROGMEM Acirc_combo_r[] = {KC_RSFT, KC_A, KC_3, COMBO_END};
const uint16_t PROGMEM Atilde_combo_r[] = {KC_RSFT, KC_A, KC_4, COMBO_END};
const uint16_t PROGMEM Auml_combo_r[] = {KC_RSFT, KC_A, KC_5, COMBO_END};
const uint16_t PROGMEM Aring_combo_r[] = {KC_RSFT, KC_A, KC_6, COMBO_END};
const uint16_t PROGMEM AElig_combo_r[] = {KC_RSFT, KC_A, KC_7, COMBO_END};

const uint16_t PROGMEM Ccedil_combo_r[] = {KC_RSFT, KC_C, KC_1, COMBO_END};

const uint16_t PROGMEM Egrave_combo_r[] = {KC_RSFT, KC_E, KC_1, COMBO_END};
const uint16_t PROGMEM Eacute_combo_r[] = {KC_RSFT, KC_E, KC_2, COMBO_END};
const uint16_t PROGMEM Ecirc_combo_r[] = {KC_RSFT, KC_E, KC_3, COMBO_END};
const uint16_t PROGMEM Euml_combo_r[] = {KC_RSFT, KC_E, KC_4, COMBO_END};

const uint16_t PROGMEM Igrave_combo_r[] = {KC_RSFT, KC_I, KC_1, COMBO_END};
const uint16_t PROGMEM Iacute_combo_r[] = {KC_RSFT, KC_I, KC_2, COMBO_END};
const uint16_t PROGMEM Icirc_combo_r[] = {KC_RSFT, KC_I, KC_3, COMBO_END};
const uint16_t PROGMEM Iuml_combo_r[] = {KC_RSFT, KC_I, KC_4, COMBO_END};

const uint16_t PROGMEM ETH_combo_r[] = {KC_RSFT, KC_D, KC_1, COMBO_END};

const uint16_t PROGMEM Ntilde_combo_r[] = {KC_RSFT, KC_N, KC_1, COMBO_END};

const uint16_t PROGMEM Ograve_combo_r[] = {KC_RSFT, KC_O, KC_1, COMBO_END};
const uint16_t PROGMEM Oacute_combo_r[] = {KC_RSFT, KC_O, KC_2, COMBO_END};
const uint16_t PROGMEM Ocirc_combo_r[] = {KC_RSFT, KC_O, KC_3, COMBO_END};
const uint16_t PROGMEM Otilde_combo_r[] = {KC_RSFT, KC_O, KC_4, COMBO_END};
const uint16_t PROGMEM Ouml_combo_r[] = {KC_RSFT, KC_O, KC_5, COMBO_END};
const uint16_t PROGMEM Oslash_combo_r[] = {KC_RSFT, KC_O, KC_6, COMBO_END};

const uint16_t PROGMEM Ugrave_combo_r[] = {KC_RSFT, KC_U, KC_1, COMBO_END};
const uint16_t PROGMEM Uacute_combo_r[] = {KC_RSFT, KC_U, KC_2, COMBO_END};
const uint16_t PROGMEM Ucirc_combo_r[] = {KC_RSFT, KC_U, KC_3, COMBO_END};
const uint16_t PROGMEM Uuml_combo_r[] = {KC_RSFT, KC_U, KC_4, COMBO_END};

const uint16_t PROGMEM Yacute_combo_r[] = {KC_RSFT, KC_Y, KC_1, COMBO_END};
	
const uint16_t PROGMEM THORN_combo_r[] = {KC_RSFT, KC_P, KC_1, COMBO_END};

const uint16_t PROGMEM szlig_combo[] = {KC_S, KC_1, COMBO_END};

const uint16_t PROGMEM agrave_combo[] = {KC_A, KC_1, COMBO_END};
const uint16_t PROGMEM aacute_combo[] = {KC_A, KC_2, COMBO_END};
const uint16_t PROGMEM acirc_combo[] = {KC_A, KC_3, COMBO_END};
const uint16_t PROGMEM atilde_combo[] = {KC_A, KC_4, COMBO_END};
const uint16_t PROGMEM auml_combo[] = {KC_A, KC_5, COMBO_END};
const uint16_t PROGMEM aring_combo[] = {KC_A, KC_6, COMBO_END};
const uint16_t PROGMEM aelig_combo[] = {KC_A, KC_7, COMBO_END};

const uint16_t PROGMEM ccedil_combo[] = {KC_C, KC_1, COMBO_END};

const uint16_t PROGMEM egrave_combo[] = {KC_E, KC_1, COMBO_END};
const uint16_t PROGMEM eacute_combo[] = {KC_E, KC_2, COMBO_END};
const uint16_t PROGMEM ecirc_combo[] = {KC_E, KC_3, COMBO_END};
const uint16_t PROGMEM euml_combo[] = {KC_E, KC_4, COMBO_END};

const uint16_t PROGMEM igrave_combo[] = {KC_I, KC_1, COMBO_END};
const uint16_t PROGMEM iacute_combo[] = {KC_I, KC_2, COMBO_END};
const uint16_t PROGMEM icirc_combo[] = {KC_I, KC_3, COMBO_END};
const uint16_t PROGMEM iuml_combo[] = {KC_I, KC_4, COMBO_END};	
	
const uint16_t PROGMEM ntilde_combo[] = {KC_N, KC_1, COMBO_END};
	
const uint16_t PROGMEM ograve_combo[] = {KC_O, KC_1, COMBO_END};
const uint16_t PROGMEM oacute_combo[] = {KC_O, KC_2, COMBO_END};
const uint16_t PROGMEM ocirc_combo[] = {KC_O, KC_3, COMBO_END};
const uint16_t PROGMEM otilde_combo[] = {KC_O, KC_4, COMBO_END};
const uint16_t PROGMEM ouml_combo[] = {KC_O, KC_5, COMBO_END};
const uint16_t PROGMEM oslash_combo[] = {KC_O, KC_6, COMBO_END};

const uint16_t PROGMEM ugrave_combo[] = {KC_U, KC_1, COMBO_END};
const uint16_t PROGMEM uacute_combo[] = {KC_U, KC_2, COMBO_END};
const uint16_t PROGMEM ucirc_combo[] = {KC_U, KC_3, COMBO_END};
const uint16_t PROGMEM uuml_combo[] = {KC_U, KC_4, COMBO_END};

const uint16_t PROGMEM yacute_combo[] = {KC_Y, KC_1, COMBO_END};

const uint16_t PROGMEM yuml_combo[] = {KC_Y, KC_1, COMBO_END};

const uint16_t PROGMEM thorn_combo[] = {KC_P, KC_1, COMBO_END};

combo_t key_combos[] = {
    COMBO(Agrave_combo, UM(Agrave)),
    COMBO(Aacute_combo, UM(Aacute)),
    COMBO(Acirc_combo, UM(Acirc)),
    COMBO(Atilde_combo, UM(Atilde)),
    COMBO(Auml_combo, UM(Auml)),
    COMBO(Aring_combo, UM(Aring)),
    COMBO(AElig_combo, UM(AElig)),

    COMBO(Ccedil_combo, UM(Ccedil)),

    COMBO(Egrave_combo, UM(Egrave)),
    COMBO(Eacute_combo, UM(Eacute)),
    COMBO(Ecirc_combo, UM(Ecirc)),
    COMBO(Euml_combo, UM(Euml)),

    COMBO(Igrave_combo, UM(Igrave)),
    COMBO(Iacute_combo, UM(Iacute)),
    COMBO(Icirc_combo, UM(Icirc)),
    COMBO(Iuml_combo, UM(Iuml)),

    COMBO(ETH_combo, UM(ETH)),

    COMBO(Ntilde_combo, UM(Ntilde)),

    COMBO(Ograve_combo, UM(Ograve)),
    COMBO(Oacute_combo, UM(Oacute)),
    COMBO(Ocirc_combo, UM(Ocirc)),
    COMBO(Otilde_combo, UM(Otilde)),
    COMBO(Ouml_combo, UM(Ouml)),
    COMBO(Oslash_combo, UM(Oslash)),

    COMBO(Ugrave_combo, UM(Ugrave)),
    COMBO(Uacute_combo, UM(Uacute)),
    COMBO(Ucirc_combo, UM(Ucirc)),
    COMBO(Uuml_combo, UM(Uuml)),

    COMBO(Yacute_combo, UM(Yacute)),
	
    COMBO(THORN_combo_r, UM(THORN)),
		
		COMBO(Agrave_combo_r, UM(Agrave)),
    COMBO(Aacute_combo_r, UM(Aacute)),
    COMBO(Acirc_combo_r, UM(Acirc)),
    COMBO(Atilde_combo_r, UM(Atilde)),
    COMBO(Auml_combo_r, UM(Auml)),
    COMBO(Aring_combo_r, UM(Aring)),
    COMBO(AElig_combo_r, UM(AElig)),

    COMBO(Ccedil_combo_r, UM(Ccedil)),

    COMBO(Egrave_combo_r, UM(Egrave)),
    COMBO(Eacute_combo_r, UM(Eacute)),
    COMBO(Ecirc_combo_r, UM(Ecirc)),
    COMBO(Euml_combo_r, UM(Euml)),

    COMBO(Igrave_combo_r, UM(Igrave)),
    COMBO(Iacute_combo_r, UM(Iacute)),
    COMBO(Icirc_combo_r, UM(Icirc)),
    COMBO(Iuml_combo_r, UM(Iuml)),

    COMBO(ETH_combo_r, UM(ETH)),

    COMBO(Ntilde_combo_r, UM(Ntilde)),

    COMBO(Ograve_combo_r, UM(Ograve)),
    COMBO(Oacute_combo_r, UM(Oacute)),
    COMBO(Ocirc_combo_r, UM(Ocirc)),
    COMBO(Otilde_combo_r, UM(Otilde)),
    COMBO(Ouml_combo_r, UM(Ouml)),
    COMBO(Oslash_combo_r, UM(Oslash)),

    COMBO(Ugrave_combo_r, UM(Ugrave)),
    COMBO(Uacute_combo_r, UM(Uacute)),
    COMBO(Ucirc_combo_r, UM(Ucirc)),
    COMBO(Uuml_combo_r, UM(Uuml)),

    COMBO(Yacute_combo_r, UM(Yacute)),
	
    COMBO(THORN_combo_r, UM(THORN)),

    COMBO(szlig_combo, UM(szlig)),

    COMBO(agrave_combo, UM(agrave)),
    COMBO(aacute_combo, UM(aacute)),
    COMBO(acirc_combo, UM(acirc)),
    COMBO(atilde_combo, UM(atilde)),
    COMBO(auml_combo, UM(auml)),
    COMBO(aring_combo, UM(aring)),
    COMBO(aelig_combo, UM(aelig)),

    COMBO(ccedil_combo, UM(ccedil)),

    COMBO(egrave_combo, UM(egrave)),
    COMBO(eacute_combo, UM(eacute)),
    COMBO(ecirc_combo, UM(ecirc)),
    COMBO(euml_combo, UM(euml)),

    COMBO(igrave_combo, UM(igrave)),
    COMBO(iacute_combo, UM(iacute)),
    COMBO(icirc_combo, UM(icirc)),
    COMBO(iuml_combo, UM(iuml)),
	
    COMBO(ntilde_combo, UM(ntilde)),
	
    COMBO(ograve_combo, UM(ograve)),
    COMBO(oacute_combo, UM(oacute)),
    COMBO(ocirc_combo, UM(ocirc)),
    COMBO(otilde_combo, UM(otilde)),
    COMBO(ouml_combo, UM(ouml)),
    COMBO(oslash_combo, UM(oslash)),

    COMBO(ugrave_combo, UM(ugrave)),
    COMBO(uacute_combo, UM(uacute)),
    COMBO(ucirc_combo, UM(ucirc)),
    COMBO(uuml_combo, UM(uuml)),

    COMBO(yacute_combo, UM(yacute)),

    COMBO(thorn_combo, UM(thorn)),

    COMBO(yuml_combo, UM(yuml))
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// layer Mac
[0] = LAYOUT_75_ansi(
    KC_ESC,     KC_BRID,   KC_BRIU,     KC_MCTL,   MAC_SEARCH, MAC_VOICE,   MAC_DND,   KC_MPRV,    KC_MPLY,     KC_MNXT,   KC_MUTE,    KC_VOLD,    KC_VOLU,     MAC_PRTA,   KC_INS,     KC_DEL,
    KC_GRV,     KC_1,      KC_2,        KC_3,      KC_4,       KC_5,        KC_6,      KC_7,       KC_8,        KC_9,      KC_0,       KC_MINS,    KC_EQL,                  KC_BSPC,    KC_PGUP,
    KC_TAB,     KC_Q,      KC_W,        KC_E,      KC_R,       KC_T,        KC_Y,      KC_U,       KC_I,        KC_O,      KC_P,       KC_LBRC,    KC_RBRC,                 KC_BSLS,    KC_PGDN,
    KC_CAPS,    KC_A,      KC_S,        KC_D,      KC_F,       KC_G,        KC_H,      KC_J,       KC_K,        KC_L,      KC_SCLN,    KC_QUOT,                             KC_ENT,     KC_HOME,
    KC_LSFT,               KC_Z,        KC_X,      KC_C,       KC_V,        KC_B,      KC_N,       KC_M,        KC_COMM,   KC_DOT,     KC_SLSH,                 KC_RSFT,    KC_UP,      KC_END,
    KC_LCTL,    KC_LALT,   KC_LGUI,                                         KC_SPC,                             KC_RGUI,   MO(1),      KC_RCTL,                 KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer Mac Fn
[1] = LAYOUT_75_ansi(
    _______,    KC_F1,      KC_F2,      KC_F3,     KC_F4,      KC_F5,       KC_F6,     KC_F7,      KC_F8,       KC_F9,     KC_F10,     KC_F11,     KC_F12,      SYS_PRT,    _______,    _______,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,  LNK_RF,     _______,     _______,   _______,    _______,     _______,   _______,    _______,    _______,                 _______,    UC_NEXT,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    DEV_RESET,  SLEEP_MODE,              BAT_SHOW,   UC_PREV,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,                _______,    _______,   RGB_TEST,   _______,     BAT_NUM,   _______,    MO(4),       RGB_SPD,   RGB_SPI,    _______,                 _______,    RGB_VAI,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(1),      _______,                 RGB_MOD,    RGB_VAD,    RGB_HUI),

// layer win
[2] = LAYOUT_75_ansi(
    KC_ESC,     KC_F1,     KC_F2,       KC_F3,     KC_F4,      KC_F5,       KC_F6,     KC_F7,      KC_F8,       KC_F9,     KC_F10,     KC_F11,     KC_F12,      KC_PSCR,    KC_INS,     KC_DEL,
    KC_GRV,     KC_1,      KC_2,        KC_3,      KC_4,       KC_5,        KC_6,      KC_7,       KC_8,        KC_9,      KC_0,       KC_MINS,    KC_EQL,                  KC_BSPC,    KC_PGUP,
    KC_TAB,     KC_Q,      KC_W,        KC_E,      KC_R,       KC_T,        KC_Y,      KC_U,       KC_I,        KC_O,      KC_P,       KC_LBRC,    KC_RBRC,                 KC_BSLS,    KC_PGDN,
    KC_CAPS,    KC_A,      KC_S,        KC_D,      KC_F,       KC_G,        KC_H,      KC_J,       KC_K,        KC_L,      KC_SCLN,    KC_QUOT,                             KC_ENT,     KC_HOME,
    KC_LSFT,               KC_Z,        KC_X,      KC_C,       KC_V,        KC_B,      KC_N,       KC_M,        KC_COMM,   KC_DOT,     KC_SLSH,                 KC_RSFT,    KC_UP,      KC_END,
    KC_LCTL,    KC_LGUI,   KC_LALT,                                         KC_SPC,                             KC_RALT,   MO(3),      KC_RCTL,                 KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer win Fn
[3] = LAYOUT_75_ansi(
    _______,    KC_BRID,    KC_BRIU,    _______,   _______,    _______,     _______,   KC_MPRV,    KC_MPLY,     KC_MNXT,   KC_MUTE,    KC_VOLD,    KC_VOLU,     _______,    _______,    _______,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,  LNK_RF,     _______,     _______,   _______,    _______,     _______,   _______,    _______,    _______,                 _______,    UC_NEXT,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    DEV_RESET,  SLEEP_MODE,              BAT_SHOW,   UC_PREV,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,                _______,    _______,   RGB_TEST,   _______,     BAT_NUM,   _______,    MO(4),       RGB_SPD,   RGB_SPI,    _______,                 _______,    RGB_VAI,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(3),      _______,                 RGB_MOD,    RGB_VAD,    RGB_HUI),

// layer 4
[4] = LAYOUT_75_ansi(
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______, 
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,                _______,    _______,   _______,    _______,     _______,   _______,    _______,     SIDE_SPD,  SIDE_SPI,   _______,                 _______,    SIDE_VAI,   _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(4),      _______,                 SIDE_MOD,   SIDE_VAD,   SIDE_HUI)
};
