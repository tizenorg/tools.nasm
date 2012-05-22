/* Automatically generated from ./pptok.dat by ./pptok.pl */
/* Do not edit */

enum preproc_token {
    PP_ELIF          =   0,
    PP_ELIFN         =   1,
    PP_ELIFCTX       =   2,
    PP_ELIFNCTX      =   3,
    PP_ELIFDEF       =   4,
    PP_ELIFNDEF      =   5,
    PP_ELIFEMPTY     =   6,
    PP_ELIFNEMPTY    =   7,
    PP_ELIFID        =   8,
    PP_ELIFNID       =   9,
    PP_ELIFIDN       =  10,
    PP_ELIFNIDN      =  11,
    PP_ELIFIDNI      =  12,
    PP_ELIFNIDNI     =  13,
    PP_ELIFMACRO     =  14,
    PP_ELIFNMACRO    =  15,
    PP_ELIFNUM       =  16,
    PP_ELIFNNUM      =  17,
    PP_ELIFSTR       =  18,
    PP_ELIFNSTR      =  19,
    PP_ELIFTOKEN     =  20,
    PP_ELIFNTOKEN    =  21,
    PP_IF            =  32,
    PP_IFN           =  33,
    PP_IFCTX         =  34,
    PP_IFNCTX        =  35,
    PP_IFDEF         =  36,
    PP_IFNDEF        =  37,
    PP_IFEMPTY       =  38,
    PP_IFNEMPTY      =  39,
    PP_IFID          =  40,
    PP_IFNID         =  41,
    PP_IFIDN         =  42,
    PP_IFNIDN        =  43,
    PP_IFIDNI        =  44,
    PP_IFNIDNI       =  45,
    PP_IFMACRO       =  46,
    PP_IFNMACRO      =  47,
    PP_IFNUM         =  48,
    PP_IFNNUM        =  49,
    PP_IFSTR         =  50,
    PP_IFNSTR        =  51,
    PP_IFTOKEN       =  52,
    PP_IFNTOKEN      =  53,
    PP_ARG           =  64,
    PP_ASSIGN        =  65,
    PP_CLEAR         =  66,
    PP_DEFINE        =  67,
    PP_DEFSTR        =  68,
    PP_DEFTOK        =  69,
    PP_DEPEND        =  70,
    PP_ELSE          =  71,
    PP_ENDIF         =  72,
    PP_ENDM          =  73,
    PP_ENDMACRO      =  74,
    PP_ENDREP        =  75,
    PP_ERROR         =  76,
    PP_EXITMACRO     =  77,
    PP_EXITREP       =  78,
    PP_FATAL         =  79,
    PP_IASSIGN       =  80,
    PP_IDEFINE       =  81,
    PP_IDEFSTR       =  82,
    PP_IDEFTOK       =  83,
    PP_IMACRO        =  84,
    PP_INCLUDE       =  85,
    PP_IRMACRO       =  86,
    PP_IXDEFINE      =  87,
    PP_LINE          =  88,
    PP_LOCAL         =  89,
    PP_MACRO         =  90,
    PP_PATHSEARCH    =  91,
    PP_POP           =  92,
    PP_PUSH          =  93,
    PP_REP           =  94,
    PP_REPL          =  95,
    PP_RMACRO        =  96,
    PP_ROTATE        =  97,
    PP_STACKSIZE     =  98,
    PP_STRCAT        =  99,
    PP_STRLEN        = 100,
    PP_SUBSTR        = 101,
    PP_UNDEF         = 102,
    PP_UNIMACRO      = 103,
    PP_UNMACRO       = 104,
    PP_USE           = 105,
    PP_WARNING       = 106,
    PP_XDEFINE       = 107,
    PP_INVALID       =  -1
};

enum pp_conditional {
    PPC_IF           =   0,
    PPC_IFCTX        =   2,
    PPC_IFDEF        =   4,
    PPC_IFEMPTY      =   6,
    PPC_IFID         =   8,
    PPC_IFIDN        =  10,
    PPC_IFIDNI       =  12,
    PPC_IFMACRO      =  14,
    PPC_IFNUM        =  16,
    PPC_IFSTR        =  18,
    PPC_IFTOKEN      =  20,
};

#define PP_COND(x)     ((enum pp_conditional)((x) & 0x1e))
#define PP_IS_COND(x)  ((unsigned int)(x) < PP_ARG)
#define PP_NEGATIVE(x) ((x) & 1)

#define CASE_PP_ELIF \
	case PP_ELIF: \
	case PP_ELIFN:\
	case PP_ELIFCTX: \
	case PP_ELIFNCTX:\
	case PP_ELIFDEF: \
	case PP_ELIFNDEF:\
	case PP_ELIFEMPTY: \
	case PP_ELIFNEMPTY:\
	case PP_ELIFID: \
	case PP_ELIFNID:\
	case PP_ELIFIDN: \
	case PP_ELIFNIDN:\
	case PP_ELIFIDNI: \
	case PP_ELIFNIDNI:\
	case PP_ELIFMACRO: \
	case PP_ELIFNMACRO:\
	case PP_ELIFNUM: \
	case PP_ELIFNNUM:\
	case PP_ELIFSTR: \
	case PP_ELIFNSTR:\
	case PP_ELIFTOKEN: \
	case PP_ELIFNTOKEN
#define CASE_PP_IF \
	case PP_IF: \
	case PP_IFN:\
	case PP_IFCTX: \
	case PP_IFNCTX:\
	case PP_IFDEF: \
	case PP_IFNDEF:\
	case PP_IFEMPTY: \
	case PP_IFNEMPTY:\
	case PP_IFID: \
	case PP_IFNID:\
	case PP_IFIDN: \
	case PP_IFNIDN:\
	case PP_IFIDNI: \
	case PP_IFNIDNI:\
	case PP_IFMACRO: \
	case PP_IFNMACRO:\
	case PP_IFNUM: \
	case PP_IFNNUM:\
	case PP_IFSTR: \
	case PP_IFNSTR:\
	case PP_IFTOKEN: \
	case PP_IFNTOKEN
