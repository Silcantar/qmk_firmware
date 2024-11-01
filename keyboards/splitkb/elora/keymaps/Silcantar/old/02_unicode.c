// Unicode
enum unicode_names {
// Whitespace
	U_NBSP,
	U_LF,
// Alpha
	U_ACUTE,
	U_INTERROBANG,
	U_BULLET,
	U_INV_EXCLAIM,
	U_DDAGGER,
	U_LSQUOTE,
	U_RSQUOTE,
	U_LDQUOTE,
	U_RDQUOTE,
	U_DAGGER,
	U_INV_QUEST,
	U_NDASH,
	U_MDASH,
	U_MICRO,
	U_EIGHTHNOTE,

// Numeric
	U_ONE_NINTH,
	U_ONE_SEVENTH,
	U_ONE_SIXTH,
	U_ONE_FIFTH,
	U_ONE_THIRD,
	U_TWO_FIFTH,
	U_TWO_THIRD,
	U_THREE_FIFTH,
	U_FIVE_SIXTH,
	U_FOUR_FIFTH,
	U_ONE_EIGHTH,
	U_ONE_FOURTH,
	U_THREE_EIGHTH,
	U_ONE_HALF,
	U_FIVE_EIGHTH,
	U_THREE_FOURTH,
	U_SEVEN_EIGHTH,
	U_ONE_TENTH,
	U_ONE_OVER,
	U_EURO,
	U_ALMOST_EQ,
	U_DEGREE,
	U_PERMILLE,
	U_INTEGRAL,
	U_PLUSMINUS,
	U_RADICAL,
	U_INFINITY,
	U_PARTDIFF,
	U_LTEQUAL,
	U_GTEQUAL,
	U_STAROP,
	U_GBP,
	U_CENT,
	U_NOTEQUAL,
	U_DIVIDE,
	U_MINUSSIGN,
	U_MULTSIGN,
	U_FRACSLASH,

// Greek
	U_ALPHA,
	U_C_ALPHA,
	U_BETA,
	U_C_BETA,
	U_GAMMA,
	U_C_GAMMA,
	U_DELTA,
	U_C_DELTA,
	U_EPSILON,
	U_C_EPSILON,
	U_ZETA,
	U_C_ZETA,
	U_ETA,
	U_C_ETA,
	U_THETA,
	U_C_THETA,
	U_IOTA,
	U_C_IOTA,
	U_KAPPA,
	U_C_KAPPA,
	U_LAMBDA,
	U_C_LAMBDA,
	U_MU,
	U_C_MU,
	U_NU,
	U_C_NU,
	U_XI,
	U_C_XI,
	U_OMICRON,
	U_C_OMICRON,
	U_PI,
	U_C_PI,
	U_RHO,
	U_C_RHO,
	U_SIGMA,
	U_C_SIGMA,
	U_F_SIGMA,
	U_TAU,
	U_C_TAU,
	U_UPSILON,
	U_C_UPSILON,
	U_PHI,
	U_C_PHI,
	U_CHI,
	U_C_CHI,
	U_PSI,
	U_C_PSI,
	U_OMEGA,
	U_C_OMEGA,
	U_G_QUESTION,
	U_C_ACUTE,
	U_C_DIAER,
	U_DTONOS,
	
// Geometric Symbols
	U_COPYRIGHT,
	U_PATENT,
	U_ARRL_ARRR,
	U_ARRR_ARRL,
	U_ARRU_ARRD,
	U_ARRD_ARRU,
	U_ARRUD,
	U_ARRUDF,
	U_ARRLR,
	U_ARRLRF,
	U_TRADEMARK,
	U_REGTM,
	U_CIRCLE,
	U_CIRCLE_F,
	U_ARRNW,
	U_ARRNWF,
	U_ARRU,
	U_ARRUF,
	U_ARRNE,
	U_ARRNEF,
	U_TRI_U,
	U_TRI_UF,
	U_SQUARE,
	U_SQUARE_F,
	U_ARRL,
	U_ARRLF,
	U_ARRCW,
	U_ARRCCW,
	U_ARRR,
	U_ARRRF,
	U_TRI_R,
	U_TRI_RF,
	U_TRI_L,
	U_TRI_LF,
	U_ARRSW,
	U_ARRSWF,
	U_ARRD,
	U_ARRDF,
	U_ARRSE,
	U_ARRSEF,
	U_TRI_D,
	U_TRI_DF,
};

const uint32_t PROGMEM unicode_map[] = {
// Characters with Shift Pairs
// Alpha
	[U_INTERROBANG]	= 0x203D,
	[U_BULLET]		= 0x2022,
	[U_LSQUOTE]		= 0x2018,
	[U_RSQUOTE]		= 0x2019,
	[U_LDQUOTE]		= 0x201C,
	[U_RDQUOTE]		= 0x201D,
	[U_NDASH]		= 0x2013,
	[U_MDASH]		= 0x2014,
	[U_MICRO]		= 0x00B5,
	[U_EIGHTHNOTE]	= 0x266A,

 // Numeric
	[U_ONE_SIXTH]	= 0x2159,
	[U_ONE_FIFTH]	= 0x2155,
	[U_ONE_THIRD]	= 0x2153,
	[U_TWO_FIFTH]	= 0x2156,
	[U_TWO_THIRD]	= 0x2154,
	[U_THREE_FIFTH]	= 0x2157,
	[U_FIVE_SIXTH]	= 0x215A,
	[U_FOUR_FIFTH]	= 0x2158,
	[U_ONE_EIGHTH]	= 0x215B,
	[U_ONE_FOURTH]	= 0x00BC,
	[U_THREE_EIGHTH]= 0x215C,
	[U_ONE_HALF]	= 0x00BD,
	[U_FIVE_EIGHTH]	= 0x215D,
	[U_THREE_FOURTH]= 0x00BE,
	[U_SEVEN_EIGHTH]= 0x215E,
	[U_STAROP]		= 0x22C6,
	[U_DIVIDE]		= 0x00F7,
	[U_MINUSSIGN]	= 0x2212,

 // Greek
	[U_ALPHA]		= 0x03B1,
	[U_C_ALPHA]		= 0x0391,
	[U_BETA]		= 0x03B2,
	[U_C_BETA]		= 0x0392,
	[U_GAMMA]		= 0x03B3,
	[U_C_GAMMA]		= 0x0393,
	[U_DELTA]		= 0x03B4,
	[U_C_DELTA]		= 0x0394,
	[U_EPSILON]		= 0x03B5,
	[U_C_EPSILON]	= 0x0395,
	[U_ZETA]		= 0x03B6,
	[U_C_ZETA]		= 0x0396,
	[U_ETA]			= 0x03B7,
	[U_C_ETA]		= 0x0397,
	[U_THETA]		= 0x03B8,
	[U_C_THETA]		= 0x0398,
	[U_IOTA]		= 0x03B9,
	[U_C_IOTA]		= 0x0399,
	[U_KAPPA]		= 0x03BA,
	[U_C_KAPPA]		= 0x039A,
	[U_LAMBDA]		= 0x03BB,
	[U_C_LAMBDA]	= 0x039B,
	[U_MU]			= 0x03BC,
	[U_C_MU]		= 0x039C,
	[U_NU]			= 0x03BD,
	[U_C_NU]		= 0x039D,
	[U_XI]			= 0x03BE,
	[U_C_XI]		= 0x039E,
	[U_OMICRON]		= 0x03BF,
	[U_C_OMICRON]	= 0x039F,
	[U_PI]			= 0x03C0,
	[U_C_PI]		= 0x03A0,
	[U_RHO]			= 0x03C1,
	[U_C_RHO]		= 0x03A1,
	[U_SIGMA]		= 0x03C3,
	[U_C_SIGMA]		= 0x03A3,
	[U_F_SIGMA]		= 0x03C2,
	[U_TAU]			= 0x03C4,
	[U_C_TAU]		= 0x03A4,
	[U_UPSILON]		= 0x03C5,
	[U_C_UPSILON]	= 0x03A5,
	[U_PHI]			= 0x03C6,
	[U_C_PHI]		= 0x03A6,
	[U_CHI]			= 0x03C7,
	[U_C_CHI]		= 0x03A7,
	[U_PSI]			= 0x03C8,
	[U_C_PSI]		= 0x03A8,
	[U_OMEGA]		= 0x03C9,
	[U_C_OMEGA]		= 0x03A9,
	[U_C_ACUTE]		= 0x0301,
	[U_C_DIAER]		= 0x0308,
	[U_DTONOS]		= 0x0344,
	
// Geometric Symbols
	[U_COPYRIGHT]	= 0x00A9,
	[U_PATENT]		= 0x2117,
	[U_ARRL_ARRR]	= 0x21C6,
	[U_ARRR_ARRL]	= 0x21C4,
	[U_ARRU_ARRD]	= 0x21C5,
	[U_ARRD_ARRU]	= 0x21F5,
	[U_ARRUD]		= 0x2195,
	[U_ARRUDF]		= 0x21D5,
	[U_ARRLR]		= 0x2194,
	[U_ARRLRF]		= 0x21D4,
	[U_TRADEMARK]	= 0x2122,
	[U_REGTM]		= 0x00AE,
	[U_CIRCLE]		= 0x25CB,
	[U_CIRCLE_F]	= 0x25CF,
	[U_ARRNW]		= 0x2196,
	[U_ARRNWF]		= 0x21D6,
	[U_ARRU]		= 0x2191,
	[U_ARRUF]		= 0x21D1,
	[U_ARRNE]		= 0x2197,
	[U_ARRNEF]		= 0x21D7,
	[U_TRI_U]		= 0x25B3,
	[U_TRI_UF]		= 0x25B2,
	[U_SQUARE]		= 0x25A1,
	[U_SQUARE_F]	= 0x25A0,
	[U_ARRL]		= 0x2190,
	[U_ARRLF]		= 0x21D0,
	[U_ARRCW]		= 0x21BB,
	[U_ARRCCW]		= 0x21BA,
	[U_ARRR]		= 0x2192,
	[U_ARRRF]		= 0x21D2,
	[U_TRI_R]		= 0x25B7,
	[U_TRI_RF]		= 0x25B6,
	[U_TRI_L]		= 0x25C1,
	[U_TRI_LF]		= 0x25C0,
	[U_ARRSW]		= 0x2199,
	[U_ARRSWF]		= 0x21D9,
	[U_ARRD]		= 0x2193,
	[U_ARRDF]		= 0x21D3,
	[U_ARRSE]		= 0x2198,
	[U_ARRSEF]		= 0x21D8,
	[U_TRI_D]		= 0x25BD,
	[U_TRI_DF]		= 0x25BC,
	
// Without Shift Pairs
// Alpha
	[U_ACUTE]		= 0x00B4,
	[U_INV_EXCLAIM]	= 0x00A1,
	[U_DDAGGER]		= 0x2021,
	[U_DAGGER]		= 0x2020,
	[U_INV_QUEST]	= 0x00BF,

// Numeric
	[U_ONE_NINTH]	= 0x2151,
	[U_ONE_SEVENTH]	= 0x2150,
	[U_ONE_TENTH]	= 0x2152,
	[U_ONE_OVER]	= 0x215F,
	[U_EURO]		= 0x20AC,
	[U_ALMOST_EQ]	= 0x2248,
	[U_DEGREE]		= 0x00B0,
	[U_PERMILLE]	= 0x2030,
	[U_INTEGRAL]	= 0x222B,
	[U_PLUSMINUS]	= 0x00B1,
	[U_RADICAL]		= 0x23B7,
	[U_INFINITY]	= 0x221E,
	[U_PARTDIFF]	= 0x2202,
	[U_LTEQUAL]		= 0x2264,
	[U_GTEQUAL]		= 0x2265,
	[U_GBP]			= 0x00A3,
	[U_CENT]		= 0x00A2,
	[U_NOTEQUAL]	= 0x2260,
	[U_MULTSIGN]	= 0x00D7,
	[U_FRACSLASH]	= 0x2044,
};

// Aliases for Unicode Pairs
// Alpha
#define UP_INTBANG		UP(U_INTERROBANG,	U_BULLET)
#define UP_SQUOTE		UP(U_LSQUOTE, 		U_RSQUOTE)
#define UP_DQUOTE		UP(U_LDQUOTE, 		U_RDQUOTE)
#define UP_NDASH		UP(U_NDASH, 		U_MDASH)
#define UP_MICRO		UP(U_MICRO, 		U_EIGHTHNOTE)

// Numeric
#define UP_ONE_SIXTH	UP(U_ONE_SIXTH, 	U_ONE_FIFTH)
#define UP_ONE_THIRD	UP(U_ONE_THIRD, 	U_TWO_FIFTH)
#define UP_TWO_THIRD	UP(U_TWO_THIRD, 	U_THREE_FIFTH)
#define UP_FIVE_SIXTH	UP(U_FIVE_SIXTH, 	U_FOUR_FIFTH)
#define UP_ONE_FOURTH	UP(U_ONE_FOURTH, 	U_THREE_EIGHTH)
#define UP_ONE_HALF		UP(U_ONE_HALF, 		U_FIVE_EIGHTH)
#define UP_THREE_FOURTH	UP(U_THREE_FOURTH, 	U_SEVEN_EIGHTH)
#define UP_BULLET		UP(U_BULLET, 		U_STAROP)
#define UP_DIVIDE		UP(U_DIVIDE, 		U_MINUSSIGN)

// Greek
#define UP_ALPHA		UP(U_ALPHA,			U_C_ALPHA)
#define UP_BETA			UP(U_BETA,			U_C_BETA)
#define UP_GAMMA		UP(U_GAMMA,			U_C_GAMMA)
#define UP_DELTA		UP(U_DELTA,			U_C_DELTA)
#define UP_EPSILON		UP(U_EPSILON,		U_C_EPSILON)
#define UP_ZETA			UP(U_ZETA,			U_C_ZETA)
#define UP_ETA			UP(U_ETA,			U_C_ETA)
#define UP_THETA		UP(U_THETA,			U_C_THETA)
#define UP_IOTA			UP(U_IOTA, 			U_C_IOTA)
#define UP_KAPPA		UP(U_KAPPA,			U_C_KAPPA)
#define UP_LAMBDA		UP(U_LAMBDA,		U_C_LAMBDA)
#define UP_MU			UP(U_MU,			U_C_MU)
#define UP_NU			UP(U_NU,			U_C_NU)
#define UP_XI			UP(U_XI,			U_C_XI)
#define UP_OMICRON		UP(U_OMICRON,		U_C_OMICRON)
#define UP_PI			UP(U_PI,			U_C_PI)
#define UP_RHO			UP(U_RHO,			U_C_RHO)
#define UP_SIGMA		UP(U_SIGMA,			U_C_SIGMA)
#define UP_TAU			UP(U_TAU,			U_C_TAU)
#define UP_UPSILON		UP(U_UPSILON,		U_C_UPSILON)
#define UP_PHI			UP(U_PHI,			U_C_PHI)
#define UP_CHI			UP(U_CHI,			U_C_CHI)
#define UP_PSI			UP(U_PSI,			U_C_PSI)
#define UP_OMEGA		UP(U_OMEGA,			U_C_OMEGA)
#define UP_C_ACUTE		UP(U_C_ACUTE,		U_C_DIAER)
#define UP_F_SIGMA		UP(U_F_SIGMA,		U_DTONOS)

// Geometric Symbols
#define UP_COPYRIGHT	UP(U_COPYRIGHT,		U_PATENT)
#define UP_ARRL_ARRR	UP(U_ARRL_ARRR,		U_ARRR_ARRL)
#define UP_ARRU_ARRD	UP(U_ARRU_ARRD,		U_ARRD_ARRU)
#define UP_ARRUD		UP(U_ARRUD,			U_ARRUDF)
#define UP_ARRLR		UP(U_ARRLR,			U_ARRLRF)
#define UP_TRADEMARK	UP(U_TRADEMARK,		U_REGTM)
#define UP_CIRCLE		UP(U_CIRCLE,		U_CIRCLE_F)
#define UP_ARRNW		UP(U_ARRNW,			U_ARRNWF)
#define UP_ARRU			UP(U_ARRU,			U_ARRUF)
#define UP_ARRNE		UP(U_ARRNE,			U_ARRNEF)
#define UP_TRI_U		UP(U_TRI_U,			U_TRI_UF)
#define UP_SQUARE		UP(U_SQUARE,		U_SQUARE_F)
#define UP_ARRL			UP(U_ARRL,			U_ARRLF)
#define UP_ARRCW		UP(U_ARRCW,			U_ARRCCW)
#define UP_ARRR			UP(U_ARRR,			U_ARRRF)
#define UP_TRI_R		UP(U_TRI_R,			U_TRI_RF)
#define UP_TRI_L		UP(U_TRI_L,			U_TRI_LF)
#define UP_ARRSW		UP(U_ARRSW,			U_ARRSWF)
#define UP_ARRD			UP(U_ARRD,			U_ARRDF)
#define UP_ARRSE		UP(U_ARRSE,			U_ARRSEF)
#define UP_TRI_D		UP(U_TRI_D,			U_TRI_DF)