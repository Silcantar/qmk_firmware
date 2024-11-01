enum custom_keycodes {
// Function
	CK_SELWORD = SAFE_RANGE,
	CK_CUT,
	CK_COPY,
	CK_PASTE,
	CK_PASTEP,

// Layer Cycle Keys
	CK_LYRCLR,
	CK_LAYERDOWN,
	CK_LAYERUP,

// Special Characters
// Whitespace
	CK_NBSP,
	CK_LF,
	CK_SPCTAB,

// Colemak
// Base / Shift
	CK_ACUTE,
	CK_INTBANG,
	CK_BULLET,
	CK_INV_EXCLAIM,
	CK_DDAGGER,
	CK_LSQUOTE,
	CK_RSQUOTE,
	CK_LDQUOTE,
	CK_RDQUOTE,
	CK_DAGGER,
	CK_INV_QUES,
	CK_NDASH,
	CK_MDASH,
	CK_MICRO,
	CK_EIGHTHNOTE,
// AltGr
	CK_LSAQUOTE,
	CK_RSAQUOTE,
	CK_C_CIRC,
	CK_C_CARON,
	CK_C_RING,
	CK_C_RINGB,
	CK_C_GRAVE,
	CK_C_GRAVED,
	CK_DQUOTE_LO,
	CK_C_BREVE,
	CK_C_BREVEI,
	CK_C_TILDE,
	CK_C_HORN,
	CK_C_BAR_O,
	CK_C_BAR_B,
	CK_LDAQUOTE,
	CK_RDAQUOTE,
	CK_O_SLASH,
	CK_C_O_SLASH,
	CK_STRUT,
	CK_C_STRUT,
	CK_AE,
	CK_C_AE,
	CK_OE,
	CK_C_OE,
	CK_E_ROUND,
	CK_C_E_ROUND,
	CK_DEZH,
	CK_L_BAR,
	CK_C_L_BAR,
	CK_U_DIAER,
	CK_C_U_DIAER,
	CK_SCHWA,
	CK_C_SCHWA,
	CK_EZH,
	CK_C_EZH,
	CK_A_DIAER,
	CK_C_A_DIAER,
	CK_R_CARON,
	CK_C_R_CARON,
	CK_ESSZETT,
	CK_C_ESSZETT,
	CK_THORN,
	CK_C_THORN,
	CK_G_BREVE,
	CK_C_G_BREVE,
	CK_ENG,
	CK_C_ENG,
	CK_ENYE,
	CK_C_ENYE,
	CK_E_ACUTE,
	CK_C_E_ACUTE,
	CK_I_DIAER,
	CK_C_I_DIAER,
	CK_O_DIAER,
	CK_C_O_DIAER,
	CK_ESH,
	CK_C_ESH,
	CK_U_CIRC,
	CK_C_U_CIRC,
	CK_CEDILLE,
	CK_C_CEDILLE,
	CK_ETH,
	CK_C_ETH,
	CK_C_ACUTE,
	CK_C_ACUTED,
	CK_C_MACRON,
	CK_C_MACRONB,
	CK_H_BAR,
	CK_C_H_BAR,
	CK_STOP,
	CK_C_CEDILLA,
	CK_C_DIAER,
	CK_C_DOT,

// Numeric
	CK_TRIPLEZERO,
	CK_1_9,
	CK_1_7,
	CK_1_6,
	CK_1_5,
	CK_1_3,
	CK_2_5,
	CK_2_3,
	CK_3_5,
	CK_5_6,
	CK_4_5,
	CK_1_8,
	CK_1_4,
	CK_3_8,
	CK_1_2,
	CK_5_8,
	CK_3_4,
	CK_7_8,
	CK_1_10,
	CK_ONE_OVER,
	CK_EURO,
	CK_ALMOST_EQ,
	CK_DEGREE,
	CK_PERMILLE,
	CK_INTEGRAL,
	CK_PLUSMINUS,
	CK_RADICAL,
	CK_INFINITY,
	CK_PARTDIFF,
	CK_LTEQUAL,
	CK_GTEQUAL,
	CK_CHECK,
	CK_BALLOTX,
	CK_GBP,
	CK_CENT,
	CK_NOTEQUAL,
	CK_DIVIDE,
	CK_MINUSSIGN,
	CK_MULTSIGN,
	CK_FRACSLASH,

// Greek
	CK_ALPHA,
	CK_C_ALPHA,
	CK_BETA,
	CK_C_BETA,
	CK_GAMMA,
	CK_C_GAMMA,
	CK_DELTA,
	CK_C_DELTA,
	CK_EPSILON,
	CK_C_EPSILON,
	CK_ZETA,
	CK_C_ZETA,
	CK_ETA,
	CK_C_ETA,
	CK_THETA,
	CK_C_THETA,
	CK_IOTA,
	CK_C_IOTA,
	CK_KAPPA,
	CK_C_KAPPA,
	CK_LAMBDA,
	CK_C_LAMBDA,
	CK_MU,
	CK_C_MU,
	CK_NU,
	CK_C_NU,
	CK_XI,
	CK_C_XI,
	CK_OMICRON,
	CK_C_OMICRON,
	CK_PI,
	CK_C_PI,
	CK_RHO,
	CK_C_RHO,
	CK_SIGMA,
	CK_C_SIGMA,
	CK_F_SIGMA,
	CK_TAU,
	CK_C_TAU,
	CK_UPSILON,
	CK_C_UPSILON,
	CK_PHI,
	CK_C_PHI,
	CK_CHI,
	CK_C_CHI,
	CK_PSI,
	CK_C_PSI,
	CK_OMEGA,
	CK_C_OMEGA,
	CK_G_QUES,
	CK_DTONOS,

// Geometric Symbols
	CK_COPYRIGHT,
	CK_PATENT,
	CK_ARRL_ARRR,
	CK_ARRR_ARRL,
	CK_ARRU_ARRD,
	CK_ARRD_ARRU,
	CK_ARRUD,
	CK_ARRUDF,
	CK_ARRLR,
	CK_ARRLRF,
	CK_TRADEMARK,
	CK_REGTM,
	CK_CIRCLE,
	CK_CIRCLE_F,
	CK_ARRNW,
	CK_ARRNWF,
	CK_ARRU,
	CK_ARRUF,
	CK_ARRNE,
	CK_ARRNEF,
	CK_TRI_U,
	CK_TRI_UF,
	CK_SQUARE,
	CK_SQUARE_F,
	CK_ARRL,
	CK_ARRLF,
	CK_ARRCW,
	CK_ARRCCW,
	CK_ARRR,
	CK_ARRRF,
	CK_TRI_R,
	CK_TRI_RF,
	CK_TRI_L,
	CK_TRI_LF,
	CK_ARRSW,
	CK_ARRSWF,
	CK_ARRD,
	CK_ARRDF,
	CK_ARRSE,
	CK_ARRSEF,
	CK_TRI_D,
	CK_TRI_DF,

// Emoji
	CK_PENCIL,
	CK_SCISSORS,
	CK_APPLE,
	CK_AVOCADO,
	CK_PIZZA,
	CK_MEAT,
	CK_SUN,
	CK_RAIN,
	CK_PEACH,
	CK_EGGPLANT,
	CK_DOG,
	CK_CAT,
	CK_SHRUG,
	CK_FACEPALM,
	CK_THUMBU,
	CK_THUMBD,
	CK_POOP,
	CK_SKULL,
	CK_HEART,
	CK_HEARTB,
	CK_MINDBLOWN,
	CK_SCREAM,
	CK_SILLY,
	CK_ZIPPED,
	CK_SMILE,
	CK_GRIN,
	CK_EYEROLL,
	CK_GRIMACE,
	CK_CRYING,
	CK_NEUTRAL,
	CK_TREX,
	CK_SAUROPOD,
	CK_SUS,
	CK_MONOCLE,
	CK_SHADES,
	CK_INLOVE,
	CK_PARTY,
	CK_HALO,
	CK_TIGER,
	CK_UNICORN,
	
// Tengwar
	CK_TINCO,
	CK_PARMA,
	CK_CALMA,
	CK_QUESSE,
	CK_ANDO,
	CK_UMBAR,
	CK_ANGA,
	CK_UNGWE,
	CK_THULE,
	CK_FORMEN,
	CK_HARMA,
	CK_HWESTA,
	CK_ANTO,
	CK_AMPA,
	CK_ANCA,
	CK_UNQUE,
	CK_NUMEN,
	CK_MALTA,
	CK_NGOLDO,
	CK_NGWALME,
	CK_ORE,
	CK_VALA,
	CK_ANNA,
	CK_VILYA,
	CK_X_TINCO,
	CK_X_PARMA,
	CK_X_CALMA,
	CK_X_QUESSE,
	CK_X_ANDO,
	CK_X_UMBAR,
	CK_X_ANGA,
	CK_X_UNGWE,
	CK_ROMEN,
	CK_ARDA,
	CK_LAMBE,
	CK_ALDA,
	CK_SILME,
	CK_SILMENUQ,
	CK_ESSE,
	CK_ESSENUQ,
	CK_HYARMEN,
	CK_HWESTAS,
	CK_YANTA,
	CK_URE,
	CK_ARA,
	CK_HALLA,
	CK_TELCO,
	CK_L_TELCO,
	CK_OSSE,
	CK_OSSENUQ,
	CK_MH,
	CK_BEL_MH,
	CK_BOMB_W,
	CK_BOMB_HW,
	CK_O_ANNA,
	CK_C_QU,
	CK_L_HW,
	CK_VAIYA,
	CK_AMATIXE3,
	CK_AMATIX3N,
	CK_UNUTIXE3,
	CK_AMATIXE2,
	CK_UNUTIXE2,
	CK_AMATIXE1,
	CK_UNUTIXE1,
	CK_TECCO,
	CK_TECCONUQ,
	CK_UNUTECCO,
	CK_REMPE,
	CK_REMPENUQ,
	CK_UNUREMPE,
	CK_UNUREMPN,
	CK_DOT_IN,
	CK_AMATWE,
	CK_UNUATWE,
	CK_THINNAS,
	CK_SARINCE,
	CK_C_SARIN,
	CK_T_TILDE,
	CK_T_BREVE,
	CK_YANTA_A,
	CK_T0,
	CK_T1,
	CK_T2,
	CK_T3,
	CK_T4,
	CK_T5,
	CK_T6,
	CK_T7,
	CK_T8,
	CK_T9,
	CK_T10,
	CK_T11,
	CK_T12,
	CK_T_LSD,
	CK_T_COMMA,
	CK_T_SEMICOLON,
	CK_T_COLON,
	CK_T_DOT,
	CK_T_DOT_ALT,
	CK_T_EXCLAIM,
	CK_T_EXCL_TH,
	CK_T_QUES,
	CK_T_PAREN,
	CK_T_SECTION,
	CK_T_DSECTION,
	CK_T_LQUOTE,
	CK_T_RQUOTE,
	CK_ZWJ,
};