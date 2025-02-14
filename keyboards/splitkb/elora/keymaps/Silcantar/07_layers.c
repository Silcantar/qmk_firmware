// Layer Keymaps

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Default Layer: Colemak-DH-VK
 *
 *		,-----------------------------------------------------------------------------------------------.	,-----------------------------------------------------------------------------------------------.
 *		|	Record	|	‹	›	|			|	◌̂	◌̌	|	◌̊	◌̥	|	◌̀	̀◌̏	|			|			|	|			|			|	„		|	◌̆	◌̑	|	◌̃	◌	|	◌̅	◌̲	|	«	»	|	 Play	|
 *		|	Macro	|	`	´	|	‽	•	|	!	¡	|	@	‡	|	‘	’	|			|			|	|			|			|	“	”	|	&	†	|	?	¿	|	–	—	|	µ	♪	|	Macro	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|	Layer	|	  Ø		|	  ʌ		|	  Æ		|	  Œ		|	  ɛ		|			|	 Cut	|	|Paste Plain|			|	  ʤ		|	  Ł		|	  Ü		|	  ə		|	  ʒ		|	Layer	|
 *		|	 Down	|	  Q		|	  W		|	  F		|	  P		|	  B		|			|	 Copy	|	|	Paste	|			|	  J		|	  L		|	  U		|	  Y		|	  Z		|	  Up	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|	 LGUI	|	  Ä		|	  Ř		|	  ß		|	  Þ		|	  Ğ		|			|			|	|			|			|	  Ŋ		|	  Ñ		|	  É		|	  Ï		|	  Ö		|	 OSM	|
 *		|	 Esc	|	  A		|	  R		|	  S		|	  T		|	  G		|			|			|	|			|			|	  M		|	  N		|	  E		|	  I		|	  O		|	 RGUI	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
 *		|	 Caps	|	  ʃ		|	  Û		|	  Ç		|	  Ð		|	◌́	◌̋	|	 LAlt	|			|	|			|	RCtrl	|	◌̄	◌̱	|	  Ħ		|	  ʔ		|	◌̧		|	◌̈	◌̇	| Alt Repeat|
 *		|	 Lock	|	  X		|	  V		|	  C		|	  D		|	'	"	|Clear Layer|	Mouse	|	|  Win Man	|	 Tab	|	_	-	|	  H		|	  K		|	,	;	|	.	:	|	Repeat	|
 *		`-----------------------------------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------------------------------'
 *											|	 Cut	|	 OSM	|	LShift	|			|			|	|			|	Delete	|	 OSM	|	 OSM	|Paste Plain|
 *											|	 Copy	|	LCtrl	|	Enter	|	Space	|  Numeric	|	|  Function | Backspace |	RShift	|	 RAlt	|	Paste	|
 *											`-----------------------------------------------------------'	`-----------------------------------------------------------'
 *
 *		,-----------------------------------------------.			,-----------.							,-----------------------------------------------.			,-----------.
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		`-----------------------------------------------'			`-----------'							`-----------------------------------------------'			`-----------'
 */
	[_COLEMAK] = LAYOUT_myr(
		DM_REC1		, KC_GRAVE	, CK_INTBANG, TD_EXCLAMS, KC_AT		, TD_FSQUOTE,			  KC_NO		,	  KC_NO		,			  TD_FDQUOTE, KC_AMPR	, TD_QUES	, CK_NDASH	, CK_CHECK	, DM_PLY1,
		LAYERDOWN	, TD_QUOTES	, SAVE_W	, EDIT_F	, NEW_P		, SYM_B		,			  CK_COPY	,	  CK_PASTE	,			  KC_J		, KC_L		, KC_U		, KC_Y		, KC_UNDS	, LAYERUP,
		LGUI_ESC	, LGUI_A	, LALT_R	, LCTL_S	, LSFT_KC_T	, RALT_G	,			  KC_NO		,	  KC_NO		,			  RALT_M	, RSFT_N	, RCTL_E	, LALT_I	, RGUI_O	, COLEMAK,
		KC_CAPS		, UNDO_X	, CUT_V		, COPY_C	, PASTE_D	, REDO_Q	, RALT_TABL	, TD_MOUSE	,	  TD_WINMAN	, RALT_TAB	, KC_Z		, KC_H		, KC_K		, KC_COMMA	, KC_DOT	, KC_RGUI,
											  CK_COPY	, OSM_LCTL	, LSFT_ENT	, KC_SPACE	, TD_NUMERIC,	  TD_FUNC	, KC_BSPC	, OSM_RSFT	, RCTL_DEL	, CK_PASTE	,
	 
		KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,			  KC_NO		,	  KC_NO		, KC_NO		, KC_NO		,			  KC_NO
	),

/*
 * QWERTY Layer: QWERTY Layout
 *
 *		,-----------------------------------------------------------------------------------------------.	,-----------------------------------------------------------------------------------------------.
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	`	~	|	1	!	|	2	@	|	3	#	|	4	$	|	5	%	|			|			|	|			|			|	6	^	|	7	&	|	8	*	|	9	(	|	0	)	|	-	_	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|	Layer	|			|			|			|			|			|			|	 Cut	|	|Paste Plain|			|			|			|			|			|			|	Layer	|
 *		|	 Down	|	  Q		|	  W		|	  E		|	  R		|	  T		|			|	 Copy	|	|	Paste	|			|	  Y		|	  U		|	  I		|	  O		|	  P		|	  Up	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|	 LGUI	|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|	 OSM	|
 *		|	 Esc	|	  A		|	  S		|	  D		|	  F		|	  G		|			|			|	|			|			|	  H		|	  J		|	  K		|	  L		|	'	"	|	 RGUI	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
 *		|	 Caps	|			|			|			|			|			|	 LAlt	|			|	|			|	RCtrl	|			|			|			|			|			| Alt Repeat|
*		|	 Lock	|	  Z		|	  X		|	  C		|	  V		|	  B		|Clear Layer|	Mouse	|	|  Win Man	|	 Tab	|	  N		|	  M		|	,	;	|	.	:	|	/	?	|	Repeat	|
 *		`-----------------------------------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------------------------------'
*											|	 Cut	|	 OSM	|	LShift	|			|			|	|			|	Delete	|	 OSM	|	 OSM	|Paste Plain|
 *											|	 Copy	|	LCtrl	|	Enter	|	Space	|  Numeric	|	|  Function | Backspace |	RShift	|	 RAlt	|	Paste	|
 *											`-----------------------------------------------------------'	`-----------------------------------------------------------'
 *
 *		,-----------------------------------------------.			,-----------.							,-----------------------------------------------.			,-----------.
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		`-----------------------------------------------'			`-----------'							`-----------------------------------------------'			`-----------'
 */
	[_QWERTY] = LAYOUT_myr(
		KC_EQUAL	, KC_1		, KC_2		, KC_3		, KC_4		, KC_5		,			  KC_NO		,	  KC_NO		,			  KC_6		, KC_7		, KC_8		, KC_9		, KC_0		, KC_MINUS,
		LAYERDOWN	, KC_Q		, KC_W		, KC_E		, KC_R		, KC_T		,			  CK_COPY	,	  CK_PASTE	,			  KC_Y		, KC_U		, KC_I		, KC_O		, KC_P		, LAYERUP,
		LGUI_ESC	, KC_A		, KC_S		, KC_D		, KC_F		, KC_G		,			  KC_NO		,	  KC_NO		,			  KC_H		, KC_J		, KC_K		, KC_L		, KC_QUOTE	, COLEMAK,
		KC_CAPS		, KC_Z		, KC_X		, KC_C		, KC_V		, KC_B		, RALT_TABL, TD_MOUSE	,	  TD_WINMAN	, RALT_TAB	, KC_N		, KC_M		, KC_COMMA	, KC_DOT	, KC_SLASH	, OSM_RGUI,
											  CK_COPY	, OSM_LCTL	, LSFT_ENT	, KC_SPACE	, TD_NUMERIC,	  TD_FUNC	, KC_BSPC	, OSM_RSFT	, OSM_RCTL	, CK_PASTE	,
        
		KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,			  KC_NO		,	  KC_NO		, KC_NO		, KC_NO		,			  KC_NO
	),

/*
 * Greek Layer: Greek Alphabet
 *
 *		,-----------------------------------------------------------------------------------------------.	,-----------------------------------------------------------------------------------------------.
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|	 ; :	|	 ς ΅	|	  Φ		|	  Π		|	  Β		|			|	Trans	|	|	Trans	|			|	  Ξ		|	  Λ		|	  Θ		|	  Υ		|	  Ζ		|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|	  Α		|	  Ρ		|	  Σ		|	  Τ		|	  Γ		|			|			|	|			|			|	  Μ		|	  Ν		|	  Ε		|	  Ι		|	  Ο		|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|	  Χ		|	  Ω		|	  Ψ		|	  Δ		|	'	"	|	Trans	|	Trans	|	|	Trans	|	Trans	|	-	_	|	  Η		|	  Κ		|	,	;	|	.	:	|	Trans	|
 *		`-----------------------------------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------------------------------'
 *											|			|			|			|			|			|	|			|			|			|			|			|
 *											|	Trans	|	Trans	|	Trans	|	Trans	|	Trans	|	|	Trans	|	Trans	|	Trans	|	Trans	|	Trans	|
 *											`-----------------------------------------------------------'	`-----------------------------------------------------------'
 *
 *		,-----------------------------------------------.			,-----------.							,-----------------------------------------------.			,-----------.
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		`-----------------------------------------------'			`-----------'							`-----------------------------------------------'			`-----------'
 */
	[_GREEK] = LAYOUT_myr(
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,			  KC_TRNS	,	  KC_TRNS	,			  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS,
		KC_TRNS		, TD_QUOTES	, CK_F_SIGMA, CK_PHI	, CK_PI		, CK_BETA	,			  KC_TRNS	,	  KC_TRNS	,			  CK_XI		, CK_LAMBDA	, CK_THETA	, CK_UPSILON, KC_UNDS	, KC_TRNS,
		KC_TRNS		, CK_ALPHA	, CK_RHO	, CK_SIGMA	, CK_TAU	, CK_GAMMA	,			  KC_NO		,	  KC_NO		,			  CK_MU		, CK_NU		, CK_EPSILON, CK_IOTA	, CK_OMICRON, KC_TRNS,
		KC_TRNS		, CK_CHI	, CK_OMEGA	, CK_PSI	, CK_DELTA	, CK_G_QUES	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, CK_ZETA	, CK_ETA	, CK_KAPPA	, KC_COMMA	, KC_DOT	, KC_TRNS,
														  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,

		KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,			  KC_NO		,	  KC_NO		, KC_NO		, KC_NO		,			  KC_NO
	),

/*
 * Symbols Layer: Geometric Symbols & Emoji
 *
 *		,-----------------------------------------------------------------------------------------------.	,-----------------------------------------------------------------------------------------------.
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|  Cycle UC |
 *		|	©	℗	|	⇆	⇄	|	⇅	⇵	|	↕	⇕	|	↔	⇔	|	™	®	|			|			|	|			|			|	✏	✂	|	🍎 🥑	|	🍕 🥩	|	☀ 🌧	|	🍑 🍆	| Input Mode|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|	○	●	|	↖	⇖	|	↑	⇑	|	↗	⇗	|	△	▲	|			|	Trans	|	|	Trans	|			|	🐕 🐈	|	🤷 🤦	|	👍 👎	|	💩 💀	|	❤ 💔	|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|	◁	◀	|	←	⇐	|	↻	↺	|	→	⇒	|	▷	▶	|			|			|	|			|			|	🤯 😱	|	😜 🤐	|	😀 😁	|	🙄 😬	|	😢 😐	|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|	□	■	|	↙	⇙	|	↓	⇓	|	↘	⇘	|	▽	▼	|	Trans	|	Trans	|	|	Trans	|	Trans	|	🦖 🦕	|	🤨 🧐	|	😎 😍	|	🥳  😇	|	🐯 🦄	|	Trans	|
 *		`-----------------------------------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------------------------------'
 *											|			|			|			|			|			|	|			|			|			|			|			|
 *											|  Minimize |	Trans	|	Trans	|	Trans	|	Trans	|	|	Trans	|	Trans	|	Trans	|	Trans	|  Maximize |
 *											`-----------------------------------------------------------'	`-----------------------------------------------------------'
 *
 *		,-----------------------------------------------.			,-----------.							,-----------------------------------------------.			,-----------.
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		`-----------------------------------------------'			`-----------'							`-----------------------------------------------'			`-----------'
 */
	[_SYMBOL] = LAYOUT_myr(
		CK_COPYRIGHT, CK_ARRL_ARRR, CK_ARRU_ARRD, CK_ARRUD, CK_ARRLR, CK_TRADEMARK,			  KC_NO		,	  KC_NO		,			  CK_PENCIL	, CK_APPLE	, CK_PIZZA	, CK_SUN	, CK_PEACH	, KC_NO,
		KC_TRNS		, CK_CIRCLE	, CK_ARRNW	, CK_ARRU	, CK_ARRNE	, CK_TRI_U	,			  KC_TRNS	,	  KC_TRNS	,			  CK_DOG	, CK_SHRUG	, CK_THUMBU	, CK_POOP	, CK_HEART	, KC_TRNS,
		KC_TRNS		, CK_TRI_L	, CK_ARRL	, CK_ARRCW	, CK_ARRR	, CK_TRI_R	,			  KC_NO		,	  KC_NO		,			  CK_MINDBLOWN, CK_SILLY, CK_SMILE	, CK_EYEROLL, CK_CRYING	, KC_TRNS,
		KC_TRNS		, CK_SQUARE	, CK_ARRSW	, CK_ARRD	, CK_ARRSE	, CK_TRI_D	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, CK_TREX	, CK_SUS	, CK_SHADES	, CK_PARTY	, CK_TIGER	, KC_TRNS,
														  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,

		KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,			  KC_NO		,	  KC_NO		, KC_NO		, KC_NO		,			  KC_NO
	),

/*
 * Tengwar Layer: JRR Tolkien's Elvish Script
 *
 *		,-----------------------------------------------------------------------------------------------.	,-----------------------------------------------------------------------------------------------.
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	  `		|			|			|	  		|	  		|	  		|			|			|	|			|			|	  		|	  		|			|	  		|			|			|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|			|			|			|			|			|			|	Trans	|	|	Trans	|			|			|			|			|			|			|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|	  :		|	⁝		|			|
 *		|	Trans	|	  		|			|			|			|			|	Trans	|	Trans	|	|	Trans	|	Trans	|			|			|			|	  ⸱		|	⁘	⸬	|	Trans	|
 *		`-----------------------------------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------------------------------'
 *											|			|			|			|			|			|	|			|			|			|			|			|
 *											|	Trans	|	Trans	|	Trans	|	Trans	|	Trans	|	|	Trans	|	Trans	|	Trans	|	Trans	|	Trans	|
 *											`-----------------------------------------------------------'	`-----------------------------------------------------------'
 *
 *		,-----------------------------------------------.			,-----------.							,-----------------------------------------------.			,-----------.
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		`-----------------------------------------------'			`-----------'							`-----------------------------------------------'			`-----------'
 */
	[_TENGWAR] = LAYOUT_myr(
		CK_TECCONUQ	, CK_T1		, CK_T2		, CK_T3		, CK_T4		, CK_T5		,			  KC_NO		,	  KC_NO		,			  CK_T6		, CK_T7		, CK_T8		, CK_T9		, CK_T0		, CK_T_SECTION,
		KC_TRNS		, CK_T_LQUOTE, CK_VILYA	, CK_TELCO	, CK_PARMA	, CK_UMBAR	,			  KC_TRNS	,	  KC_TRNS	,			  CK_ANGA	, CK_LAMBE	, CK_REMPENUQ, CK_ANNA	, CK_T_EXCLAIM, KC_TRNS,
		KC_TRNS		, CK_AMATIXE3, CK_ROMEN	, CK_SILME	, CK_TINCO	, CK_UNGWE	,			  KC_NO		,	  KC_NO		,			  CK_MALTA	, CK_NUMEN	, CK_TECCO	, CK_AMATIXE1, CK_REMPE	, KC_TRNS,
		KC_TRNS		, CK_SARINCE, CK_FORMEN	, CK_CALMA	, CK_ANDO	, CK_T_LQUOTE, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, CK_ESSE, CK_HYARMEN, CK_QUESSE, CK_T_COMMA, CK_T_DOT	, KC_TRNS,
														  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,

		KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,			  KC_NO		,	  KC_NO		, KC_NO		, KC_NO		,			  KC_NO
	),

/*
 * Game Layer: QWERTY-derived layer optimized for gaming (esp. Minecraft, Lego Star Wars)
 *
 *		,-----------------------------------------------------------------------------------------------.	,-----------------------------------------------------------------------------------------------.
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	`	~	|	  1		|	  2		|	  3		|	  4		|	  5		|			|			|	|			|			|	  6		|	  7		|	  8		|	  9		|	  0		|	-	_	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|	 Tab	|	  Q		|	  W		|	  E		|	  R		|			|	Trans	|	|	Trans	|			|	  Y		|	  U		|	  I		|	  O		|	  P		|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|	Shift	|	  A		|	  S		|	  D		|	  F		|			|			|	|			|			|	  H		|	  J		|	  K		|	  L		|	'	"	|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|	  6		|	  7		|	  8		|	  9		|	  0		|	Trans	|	Trans	|	|	Trans	|	Trans	|	  1		|	  2		|	  3		|	  4		|	  5		|	Trans	|
 *		`-----------------------------------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------------------------------'
 *											|			|			|			|			|			|	|			|			|			|			|			|
 *											|	Trans	|	Trans	|	Trans	|	Trans	|	Trans	|	|	Trans	|	Trans	|	Trans	|	Trans	|	Trans	|
 *											`-----------------------------------------------------------'	`-----------------------------------------------------------'
 *
 *		,-----------------------------------------------.			,-----------.							,-----------------------------------------------.			,-----------.
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		`-----------------------------------------------'			`-----------'							`-----------------------------------------------'			`-----------'
 */
	[_GAME] = LAYOUT_myr(
		KC_GRAVE	, KC_1		, KC_2		, KC_3		, KC_4		, KC_5		,			  KC_NO		,	  KC_NO		,			  KC_6		, KC_7		, KC_8		, KC_9		, KC_0		, KC_MINUS,
		KC_TRNS		, KC_TAB	, KC_Q		, KC_W		, KC_E		, KC_R		,			  KC_TRNS	,	  KC_TRNS	,			  KC_Y		, KC_U		, KC_I		, KC_O		, KC_P		, KC_TRNS,
		KC_TRNS		, KC_LSFT	, KC_A		, KC_S		, KC_D		, KC_F		,			  KC_NO		,	  KC_NO		,			  KC_H		, KC_J		, KC_K		, KC_L		, KC_QUOTE	, KC_TRNS,
		KC_TRNS		, KC_6		, KC_7		, KC_8		, KC_9		, KC_0		, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_1		, KC_2		, KC_3		, KC_4		, KC_5		, KC_TRNS,
														  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,

		KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,			  KC_NO		,	  KC_NO		, KC_NO		, KC_NO		,			  KC_NO
	),

/*
 * Numeric Layer: Numbers and Symbols
 *
 *		,-----------------------------------------------------------------------------------------------.	,-----------------------------------------------------------------------------------------------.
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	 1/9	|	 1/7	| 1/6	1/5 | 1/3	2/5 | 2/3	3/5 | 5/6	4/5 |			|			|	|			|			|	 1/8	| 1/4	3/8 | 1/2	5/8 | 3/4	7/8 |	 1/10	|	  1/	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|	"||←"	|			| "⁄**⁄←←"	|			|			|			|			|	|			|			|	"**←"	|			|			|			|			|			|
 *		|	Trans	|	|	€	|	~	≈	|	^	°	|	%	‰	|	\	∫	|			|	Trans	|	|	Trans	|			|	*	×	|	7	√	|	8	∞	|	9	∂	|	/	⁄	|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|	"<>←"	|	"[]←"	|	"{}←"	|	"()←"	|  "(**)←"	|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|	<	≤	|	[	]	|	{	}	|	(	)	|	>	≥	|			|			|	|			|			|	+	±	|	4	D	|	5	E	|	6	F	|	0 "000" |	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|	"__←"	|			|			|			|			|			|
 *		|	Trans	|	µ	Ω	|	#	£	|	$	¢	|	=	≠	|	÷	−	|	Trans	|	Trans	|	|	Trans	|	Trans	|	-	_	|	1	A	|	2	B	|	3	C	|	.	:	|	Trans	|
 *		`-----------------------------------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------------------------------'
 *											|			|			|			|			|			|	|			|			|			|			|			|
 *											|	Trans	|	Trans	|	Trans	|	Trans	|	Trans	|	|	Trans	|	Trans	|	Trans	|	Trans	|	Trans	|
 *											`-----------------------------------------------------------'	`-----------------------------------------------------------'
 *
 *		,-----------------------------------------------.			,-----------.							,-----------------------------------------------.			,-----------.
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		`-----------------------------------------------'			`-----------'							`-----------------------------------------------'			`-----------'
 */
	[_NUMERIC] = LAYOUT_myr(
		CK_1_9		, CK_1_7	, CK_1_6	, CK_1_3	, CK_2_3	, CK_5_6				,KC_NO		,	  KC_NO		,			  CK_1_8	, CK_1_4	, CK_1_2	, CK_3_4	, CK_1_10	, CK_ONE_OVER,
		KC_TRNS		, KC_BSLS	, KC_TILDE	, TD_CCOMM	, KC_PERCENT, TD_PIPES	,			  KC_TRNS	,	  KC_TRNS	,			  KC_PLUS	, KC_7		, KC_8		, KC_9		, KC_MINUS	, KC_TRNS,
		KC_TRNS		, TD_ANGLES	, TD_BRACKS	, TD_BRACES	, TD_PARENS	, TD_PASCOMM,			  KC_NO		,	  KC_NO		,			  RALT_SLSH	, RSFT_4	, RCTL_5	, LALT_6	, RGUI_0	, KC_TRNS,
		KC_TRNS		, CK_MICRO	, KC_HASH	, KC_DOLLAR	, KC_EQUAL	, CK_DIVIDE	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, TD_STARS	, KC_1		, KC_2		, KC_3		, KC_DOT	, KC_TRNS,
														  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,

		KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,			  KC_NO		,	  KC_NO		, KC_NO		, KC_NO		,			  KC_NO
	),

/*
 * Function Layer: Function Keys and Commands
 *
 *		,-----------------------------------------------------------------------------------------------.	,-----------------------------------------------------------------------------------------------.
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	  F1	|	  F2	|	  F3	|	  F4	|	  F5	|	  F6	|			|			|	|			|			|	  F7	|	  F8	|	  F9	|	 F10	|	 F11	|	 F12	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|	Print	|			|
 *		|	Trans	|	 Top	|	 Home	|	  ↑		|	 End	|  Page Up	|			|	Trans	|	|	Trans	|			|	 Help	|  Refresh	|	Print	|  Save As	|	Screen	|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|	Insert	|			|			|			|			|			|
 *		|	Trans	|	Bottom	|	  ←		|	  ↓		|	  →		| Page Down |			|			|	|			|			|	Symbol	|	 New	|	 Edit	|	 Save	|	 Open	|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|	Select	|			|
 *		|	Trans	|	 Undo	|	 Cut	|	 Copy	|	Paste	|	 Redo	|	Trans	|	Trans	|	|	Trans	|	Trans	|	Close	|	 Find	|  Replace	| Select All|	 Word	|	Trans	|
 *		`-----------------------------------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------------------------------'
 *											|			|			|			|			|			|	|			|			|			|			|			|
 *											|	Trans	|	Trans	|	Trans	|	Trans	|	Trans	|	|	Trans	|	Trans	|	Trans	|	Trans	|	Trans	|
 *											`-----------------------------------------------------------'	`-----------------------------------------------------------'
 *
 *		,-----------------------------------------------.			,-----------.							,-----------------------------------------------.			,-----------.
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		`-----------------------------------------------'			`-----------'							`-----------------------------------------------'			`-----------'
 */
	[_FUNCTION] = LAYOUT_myr(
		KC_F1		, KC_F2		, KC_F3		, KC_F4		, KC_F5		, KC_F6		,			  KC_NO		,	  KC_NO		,			  KC_F7		, KC_F8		, KC_F9		, KC_F10	, KC_F11	, KC_F12,
		KC_TRNS		, CMD_TOP	, KC_HOME	, KC_UP		, KC_END	, KC_PGUP	,			  KC_TRNS	,	  KC_TRNS	,			  CMD_HELP	, CMD_REFRSH, CMD_PRINT	, CMD_SAVEAS, KC_PSCR	, KC_TRNS,
		KC_TRNS		, CMD_BOTTOM, KC_LEFT	, KC_DOWN	, KC_RIGHT	, KC_PGDN	,			  KC_NO		,	  KC_NO		,			  CMD_SYMBOL, RSFT_NEW	, RCTL_EDIT	, LALT_SAVE	, RGUI_OPEN	, KC_TRNS,
		KC_TRNS		, CMD_UNDO	, CMD_CUT	, CMD_COPY	, CK_PASTE	, CMD_REDO	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, CMD_CLSWIN, CMD_FIND	, CMD_REPL	, CMD_SELALL, CK_SELWORD, KC_TRNS,
														  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,

		KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,			  KC_NO		,	  KC_NO		, KC_NO		, KC_NO		,			  KC_NO
	),

/*
 * Mouse Layer: Mouse, Media Controls, and Keyboard Adjustment
 *
 *		,-----------------------------------------------------------------------------------------------.	,-----------------------------------------------------------------------------------------------.
 *		|	 RGB	|	 RGB	|	 RGB	|	 RGB	|	 RGB	|	 RGB	|			|			|	|			|			|			|			|Set Default|Set Default|			|			|
 *		|Saturation+|Saturation-| Hue Down	|	Hue Up	| Mode Down |  Mode Up	|			|			|	|			|			|			|			|  Colemak	|	QWERTY	|	Reboot	|	Boot	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|	 RGB	|			|			|			|			|			|			|	|			|			|			|			|			|			|	 RGB	|			|
 *		|	Trans	|Brightness+| Wheel Left|	  ↑		|Wheel Right|  Wheel Up |			|	Trans	|	|	Trans	|			| Volume Up | Skip Back | Play/Pause|  Skip Fwd |	Toggle	|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|	 RGB	|			|			|			|			|			|			|	|			|			|			|			|	Middle	|			|	 Mute	|			|
 *		|	Trans	|RGB Bright-|	  ←		|	  ↓		|	  →		| Wheel Down|			|			|	|			|			|Volume Down| Left Click|	Click	|Right Click| Microphone|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|	Mouse	|	Mouse	|	Mouse	|	Mouse	|			|
 *		|	Trans	|	 Undo	|	 Cut	|	 Copy	|	Paste	|	 Redo	|	Trans	|	Trans	|	|	Trans	|	Trans	|	 Mute	|  Button 4 |  Button 5 |  Button 6 |  Button 7 |	Trans	|
 *		`-----------------------------------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------------------------------'
 *											|			|			|			|			|			|	|			|			|			|			|			|
 *											| Play/Pause|	Trans	|	Trans	|	Trans	|	Trans	|	|	Trans	|	Trans	|	Trans	|	Trans	|	 Mute	|
 *											`-----------------------------------------------------------'	`-----------------------------------------------------------'
 *
 *		,-----------------------------------------------.			,-----------.							,-----------------------------------------------.			,-----------.
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		`-----------------------------------------------'			`-----------'							`-----------------------------------------------'			`-----------'
 */
	[_MOUSE] = LAYOUT_myr(
		RGB_SAD		, RGB_SAI	, RGB_HUD	, RGB_HUI	, RGB_RMOD	, RGB_MOD	,			  KC_NO		,	  KC_NO		,			  KC_NO		, KC_NO		, DF_COLEMAK, DF_QWERTY	, QK_REBOOT	, QK_BOOT,
		KC_TRNS		, RGB_VAI	, MS_WHLL	, MS_UP		, MS_WHLR	, MS_WHLU	,			  KC_MPLY	,	  KC_MUTE	,			  KC_VOLU	, KC_MPRV	, KC_MPLY	, KC_MNXT	, RGB_TOG	, KC_TRNS,
		KC_TRNS		, RGB_VAD	, MS_LEFT	, MS_DOWN	, MS_RGHT	, MS_WHLD	,			  KC_NO		,	  KC_NO		,			  KC_VOLD	, MS_BTN1	, MS_BTN2	, MS_BTN3	, CMD_MUTE_MIC, KC_TRNS,
		KC_TRNS		, CMD_UNDO	, CMD_CUT	, CMD_COPY	, CMD_PASTE	, CMD_REDO	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_MUTE	, MS_BTN4	, MS_BTN5	, MS_BTN6	, MS_BTN7	, KC_TRNS,
														  KC_MPLY	, KC_TRNS	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_MUTE	,

		KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,			  KC_NO		,	  KC_NO		, KC_NO		, KC_NO		,			  KC_NO
	),

/*
 * Window Management Layer: Window Management Commands
 *
 *		,-----------------------------------------------------------------------------------------------.	,-----------------------------------------------------------------------------------------------.
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|  Monitor	|			|	 Full	|			|			|			|	|			|			|			|			|			|  Monitor	|	 Lock	|			|
 *		|	Trans	|	Files	|	 Left	| Snap Left |	Screen	|  Maximize |			|  Minimize |	|  Maximize |			| Reopen Tab|			| Snap Right|	Right	|  Computer |	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------|			|-----------|	|-----------|			|-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|	Ctrl-	|	 Alt-	|			|			|			|	|			|			|			|			|			|	 Show	|	 Peek	|			|
 *		|	Trans	|			|	 Run	| Shift-Tab | Shift-Tab |  Minimize |			|			|	|			|			|  New Tab	|  Alt-Tab	|  Ctrl-Tab |  Desktop	|  Desktop	|	Trans	|
 *		|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------|
 *		|			|			|			|			|			|			|			|			|	|			|			|			|			|			|			|			|			|
 *		|	Trans	|	GUI-1	|	GUI-2	|	GUI-3	|	GUI-4	|	GUI-5	|	Trans	|	Trans	|	|	Trans	|	Trans	|	GUI-6	|	GUI-7	|	GUI-8	|	GUI-9	|	GUI-0	|	Trans	|
 *		`-----------------------------------+-----------+-----------+-----------+-----------+-----------|	|-----------+-----------+-----------+-----------+-----------+-----------------------------------'
 *											|			|			|			|			|			|	|			|			|			|			|			|
 *											|  Minimize |	Trans	|	Trans	|	Trans	|	Trans	|	|	Trans	|	Trans	|	Trans	|	Trans	|  Maximize |
 *											`-----------------------------------------------------------'	`-----------------------------------------------------------'
 *
 *		,-----------------------------------------------.			,-----------.							,-----------------------------------------------.			,-----------.
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		|			|			|			|			|			|			|							|			|			|			|			|			|			|
 *		`-----------------------------------------------'			`-----------'							`-----------------------------------------------'			`-----------'
 */
	[_WINMAN] = LAYOUT_myr(
		KC_NO		, KC_NO		, KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,	  KC_NO		,			  KC_NO		, KC_NO		, KC_NO		, KC_NO		, KC_NO		, KC_NO,
		KC_TRNS		, FILES		, MON_LEFT	, SNAP_LEFT , FULLSCREEN, MAXIMIZE	,			  MINIMIZE	,	  MAXIMIZE	,			  C(S(KC_T)), KC_NO		, SNAP_RIGHT, MON_RIGHT	, LOCK		, KC_TRNS,
		KC_TRNS		, KC_NO		, RUN		, CS_TAB	, AS_TAB	, MINIMIZE	,			  KC_NO		,	  KC_NO		,			  C(KC_T)	, A_TAB		, C_TAB		, SHOW_DTOP	, PEEK_DTOP	, KC_TRNS,
		KC_TRNS		, GUI1		, GUI2		, GUI3		, GUI4		, GUI5		, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, GUI6		, GUI7		, GUI8		, GUI9		, GUI0		, KC_TRNS,
														  MINIMIZE	, KC_TRNS	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, MAXIMIZE	,

		KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,			  KC_NO		,	  KC_NO		, KC_NO		, KC_NO		,			  KC_NO
	),
	
	[_LAYER] = LAYOUT_myr(
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,			  KC_NO		,	  KC_NO		,			  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS,
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,			  KC_TRNS	,	  KC_TRNS	,			  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS,
		KC_TRNS		, COLEMAK	, QWERTY	, GREEK		, SYMBOL	, TENGWAR	,			  KC_NO		,	  KC_NO		,			  GAME		, NUMERIC	, FUNCTION	, MOUSE		, WINMAN	, KC_TRNS,
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS,
														  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	,

		KC_NO		, KC_NO		, KC_NO		, KC_NO		,			  KC_NO		,			  KC_NO		,	  KC_NO		, KC_NO		, KC_NO		,			  KC_NO
	),
};