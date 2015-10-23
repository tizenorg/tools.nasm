/* This file auto-generated from insns.dat by insns.pl - don't edit it */

#include "nasm.h"
#include "insns.h"

static const struct itemplate instrux_AAA[] = {
    {I_AAA, 0, {0,0,0,0,0}, nasm_bytecodes+19962, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_AAD[] = {
    {I_AAD, 0, {0,0,0,0,0}, nasm_bytecodes+18914, IF_8086|IF_NOLONG},
    {I_AAD, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+18918, IF_8086|IF_SB|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_AAM[] = {
    {I_AAM, 0, {0,0,0,0,0}, nasm_bytecodes+18922, IF_8086|IF_NOLONG},
    {I_AAM, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+18926, IF_8086|IF_SB|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_AAS[] = {
    {I_AAS, 0, {0,0,0,0,0}, nasm_bytecodes+19965, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADC[] = {
    {I_ADC, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+18930, IF_8086|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+18930, IF_8086},
    {I_ADC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17034, IF_8086|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17034, IF_8086},
    {I_ADC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17039, IF_386|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17039, IF_386},
    {I_ADC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17044, IF_X64|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17044, IF_X64},
    {I_ADC, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+10228, IF_8086|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+10228, IF_8086},
    {I_ADC, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+17049, IF_8086|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17049, IF_8086},
    {I_ADC, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+17054, IF_386|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17054, IF_386},
    {I_ADC, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+17059, IF_X64|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17059, IF_X64},
    {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13536, IF_8086},
    {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13542, IF_386},
    {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13548, IF_X64},
    {I_ADC, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+18934, IF_8086|IF_SM},
    {I_ADC, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+13536, IF_8086|IF_SM},
    {I_ADC, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+17064, IF_8086|IF_SM},
    {I_ADC, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+13542, IF_386|IF_SM},
    {I_ADC, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+17069, IF_386|IF_SM},
    {I_ADC, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+13548, IF_X64|IF_SM},
    {I_ADC, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+17074, IF_X64|IF_SM},
    {I_ADC, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+17079, IF_8086|IF_SM},
    {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+13554, IF_8086|IF_SM},
    {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+13560, IF_386|IF_SM},
    {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+13566, IF_X64|IF_SM},
    {I_ADC, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+17079, IF_8086|IF_SM},
    {I_ADC, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+13554, IF_8086|IF_SM},
    {I_ADC, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+13560, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADD[] = {
    {I_ADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+18938, IF_8086|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+18938, IF_8086},
    {I_ADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17084, IF_8086|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17084, IF_8086},
    {I_ADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17089, IF_386|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17089, IF_386},
    {I_ADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17094, IF_X64|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17094, IF_X64},
    {I_ADD, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+10879, IF_8086|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+10879, IF_8086},
    {I_ADD, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+17099, IF_8086|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17099, IF_8086},
    {I_ADD, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+17104, IF_386|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17104, IF_386},
    {I_ADD, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+17109, IF_X64|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17109, IF_X64},
    {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13572, IF_8086},
    {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13578, IF_386},
    {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13584, IF_X64},
    {I_ADD, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+18942, IF_8086|IF_SM},
    {I_ADD, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+13572, IF_8086|IF_SM},
    {I_ADD, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+17114, IF_8086|IF_SM},
    {I_ADD, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+13578, IF_386|IF_SM},
    {I_ADD, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+17119, IF_386|IF_SM},
    {I_ADD, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+13584, IF_X64|IF_SM},
    {I_ADD, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+17124, IF_X64|IF_SM},
    {I_ADD, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+17129, IF_8086|IF_SM},
    {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+13590, IF_8086|IF_SM},
    {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+13596, IF_386|IF_SM},
    {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+13602, IF_X64|IF_SM},
    {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+17129, IF_8086|IF_SM},
    {I_ADD, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+13590, IF_8086|IF_SM},
    {I_ADD, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+13596, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDPD[] = {
    {I_ADDPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15468, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDPS[] = {
    {I_ADDPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14766, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSD[] = {
    {I_ADDSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15474, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSS[] = {
    {I_ADDSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14772, IF_KATMAI|IF_SSE|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSUBPD[] = {
    {I_ADDSUBPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15744, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSUBPS[] = {
    {I_ADDSUBPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15750, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESDEC[] = {
    {I_AESDEC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8727, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESDECLAST[] = {
    {I_AESDECLAST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8734, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESENC[] = {
    {I_AESENC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8713, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESENCLAST[] = {
    {I_AESENCLAST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8720, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESIMC[] = {
    {I_AESIMC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8741, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESKEYGENASSIST[] = {
    {I_AESKEYGENASSIST, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6108, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AND[] = {
    {I_AND, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+18946, IF_8086|IF_SM},
    {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+18946, IF_8086},
    {I_AND, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17134, IF_8086|IF_SM},
    {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17134, IF_8086},
    {I_AND, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17139, IF_386|IF_SM},
    {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17139, IF_386},
    {I_AND, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17144, IF_X64|IF_SM},
    {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17144, IF_X64},
    {I_AND, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+11166, IF_8086|IF_SM},
    {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+11166, IF_8086},
    {I_AND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+17149, IF_8086|IF_SM},
    {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17149, IF_8086},
    {I_AND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+17154, IF_386|IF_SM},
    {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17154, IF_386},
    {I_AND, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+17159, IF_X64|IF_SM},
    {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17159, IF_X64},
    {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13608, IF_8086},
    {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13614, IF_386},
    {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13620, IF_X64},
    {I_AND, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+18950, IF_8086|IF_SM},
    {I_AND, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+13608, IF_8086|IF_SM},
    {I_AND, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+17164, IF_8086|IF_SM},
    {I_AND, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+13614, IF_386|IF_SM},
    {I_AND, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+17169, IF_386|IF_SM},
    {I_AND, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+13620, IF_X64|IF_SM},
    {I_AND, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+17174, IF_X64|IF_SM},
    {I_AND, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+17179, IF_8086|IF_SM},
    {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+13626, IF_8086|IF_SM},
    {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+13632, IF_386|IF_SM},
    {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+13638, IF_X64|IF_SM},
    {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+17179, IF_8086|IF_SM},
    {I_AND, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+13626, IF_8086|IF_SM},
    {I_AND, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+13632, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDNPD[] = {
    {I_ANDNPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15480, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDNPS[] = {
    {I_ANDNPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14778, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDPD[] = {
    {I_ANDPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15486, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDPS[] = {
    {I_ANDPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14784, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_ARPL[] = {
    {I_ARPL, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18954, IF_286|IF_PROT|IF_SM|IF_NOLONG},
    {I_ARPL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18954, IF_286|IF_PROT|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_BB0_RESET[] = {
    {I_BB0_RESET, 0, {0,0,0,0,0}, nasm_bytecodes+18958, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_BB1_RESET[] = {
    {I_BB1_RESET, 0, {0,0,0,0,0}, nasm_bytecodes+18962, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDPD[] = {
    {I_BLENDPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+5940, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDPS[] = {
    {I_BLENDPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+5948, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDVPD[] = {
    {I_BLENDVPD, 3, {XMMREG,RM_XMM,XMM0,0,0}, nasm_bytecodes+8433, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDVPS[] = {
    {I_BLENDVPS, 3, {XMMREG,RM_XMM,XMM0,0,0}, nasm_bytecodes+8440, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_BOUND[] = {
    {I_BOUND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+17184, IF_186|IF_NOLONG},
    {I_BOUND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+17189, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_BSF[] = {
    {I_BSF, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+13644, IF_386|IF_SM},
    {I_BSF, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13644, IF_386},
    {I_BSF, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+13650, IF_386|IF_SM},
    {I_BSF, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13650, IF_386},
    {I_BSF, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+13656, IF_X64|IF_SM},
    {I_BSF, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13656, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_BSR[] = {
    {I_BSR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+13662, IF_386|IF_SM},
    {I_BSR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13662, IF_386},
    {I_BSR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+13668, IF_386|IF_SM},
    {I_BSR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13668, IF_386},
    {I_BSR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+13674, IF_X64|IF_SM},
    {I_BSR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13674, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_BSWAP[] = {
    {I_BSWAP, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+13680, IF_486},
    {I_BSWAP, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+13686, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_BT[] = {
    {I_BT, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13692, IF_386|IF_SM},
    {I_BT, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13692, IF_386},
    {I_BT, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13698, IF_386|IF_SM},
    {I_BT, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13698, IF_386},
    {I_BT, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13704, IF_X64|IF_SM},
    {I_BT, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13704, IF_X64},
    {I_BT, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+7236, IF_386|IF_SB},
    {I_BT, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+7243, IF_386|IF_SB},
    {I_BT, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+7250, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_BTC[] = {
    {I_BTC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13710, IF_386|IF_SM},
    {I_BTC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13710, IF_386},
    {I_BTC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13716, IF_386|IF_SM},
    {I_BTC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13716, IF_386},
    {I_BTC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13722, IF_X64|IF_SM},
    {I_BTC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13722, IF_X64},
    {I_BTC, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+7257, IF_386|IF_SB},
    {I_BTC, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+7264, IF_386|IF_SB},
    {I_BTC, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+7271, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_BTR[] = {
    {I_BTR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13728, IF_386|IF_SM},
    {I_BTR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13728, IF_386},
    {I_BTR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13734, IF_386|IF_SM},
    {I_BTR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13734, IF_386},
    {I_BTR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13740, IF_X64|IF_SM},
    {I_BTR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13740, IF_X64},
    {I_BTR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+7278, IF_386|IF_SB},
    {I_BTR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+7285, IF_386|IF_SB},
    {I_BTR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+7292, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_BTS[] = {
    {I_BTS, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13746, IF_386|IF_SM},
    {I_BTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13746, IF_386},
    {I_BTS, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13752, IF_386|IF_SM},
    {I_BTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13752, IF_386},
    {I_BTS, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13758, IF_X64|IF_SM},
    {I_BTS, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13758, IF_X64},
    {I_BTS, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+7299, IF_386|IF_SB},
    {I_BTS, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+7306, IF_386|IF_SB},
    {I_BTS, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+7313, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_CALL[] = {
    {I_CALL, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+17194, IF_8086},
    {I_CALL, 1, {IMMEDIATE|NEAR,0,0,0,0}, nasm_bytecodes+17194, IF_8086},
    {I_CALL, 1, {IMMEDIATE|FAR,0,0,0,0}, nasm_bytecodes+13764, IF_8086|IF_NOLONG},
    {I_CALL, 1, {IMMEDIATE|BITS16,0,0,0,0}, nasm_bytecodes+17199, IF_8086},
    {I_CALL, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, nasm_bytecodes+17199, IF_8086},
    {I_CALL, 1, {IMMEDIATE|BITS16|FAR,0,0,0,0}, nasm_bytecodes+13770, IF_8086|IF_NOLONG},
    {I_CALL, 1, {IMMEDIATE|BITS32,0,0,0,0}, nasm_bytecodes+17204, IF_386},
    {I_CALL, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, nasm_bytecodes+17204, IF_386},
    {I_CALL, 1, {IMMEDIATE|BITS32|FAR,0,0,0,0}, nasm_bytecodes+13776, IF_386|IF_NOLONG},
    {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+13782, IF_8086|IF_NOLONG},
    {I_CALL, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+13788, IF_8086|IF_NOLONG},
    {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+13788, IF_8086|IF_NOLONG},
    {I_CALL, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+13794, IF_386|IF_NOLONG},
    {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+13794, IF_386|IF_NOLONG},
    {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, nasm_bytecodes+17209, IF_8086|IF_NOLONG},
    {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, nasm_bytecodes+17214, IF_X64},
    {I_CALL, 1, {MEMORY|BITS16|FAR,0,0,0,0}, nasm_bytecodes+17219, IF_8086},
    {I_CALL, 1, {MEMORY|BITS32|FAR,0,0,0,0}, nasm_bytecodes+17224, IF_386},
    {I_CALL, 1, {MEMORY|BITS64|FAR,0,0,0,0}, nasm_bytecodes+17214, IF_X64},
    {I_CALL, 1, {MEMORY|NEAR,0,0,0,0}, nasm_bytecodes+17229, IF_8086},
    {I_CALL, 1, {MEMORY|BITS16|NEAR,0,0,0,0}, nasm_bytecodes+17234, IF_8086},
    {I_CALL, 1, {MEMORY|BITS32|NEAR,0,0,0,0}, nasm_bytecodes+17239, IF_386|IF_NOLONG},
    {I_CALL, 1, {MEMORY|BITS64|NEAR,0,0,0,0}, nasm_bytecodes+17244, IF_X64},
    {I_CALL, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17234, IF_8086},
    {I_CALL, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17239, IF_386|IF_NOLONG},
    {I_CALL, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17249, IF_X64},
    {I_CALL, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17229, IF_8086},
    {I_CALL, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+17234, IF_8086},
    {I_CALL, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+17239, IF_386|IF_NOLONG},
    {I_CALL, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+17249, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CBW[] = {
    {I_CBW, 0, {0,0,0,0,0}, nasm_bytecodes+18966, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CDQ[] = {
    {I_CDQ, 0, {0,0,0,0,0}, nasm_bytecodes+18970, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_CDQE[] = {
    {I_CDQE, 0, {0,0,0,0,0}, nasm_bytecodes+18974, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLC[] = {
    {I_CLC, 0, {0,0,0,0,0}, nasm_bytecodes+18686, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLD[] = {
    {I_CLD, 0, {0,0,0,0,0}, nasm_bytecodes+19968, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLFLUSH[] = {
    {I_CLFLUSH, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18859, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLGI[] = {
    {I_CLGI, 0, {0,0,0,0,0}, nasm_bytecodes+17254, IF_X64|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLI[] = {
    {I_CLI, 0, {0,0,0,0,0}, nasm_bytecodes+19971, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLTS[] = {
    {I_CLTS, 0, {0,0,0,0,0}, nasm_bytecodes+18978, IF_286|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMC[] = {
    {I_CMC, 0, {0,0,0,0,0}, nasm_bytecodes+19974, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMP[] = {
    {I_CMP, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+18982, IF_8086|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+18982, IF_8086},
    {I_CMP, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17259, IF_8086|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17259, IF_8086},
    {I_CMP, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17264, IF_386|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17264, IF_386},
    {I_CMP, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17269, IF_X64|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17269, IF_X64},
    {I_CMP, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+11124, IF_8086|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+11124, IF_8086},
    {I_CMP, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+17274, IF_8086|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+17274, IF_8086},
    {I_CMP, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+17279, IF_386|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+17279, IF_386},
    {I_CMP, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+17284, IF_X64|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+17284, IF_X64},
    {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13800, IF_8086},
    {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13806, IF_386},
    {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13812, IF_X64},
    {I_CMP, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+18986, IF_8086|IF_SM},
    {I_CMP, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+13800, IF_8086|IF_SM},
    {I_CMP, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+17289, IF_8086|IF_SM},
    {I_CMP, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+13806, IF_386|IF_SM},
    {I_CMP, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+17294, IF_386|IF_SM},
    {I_CMP, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+13812, IF_X64|IF_SM},
    {I_CMP, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+17299, IF_X64|IF_SM},
    {I_CMP, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+17304, IF_8086|IF_SM},
    {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+13818, IF_8086|IF_SM},
    {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+13824, IF_386|IF_SM},
    {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+13830, IF_X64|IF_SM},
    {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+17304, IF_8086|IF_SM},
    {I_CMP, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+13818, IF_8086|IF_SM},
    {I_CMP, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+13824, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQPD[] = {
    {I_CMPEQPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5764, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQPS[] = {
    {I_CMPEQPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5588, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQSD[] = {
    {I_CMPEQSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5772, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQSS[] = {
    {I_CMPEQSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5596, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLEPD[] = {
    {I_CMPLEPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5780, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLEPS[] = {
    {I_CMPLEPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5604, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLESD[] = {
    {I_CMPLESD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5788, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLESS[] = {
    {I_CMPLESS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5612, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTPD[] = {
    {I_CMPLTPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5796, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTPS[] = {
    {I_CMPLTPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5620, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTSD[] = {
    {I_CMPLTSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5804, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTSS[] = {
    {I_CMPLTSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5628, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQPD[] = {
    {I_CMPNEQPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5812, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQPS[] = {
    {I_CMPNEQPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5636, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQSD[] = {
    {I_CMPNEQSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5820, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQSS[] = {
    {I_CMPNEQSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5644, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLEPD[] = {
    {I_CMPNLEPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5828, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLEPS[] = {
    {I_CMPNLEPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5652, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLESD[] = {
    {I_CMPNLESD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5836, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLESS[] = {
    {I_CMPNLESS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5660, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTPD[] = {
    {I_CMPNLTPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5844, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTPS[] = {
    {I_CMPNLTPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5668, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTSD[] = {
    {I_CMPNLTSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5852, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTSS[] = {
    {I_CMPNLTSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5676, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDPD[] = {
    {I_CMPORDPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5860, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDPS[] = {
    {I_CMPORDPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5684, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDSD[] = {
    {I_CMPORDSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5868, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDSS[] = {
    {I_CMPORDSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5692, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPPD[] = {
    {I_CMPPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+8139, IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPPS[] = {
    {I_CMPPS, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+7866, IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    {I_CMPPS, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+7866, IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSB[] = {
    {I_CMPSB, 0, {0,0,0,0,0}, nasm_bytecodes+18990, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSD[] = {
    {I_CMPSD, 0, {0,0,0,0,0}, nasm_bytecodes+17309, IF_386},
    {I_CMPSD, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+8146, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSQ[] = {
    {I_CMPSQ, 0, {0,0,0,0,0}, nasm_bytecodes+17314, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSS[] = {
    {I_CMPSS, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+7873, IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    {I_CMPSS, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+7873, IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSW[] = {
    {I_CMPSW, 0, {0,0,0,0,0}, nasm_bytecodes+17319, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDPD[] = {
    {I_CMPUNORDPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5876, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDPS[] = {
    {I_CMPUNORDPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5700, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDSD[] = {
    {I_CMPUNORDSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5884, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDSS[] = {
    {I_CMPUNORDSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+5708, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG[] = {
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+17324, IF_PENT|IF_SM},
    {I_CMPXCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+17324, IF_PENT},
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13836, IF_PENT|IF_SM},
    {I_CMPXCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13836, IF_PENT},
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13842, IF_PENT|IF_SM},
    {I_CMPXCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13842, IF_PENT},
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13848, IF_X64|IF_SM},
    {I_CMPXCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13848, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG16B[] = {
    {I_CMPXCHG16B, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+13866, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG486[] = {
    {I_CMPXCHG486, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+17329, IF_486|IF_SM|IF_UNDOC},
    {I_CMPXCHG486, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+17329, IF_486|IF_UNDOC},
    {I_CMPXCHG486, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13854, IF_486|IF_SM|IF_UNDOC},
    {I_CMPXCHG486, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13854, IF_486|IF_UNDOC},
    {I_CMPXCHG486, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13860, IF_486|IF_SM|IF_UNDOC},
    {I_CMPXCHG486, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13860, IF_486|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG8B[] = {
    {I_CMPXCHG8B, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+13867, IF_PENT},
    ITEMPLATE_END
};

static const struct itemplate instrux_COMISD[] = {
    {I_COMISD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15492, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_COMISS[] = {
    {I_COMISS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14790, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CPUID[] = {
    {I_CPUID, 0, {0,0,0,0,0}, nasm_bytecodes+18994, IF_PENT},
    ITEMPLATE_END
};

static const struct itemplate instrux_CPU_READ[] = {
    {I_CPU_READ, 0, {0,0,0,0,0}, nasm_bytecodes+18998, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_CPU_WRITE[] = {
    {I_CPU_WRITE, 0, {0,0,0,0,0}, nasm_bytecodes+19002, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_CQO[] = {
    {I_CQO, 0, {0,0,0,0,0}, nasm_bytecodes+19006, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CRC32[] = {
    {I_CRC32, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+6045, IF_SSE42},
    {I_CRC32, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+6028, IF_SSE42},
    {I_CRC32, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+6036, IF_SSE42},
    {I_CRC32, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+6044, IF_SSE42|IF_X64},
    {I_CRC32, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+6052, IF_SSE42|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTDQ2PD[] = {
    {I_CVTDQ2PD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15498, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTDQ2PS[] = {
    {I_CVTDQ2PS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15504, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPD2DQ[] = {
    {I_CVTPD2DQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15510, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPD2PI[] = {
    {I_CVTPD2PI, 2, {MMXREG,RM_XMM,0,0,0}, nasm_bytecodes+15516, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPD2PS[] = {
    {I_CVTPD2PS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15522, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPI2PD[] = {
    {I_CVTPI2PD, 2, {XMMREG,RM_MMX,0,0,0}, nasm_bytecodes+15528, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPI2PS[] = {
    {I_CVTPI2PS, 2, {XMMREG,RM_MMX,0,0,0}, nasm_bytecodes+14796, IF_KATMAI|IF_SSE|IF_MMX|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPS2DQ[] = {
    {I_CVTPS2DQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15534, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPS2PD[] = {
    {I_CVTPS2PD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15540, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPS2PI[] = {
    {I_CVTPS2PI, 2, {MMXREG,RM_XMM,0,0,0}, nasm_bytecodes+14802, IF_KATMAI|IF_SSE|IF_MMX|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSD2SI[] = {
    {I_CVTSD2SI, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+8154, IF_WILLAMETTE|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+8154, IF_WILLAMETTE|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTSD2SI, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+8153, IF_X64|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+8153, IF_X64|IF_SSE2|IF_SQ|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSD2SS[] = {
    {I_CVTSD2SS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15546, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSI2SD[] = {
    {I_CVTSI2SD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+8161, IF_WILLAMETTE|IF_SSE2|IF_SD|IF_AR1},
    {I_CVTSI2SD, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+8161, IF_WILLAMETTE|IF_SSE2|IF_SD|IF_AR1},
    {I_CVTSI2SD, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+8160, IF_X64|IF_SSE2|IF_SQ|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSI2SS[] = {
    {I_CVTSI2SS, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+7881, IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    {I_CVTSI2SS, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+7881, IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    {I_CVTSI2SS, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+7880, IF_X64|IF_SSE|IF_SQ|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSS2SD[] = {
    {I_CVTSS2SD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15552, IF_WILLAMETTE|IF_SSE2|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSS2SI[] = {
    {I_CVTSS2SI, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+7888, IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    {I_CVTSS2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+7888, IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    {I_CVTSS2SI, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+7887, IF_X64|IF_SSE|IF_SD|IF_AR1},
    {I_CVTSS2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+7887, IF_X64|IF_SSE|IF_SD|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPD2DQ[] = {
    {I_CVTTPD2DQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15564, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPD2PI[] = {
    {I_CVTTPD2PI, 2, {MMXREG,RM_XMM,0,0,0}, nasm_bytecodes+15558, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPS2DQ[] = {
    {I_CVTTPS2DQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15570, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPS2PI[] = {
    {I_CVTTPS2PI, 2, {MMXREG,RM_XMM,0,0,0}, nasm_bytecodes+14808, IF_KATMAI|IF_SSE|IF_MMX|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTSD2SI[] = {
    {I_CVTTSD2SI, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+8168, IF_WILLAMETTE|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+8168, IF_WILLAMETTE|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTTSD2SI, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+8167, IF_X64|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+8167, IF_X64|IF_SSE2|IF_SQ|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTSS2SI[] = {
    {I_CVTTSS2SI, 2, {REG_GPR|BITS32,RM_XMM,0,0,0}, nasm_bytecodes+7895, IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    {I_CVTTSS2SI, 2, {REG_GPR|BITS64,RM_XMM,0,0,0}, nasm_bytecodes+7894, IF_X64|IF_SSE|IF_SD|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CWD[] = {
    {I_CWD, 0, {0,0,0,0,0}, nasm_bytecodes+19010, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CWDE[] = {
    {I_CWDE, 0, {0,0,0,0,0}, nasm_bytecodes+19014, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_DAA[] = {
    {I_DAA, 0, {0,0,0,0,0}, nasm_bytecodes+19977, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_DAS[] = {
    {I_DAS, 0, {0,0,0,0,0}, nasm_bytecodes+19980, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_DB[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DD[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DEC[] = {
    {I_DEC, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19018, IF_8086|IF_NOLONG},
    {I_DEC, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19022, IF_386|IF_NOLONG},
    {I_DEC, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+19026, IF_8086},
    {I_DEC, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17334, IF_8086},
    {I_DEC, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17339, IF_386},
    {I_DEC, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17344, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIV[] = {
    {I_DIV, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+19030, IF_8086},
    {I_DIV, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17349, IF_8086},
    {I_DIV, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17354, IF_386},
    {I_DIV, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17359, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVPD[] = {
    {I_DIVPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15576, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVPS[] = {
    {I_DIVPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14814, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVSD[] = {
    {I_DIVSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15582, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVSS[] = {
    {I_DIVSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14820, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_DMINT[] = {
    {I_DMINT, 0, {0,0,0,0,0}, nasm_bytecodes+19034, IF_P6|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_DO[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DPPD[] = {
    {I_DPPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+5956, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_DPPS[] = {
    {I_DPPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+5964, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_DQ[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DT[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DW[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DY[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_EMMS[] = {
    {I_EMMS, 0, {0,0,0,0,0}, nasm_bytecodes+19038, IF_PENT|IF_MMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_ENTER[] = {
    {I_ENTER, 2, {IMMEDIATE,IMMEDIATE,0,0,0}, nasm_bytecodes+17364, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_EQU[] = {
    {I_EQU, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+5778, IF_8086},
    {I_EQU, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+5778, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_EXTRACTPS[] = {
    {I_EXTRACTPS, 3, {RM_GPR|BITS32,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+1, IF_SSE41},
    {I_EXTRACTPS, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+0, IF_SSE41|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_EXTRQ[] = {
    {I_EXTRQ, 3, {XMMREG,IMMEDIATE,IMMEDIATE,0,0}, nasm_bytecodes+5924, IF_SSE4A|IF_AMD},
    {I_EXTRQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15816, IF_SSE4A|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_F2XM1[] = {
    {I_F2XM1, 0, {0,0,0,0,0}, nasm_bytecodes+19042, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FABS[] = {
    {I_FABS, 0, {0,0,0,0,0}, nasm_bytecodes+19046, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FADD[] = {
    {I_FADD, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19050, IF_8086|IF_FPU},
    {I_FADD, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19054, IF_8086|IF_FPU},
    {I_FADD, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+17369, IF_8086|IF_FPU},
    {I_FADD, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17374, IF_8086|IF_FPU},
    {I_FADD, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17369, IF_8086|IF_FPU},
    {I_FADD, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17379, IF_8086|IF_FPU},
    {I_FADD, 0, {0,0,0,0,0}, nasm_bytecodes+19058, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FADDP[] = {
    {I_FADDP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17384, IF_8086|IF_FPU},
    {I_FADDP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17384, IF_8086|IF_FPU},
    {I_FADDP, 0, {0,0,0,0,0}, nasm_bytecodes+19058, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FBLD[] = {
    {I_FBLD, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+19062, IF_8086|IF_FPU},
    {I_FBLD, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19062, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FBSTP[] = {
    {I_FBSTP, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+19066, IF_8086|IF_FPU},
    {I_FBSTP, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19066, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCHS[] = {
    {I_FCHS, 0, {0,0,0,0,0}, nasm_bytecodes+19070, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCLEX[] = {
    {I_FCLEX, 0, {0,0,0,0,0}, nasm_bytecodes+17389, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVB[] = {
    {I_FCMOVB, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17394, IF_P6|IF_FPU},
    {I_FCMOVB, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17399, IF_P6|IF_FPU},
    {I_FCMOVB, 0, {0,0,0,0,0}, nasm_bytecodes+19074, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVBE[] = {
    {I_FCMOVBE, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17404, IF_P6|IF_FPU},
    {I_FCMOVBE, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17409, IF_P6|IF_FPU},
    {I_FCMOVBE, 0, {0,0,0,0,0}, nasm_bytecodes+19078, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVE[] = {
    {I_FCMOVE, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17414, IF_P6|IF_FPU},
    {I_FCMOVE, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17419, IF_P6|IF_FPU},
    {I_FCMOVE, 0, {0,0,0,0,0}, nasm_bytecodes+19082, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNB[] = {
    {I_FCMOVNB, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17424, IF_P6|IF_FPU},
    {I_FCMOVNB, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17429, IF_P6|IF_FPU},
    {I_FCMOVNB, 0, {0,0,0,0,0}, nasm_bytecodes+19086, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNBE[] = {
    {I_FCMOVNBE, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17434, IF_P6|IF_FPU},
    {I_FCMOVNBE, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17439, IF_P6|IF_FPU},
    {I_FCMOVNBE, 0, {0,0,0,0,0}, nasm_bytecodes+19090, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNE[] = {
    {I_FCMOVNE, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17444, IF_P6|IF_FPU},
    {I_FCMOVNE, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17449, IF_P6|IF_FPU},
    {I_FCMOVNE, 0, {0,0,0,0,0}, nasm_bytecodes+19094, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNU[] = {
    {I_FCMOVNU, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17454, IF_P6|IF_FPU},
    {I_FCMOVNU, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17459, IF_P6|IF_FPU},
    {I_FCMOVNU, 0, {0,0,0,0,0}, nasm_bytecodes+19098, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVU[] = {
    {I_FCMOVU, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17464, IF_P6|IF_FPU},
    {I_FCMOVU, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17469, IF_P6|IF_FPU},
    {I_FCMOVU, 0, {0,0,0,0,0}, nasm_bytecodes+19102, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOM[] = {
    {I_FCOM, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19106, IF_8086|IF_FPU},
    {I_FCOM, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19110, IF_8086|IF_FPU},
    {I_FCOM, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17474, IF_8086|IF_FPU},
    {I_FCOM, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17479, IF_8086|IF_FPU},
    {I_FCOM, 0, {0,0,0,0,0}, nasm_bytecodes+19114, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMI[] = {
    {I_FCOMI, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17484, IF_P6|IF_FPU},
    {I_FCOMI, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17489, IF_P6|IF_FPU},
    {I_FCOMI, 0, {0,0,0,0,0}, nasm_bytecodes+19118, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMIP[] = {
    {I_FCOMIP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17494, IF_P6|IF_FPU},
    {I_FCOMIP, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17499, IF_P6|IF_FPU},
    {I_FCOMIP, 0, {0,0,0,0,0}, nasm_bytecodes+19122, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMP[] = {
    {I_FCOMP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19126, IF_8086|IF_FPU},
    {I_FCOMP, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19130, IF_8086|IF_FPU},
    {I_FCOMP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17504, IF_8086|IF_FPU},
    {I_FCOMP, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17509, IF_8086|IF_FPU},
    {I_FCOMP, 0, {0,0,0,0,0}, nasm_bytecodes+19134, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMPP[] = {
    {I_FCOMPP, 0, {0,0,0,0,0}, nasm_bytecodes+19138, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOS[] = {
    {I_FCOS, 0, {0,0,0,0,0}, nasm_bytecodes+19142, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDECSTP[] = {
    {I_FDECSTP, 0, {0,0,0,0,0}, nasm_bytecodes+19146, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDISI[] = {
    {I_FDISI, 0, {0,0,0,0,0}, nasm_bytecodes+17514, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIV[] = {
    {I_FDIV, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19150, IF_8086|IF_FPU},
    {I_FDIV, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19154, IF_8086|IF_FPU},
    {I_FDIV, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+17519, IF_8086|IF_FPU},
    {I_FDIV, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17524, IF_8086|IF_FPU},
    {I_FDIV, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17519, IF_8086|IF_FPU},
    {I_FDIV, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17529, IF_8086|IF_FPU},
    {I_FDIV, 0, {0,0,0,0,0}, nasm_bytecodes+19158, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIVP[] = {
    {I_FDIVP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17534, IF_8086|IF_FPU},
    {I_FDIVP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17534, IF_8086|IF_FPU},
    {I_FDIVP, 0, {0,0,0,0,0}, nasm_bytecodes+19158, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIVR[] = {
    {I_FDIVR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19162, IF_8086|IF_FPU},
    {I_FDIVR, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19166, IF_8086|IF_FPU},
    {I_FDIVR, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+17539, IF_8086|IF_FPU},
    {I_FDIVR, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17539, IF_8086|IF_FPU},
    {I_FDIVR, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17544, IF_8086|IF_FPU},
    {I_FDIVR, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17549, IF_8086|IF_FPU},
    {I_FDIVR, 0, {0,0,0,0,0}, nasm_bytecodes+19170, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIVRP[] = {
    {I_FDIVRP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17554, IF_8086|IF_FPU},
    {I_FDIVRP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17554, IF_8086|IF_FPU},
    {I_FDIVRP, 0, {0,0,0,0,0}, nasm_bytecodes+19170, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FEMMS[] = {
    {I_FEMMS, 0, {0,0,0,0,0}, nasm_bytecodes+19174, IF_PENT|IF_3DNOW},
    ITEMPLATE_END
};

static const struct itemplate instrux_FENI[] = {
    {I_FENI, 0, {0,0,0,0,0}, nasm_bytecodes+17559, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FFREE[] = {
    {I_FFREE, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17564, IF_8086|IF_FPU},
    {I_FFREE, 0, {0,0,0,0,0}, nasm_bytecodes+19178, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FFREEP[] = {
    {I_FFREEP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17569, IF_286|IF_FPU|IF_UNDOC},
    {I_FFREEP, 0, {0,0,0,0,0}, nasm_bytecodes+19182, IF_286|IF_FPU|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIADD[] = {
    {I_FIADD, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19186, IF_8086|IF_FPU},
    {I_FIADD, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19190, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FICOM[] = {
    {I_FICOM, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19194, IF_8086|IF_FPU},
    {I_FICOM, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19198, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FICOMP[] = {
    {I_FICOMP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19202, IF_8086|IF_FPU},
    {I_FICOMP, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19206, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIDIV[] = {
    {I_FIDIV, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19210, IF_8086|IF_FPU},
    {I_FIDIV, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19214, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIDIVR[] = {
    {I_FIDIVR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19218, IF_8086|IF_FPU},
    {I_FIDIVR, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19222, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FILD[] = {
    {I_FILD, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19226, IF_8086|IF_FPU},
    {I_FILD, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19230, IF_8086|IF_FPU},
    {I_FILD, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19234, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIMUL[] = {
    {I_FIMUL, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19238, IF_8086|IF_FPU},
    {I_FIMUL, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19242, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FINCSTP[] = {
    {I_FINCSTP, 0, {0,0,0,0,0}, nasm_bytecodes+19246, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FINIT[] = {
    {I_FINIT, 0, {0,0,0,0,0}, nasm_bytecodes+17574, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIST[] = {
    {I_FIST, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19250, IF_8086|IF_FPU},
    {I_FIST, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19254, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISTP[] = {
    {I_FISTP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19258, IF_8086|IF_FPU},
    {I_FISTP, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19262, IF_8086|IF_FPU},
    {I_FISTP, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19266, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISTTP[] = {
    {I_FISTTP, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19270, IF_PRESCOTT|IF_FPU},
    {I_FISTTP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19274, IF_PRESCOTT|IF_FPU},
    {I_FISTTP, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19278, IF_PRESCOTT|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISUB[] = {
    {I_FISUB, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19282, IF_8086|IF_FPU},
    {I_FISUB, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19286, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISUBR[] = {
    {I_FISUBR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19290, IF_8086|IF_FPU},
    {I_FISUBR, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19294, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLD[] = {
    {I_FLD, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19298, IF_8086|IF_FPU},
    {I_FLD, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19302, IF_8086|IF_FPU},
    {I_FLD, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+19306, IF_8086|IF_FPU},
    {I_FLD, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17579, IF_8086|IF_FPU},
    {I_FLD, 0, {0,0,0,0,0}, nasm_bytecodes+19310, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLD1[] = {
    {I_FLD1, 0, {0,0,0,0,0}, nasm_bytecodes+19314, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDCW[] = {
    {I_FLDCW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19318, IF_8086|IF_FPU|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDENV[] = {
    {I_FLDENV, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19322, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDL2E[] = {
    {I_FLDL2E, 0, {0,0,0,0,0}, nasm_bytecodes+19326, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDL2T[] = {
    {I_FLDL2T, 0, {0,0,0,0,0}, nasm_bytecodes+19330, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDLG2[] = {
    {I_FLDLG2, 0, {0,0,0,0,0}, nasm_bytecodes+19334, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDLN2[] = {
    {I_FLDLN2, 0, {0,0,0,0,0}, nasm_bytecodes+19338, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDPI[] = {
    {I_FLDPI, 0, {0,0,0,0,0}, nasm_bytecodes+19342, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDZ[] = {
    {I_FLDZ, 0, {0,0,0,0,0}, nasm_bytecodes+19346, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FMUL[] = {
    {I_FMUL, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19350, IF_8086|IF_FPU},
    {I_FMUL, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19354, IF_8086|IF_FPU},
    {I_FMUL, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+17584, IF_8086|IF_FPU},
    {I_FMUL, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17584, IF_8086|IF_FPU},
    {I_FMUL, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17589, IF_8086|IF_FPU},
    {I_FMUL, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17594, IF_8086|IF_FPU},
    {I_FMUL, 0, {0,0,0,0,0}, nasm_bytecodes+19358, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FMULP[] = {
    {I_FMULP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17599, IF_8086|IF_FPU},
    {I_FMULP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17599, IF_8086|IF_FPU},
    {I_FMULP, 0, {0,0,0,0,0}, nasm_bytecodes+19358, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNCLEX[] = {
    {I_FNCLEX, 0, {0,0,0,0,0}, nasm_bytecodes+17390, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNDISI[] = {
    {I_FNDISI, 0, {0,0,0,0,0}, nasm_bytecodes+17515, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNENI[] = {
    {I_FNENI, 0, {0,0,0,0,0}, nasm_bytecodes+17560, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNINIT[] = {
    {I_FNINIT, 0, {0,0,0,0,0}, nasm_bytecodes+17575, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNOP[] = {
    {I_FNOP, 0, {0,0,0,0,0}, nasm_bytecodes+19362, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSAVE[] = {
    {I_FNSAVE, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17605, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSTCW[] = {
    {I_FNSTCW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17615, IF_8086|IF_FPU|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSTENV[] = {
    {I_FNSTENV, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17620, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSTSW[] = {
    {I_FNSTSW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17630, IF_8086|IF_FPU|IF_SW},
    {I_FNSTSW, 1, {REG_AX,0,0,0,0}, nasm_bytecodes+17635, IF_286|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPATAN[] = {
    {I_FPATAN, 0, {0,0,0,0,0}, nasm_bytecodes+19366, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPREM[] = {
    {I_FPREM, 0, {0,0,0,0,0}, nasm_bytecodes+19370, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPREM1[] = {
    {I_FPREM1, 0, {0,0,0,0,0}, nasm_bytecodes+19374, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPTAN[] = {
    {I_FPTAN, 0, {0,0,0,0,0}, nasm_bytecodes+19378, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FRNDINT[] = {
    {I_FRNDINT, 0, {0,0,0,0,0}, nasm_bytecodes+19382, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FRSTOR[] = {
    {I_FRSTOR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19386, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSAVE[] = {
    {I_FSAVE, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17604, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSCALE[] = {
    {I_FSCALE, 0, {0,0,0,0,0}, nasm_bytecodes+19390, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSETPM[] = {
    {I_FSETPM, 0, {0,0,0,0,0}, nasm_bytecodes+19394, IF_286|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSIN[] = {
    {I_FSIN, 0, {0,0,0,0,0}, nasm_bytecodes+19398, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSINCOS[] = {
    {I_FSINCOS, 0, {0,0,0,0,0}, nasm_bytecodes+19402, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSQRT[] = {
    {I_FSQRT, 0, {0,0,0,0,0}, nasm_bytecodes+19406, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FST[] = {
    {I_FST, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19410, IF_8086|IF_FPU},
    {I_FST, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19414, IF_8086|IF_FPU},
    {I_FST, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17609, IF_8086|IF_FPU},
    {I_FST, 0, {0,0,0,0,0}, nasm_bytecodes+19418, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTCW[] = {
    {I_FSTCW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17614, IF_8086|IF_FPU|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTENV[] = {
    {I_FSTENV, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17619, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTP[] = {
    {I_FSTP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19422, IF_8086|IF_FPU},
    {I_FSTP, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19426, IF_8086|IF_FPU},
    {I_FSTP, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+19430, IF_8086|IF_FPU},
    {I_FSTP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17624, IF_8086|IF_FPU},
    {I_FSTP, 0, {0,0,0,0,0}, nasm_bytecodes+19434, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTSW[] = {
    {I_FSTSW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17629, IF_8086|IF_FPU|IF_SW},
    {I_FSTSW, 1, {REG_AX,0,0,0,0}, nasm_bytecodes+17634, IF_286|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUB[] = {
    {I_FSUB, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19438, IF_8086|IF_FPU},
    {I_FSUB, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19442, IF_8086|IF_FPU},
    {I_FSUB, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+17639, IF_8086|IF_FPU},
    {I_FSUB, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17639, IF_8086|IF_FPU},
    {I_FSUB, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17644, IF_8086|IF_FPU},
    {I_FSUB, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17649, IF_8086|IF_FPU},
    {I_FSUB, 0, {0,0,0,0,0}, nasm_bytecodes+19446, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUBP[] = {
    {I_FSUBP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17654, IF_8086|IF_FPU},
    {I_FSUBP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17654, IF_8086|IF_FPU},
    {I_FSUBP, 0, {0,0,0,0,0}, nasm_bytecodes+19446, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUBR[] = {
    {I_FSUBR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19450, IF_8086|IF_FPU},
    {I_FSUBR, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19454, IF_8086|IF_FPU},
    {I_FSUBR, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+17659, IF_8086|IF_FPU},
    {I_FSUBR, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17659, IF_8086|IF_FPU},
    {I_FSUBR, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17664, IF_8086|IF_FPU},
    {I_FSUBR, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17669, IF_8086|IF_FPU},
    {I_FSUBR, 0, {0,0,0,0,0}, nasm_bytecodes+19458, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUBRP[] = {
    {I_FSUBRP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17674, IF_8086|IF_FPU},
    {I_FSUBRP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17674, IF_8086|IF_FPU},
    {I_FSUBRP, 0, {0,0,0,0,0}, nasm_bytecodes+19458, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FTST[] = {
    {I_FTST, 0, {0,0,0,0,0}, nasm_bytecodes+19462, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOM[] = {
    {I_FUCOM, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17679, IF_386|IF_FPU},
    {I_FUCOM, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17684, IF_386|IF_FPU},
    {I_FUCOM, 0, {0,0,0,0,0}, nasm_bytecodes+19466, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMI[] = {
    {I_FUCOMI, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17689, IF_P6|IF_FPU},
    {I_FUCOMI, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17694, IF_P6|IF_FPU},
    {I_FUCOMI, 0, {0,0,0,0,0}, nasm_bytecodes+19470, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMIP[] = {
    {I_FUCOMIP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17699, IF_P6|IF_FPU},
    {I_FUCOMIP, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17704, IF_P6|IF_FPU},
    {I_FUCOMIP, 0, {0,0,0,0,0}, nasm_bytecodes+19474, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMP[] = {
    {I_FUCOMP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17709, IF_386|IF_FPU},
    {I_FUCOMP, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17714, IF_386|IF_FPU},
    {I_FUCOMP, 0, {0,0,0,0,0}, nasm_bytecodes+19478, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMPP[] = {
    {I_FUCOMPP, 0, {0,0,0,0,0}, nasm_bytecodes+19482, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FWAIT[] = {
    {I_FWAIT, 0, {0,0,0,0,0}, nasm_bytecodes+19468, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXAM[] = {
    {I_FXAM, 0, {0,0,0,0,0}, nasm_bytecodes+19486, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXCH[] = {
    {I_FXCH, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+17719, IF_8086|IF_FPU},
    {I_FXCH, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+17719, IF_8086|IF_FPU},
    {I_FXCH, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+17724, IF_8086|IF_FPU},
    {I_FXCH, 0, {0,0,0,0,0}, nasm_bytecodes+19490, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXRSTOR[] = {
    {I_FXRSTOR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18849, IF_P6|IF_SSE|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXSAVE[] = {
    {I_FXSAVE, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18854, IF_P6|IF_SSE|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXTRACT[] = {
    {I_FXTRACT, 0, {0,0,0,0,0}, nasm_bytecodes+19494, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FYL2X[] = {
    {I_FYL2X, 0, {0,0,0,0,0}, nasm_bytecodes+19498, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FYL2XP1[] = {
    {I_FYL2XP1, 0, {0,0,0,0,0}, nasm_bytecodes+19502, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_GETSEC[] = {
    {I_GETSEC, 0, {0,0,0,0,0}, nasm_bytecodes+19958, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_HADDPD[] = {
    {I_HADDPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15756, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_HADDPS[] = {
    {I_HADDPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15762, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP0[] = {
    {I_HINT_NOP0, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+15900, IF_P6|IF_UNDOC},
    {I_HINT_NOP0, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+15906, IF_P6|IF_UNDOC},
    {I_HINT_NOP0, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+15912, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP1[] = {
    {I_HINT_NOP1, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+15918, IF_P6|IF_UNDOC},
    {I_HINT_NOP1, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+15924, IF_P6|IF_UNDOC},
    {I_HINT_NOP1, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+15930, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP10[] = {
    {I_HINT_NOP10, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16080, IF_P6|IF_UNDOC},
    {I_HINT_NOP10, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16086, IF_P6|IF_UNDOC},
    {I_HINT_NOP10, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16092, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP11[] = {
    {I_HINT_NOP11, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16098, IF_P6|IF_UNDOC},
    {I_HINT_NOP11, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16104, IF_P6|IF_UNDOC},
    {I_HINT_NOP11, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16110, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP12[] = {
    {I_HINT_NOP12, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16116, IF_P6|IF_UNDOC},
    {I_HINT_NOP12, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16122, IF_P6|IF_UNDOC},
    {I_HINT_NOP12, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16128, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP13[] = {
    {I_HINT_NOP13, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16134, IF_P6|IF_UNDOC},
    {I_HINT_NOP13, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16140, IF_P6|IF_UNDOC},
    {I_HINT_NOP13, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16146, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP14[] = {
    {I_HINT_NOP14, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16152, IF_P6|IF_UNDOC},
    {I_HINT_NOP14, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16158, IF_P6|IF_UNDOC},
    {I_HINT_NOP14, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16164, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP15[] = {
    {I_HINT_NOP15, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16170, IF_P6|IF_UNDOC},
    {I_HINT_NOP15, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16176, IF_P6|IF_UNDOC},
    {I_HINT_NOP15, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16182, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP16[] = {
    {I_HINT_NOP16, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16188, IF_P6|IF_UNDOC},
    {I_HINT_NOP16, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16194, IF_P6|IF_UNDOC},
    {I_HINT_NOP16, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16200, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP17[] = {
    {I_HINT_NOP17, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16206, IF_P6|IF_UNDOC},
    {I_HINT_NOP17, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16212, IF_P6|IF_UNDOC},
    {I_HINT_NOP17, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16218, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP18[] = {
    {I_HINT_NOP18, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16224, IF_P6|IF_UNDOC},
    {I_HINT_NOP18, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16230, IF_P6|IF_UNDOC},
    {I_HINT_NOP18, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16236, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP19[] = {
    {I_HINT_NOP19, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16242, IF_P6|IF_UNDOC},
    {I_HINT_NOP19, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16248, IF_P6|IF_UNDOC},
    {I_HINT_NOP19, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16254, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP2[] = {
    {I_HINT_NOP2, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+15936, IF_P6|IF_UNDOC},
    {I_HINT_NOP2, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+15942, IF_P6|IF_UNDOC},
    {I_HINT_NOP2, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+15948, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP20[] = {
    {I_HINT_NOP20, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16260, IF_P6|IF_UNDOC},
    {I_HINT_NOP20, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16266, IF_P6|IF_UNDOC},
    {I_HINT_NOP20, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16272, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP21[] = {
    {I_HINT_NOP21, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16278, IF_P6|IF_UNDOC},
    {I_HINT_NOP21, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16284, IF_P6|IF_UNDOC},
    {I_HINT_NOP21, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16290, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP22[] = {
    {I_HINT_NOP22, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16296, IF_P6|IF_UNDOC},
    {I_HINT_NOP22, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16302, IF_P6|IF_UNDOC},
    {I_HINT_NOP22, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16308, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP23[] = {
    {I_HINT_NOP23, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16314, IF_P6|IF_UNDOC},
    {I_HINT_NOP23, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16320, IF_P6|IF_UNDOC},
    {I_HINT_NOP23, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16326, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP24[] = {
    {I_HINT_NOP24, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16332, IF_P6|IF_UNDOC},
    {I_HINT_NOP24, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16338, IF_P6|IF_UNDOC},
    {I_HINT_NOP24, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16344, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP25[] = {
    {I_HINT_NOP25, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16350, IF_P6|IF_UNDOC},
    {I_HINT_NOP25, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16356, IF_P6|IF_UNDOC},
    {I_HINT_NOP25, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16362, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP26[] = {
    {I_HINT_NOP26, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16368, IF_P6|IF_UNDOC},
    {I_HINT_NOP26, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16374, IF_P6|IF_UNDOC},
    {I_HINT_NOP26, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16380, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP27[] = {
    {I_HINT_NOP27, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16386, IF_P6|IF_UNDOC},
    {I_HINT_NOP27, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16392, IF_P6|IF_UNDOC},
    {I_HINT_NOP27, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16398, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP28[] = {
    {I_HINT_NOP28, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16404, IF_P6|IF_UNDOC},
    {I_HINT_NOP28, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16410, IF_P6|IF_UNDOC},
    {I_HINT_NOP28, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16416, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP29[] = {
    {I_HINT_NOP29, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16422, IF_P6|IF_UNDOC},
    {I_HINT_NOP29, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16428, IF_P6|IF_UNDOC},
    {I_HINT_NOP29, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16434, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP3[] = {
    {I_HINT_NOP3, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+15954, IF_P6|IF_UNDOC},
    {I_HINT_NOP3, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+15960, IF_P6|IF_UNDOC},
    {I_HINT_NOP3, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+15966, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP30[] = {
    {I_HINT_NOP30, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16440, IF_P6|IF_UNDOC},
    {I_HINT_NOP30, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16446, IF_P6|IF_UNDOC},
    {I_HINT_NOP30, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16452, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP31[] = {
    {I_HINT_NOP31, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16458, IF_P6|IF_UNDOC},
    {I_HINT_NOP31, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16464, IF_P6|IF_UNDOC},
    {I_HINT_NOP31, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16470, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP32[] = {
    {I_HINT_NOP32, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16476, IF_P6|IF_UNDOC},
    {I_HINT_NOP32, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16482, IF_P6|IF_UNDOC},
    {I_HINT_NOP32, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16488, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP33[] = {
    {I_HINT_NOP33, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16494, IF_P6|IF_UNDOC},
    {I_HINT_NOP33, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16500, IF_P6|IF_UNDOC},
    {I_HINT_NOP33, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16506, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP34[] = {
    {I_HINT_NOP34, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16512, IF_P6|IF_UNDOC},
    {I_HINT_NOP34, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16518, IF_P6|IF_UNDOC},
    {I_HINT_NOP34, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16524, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP35[] = {
    {I_HINT_NOP35, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16530, IF_P6|IF_UNDOC},
    {I_HINT_NOP35, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16536, IF_P6|IF_UNDOC},
    {I_HINT_NOP35, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16542, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP36[] = {
    {I_HINT_NOP36, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16548, IF_P6|IF_UNDOC},
    {I_HINT_NOP36, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16554, IF_P6|IF_UNDOC},
    {I_HINT_NOP36, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16560, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP37[] = {
    {I_HINT_NOP37, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16566, IF_P6|IF_UNDOC},
    {I_HINT_NOP37, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16572, IF_P6|IF_UNDOC},
    {I_HINT_NOP37, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16578, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP38[] = {
    {I_HINT_NOP38, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16584, IF_P6|IF_UNDOC},
    {I_HINT_NOP38, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16590, IF_P6|IF_UNDOC},
    {I_HINT_NOP38, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16596, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP39[] = {
    {I_HINT_NOP39, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16602, IF_P6|IF_UNDOC},
    {I_HINT_NOP39, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16608, IF_P6|IF_UNDOC},
    {I_HINT_NOP39, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16614, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP4[] = {
    {I_HINT_NOP4, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+15972, IF_P6|IF_UNDOC},
    {I_HINT_NOP4, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+15978, IF_P6|IF_UNDOC},
    {I_HINT_NOP4, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+15984, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP40[] = {
    {I_HINT_NOP40, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16620, IF_P6|IF_UNDOC},
    {I_HINT_NOP40, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16626, IF_P6|IF_UNDOC},
    {I_HINT_NOP40, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16632, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP41[] = {
    {I_HINT_NOP41, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16638, IF_P6|IF_UNDOC},
    {I_HINT_NOP41, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16644, IF_P6|IF_UNDOC},
    {I_HINT_NOP41, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16650, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP42[] = {
    {I_HINT_NOP42, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16656, IF_P6|IF_UNDOC},
    {I_HINT_NOP42, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16662, IF_P6|IF_UNDOC},
    {I_HINT_NOP42, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16668, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP43[] = {
    {I_HINT_NOP43, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16674, IF_P6|IF_UNDOC},
    {I_HINT_NOP43, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16680, IF_P6|IF_UNDOC},
    {I_HINT_NOP43, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16686, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP44[] = {
    {I_HINT_NOP44, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16692, IF_P6|IF_UNDOC},
    {I_HINT_NOP44, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16698, IF_P6|IF_UNDOC},
    {I_HINT_NOP44, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16704, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP45[] = {
    {I_HINT_NOP45, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16710, IF_P6|IF_UNDOC},
    {I_HINT_NOP45, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16716, IF_P6|IF_UNDOC},
    {I_HINT_NOP45, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16722, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP46[] = {
    {I_HINT_NOP46, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16728, IF_P6|IF_UNDOC},
    {I_HINT_NOP46, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16734, IF_P6|IF_UNDOC},
    {I_HINT_NOP46, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16740, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP47[] = {
    {I_HINT_NOP47, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16746, IF_P6|IF_UNDOC},
    {I_HINT_NOP47, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16752, IF_P6|IF_UNDOC},
    {I_HINT_NOP47, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16758, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP48[] = {
    {I_HINT_NOP48, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16764, IF_P6|IF_UNDOC},
    {I_HINT_NOP48, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16770, IF_P6|IF_UNDOC},
    {I_HINT_NOP48, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16776, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP49[] = {
    {I_HINT_NOP49, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16782, IF_P6|IF_UNDOC},
    {I_HINT_NOP49, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16788, IF_P6|IF_UNDOC},
    {I_HINT_NOP49, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16794, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP5[] = {
    {I_HINT_NOP5, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+15990, IF_P6|IF_UNDOC},
    {I_HINT_NOP5, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+15996, IF_P6|IF_UNDOC},
    {I_HINT_NOP5, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16002, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP50[] = {
    {I_HINT_NOP50, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16800, IF_P6|IF_UNDOC},
    {I_HINT_NOP50, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16806, IF_P6|IF_UNDOC},
    {I_HINT_NOP50, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16812, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP51[] = {
    {I_HINT_NOP51, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16818, IF_P6|IF_UNDOC},
    {I_HINT_NOP51, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16824, IF_P6|IF_UNDOC},
    {I_HINT_NOP51, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16830, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP52[] = {
    {I_HINT_NOP52, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16836, IF_P6|IF_UNDOC},
    {I_HINT_NOP52, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16842, IF_P6|IF_UNDOC},
    {I_HINT_NOP52, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16848, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP53[] = {
    {I_HINT_NOP53, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16854, IF_P6|IF_UNDOC},
    {I_HINT_NOP53, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16860, IF_P6|IF_UNDOC},
    {I_HINT_NOP53, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16866, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP54[] = {
    {I_HINT_NOP54, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16872, IF_P6|IF_UNDOC},
    {I_HINT_NOP54, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16878, IF_P6|IF_UNDOC},
    {I_HINT_NOP54, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16884, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP55[] = {
    {I_HINT_NOP55, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16890, IF_P6|IF_UNDOC},
    {I_HINT_NOP55, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16896, IF_P6|IF_UNDOC},
    {I_HINT_NOP55, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16902, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP56[] = {
    {I_HINT_NOP56, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+14274, IF_P6|IF_UNDOC},
    {I_HINT_NOP56, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+14280, IF_P6|IF_UNDOC},
    {I_HINT_NOP56, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+14286, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP57[] = {
    {I_HINT_NOP57, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16908, IF_P6|IF_UNDOC},
    {I_HINT_NOP57, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16914, IF_P6|IF_UNDOC},
    {I_HINT_NOP57, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16920, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP58[] = {
    {I_HINT_NOP58, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16926, IF_P6|IF_UNDOC},
    {I_HINT_NOP58, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16932, IF_P6|IF_UNDOC},
    {I_HINT_NOP58, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16938, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP59[] = {
    {I_HINT_NOP59, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16944, IF_P6|IF_UNDOC},
    {I_HINT_NOP59, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16950, IF_P6|IF_UNDOC},
    {I_HINT_NOP59, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16956, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP6[] = {
    {I_HINT_NOP6, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16008, IF_P6|IF_UNDOC},
    {I_HINT_NOP6, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16014, IF_P6|IF_UNDOC},
    {I_HINT_NOP6, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16020, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP60[] = {
    {I_HINT_NOP60, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16962, IF_P6|IF_UNDOC},
    {I_HINT_NOP60, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16968, IF_P6|IF_UNDOC},
    {I_HINT_NOP60, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16974, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP61[] = {
    {I_HINT_NOP61, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16980, IF_P6|IF_UNDOC},
    {I_HINT_NOP61, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16986, IF_P6|IF_UNDOC},
    {I_HINT_NOP61, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16992, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP62[] = {
    {I_HINT_NOP62, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16998, IF_P6|IF_UNDOC},
    {I_HINT_NOP62, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17004, IF_P6|IF_UNDOC},
    {I_HINT_NOP62, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17010, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP63[] = {
    {I_HINT_NOP63, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17016, IF_P6|IF_UNDOC},
    {I_HINT_NOP63, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17022, IF_P6|IF_UNDOC},
    {I_HINT_NOP63, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17028, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP7[] = {
    {I_HINT_NOP7, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16026, IF_P6|IF_UNDOC},
    {I_HINT_NOP7, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16032, IF_P6|IF_UNDOC},
    {I_HINT_NOP7, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16038, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP8[] = {
    {I_HINT_NOP8, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16044, IF_P6|IF_UNDOC},
    {I_HINT_NOP8, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16050, IF_P6|IF_UNDOC},
    {I_HINT_NOP8, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16056, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP9[] = {
    {I_HINT_NOP9, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16062, IF_P6|IF_UNDOC},
    {I_HINT_NOP9, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16068, IF_P6|IF_UNDOC},
    {I_HINT_NOP9, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16074, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HLT[] = {
    {I_HLT, 0, {0,0,0,0,0}, nasm_bytecodes+19983, IF_8086|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_HSUBPD[] = {
    {I_HSUBPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15768, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_HSUBPS[] = {
    {I_HSUBPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15774, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_IBTS[] = {
    {I_IBTS, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13854, IF_386|IF_SW|IF_UNDOC},
    {I_IBTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13854, IF_386|IF_UNDOC},
    {I_IBTS, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13860, IF_386|IF_SD|IF_UNDOC},
    {I_IBTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13860, IF_386|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_ICEBP[] = {
    {I_ICEBP, 0, {0,0,0,0,0}, nasm_bytecodes+19986, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_IDIV[] = {
    {I_IDIV, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+19506, IF_8086},
    {I_IDIV, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17729, IF_8086},
    {I_IDIV, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17734, IF_386},
    {I_IDIV, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17739, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_IMUL[] = {
    {I_IMUL, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+19510, IF_8086},
    {I_IMUL, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17744, IF_8086},
    {I_IMUL, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17749, IF_386},
    {I_IMUL, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17754, IF_X64},
    {I_IMUL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+13872, IF_386|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+13872, IF_386},
    {I_IMUL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+13878, IF_386|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+13878, IF_386},
    {I_IMUL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+13884, IF_X64|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+13884, IF_X64},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+13890, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,SBYTE16,0,0}, nasm_bytecodes+13890, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS16,0,0}, nasm_bytecodes+13896, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+13902, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+13890, IF_186},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,SBYTE16,0,0}, nasm_bytecodes+13890, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS16,0,0}, nasm_bytecodes+13896, IF_186},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+13902, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+13908, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,SBYTE32,0,0}, nasm_bytecodes+13908, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+13914, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+13920, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+13908, IF_386},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,SBYTE32,0,0}, nasm_bytecodes+13908, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+13914, IF_386},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+13920, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+13926, IF_X64|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,SBYTE64,0,0}, nasm_bytecodes+13926, IF_X64|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+13932, IF_X64|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+13938, IF_X64|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+13926, IF_X64},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,SBYTE64,0,0}, nasm_bytecodes+13926, IF_X64|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+13932, IF_X64},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+13938, IF_X64|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13944, IF_186},
    {I_IMUL, 2, {REG_GPR|BITS16,SBYTE16,0,0,0}, nasm_bytecodes+13944, IF_186|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+13950, IF_186},
    {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+13956, IF_186|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13962, IF_386},
    {I_IMUL, 2, {REG_GPR|BITS32,SBYTE32,0,0,0}, nasm_bytecodes+13962, IF_386|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+13968, IF_386},
    {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+13974, IF_386|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+13980, IF_X64},
    {I_IMUL, 2, {REG_GPR|BITS64,SBYTE64,0,0,0}, nasm_bytecodes+13980, IF_X64|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+13986, IF_X64},
    {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+13992, IF_X64|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_IN[] = {
    {I_IN, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+19514, IF_8086|IF_SB},
    {I_IN, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+17759, IF_8086|IF_SB},
    {I_IN, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+17764, IF_386|IF_SB},
    {I_IN, 2, {REG_AL,REG_DX,0,0,0}, nasm_bytecodes+19989, IF_8086},
    {I_IN, 2, {REG_AX,REG_DX,0,0,0}, nasm_bytecodes+19518, IF_8086},
    {I_IN, 2, {REG_EAX,REG_DX,0,0,0}, nasm_bytecodes+19522, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_INC[] = {
    {I_INC, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19526, IF_8086|IF_NOLONG},
    {I_INC, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19530, IF_386|IF_NOLONG},
    {I_INC, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+19534, IF_8086},
    {I_INC, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17769, IF_8086},
    {I_INC, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17774, IF_386},
    {I_INC, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17779, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_INCBIN[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_INSB[] = {
    {I_INSB, 0, {0,0,0,0,0}, nasm_bytecodes+19992, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSD[] = {
    {I_INSD, 0, {0,0,0,0,0}, nasm_bytecodes+19538, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSERTPS[] = {
    {I_INSERTPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+5972, IF_SSE41|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSERTQ[] = {
    {I_INSERTQ, 4, {XMMREG,XMMREG,IMMEDIATE,IMMEDIATE,0}, nasm_bytecodes+5932, IF_SSE4A|IF_AMD},
    {I_INSERTQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15822, IF_SSE4A|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSW[] = {
    {I_INSW, 0, {0,0,0,0,0}, nasm_bytecodes+19542, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT[] = {
    {I_INT, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19546, IF_8086|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT01[] = {
    {I_INT01, 0, {0,0,0,0,0}, nasm_bytecodes+19986, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT03[] = {
    {I_INT03, 0, {0,0,0,0,0}, nasm_bytecodes+19995, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT1[] = {
    {I_INT1, 0, {0,0,0,0,0}, nasm_bytecodes+19986, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT3[] = {
    {I_INT3, 0, {0,0,0,0,0}, nasm_bytecodes+19995, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_INTO[] = {
    {I_INTO, 0, {0,0,0,0,0}, nasm_bytecodes+19998, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVD[] = {
    {I_INVD, 0, {0,0,0,0,0}, nasm_bytecodes+19550, IF_486|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVEPT[] = {
    {I_INVEPT, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+5893, IF_VMX|IF_SO|IF_NOLONG},
    {I_INVEPT, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+5892, IF_VMX|IF_SO|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVLPG[] = {
    {I_INVLPG, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17784, IF_486|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVLPGA[] = {
    {I_INVLPGA, 2, {REG_AX,REG_ECX,0,0,0}, nasm_bytecodes+13998, IF_X86_64|IF_AMD|IF_NOLONG},
    {I_INVLPGA, 2, {REG_EAX,REG_ECX,0,0,0}, nasm_bytecodes+14004, IF_X86_64|IF_AMD},
    {I_INVLPGA, 2, {REG_RAX,REG_ECX,0,0,0}, nasm_bytecodes+7320, IF_X64|IF_AMD},
    {I_INVLPGA, 0, {0,0,0,0,0}, nasm_bytecodes+14005, IF_X86_64|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVVPID[] = {
    {I_INVVPID, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+5901, IF_VMX|IF_SO|IF_NOLONG},
    {I_INVVPID, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+5900, IF_VMX|IF_SO|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRET[] = {
    {I_IRET, 0, {0,0,0,0,0}, nasm_bytecodes+19554, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRETD[] = {
    {I_IRETD, 0, {0,0,0,0,0}, nasm_bytecodes+19558, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRETQ[] = {
    {I_IRETQ, 0, {0,0,0,0,0}, nasm_bytecodes+19562, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRETW[] = {
    {I_IRETW, 0, {0,0,0,0,0}, nasm_bytecodes+19566, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_JCXZ[] = {
    {I_JCXZ, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+17789, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_JECXZ[] = {
    {I_JECXZ, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+17794, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_JMP[] = {
    {I_JMP, 1, {IMMEDIATE|SHORT,0,0,0,0}, nasm_bytecodes+17805, IF_8086},
    {I_JMP, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+17804, IF_8086},
    {I_JMP, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+17809, IF_8086},
    {I_JMP, 1, {IMMEDIATE|NEAR,0,0,0,0}, nasm_bytecodes+17809, IF_8086},
    {I_JMP, 1, {IMMEDIATE|FAR,0,0,0,0}, nasm_bytecodes+14010, IF_8086|IF_NOLONG},
    {I_JMP, 1, {IMMEDIATE|BITS16,0,0,0,0}, nasm_bytecodes+17814, IF_8086},
    {I_JMP, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, nasm_bytecodes+17814, IF_8086},
    {I_JMP, 1, {IMMEDIATE|BITS16|FAR,0,0,0,0}, nasm_bytecodes+14016, IF_8086|IF_NOLONG},
    {I_JMP, 1, {IMMEDIATE|BITS32,0,0,0,0}, nasm_bytecodes+17819, IF_386},
    {I_JMP, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, nasm_bytecodes+17819, IF_386},
    {I_JMP, 1, {IMMEDIATE|BITS32|FAR,0,0,0,0}, nasm_bytecodes+14022, IF_386|IF_NOLONG},
    {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+14028, IF_8086|IF_NOLONG},
    {I_JMP, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+14034, IF_8086|IF_NOLONG},
    {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+14034, IF_8086|IF_NOLONG},
    {I_JMP, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+14040, IF_386|IF_NOLONG},
    {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+14040, IF_386|IF_NOLONG},
    {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, nasm_bytecodes+17824, IF_8086|IF_NOLONG},
    {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, nasm_bytecodes+17829, IF_X64},
    {I_JMP, 1, {MEMORY|BITS16|FAR,0,0,0,0}, nasm_bytecodes+17834, IF_8086},
    {I_JMP, 1, {MEMORY|BITS32|FAR,0,0,0,0}, nasm_bytecodes+17839, IF_386},
    {I_JMP, 1, {MEMORY|BITS64|FAR,0,0,0,0}, nasm_bytecodes+17829, IF_X64},
    {I_JMP, 1, {MEMORY|NEAR,0,0,0,0}, nasm_bytecodes+17844, IF_8086},
    {I_JMP, 1, {MEMORY|BITS16|NEAR,0,0,0,0}, nasm_bytecodes+17849, IF_8086},
    {I_JMP, 1, {MEMORY|BITS32|NEAR,0,0,0,0}, nasm_bytecodes+17854, IF_386|IF_NOLONG},
    {I_JMP, 1, {MEMORY|BITS64|NEAR,0,0,0,0}, nasm_bytecodes+17859, IF_X64},
    {I_JMP, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17849, IF_8086},
    {I_JMP, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17854, IF_386|IF_NOLONG},
    {I_JMP, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17859, IF_X64},
    {I_JMP, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17844, IF_8086},
    {I_JMP, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+17849, IF_8086},
    {I_JMP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+17854, IF_386|IF_NOLONG},
    {I_JMP, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+17859, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_JMPE[] = {
    {I_JMPE, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+14046, IF_IA64},
    {I_JMPE, 1, {IMMEDIATE|BITS16,0,0,0,0}, nasm_bytecodes+14052, IF_IA64},
    {I_JMPE, 1, {IMMEDIATE|BITS32,0,0,0,0}, nasm_bytecodes+14058, IF_IA64},
    {I_JMPE, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+14064, IF_IA64},
    {I_JMPE, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+14070, IF_IA64},
    ITEMPLATE_END
};

static const struct itemplate instrux_JRCXZ[] = {
    {I_JRCXZ, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+17799, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LAHF[] = {
    {I_LAHF, 0, {0,0,0,0,0}, nasm_bytecodes+20001, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_LAR[] = {
    {I_LAR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+14076, IF_286|IF_PROT|IF_SW},
    {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+14076, IF_286|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14076, IF_386|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7327, IF_X64|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+14082, IF_386|IF_PROT|IF_SW},
    {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+14082, IF_386|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14082, IF_386|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7334, IF_X64|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+14088, IF_X64|IF_PROT|IF_SW},
    {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+14088, IF_X64|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14088, IF_X64|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+14088, IF_X64|IF_PROT},
    ITEMPLATE_END
};

static const struct itemplate instrux_LDDQU[] = {
    {I_LDDQU, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+15780, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_LDMXCSR[] = {
    {I_LDMXCSR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18839, IF_KATMAI|IF_SSE|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_LDS[] = {
    {I_LDS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+17864, IF_8086|IF_NOLONG},
    {I_LDS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+17869, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_LEA[] = {
    {I_LEA, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+17874, IF_8086},
    {I_LEA, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+17879, IF_386},
    {I_LEA, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+17884, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LEAVE[] = {
    {I_LEAVE, 0, {0,0,0,0,0}, nasm_bytecodes+18121, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_LES[] = {
    {I_LES, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+17889, IF_8086|IF_NOLONG},
    {I_LES, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+17894, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_LFENCE[] = {
    {I_LFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+17899, IF_X64|IF_AMD},
    {I_LFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+17899, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_LFS[] = {
    {I_LFS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+14094, IF_386},
    {I_LFS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+14100, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_LGDT[] = {
    {I_LGDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17904, IF_286|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_LGS[] = {
    {I_LGS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+14106, IF_386},
    {I_LGS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+14112, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_LIDT[] = {
    {I_LIDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17909, IF_286|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_LLDT[] = {
    {I_LLDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17914, IF_286|IF_PROT|IF_PRIV},
    {I_LLDT, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+17914, IF_286|IF_PROT|IF_PRIV},
    {I_LLDT, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17914, IF_286|IF_PROT|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_LLWPCB[] = {
    {I_LLWPCB, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+12864, IF_AMD},
    {I_LLWPCB, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+12871, IF_AMD|IF_386},
    {I_LLWPCB, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+12878, IF_AMD|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LMSW[] = {
    {I_LMSW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17919, IF_286|IF_PRIV},
    {I_LMSW, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+17919, IF_286|IF_PRIV},
    {I_LMSW, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17919, IF_286|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOADALL[] = {
    {I_LOADALL, 0, {0,0,0,0,0}, nasm_bytecodes+19570, IF_386|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOADALL286[] = {
    {I_LOADALL286, 0, {0,0,0,0,0}, nasm_bytecodes+19574, IF_286|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSB[] = {
    {I_LODSB, 0, {0,0,0,0,0}, nasm_bytecodes+20004, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSD[] = {
    {I_LODSD, 0, {0,0,0,0,0}, nasm_bytecodes+19578, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSQ[] = {
    {I_LODSQ, 0, {0,0,0,0,0}, nasm_bytecodes+19582, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSW[] = {
    {I_LODSW, 0, {0,0,0,0,0}, nasm_bytecodes+19586, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOP[] = {
    {I_LOOP, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+17924, IF_8086},
    {I_LOOP, 2, {IMMEDIATE,REG_CX,0,0,0}, nasm_bytecodes+17929, IF_8086|IF_NOLONG},
    {I_LOOP, 2, {IMMEDIATE,REG_ECX,0,0,0}, nasm_bytecodes+17934, IF_386},
    {I_LOOP, 2, {IMMEDIATE,REG_RCX,0,0,0}, nasm_bytecodes+17939, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPE[] = {
    {I_LOOPE, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+17944, IF_8086},
    {I_LOOPE, 2, {IMMEDIATE,REG_CX,0,0,0}, nasm_bytecodes+17949, IF_8086|IF_NOLONG},
    {I_LOOPE, 2, {IMMEDIATE,REG_ECX,0,0,0}, nasm_bytecodes+17954, IF_386},
    {I_LOOPE, 2, {IMMEDIATE,REG_RCX,0,0,0}, nasm_bytecodes+17959, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPNE[] = {
    {I_LOOPNE, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+17964, IF_8086},
    {I_LOOPNE, 2, {IMMEDIATE,REG_CX,0,0,0}, nasm_bytecodes+17969, IF_8086|IF_NOLONG},
    {I_LOOPNE, 2, {IMMEDIATE,REG_ECX,0,0,0}, nasm_bytecodes+17974, IF_386},
    {I_LOOPNE, 2, {IMMEDIATE,REG_RCX,0,0,0}, nasm_bytecodes+17979, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPNZ[] = {
    {I_LOOPNZ, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+17964, IF_8086},
    {I_LOOPNZ, 2, {IMMEDIATE,REG_CX,0,0,0}, nasm_bytecodes+17969, IF_8086|IF_NOLONG},
    {I_LOOPNZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, nasm_bytecodes+17974, IF_386},
    {I_LOOPNZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, nasm_bytecodes+17979, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPZ[] = {
    {I_LOOPZ, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+17944, IF_8086},
    {I_LOOPZ, 2, {IMMEDIATE,REG_CX,0,0,0}, nasm_bytecodes+17949, IF_8086|IF_NOLONG},
    {I_LOOPZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, nasm_bytecodes+17954, IF_386},
    {I_LOOPZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, nasm_bytecodes+17959, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LSL[] = {
    {I_LSL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+14118, IF_286|IF_PROT|IF_SW},
    {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+14118, IF_286|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14118, IF_386|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7341, IF_X64|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+14124, IF_386|IF_PROT|IF_SW},
    {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+14124, IF_386|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14124, IF_386|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7348, IF_X64|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+14130, IF_X64|IF_PROT|IF_SW},
    {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+14130, IF_X64|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14130, IF_X64|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+14130, IF_X64|IF_PROT},
    ITEMPLATE_END
};

static const struct itemplate instrux_LSS[] = {
    {I_LSS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+14136, IF_386},
    {I_LSS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+14142, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_LTR[] = {
    {I_LTR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17984, IF_286|IF_PROT|IF_PRIV},
    {I_LTR, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+17984, IF_286|IF_PROT|IF_PRIV},
    {I_LTR, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17984, IF_286|IF_PROT|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_LWPINS[] = {
    {I_LWPINS, 3, {REG_GPR|BITS16,RM_GPR|BITS32,IMMEDIATE|BITS16,0,0}, nasm_bytecodes+6956, IF_AMD|IF_386},
    {I_LWPINS, 3, {REG_GPR|BITS32,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+6964, IF_AMD|IF_386},
    {I_LWPINS, 3, {REG_GPR|BITS64,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+6972, IF_AMD|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LWPVAL[] = {
    {I_LWPVAL, 3, {REG_GPR|BITS16,RM_GPR|BITS32,IMMEDIATE|BITS16,0,0}, nasm_bytecodes+6932, IF_AMD|IF_386},
    {I_LWPVAL, 3, {REG_GPR|BITS32,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+6940, IF_AMD|IF_386},
    {I_LWPVAL, 3, {REG_GPR|BITS64,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+6948, IF_AMD|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LZCNT[] = {
    {I_LZCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+8412, IF_P6|IF_AMD},
    {I_LZCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+8419, IF_P6|IF_AMD},
    {I_LZCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+8426, IF_X64|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_MASKMOVDQU[] = {
    {I_MASKMOVDQU, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15048, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MASKMOVQ[] = {
    {I_MASKMOVQ, 2, {MMXREG,MMXREG,0,0,0}, nasm_bytecodes+15030, IF_KATMAI|IF_MMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXPD[] = {
    {I_MAXPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15588, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXPS[] = {
    {I_MAXPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14826, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXSD[] = {
    {I_MAXSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15594, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXSS[] = {
    {I_MAXSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14832, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MFENCE[] = {
    {I_MFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+17989, IF_X64|IF_AMD},
    {I_MFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+17989, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINPD[] = {
    {I_MINPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15600, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINPS[] = {
    {I_MINPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14838, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINSD[] = {
    {I_MINSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15606, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINSS[] = {
    {I_MINSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14844, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MONITOR[] = {
    {I_MONITOR, 0, {0,0,0,0,0}, nasm_bytecodes+17994, IF_PRESCOTT},
    {I_MONITOR, 3, {REG_EAX,REG_ECX,REG_EDX,0,0}, nasm_bytecodes+17994, IF_PRESCOTT},
    {I_MONITOR, 3, {REG_RAX,REG_ECX,REG_EDX,0,0}, nasm_bytecodes+17994, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MONTMUL[] = {
    {I_MONTMUL, 0, {0,0,0,0,0}, nasm_bytecodes+15882, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOV[] = {
    {I_MOV, 2, {MEMORY,REG_SREG,0,0,0}, nasm_bytecodes+18005, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS16,REG_SREG,0,0,0}, nasm_bytecodes+17999, IF_8086},
    {I_MOV, 2, {REG_GPR|BITS32,REG_SREG,0,0,0}, nasm_bytecodes+18004, IF_386},
    {I_MOV, 2, {REG_SREG,MEMORY,0,0,0}, nasm_bytecodes+19590, IF_8086|IF_SM},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+19590, IF_8086},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+19590, IF_386},
    {I_MOV, 2, {REG_AL,MEM_OFFS,0,0,0}, nasm_bytecodes+19594, IF_8086|IF_SM},
    {I_MOV, 2, {REG_AX,MEM_OFFS,0,0,0}, nasm_bytecodes+18009, IF_8086|IF_SM},
    {I_MOV, 2, {REG_EAX,MEM_OFFS,0,0,0}, nasm_bytecodes+18014, IF_386|IF_SM},
    {I_MOV, 2, {REG_RAX,MEM_OFFS,0,0,0}, nasm_bytecodes+18019, IF_X64|IF_SM},
    {I_MOV, 2, {MEM_OFFS,REG_AL,0,0,0}, nasm_bytecodes+19598, IF_8086|IF_SM},
    {I_MOV, 2, {MEM_OFFS,REG_AX,0,0,0}, nasm_bytecodes+18024, IF_8086|IF_SM},
    {I_MOV, 2, {MEM_OFFS,REG_EAX,0,0,0}, nasm_bytecodes+18029, IF_386|IF_SM},
    {I_MOV, 2, {MEM_OFFS,REG_RAX,0,0,0}, nasm_bytecodes+18034, IF_X64|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS32,REG_CREG,0,0,0}, nasm_bytecodes+14148, IF_386|IF_PRIV|IF_NOLONG},
    {I_MOV, 2, {REG_GPR|BITS64,REG_CREG,0,0,0}, nasm_bytecodes+14154, IF_X64|IF_PRIV},
    {I_MOV, 2, {REG_CREG,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14160, IF_386|IF_PRIV|IF_NOLONG},
    {I_MOV, 2, {REG_CREG,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+14166, IF_X64|IF_PRIV},
    {I_MOV, 2, {REG_GPR|BITS32,REG_DREG,0,0,0}, nasm_bytecodes+14173, IF_386|IF_PRIV|IF_NOLONG},
    {I_MOV, 2, {REG_GPR|BITS64,REG_DREG,0,0,0}, nasm_bytecodes+14172, IF_X64|IF_PRIV},
    {I_MOV, 2, {REG_DREG,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14179, IF_386|IF_PRIV|IF_NOLONG},
    {I_MOV, 2, {REG_DREG,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+14178, IF_X64|IF_PRIV},
    {I_MOV, 2, {REG_GPR|BITS32,REG_TREG,0,0,0}, nasm_bytecodes+18039, IF_386|IF_NOLONG},
    {I_MOV, 2, {REG_TREG,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18044, IF_386|IF_NOLONG},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19602, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19602, IF_8086},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18049, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18049, IF_8086},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18054, IF_386|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18054, IF_386},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18059, IF_X64|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18059, IF_X64},
    {I_MOV, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+19606, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19606, IF_8086},
    {I_MOV, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+18064, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18064, IF_8086},
    {I_MOV, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+18069, IF_386|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18069, IF_386},
    {I_MOV, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+18074, IF_X64|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18074, IF_X64},
    {I_MOV, 2, {REG_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+19610, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+18079, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+18084, IF_386|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+18089, IF_X64|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+14184, IF_X64},
    {I_MOV, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18094, IF_8086|IF_SM},
    {I_MOV, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14190, IF_8086|IF_SM},
    {I_MOV, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14196, IF_386|IF_SM},
    {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14184, IF_X64|IF_SM},
    {I_MOV, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+18094, IF_8086|IF_SM},
    {I_MOV, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+14190, IF_8086|IF_SM},
    {I_MOV, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+14196, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVAPD[] = {
    {I_MOVAPD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15612, IF_WILLAMETTE|IF_SSE2},
    {I_MOVAPD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15618, IF_WILLAMETTE|IF_SSE2},
    {I_MOVAPD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15618, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVAPD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+15612, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVAPS[] = {
    {I_MOVAPS, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+14850, IF_KATMAI|IF_SSE},
    {I_MOVAPS, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+14856, IF_KATMAI|IF_SSE},
    {I_MOVAPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14850, IF_KATMAI|IF_SSE},
    {I_MOVAPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14856, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVBE[] = {
    {I_MOVBE, 2, {REG_GPR|BITS16,MEMORY|BITS16,0,0,0}, nasm_bytecodes+8671, IF_NEHALEM|IF_SM},
    {I_MOVBE, 2, {REG_GPR|BITS32,MEMORY|BITS32,0,0,0}, nasm_bytecodes+8678, IF_NEHALEM|IF_SM},
    {I_MOVBE, 2, {REG_GPR|BITS64,MEMORY|BITS64,0,0,0}, nasm_bytecodes+8685, IF_NEHALEM|IF_SM},
    {I_MOVBE, 2, {MEMORY|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+8692, IF_NEHALEM|IF_SM},
    {I_MOVBE, 2, {MEMORY|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+8699, IF_NEHALEM|IF_SM},
    {I_MOVBE, 2, {MEMORY|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+8706, IF_NEHALEM|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVD[] = {
    {I_MOVD, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+14202, IF_PENT|IF_MMX|IF_SD},
    {I_MOVD, 2, {MMXREG,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14202, IF_PENT|IF_MMX},
    {I_MOVD, 2, {MEMORY,MMXREG,0,0,0}, nasm_bytecodes+14208, IF_PENT|IF_MMX|IF_SD},
    {I_MOVD, 2, {REG_GPR|BITS32,MMXREG,0,0,0}, nasm_bytecodes+14208, IF_PENT|IF_MMX},
    {I_MOVD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+7355, IF_X64|IF_SD},
    {I_MOVD, 2, {XMMREG,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+7355, IF_X64},
    {I_MOVD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+7362, IF_X64|IF_SD},
    {I_MOVD, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+7362, IF_X64|IF_SSE},
    {I_MOVD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+7992, IF_WILLAMETTE|IF_SSE2|IF_SD},
    {I_MOVD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+7999, IF_WILLAMETTE|IF_SSE2|IF_SD},
    {I_MOVD, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+7999, IF_WILLAMETTE|IF_SSE2},
    {I_MOVD, 2, {RM_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+7992, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDDUP[] = {
    {I_MOVDDUP, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15786, IF_PRESCOTT|IF_SSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDQ2Q[] = {
    {I_MOVDQ2Q, 2, {MMXREG,XMMREG,0,0,0}, nasm_bytecodes+15090, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDQA[] = {
    {I_MOVDQA, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15066, IF_WILLAMETTE|IF_SSE2},
    {I_MOVDQA, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15072, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVDQA, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+15066, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVDQA, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15072, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDQU[] = {
    {I_MOVDQU, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15078, IF_WILLAMETTE|IF_SSE2},
    {I_MOVDQU, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15084, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVDQU, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+15078, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVDQU, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15084, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVHLPS[] = {
    {I_MOVHLPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14682, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVHPD[] = {
    {I_MOVHPD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15624, IF_WILLAMETTE|IF_SSE2},
    {I_MOVHPD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+15630, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVHPS[] = {
    {I_MOVHPS, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+14862, IF_KATMAI|IF_SSE},
    {I_MOVHPS, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+14868, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVLHPS[] = {
    {I_MOVLHPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14862, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVLPD[] = {
    {I_MOVLPD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15636, IF_WILLAMETTE|IF_SSE2},
    {I_MOVLPD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+15642, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVLPS[] = {
    {I_MOVLPS, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+14682, IF_KATMAI|IF_SSE},
    {I_MOVLPS, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+14874, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVMSKPD[] = {
    {I_MOVMSKPD, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+15648, IF_WILLAMETTE|IF_SSE2},
    {I_MOVMSKPD, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+8174, IF_X64|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVMSKPS[] = {
    {I_MOVMSKPS, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+14880, IF_KATMAI|IF_SSE},
    {I_MOVMSKPS, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+7901, IF_X64|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTDQ[] = {
    {I_MOVNTDQ, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15054, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTDQA[] = {
    {I_MOVNTDQA, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+8447, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTI[] = {
    {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+7986, IF_WILLAMETTE|IF_SD},
    {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7985, IF_X64|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTPD[] = {
    {I_MOVNTPD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15060, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTPS[] = {
    {I_MOVNTPS, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+14886, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTQ[] = {
    {I_MOVNTQ, 2, {MEMORY,MMXREG,0,0,0}, nasm_bytecodes+15036, IF_KATMAI|IF_MMX|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTSD[] = {
    {I_MOVNTSD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15828, IF_SSE4A|IF_AMD|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTSS[] = {
    {I_MOVNTSS, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15834, IF_SSE4A|IF_AMD|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVQ[] = {
    {I_MOVQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7369, IF_PENT|IF_MMX|IF_SQ},
    {I_MOVQ, 2, {RM_MMX,MMXREG,0,0,0}, nasm_bytecodes+7376, IF_PENT|IF_MMX|IF_SQ},
    {I_MOVQ, 2, {MMXREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+14202, IF_X64|IF_MMX},
    {I_MOVQ, 2, {RM_GPR|BITS64,MMXREG,0,0,0}, nasm_bytecodes+14208, IF_X64|IF_MMX},
    {I_MOVQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15096, IF_WILLAMETTE|IF_SSE2},
    {I_MOVQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15102, IF_WILLAMETTE|IF_SSE2},
    {I_MOVQ, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15102, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    {I_MOVQ, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+15096, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    {I_MOVQ, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+8006, IF_X64|IF_SSE2},
    {I_MOVQ, 2, {RM_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+8013, IF_X64|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVQ2DQ[] = {
    {I_MOVQ2DQ, 2, {XMMREG,MMXREG,0,0,0}, nasm_bytecodes+15108, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSB[] = {
    {I_MOVSB, 0, {0,0,0,0,0}, nasm_bytecodes+5497, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSD[] = {
    {I_MOVSD, 0, {0,0,0,0,0}, nasm_bytecodes+19614, IF_386},
    {I_MOVSD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15654, IF_WILLAMETTE|IF_SSE2},
    {I_MOVSD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15660, IF_WILLAMETTE|IF_SSE2},
    {I_MOVSD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15660, IF_WILLAMETTE|IF_SSE2},
    {I_MOVSD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+15654, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSHDUP[] = {
    {I_MOVSHDUP, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15792, IF_PRESCOTT|IF_SSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSLDUP[] = {
    {I_MOVSLDUP, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15798, IF_PRESCOTT|IF_SSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSQ[] = {
    {I_MOVSQ, 0, {0,0,0,0,0}, nasm_bytecodes+19618, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSS[] = {
    {I_MOVSS, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+14892, IF_KATMAI|IF_SSE},
    {I_MOVSS, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+14898, IF_KATMAI|IF_SSE},
    {I_MOVSS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14892, IF_KATMAI|IF_SSE},
    {I_MOVSS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14898, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSW[] = {
    {I_MOVSW, 0, {0,0,0,0,0}, nasm_bytecodes+19622, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSX[] = {
    {I_MOVSX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+14214, IF_386|IF_SB},
    {I_MOVSX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+14214, IF_386},
    {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+14220, IF_386},
    {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+14226, IF_386},
    {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+14232, IF_X64},
    {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+14238, IF_X64},
    {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+18099, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSXD[] = {
    {I_MOVSXD, 2, {REG_GPR|BITS64,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+18099, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVUPD[] = {
    {I_MOVUPD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15666, IF_WILLAMETTE|IF_SSE2},
    {I_MOVUPD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+15672, IF_WILLAMETTE|IF_SSE2},
    {I_MOVUPD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+15672, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVUPD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+15666, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVUPS[] = {
    {I_MOVUPS, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+14904, IF_KATMAI|IF_SSE},
    {I_MOVUPS, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+14910, IF_KATMAI|IF_SSE},
    {I_MOVUPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14904, IF_KATMAI|IF_SSE},
    {I_MOVUPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14910, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVZX[] = {
    {I_MOVZX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+14244, IF_386|IF_SB},
    {I_MOVZX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+14244, IF_386},
    {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+14250, IF_386},
    {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+14256, IF_386},
    {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+14262, IF_X64},
    {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+14268, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MPSADBW[] = {
    {I_MPSADBW, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+5980, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_MUL[] = {
    {I_MUL, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+19626, IF_8086},
    {I_MUL, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18104, IF_8086},
    {I_MUL, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18109, IF_386},
    {I_MUL, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18114, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULPD[] = {
    {I_MULPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15678, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULPS[] = {
    {I_MULPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14916, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULSD[] = {
    {I_MULSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15684, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULSS[] = {
    {I_MULSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14922, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MWAIT[] = {
    {I_MWAIT, 0, {0,0,0,0,0}, nasm_bytecodes+18119, IF_PRESCOTT},
    {I_MWAIT, 2, {REG_EAX,REG_ECX,0,0,0}, nasm_bytecodes+18119, IF_PRESCOTT},
    ITEMPLATE_END
};

static const struct itemplate instrux_NEG[] = {
    {I_NEG, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+19630, IF_8086},
    {I_NEG, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18124, IF_8086},
    {I_NEG, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18129, IF_386},
    {I_NEG, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18134, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_NOP[] = {
    {I_NOP, 0, {0,0,0,0,0}, nasm_bytecodes+19634, IF_8086},
    {I_NOP, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+14274, IF_P6},
    {I_NOP, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+14280, IF_P6},
    {I_NOP, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+14286, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_NOT[] = {
    {I_NOT, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+19638, IF_8086},
    {I_NOT, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18139, IF_8086},
    {I_NOT, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18144, IF_386},
    {I_NOT, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18149, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_OR[] = {
    {I_OR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19642, IF_8086|IF_SM},
    {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19642, IF_8086},
    {I_OR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18154, IF_8086|IF_SM},
    {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18154, IF_8086},
    {I_OR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18159, IF_386|IF_SM},
    {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18159, IF_386},
    {I_OR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18164, IF_X64|IF_SM},
    {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18164, IF_X64},
    {I_OR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+11411, IF_8086|IF_SM},
    {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+11411, IF_8086},
    {I_OR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+18169, IF_8086|IF_SM},
    {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18169, IF_8086},
    {I_OR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+18174, IF_386|IF_SM},
    {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18174, IF_386},
    {I_OR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+18179, IF_X64|IF_SM},
    {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18179, IF_X64},
    {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14292, IF_8086},
    {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14298, IF_386},
    {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14304, IF_X64},
    {I_OR, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+19646, IF_8086|IF_SM},
    {I_OR, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+14292, IF_8086|IF_SM},
    {I_OR, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+18184, IF_8086|IF_SM},
    {I_OR, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+14298, IF_386|IF_SM},
    {I_OR, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18189, IF_386|IF_SM},
    {I_OR, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+14304, IF_X64|IF_SM},
    {I_OR, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18194, IF_X64|IF_SM},
    {I_OR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18199, IF_8086|IF_SM},
    {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14310, IF_8086|IF_SM},
    {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14316, IF_386|IF_SM},
    {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14322, IF_X64|IF_SM},
    {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+18199, IF_8086|IF_SM},
    {I_OR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+14310, IF_8086|IF_SM},
    {I_OR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+14316, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_ORPD[] = {
    {I_ORPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15690, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_ORPS[] = {
    {I_ORPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14928, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUT[] = {
    {I_OUT, 2, {IMMEDIATE,REG_AL,0,0,0}, nasm_bytecodes+19650, IF_8086|IF_SB},
    {I_OUT, 2, {IMMEDIATE,REG_AX,0,0,0}, nasm_bytecodes+18204, IF_8086|IF_SB},
    {I_OUT, 2, {IMMEDIATE,REG_EAX,0,0,0}, nasm_bytecodes+18209, IF_386|IF_SB},
    {I_OUT, 2, {REG_DX,REG_AL,0,0,0}, nasm_bytecodes+20007, IF_8086},
    {I_OUT, 2, {REG_DX,REG_AX,0,0,0}, nasm_bytecodes+19654, IF_8086},
    {I_OUT, 2, {REG_DX,REG_EAX,0,0,0}, nasm_bytecodes+19658, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUTSB[] = {
    {I_OUTSB, 0, {0,0,0,0,0}, nasm_bytecodes+20010, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUTSD[] = {
    {I_OUTSD, 0, {0,0,0,0,0}, nasm_bytecodes+19662, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUTSW[] = {
    {I_OUTSW, 0, {0,0,0,0,0}, nasm_bytecodes+19666, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_PABSB[] = {
    {I_PABSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8202, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PABSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8209, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PABSD[] = {
    {I_PABSD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8230, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PABSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8237, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PABSW[] = {
    {I_PABSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8216, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PABSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8223, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKSSDW[] = {
    {I_PACKSSDW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7383, IF_PENT|IF_MMX|IF_SQ},
    {I_PACKSSDW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15120, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKSSWB[] = {
    {I_PACKSSWB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7390, IF_PENT|IF_MMX|IF_SQ},
    {I_PACKSSWB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15114, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKUSDW[] = {
    {I_PACKUSDW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8454, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKUSWB[] = {
    {I_PACKUSWB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7397, IF_PENT|IF_MMX|IF_SQ},
    {I_PACKUSWB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15126, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDB[] = {
    {I_PADDB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7404, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15132, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDD[] = {
    {I_PADDD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7411, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15144, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDQ[] = {
    {I_PADDQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+15150, IF_WILLAMETTE|IF_MMX|IF_SQ},
    {I_PADDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15156, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDSB[] = {
    {I_PADDSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7418, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15162, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDSIW[] = {
    {I_PADDSIW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+14328, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDSW[] = {
    {I_PADDSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7425, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15168, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDUSB[] = {
    {I_PADDUSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7432, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDUSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15174, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDUSW[] = {
    {I_PADDUSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7439, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDUSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15180, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDW[] = {
    {I_PADDW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7446, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15138, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PALIGNR[] = {
    {I_PALIGNR, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, nasm_bytecodes+5908, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PALIGNR, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+5916, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAND[] = {
    {I_PAND, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7453, IF_PENT|IF_MMX|IF_SQ},
    {I_PAND, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15186, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PANDN[] = {
    {I_PANDN, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7460, IF_PENT|IF_MMX|IF_SQ},
    {I_PANDN, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15192, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAUSE[] = {
    {I_PAUSE, 0, {0,0,0,0,0}, nasm_bytecodes+18214, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVEB[] = {
    {I_PAVEB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+14334, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVGB[] = {
    {I_PAVGB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7915, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PAVGB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15198, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVGUSB[] = {
    {I_PAVGUSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5436, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVGW[] = {
    {I_PAVGW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7922, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PAVGW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15204, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PBLENDVB[] = {
    {I_PBLENDVB, 3, {XMMREG,RM_XMM,XMM0,0,0}, nasm_bytecodes+8461, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PBLENDW[] = {
    {I_PBLENDW, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+5988, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULHQHQDQ[] = {
    {I_PCLMULHQHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3879, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULHQLQDQ[] = {
    {I_PCLMULHQLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3861, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULLQHQDQ[] = {
    {I_PCLMULLQHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3870, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULLQLQDQ[] = {
    {I_PCLMULLQLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3852, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULQDQ[] = {
    {I_PCLMULQDQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6908, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQB[] = {
    {I_PCMPEQB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7467, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPEQB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15210, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQD[] = {
    {I_PCMPEQD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7474, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPEQD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15222, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQQ[] = {
    {I_PCMPEQQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8468, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQW[] = {
    {I_PCMPEQW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7481, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPEQW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15216, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPESTRI[] = {
    {I_PCMPESTRI, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+6060, IF_SSE42},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPESTRM[] = {
    {I_PCMPESTRM, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+6068, IF_SSE42},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTB[] = {
    {I_PCMPGTB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7488, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPGTB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15228, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTD[] = {
    {I_PCMPGTD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7495, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPGTD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15240, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTQ[] = {
    {I_PCMPGTQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8643, IF_SSE42},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTW[] = {
    {I_PCMPGTW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7502, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPGTW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15234, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPISTRI[] = {
    {I_PCMPISTRI, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+6076, IF_SSE42},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPISTRM[] = {
    {I_PCMPISTRM, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+6084, IF_SSE42},
    ITEMPLATE_END
};

static const struct itemplate instrux_PDISTIB[] = {
    {I_PDISTIB, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+15487, IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRB[] = {
    {I_PEXTRB, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+10, IF_SSE41},
    {I_PEXTRB, 3, {MEMORY|BITS8,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+10, IF_SSE41},
    {I_PEXTRB, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+9, IF_SSE41|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRD[] = {
    {I_PEXTRD, 3, {RM_GPR|BITS32,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+19, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRQ[] = {
    {I_PEXTRQ, 3, {RM_GPR|BITS64,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+18, IF_SSE41|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRW[] = {
    {I_PEXTRW, 3, {REG_GPR|BITS32,MMXREG,IMMEDIATE,0,0}, nasm_bytecodes+7929, IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    {I_PEXTRW, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+8020, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PEXTRW, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+28, IF_SSE41},
    {I_PEXTRW, 3, {MEMORY|BITS16,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+28, IF_SSE41},
    {I_PEXTRW, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+27, IF_SSE41|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_PF2ID[] = {
    {I_PF2ID, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5444, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PF2IW[] = {
    {I_PF2IW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5724, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFACC[] = {
    {I_PFACC, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5452, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFADD[] = {
    {I_PFADD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5460, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFCMPEQ[] = {
    {I_PFCMPEQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5468, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFCMPGE[] = {
    {I_PFCMPGE, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5476, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFCMPGT[] = {
    {I_PFCMPGT, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5484, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFMAX[] = {
    {I_PFMAX, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5492, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFMIN[] = {
    {I_PFMIN, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5500, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFMUL[] = {
    {I_PFMUL, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5508, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFNACC[] = {
    {I_PFNACC, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5732, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFPNACC[] = {
    {I_PFPNACC, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5740, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCP[] = {
    {I_PFRCP, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5516, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCPIT1[] = {
    {I_PFRCPIT1, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5524, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCPIT2[] = {
    {I_PFRCPIT2, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5532, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCPV[] = {
    {I_PFRCPV, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+6092, IF_PENT|IF_3DNOW|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRSQIT1[] = {
    {I_PFRSQIT1, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5540, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRSQRT[] = {
    {I_PFRSQRT, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5548, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRSQRTV[] = {
    {I_PFRSQRTV, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+6100, IF_PENT|IF_3DNOW|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFSUB[] = {
    {I_PFSUB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5556, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFSUBR[] = {
    {I_PFSUBR, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5564, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHADDD[] = {
    {I_PHADDD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8258, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHADDD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8265, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHADDSW[] = {
    {I_PHADDSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8272, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHADDSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8279, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHADDW[] = {
    {I_PHADDW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8244, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHADDW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8251, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHMINPOSUW[] = {
    {I_PHMINPOSUW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8475, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHSUBD[] = {
    {I_PHSUBD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8300, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHSUBD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8307, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHSUBSW[] = {
    {I_PHSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8314, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHSUBSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8321, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHSUBW[] = {
    {I_PHSUBW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8286, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHSUBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8293, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PI2FD[] = {
    {I_PI2FD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5572, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PI2FW[] = {
    {I_PI2FW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5748, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRB[] = {
    {I_PINSRB, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+37, IF_SSE41|IF_SB|IF_AR2},
    {I_PINSRB, 3, {XMMREG,RM_GPR|BITS8,IMMEDIATE,0,0}, nasm_bytecodes+36, IF_SSE41|IF_SB|IF_AR2},
    {I_PINSRB, 3, {XMMREG,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+37, IF_SSE41|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRD[] = {
    {I_PINSRD, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+46, IF_SSE41|IF_SB|IF_AR2},
    {I_PINSRD, 3, {XMMREG,RM_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+46, IF_SSE41|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRQ[] = {
    {I_PINSRQ, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+45, IF_SSE41|IF_X64|IF_SB|IF_AR2},
    {I_PINSRQ, 3, {XMMREG,RM_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+45, IF_SSE41|IF_X64|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRW[] = {
    {I_PINSRW, 3, {MMXREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+7936, IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    {I_PINSRW, 3, {MMXREG,RM_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+7936, IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    {I_PINSRW, 3, {MMXREG,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+7936, IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    {I_PINSRW, 3, {XMMREG,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+8027, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PINSRW, 3, {XMMREG,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+8027, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PINSRW, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+8027, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PINSRW, 3, {XMMREG,MEMORY|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+8027, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMACHRIW[] = {
    {I_PMACHRIW, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+15583, IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMADDUBSW[] = {
    {I_PMADDUBSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8328, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PMADDUBSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8335, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMADDWD[] = {
    {I_PMADDWD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7509, IF_PENT|IF_MMX|IF_SQ},
    {I_PMADDWD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15246, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAGW[] = {
    {I_PMAGW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+14340, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXSB[] = {
    {I_PMAXSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8482, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXSD[] = {
    {I_PMAXSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8489, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXSW[] = {
    {I_PMAXSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7943, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PMAXSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15252, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXUB[] = {
    {I_PMAXUB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7950, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PMAXUB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15258, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXUD[] = {
    {I_PMAXUD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8496, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXUW[] = {
    {I_PMAXUW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8503, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINSB[] = {
    {I_PMINSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8510, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINSD[] = {
    {I_PMINSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8517, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINSW[] = {
    {I_PMINSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7957, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PMINSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15264, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINUB[] = {
    {I_PMINUB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7964, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PMINUB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15270, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINUD[] = {
    {I_PMINUD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8524, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINUW[] = {
    {I_PMINUW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8531, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVMSKB[] = {
    {I_PMOVMSKB, 2, {REG_GPR|BITS32,MMXREG,0,0,0}, nasm_bytecodes+15042, IF_KATMAI|IF_MMX},
    {I_PMOVMSKB, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+15276, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXBD[] = {
    {I_PMOVSXBD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8545, IF_SSE41|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXBQ[] = {
    {I_PMOVSXBQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8552, IF_SSE41|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXBW[] = {
    {I_PMOVSXBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8538, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXDQ[] = {
    {I_PMOVSXDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8573, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXWD[] = {
    {I_PMOVSXWD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8559, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXWQ[] = {
    {I_PMOVSXWQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8566, IF_SSE41|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXBD[] = {
    {I_PMOVZXBD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8587, IF_SSE41|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXBQ[] = {
    {I_PMOVZXBQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8594, IF_SSE41|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXBW[] = {
    {I_PMOVZXBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8580, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXDQ[] = {
    {I_PMOVZXDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8615, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXWD[] = {
    {I_PMOVZXWD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8601, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXWQ[] = {
    {I_PMOVZXWQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8608, IF_SSE41|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULDQ[] = {
    {I_PMULDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8622, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRIW[] = {
    {I_PMULHRIW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+14346, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRSW[] = {
    {I_PMULHRSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8342, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PMULHRSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8349, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRWA[] = {
    {I_PMULHRWA, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5580, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRWC[] = {
    {I_PMULHRWC, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+14352, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHUW[] = {
    {I_PMULHUW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7971, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PMULHUW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15282, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHW[] = {
    {I_PMULHW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7516, IF_PENT|IF_MMX|IF_SQ},
    {I_PMULHW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15288, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULLD[] = {
    {I_PMULLD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8629, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULLW[] = {
    {I_PMULLW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7523, IF_PENT|IF_MMX|IF_SQ},
    {I_PMULLW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15294, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULUDQ[] = {
    {I_PMULUDQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8034, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PMULUDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15300, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVGEZB[] = {
    {I_PMVGEZB, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+15715, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVLZB[] = {
    {I_PMVLZB, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+15571, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVNZB[] = {
    {I_PMVNZB, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+15553, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVZB[] = {
    {I_PMVZB, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+15475, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_POP[] = {
    {I_POP, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19670, IF_8086},
    {I_POP, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19674, IF_386|IF_NOLONG},
    {I_POP, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+19678, IF_X64},
    {I_POP, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18219, IF_8086},
    {I_POP, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18224, IF_386|IF_NOLONG},
    {I_POP, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18229, IF_X64},
    {I_POP, 1, {REG_CS,0,0,0,0}, nasm_bytecodes+3255, IF_8086|IF_UNDOC},
    {I_POP, 1, {REG_DESS,0,0,0,0}, nasm_bytecodes+19488, IF_8086|IF_NOLONG},
    {I_POP, 1, {REG_FSGS,0,0,0,0}, nasm_bytecodes+19682, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPA[] = {
    {I_POPA, 0, {0,0,0,0,0}, nasm_bytecodes+19686, IF_186|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPAD[] = {
    {I_POPAD, 0, {0,0,0,0,0}, nasm_bytecodes+19690, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPAW[] = {
    {I_POPAW, 0, {0,0,0,0,0}, nasm_bytecodes+19694, IF_186|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPCNT[] = {
    {I_POPCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+8650, IF_NEHALEM|IF_SW},
    {I_POPCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+8657, IF_NEHALEM|IF_SD},
    {I_POPCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+8664, IF_NEHALEM|IF_SQ|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPF[] = {
    {I_POPF, 0, {0,0,0,0,0}, nasm_bytecodes+19698, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPFD[] = {
    {I_POPFD, 0, {0,0,0,0,0}, nasm_bytecodes+19702, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPFQ[] = {
    {I_POPFQ, 0, {0,0,0,0,0}, nasm_bytecodes+19702, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPFW[] = {
    {I_POPFW, 0, {0,0,0,0,0}, nasm_bytecodes+19706, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_POR[] = {
    {I_POR, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7530, IF_PENT|IF_MMX|IF_SQ},
    {I_POR, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15306, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCH[] = {
    {I_PREFETCH, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18234, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHNTA[] = {
    {I_PREFETCHNTA, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+15913, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHT0[] = {
    {I_PREFETCHT0, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+15931, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHT1[] = {
    {I_PREFETCHT1, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+15949, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHT2[] = {
    {I_PREFETCHT2, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+15967, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHW[] = {
    {I_PREFETCHW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18239, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSADBW[] = {
    {I_PSADBW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7978, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PSADBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15312, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFB[] = {
    {I_PSHUFB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8356, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PSHUFB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8363, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFD[] = {
    {I_PSHUFD, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+8041, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PSHUFD, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+8041, IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFHW[] = {
    {I_PSHUFHW, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+8048, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PSHUFHW, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+8048, IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFLW[] = {
    {I_PSHUFLW, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+8055, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PSHUFLW, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+8055, IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFW[] = {
    {I_PSHUFW, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, nasm_bytecodes+5716, IF_KATMAI|IF_MMX|IF_SM2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSIGNB[] = {
    {I_PSIGNB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8370, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PSIGNB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8377, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSIGND[] = {
    {I_PSIGND, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8398, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PSIGND, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8405, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSIGNW[] = {
    {I_PSIGNW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8384, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PSIGNW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8391, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLD[] = {
    {I_PSLLD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7537, IF_PENT|IF_MMX|IF_SQ},
    {I_PSLLD, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7544, IF_PENT|IF_MMX},
    {I_PSLLD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15324, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSLLD, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8076, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLDQ[] = {
    {I_PSLLDQ, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8062, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLQ[] = {
    {I_PSLLQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7551, IF_PENT|IF_MMX|IF_SQ},
    {I_PSLLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7558, IF_PENT|IF_MMX},
    {I_PSLLQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15330, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSLLQ, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8083, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLW[] = {
    {I_PSLLW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7565, IF_PENT|IF_MMX|IF_SQ},
    {I_PSLLW, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7572, IF_PENT|IF_MMX},
    {I_PSLLW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15318, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSLLW, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8069, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRAD[] = {
    {I_PSRAD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7579, IF_PENT|IF_MMX|IF_SQ},
    {I_PSRAD, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7586, IF_PENT|IF_MMX},
    {I_PSRAD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15342, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSRAD, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8097, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRAW[] = {
    {I_PSRAW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7593, IF_PENT|IF_MMX|IF_SQ},
    {I_PSRAW, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7600, IF_PENT|IF_MMX},
    {I_PSRAW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15336, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSRAW, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8090, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLD[] = {
    {I_PSRLD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7607, IF_PENT|IF_MMX|IF_SQ},
    {I_PSRLD, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7614, IF_PENT|IF_MMX},
    {I_PSRLD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15354, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSRLD, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8118, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLDQ[] = {
    {I_PSRLDQ, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8104, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLQ[] = {
    {I_PSRLQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7621, IF_PENT|IF_MMX|IF_SQ},
    {I_PSRLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7628, IF_PENT|IF_MMX},
    {I_PSRLQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15360, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSRLQ, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8125, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLW[] = {
    {I_PSRLW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7635, IF_PENT|IF_MMX|IF_SQ},
    {I_PSRLW, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7642, IF_PENT|IF_MMX},
    {I_PSRLW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15348, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSRLW, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8111, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBB[] = {
    {I_PSUBB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7649, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15366, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBD[] = {
    {I_PSUBD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7656, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15378, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBQ[] = {
    {I_PSUBQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8132, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSUBQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15384, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBSB[] = {
    {I_PSUBSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7663, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15390, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBSIW[] = {
    {I_PSUBSIW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+14358, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBSW[] = {
    {I_PSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7670, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15396, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBUSB[] = {
    {I_PSUBUSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7677, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBUSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15402, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBUSW[] = {
    {I_PSUBUSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7684, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBUSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15408, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBW[] = {
    {I_PSUBW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7691, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15372, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSWAPD[] = {
    {I_PSWAPD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+5756, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PTEST[] = {
    {I_PTEST, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8636, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHBW[] = {
    {I_PUNPCKHBW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7698, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKHBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15414, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHDQ[] = {
    {I_PUNPCKHDQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7705, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKHDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15426, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHQDQ[] = {
    {I_PUNPCKHQDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15432, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHWD[] = {
    {I_PUNPCKHWD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7712, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKHWD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15420, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLBW[] = {
    {I_PUNPCKLBW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7719, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKLBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15438, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLDQ[] = {
    {I_PUNPCKLDQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7726, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKLDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15450, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLQDQ[] = {
    {I_PUNPCKLQDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15456, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLWD[] = {
    {I_PUNPCKLWD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7733, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKLWD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15444, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSH[] = {
    {I_PUSH, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19710, IF_8086},
    {I_PUSH, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19714, IF_386|IF_NOLONG},
    {I_PUSH, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+19718, IF_X64},
    {I_PUSH, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18244, IF_8086},
    {I_PUSH, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18249, IF_386|IF_NOLONG},
    {I_PUSH, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18254, IF_X64},
    {I_PUSH, 1, {REG_CS,0,0,0,0}, nasm_bytecodes+19464, IF_8086|IF_NOLONG},
    {I_PUSH, 1, {REG_DESS,0,0,0,0}, nasm_bytecodes+19464, IF_8086|IF_NOLONG},
    {I_PUSH, 1, {REG_FSGS,0,0,0,0}, nasm_bytecodes+19722, IF_386},
    {I_PUSH, 1, {IMMEDIATE|BITS8,0,0,0,0}, nasm_bytecodes+19726, IF_186},
    {I_PUSH, 1, {IMMEDIATE|BITS16,0,0,0,0}, nasm_bytecodes+18259, IF_186|IF_AR0|IF_SZ},
    {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, nasm_bytecodes+18264, IF_386|IF_NOLONG|IF_AR0|IF_SZ},
    {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, nasm_bytecodes+18264, IF_386|IF_NOLONG|IF_SD},
    {I_PUSH, 1, {IMMEDIATE|BITS64,0,0,0,0}, nasm_bytecodes+18269, IF_X64|IF_AR0|IF_SZ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHA[] = {
    {I_PUSHA, 0, {0,0,0,0,0}, nasm_bytecodes+19730, IF_186|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHAD[] = {
    {I_PUSHAD, 0, {0,0,0,0,0}, nasm_bytecodes+19734, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHAW[] = {
    {I_PUSHAW, 0, {0,0,0,0,0}, nasm_bytecodes+19738, IF_186|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHF[] = {
    {I_PUSHF, 0, {0,0,0,0,0}, nasm_bytecodes+19742, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHFD[] = {
    {I_PUSHFD, 0, {0,0,0,0,0}, nasm_bytecodes+19746, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHFQ[] = {
    {I_PUSHFQ, 0, {0,0,0,0,0}, nasm_bytecodes+19746, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHFW[] = {
    {I_PUSHFW, 0, {0,0,0,0,0}, nasm_bytecodes+19750, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_PXOR[] = {
    {I_PXOR, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7740, IF_PENT|IF_MMX|IF_SQ},
    {I_PXOR, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15462, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCL[] = {
    {I_RCL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+19754, IF_8086},
    {I_RCL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+19758, IF_8086},
    {I_RCL, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18274, IF_186|IF_SB},
    {I_RCL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+18279, IF_8086},
    {I_RCL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+18284, IF_8086},
    {I_RCL, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14364, IF_186|IF_SB},
    {I_RCL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+18289, IF_386},
    {I_RCL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+18294, IF_386},
    {I_RCL, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14370, IF_386|IF_SB},
    {I_RCL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+18299, IF_X64},
    {I_RCL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+18304, IF_X64},
    {I_RCL, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14376, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCPPS[] = {
    {I_RCPPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14934, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCPSS[] = {
    {I_RCPSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14940, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCR[] = {
    {I_RCR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+19762, IF_8086},
    {I_RCR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+19766, IF_8086},
    {I_RCR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18309, IF_186|IF_SB},
    {I_RCR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+18314, IF_8086},
    {I_RCR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+18319, IF_8086},
    {I_RCR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14382, IF_186|IF_SB},
    {I_RCR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+18324, IF_386},
    {I_RCR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+18329, IF_386},
    {I_RCR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14388, IF_386|IF_SB},
    {I_RCR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+18334, IF_X64},
    {I_RCR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+18339, IF_X64},
    {I_RCR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14394, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDM[] = {
    {I_RDM, 0, {0,0,0,0,0}, nasm_bytecodes+18958, IF_P6|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDMSR[] = {
    {I_RDMSR, 0, {0,0,0,0,0}, nasm_bytecodes+19770, IF_PENT|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDPMC[] = {
    {I_RDPMC, 0, {0,0,0,0,0}, nasm_bytecodes+19774, IF_P6},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDSHR[] = {
    {I_RDSHR, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+14400, IF_P6|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDTSC[] = {
    {I_RDTSC, 0, {0,0,0,0,0}, nasm_bytecodes+19778, IF_PENT},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDTSCP[] = {
    {I_RDTSCP, 0, {0,0,0,0,0}, nasm_bytecodes+18344, IF_X86_64},
    ITEMPLATE_END
};

static const struct itemplate instrux_RESB[] = {
    {I_RESB, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19072, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_RESD[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESO[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESQ[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_REST[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESW[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESY[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RET[] = {
    {I_RET, 0, {0,0,0,0,0}, nasm_bytecodes+18891, IF_8086},
    {I_RET, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19782, IF_8086|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETF[] = {
    {I_RETF, 0, {0,0,0,0,0}, nasm_bytecodes+20013, IF_8086},
    {I_RETF, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19786, IF_8086|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETN[] = {
    {I_RETN, 0, {0,0,0,0,0}, nasm_bytecodes+18891, IF_8086},
    {I_RETN, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19782, IF_8086|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROL[] = {
    {I_ROL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+19790, IF_8086},
    {I_ROL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+19794, IF_8086},
    {I_ROL, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18349, IF_186|IF_SB},
    {I_ROL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+18354, IF_8086},
    {I_ROL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+18359, IF_8086},
    {I_ROL, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14406, IF_186|IF_SB},
    {I_ROL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+18364, IF_386},
    {I_ROL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+18369, IF_386},
    {I_ROL, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14412, IF_386|IF_SB},
    {I_ROL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+18374, IF_X64},
    {I_ROL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+18379, IF_X64},
    {I_ROL, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14418, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROR[] = {
    {I_ROR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+19798, IF_8086},
    {I_ROR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+19802, IF_8086},
    {I_ROR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18384, IF_186|IF_SB},
    {I_ROR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+18389, IF_8086},
    {I_ROR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+18394, IF_8086},
    {I_ROR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14424, IF_186|IF_SB},
    {I_ROR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+18399, IF_386},
    {I_ROR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+18404, IF_386},
    {I_ROR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14430, IF_386|IF_SB},
    {I_ROR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+18409, IF_X64},
    {I_ROR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+18414, IF_X64},
    {I_ROR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14436, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDPD[] = {
    {I_ROUNDPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+5996, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDPS[] = {
    {I_ROUNDPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+6004, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDSD[] = {
    {I_ROUNDSD, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+6012, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDSS[] = {
    {I_ROUNDSS, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+6020, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSDC[] = {
    {I_RSDC, 2, {REG_SREG,MEMORY|BITS80,0,0,0}, nasm_bytecodes+15823, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSLDT[] = {
    {I_RSLDT, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+18419, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSM[] = {
    {I_RSM, 0, {0,0,0,0,0}, nasm_bytecodes+19806, IF_PENT|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSQRTPS[] = {
    {I_RSQRTPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14946, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSQRTSS[] = {
    {I_RSQRTSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14952, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSTS[] = {
    {I_RSTS, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+18424, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SAHF[] = {
    {I_SAHF, 0, {0,0,0,0,0}, nasm_bytecodes+5465, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_SAL[] = {
    {I_SAL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+19810, IF_8086},
    {I_SAL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+19814, IF_8086},
    {I_SAL, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18429, IF_186|IF_SB},
    {I_SAL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+18434, IF_8086},
    {I_SAL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+18439, IF_8086},
    {I_SAL, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14442, IF_186|IF_SB},
    {I_SAL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+18444, IF_386},
    {I_SAL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+18449, IF_386},
    {I_SAL, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14448, IF_386|IF_SB},
    {I_SAL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+18454, IF_X64},
    {I_SAL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+18459, IF_X64},
    {I_SAL, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14454, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_SALC[] = {
    {I_SALC, 0, {0,0,0,0,0}, nasm_bytecodes+20016, IF_8086|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_SAR[] = {
    {I_SAR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+19818, IF_8086},
    {I_SAR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+19822, IF_8086},
    {I_SAR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18464, IF_186|IF_SB},
    {I_SAR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+18469, IF_8086},
    {I_SAR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+18474, IF_8086},
    {I_SAR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14460, IF_186|IF_SB},
    {I_SAR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+18479, IF_386},
    {I_SAR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+18484, IF_386},
    {I_SAR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14466, IF_386|IF_SB},
    {I_SAR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+18489, IF_X64},
    {I_SAR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+18494, IF_X64},
    {I_SAR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14472, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_SBB[] = {
    {I_SBB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19826, IF_8086|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19826, IF_8086},
    {I_SBB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18499, IF_8086|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18499, IF_8086},
    {I_SBB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18504, IF_386|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18504, IF_386},
    {I_SBB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18509, IF_X64|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18509, IF_X64},
    {I_SBB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+9115, IF_8086|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+9115, IF_8086},
    {I_SBB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+18514, IF_8086|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18514, IF_8086},
    {I_SBB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+18519, IF_386|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18519, IF_386},
    {I_SBB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+18524, IF_X64|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18524, IF_X64},
    {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14478, IF_8086},
    {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14484, IF_386},
    {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14490, IF_X64},
    {I_SBB, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+19830, IF_8086|IF_SM},
    {I_SBB, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+14478, IF_8086|IF_SM},
    {I_SBB, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+18529, IF_8086|IF_SM},
    {I_SBB, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+14484, IF_386|IF_SM},
    {I_SBB, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18534, IF_386|IF_SM},
    {I_SBB, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+14490, IF_X64|IF_SM},
    {I_SBB, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18539, IF_X64|IF_SM},
    {I_SBB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18544, IF_8086|IF_SM},
    {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14496, IF_8086|IF_SM},
    {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14502, IF_386|IF_SM},
    {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14508, IF_X64|IF_SM},
    {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+18544, IF_8086|IF_SM},
    {I_SBB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+14496, IF_8086|IF_SM},
    {I_SBB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+14502, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASB[] = {
    {I_SCASB, 0, {0,0,0,0,0}, nasm_bytecodes+19834, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASD[] = {
    {I_SCASD, 0, {0,0,0,0,0}, nasm_bytecodes+18549, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASQ[] = {
    {I_SCASQ, 0, {0,0,0,0,0}, nasm_bytecodes+18554, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASW[] = {
    {I_SCASW, 0, {0,0,0,0,0}, nasm_bytecodes+18559, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_SFENCE[] = {
    {I_SFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+18564, IF_X64|IF_AMD},
    {I_SFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+18564, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_SGDT[] = {
    {I_SGDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18569, IF_286},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHL[] = {
    {I_SHL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+19810, IF_8086},
    {I_SHL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+19814, IF_8086},
    {I_SHL, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18429, IF_186|IF_SB},
    {I_SHL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+18434, IF_8086},
    {I_SHL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+18439, IF_8086},
    {I_SHL, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14442, IF_186|IF_SB},
    {I_SHL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+18444, IF_386},
    {I_SHL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+18449, IF_386},
    {I_SHL, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14448, IF_386|IF_SB},
    {I_SHL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+18454, IF_X64},
    {I_SHL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+18459, IF_X64},
    {I_SHL, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14454, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHLD[] = {
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+7747, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+7747, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+7754, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+7754, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+7761, IF_X64|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+7761, IF_X64|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, nasm_bytecodes+14514, IF_386|IF_SM},
    {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, nasm_bytecodes+14514, IF_386},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, nasm_bytecodes+14520, IF_386|IF_SM},
    {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, nasm_bytecodes+14520, IF_386},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, nasm_bytecodes+14526, IF_X64|IF_SM},
    {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, nasm_bytecodes+14526, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHR[] = {
    {I_SHR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+19838, IF_8086},
    {I_SHR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+19842, IF_8086},
    {I_SHR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18574, IF_186|IF_SB},
    {I_SHR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+18579, IF_8086},
    {I_SHR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+18584, IF_8086},
    {I_SHR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14532, IF_186|IF_SB},
    {I_SHR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+18589, IF_386},
    {I_SHR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+18594, IF_386},
    {I_SHR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14538, IF_386|IF_SB},
    {I_SHR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+18599, IF_X64},
    {I_SHR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+18604, IF_X64},
    {I_SHR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14544, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHRD[] = {
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+7768, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+7768, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+7775, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+7775, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+7782, IF_X64|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+7782, IF_X64|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, nasm_bytecodes+14550, IF_386|IF_SM},
    {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, nasm_bytecodes+14550, IF_386},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, nasm_bytecodes+14556, IF_386|IF_SM},
    {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, nasm_bytecodes+14556, IF_386},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, nasm_bytecodes+14562, IF_X64|IF_SM},
    {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, nasm_bytecodes+14562, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHUFPD[] = {
    {I_SHUFPD, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+8181, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_SHUFPD, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+8181, IF_WILLAMETTE|IF_SSE2|IF_SM|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHUFPS[] = {
    {I_SHUFPS, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+7908, IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    {I_SHUFPS, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+7908, IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_SIDT[] = {
    {I_SIDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18609, IF_286},
    ITEMPLATE_END
};

static const struct itemplate instrux_SKINIT[] = {
    {I_SKINIT, 0, {0,0,0,0,0}, nasm_bytecodes+18614, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SLDT[] = {
    {I_SLDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+14587, IF_286},
    {I_SLDT, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+14587, IF_286},
    {I_SLDT, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+14568, IF_286},
    {I_SLDT, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+14574, IF_386},
    {I_SLDT, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+14580, IF_X64},
    {I_SLDT, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+14586, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SLWPCB[] = {
    {I_SLWPCB, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+12885, IF_AMD},
    {I_SLWPCB, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+12892, IF_AMD|IF_386},
    {I_SLWPCB, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+12899, IF_AMD|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMI[] = {
    {I_SMI, 0, {0,0,0,0,0}, nasm_bytecodes+19986, IF_386|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMINT[] = {
    {I_SMINT, 0, {0,0,0,0,0}, nasm_bytecodes+19846, IF_P6|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMINTOLD[] = {
    {I_SMINTOLD, 0, {0,0,0,0,0}, nasm_bytecodes+19850, IF_486|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMSW[] = {
    {I_SMSW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+14599, IF_286},
    {I_SMSW, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+14599, IF_286},
    {I_SMSW, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+14592, IF_286},
    {I_SMSW, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+14598, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTPD[] = {
    {I_SQRTPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15696, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTPS[] = {
    {I_SQRTPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14958, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTSD[] = {
    {I_SQRTSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15702, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTSS[] = {
    {I_SQRTSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14964, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_STC[] = {
    {I_STC, 0, {0,0,0,0,0}, nasm_bytecodes+18346, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_STD[] = {
    {I_STD, 0, {0,0,0,0,0}, nasm_bytecodes+20019, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_STGI[] = {
    {I_STGI, 0, {0,0,0,0,0}, nasm_bytecodes+18619, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_STI[] = {
    {I_STI, 0, {0,0,0,0,0}, nasm_bytecodes+20022, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_STMXCSR[] = {
    {I_STMXCSR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18844, IF_KATMAI|IF_SSE|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSB[] = {
    {I_STOSB, 0, {0,0,0,0,0}, nasm_bytecodes+5569, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSD[] = {
    {I_STOSD, 0, {0,0,0,0,0}, nasm_bytecodes+19854, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSQ[] = {
    {I_STOSQ, 0, {0,0,0,0,0}, nasm_bytecodes+19858, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSW[] = {
    {I_STOSW, 0, {0,0,0,0,0}, nasm_bytecodes+19862, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_STR[] = {
    {I_STR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+14617, IF_286|IF_PROT},
    {I_STR, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+14617, IF_286|IF_PROT},
    {I_STR, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+14604, IF_286|IF_PROT},
    {I_STR, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+14610, IF_386|IF_PROT},
    {I_STR, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+14616, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUB[] = {
    {I_SUB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19866, IF_8086|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19866, IF_8086},
    {I_SUB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18624, IF_8086|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18624, IF_8086},
    {I_SUB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18629, IF_386|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18629, IF_386},
    {I_SUB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18634, IF_X64|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18634, IF_X64},
    {I_SUB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+10130, IF_8086|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+10130, IF_8086},
    {I_SUB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+18639, IF_8086|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18639, IF_8086},
    {I_SUB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+18644, IF_386|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18644, IF_386},
    {I_SUB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+18649, IF_X64|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18649, IF_X64},
    {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14622, IF_8086},
    {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14628, IF_386},
    {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14634, IF_X64},
    {I_SUB, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+19870, IF_8086|IF_SM},
    {I_SUB, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+14622, IF_8086|IF_SM},
    {I_SUB, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+18654, IF_8086|IF_SM},
    {I_SUB, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+14628, IF_386|IF_SM},
    {I_SUB, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18659, IF_386|IF_SM},
    {I_SUB, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+14634, IF_X64|IF_SM},
    {I_SUB, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18664, IF_X64|IF_SM},
    {I_SUB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18669, IF_8086|IF_SM},
    {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14640, IF_8086|IF_SM},
    {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14646, IF_386|IF_SM},
    {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14652, IF_X64|IF_SM},
    {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+18669, IF_8086|IF_SM},
    {I_SUB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+14640, IF_8086|IF_SM},
    {I_SUB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+14646, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBPD[] = {
    {I_SUBPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15708, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBPS[] = {
    {I_SUBPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14970, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBSD[] = {
    {I_SUBSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15714, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBSS[] = {
    {I_SUBSS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14976, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_SVDC[] = {
    {I_SVDC, 2, {MEMORY|BITS80,REG_SREG,0,0,0}, nasm_bytecodes+8190, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SVLDT[] = {
    {I_SVLDT, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+18674, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SVTS[] = {
    {I_SVTS, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+18679, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SWAPGS[] = {
    {I_SWAPGS, 0, {0,0,0,0,0}, nasm_bytecodes+18684, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSCALL[] = {
    {I_SYSCALL, 0, {0,0,0,0,0}, nasm_bytecodes+19574, IF_P6|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSENTER[] = {
    {I_SYSENTER, 0, {0,0,0,0,0}, nasm_bytecodes+19874, IF_P6},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSEXIT[] = {
    {I_SYSEXIT, 0, {0,0,0,0,0}, nasm_bytecodes+19878, IF_P6|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSRET[] = {
    {I_SYSRET, 0, {0,0,0,0,0}, nasm_bytecodes+19570, IF_P6|IF_PRIV|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_TEST[] = {
    {I_TEST, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19882, IF_8086|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19882, IF_8086},
    {I_TEST, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18689, IF_8086|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18689, IF_8086},
    {I_TEST, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18694, IF_386|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18694, IF_386},
    {I_TEST, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18699, IF_X64|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18699, IF_X64},
    {I_TEST, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+19886, IF_8086|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+18704, IF_8086|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+18709, IF_386|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+18714, IF_X64|IF_SM},
    {I_TEST, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+19890, IF_8086|IF_SM},
    {I_TEST, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+18719, IF_8086|IF_SM},
    {I_TEST, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18724, IF_386|IF_SM},
    {I_TEST, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18729, IF_X64|IF_SM},
    {I_TEST, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18734, IF_8086|IF_SM},
    {I_TEST, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14658, IF_8086|IF_SM},
    {I_TEST, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14664, IF_386|IF_SM},
    {I_TEST, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14670, IF_X64|IF_SM},
    {I_TEST, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+18734, IF_8086|IF_SM},
    {I_TEST, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+14658, IF_8086|IF_SM},
    {I_TEST, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+14664, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_UCOMISD[] = {
    {I_UCOMISD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15720, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_UCOMISS[] = {
    {I_UCOMISS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14982, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD0[] = {
    {I_UD0, 0, {0,0,0,0,0}, nasm_bytecodes+19894, IF_186|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD1[] = {
    {I_UD1, 0, {0,0,0,0,0}, nasm_bytecodes+19898, IF_186|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD2[] = {
    {I_UD2, 0, {0,0,0,0,0}, nasm_bytecodes+19902, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD2A[] = {
    {I_UD2A, 0, {0,0,0,0,0}, nasm_bytecodes+19902, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD2B[] = {
    {I_UD2B, 0, {0,0,0,0,0}, nasm_bytecodes+19898, IF_186|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_UMOV[] = {
    {I_UMOV, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+14676, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+14676, IF_386|IF_UNDOC},
    {I_UMOV, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+7789, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+7789, IF_386|IF_UNDOC},
    {I_UMOV, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+7796, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+7796, IF_386|IF_UNDOC},
    {I_UMOV, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+14682, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+14682, IF_386|IF_UNDOC},
    {I_UMOV, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+7803, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+7803, IF_386|IF_UNDOC},
    {I_UMOV, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+7810, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+7810, IF_386|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKHPD[] = {
    {I_UNPCKHPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15726, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKHPS[] = {
    {I_UNPCKHPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14988, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKLPD[] = {
    {I_UNPCKLPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15732, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKLPS[] = {
    {I_UNPCKLPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+14994, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDPD[] = {
    {I_VADDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8811, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8818, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8825, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+8832, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDPS[] = {
    {I_VADDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8839, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8846, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8853, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+8860, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSD[] = {
    {I_VADDSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+8867, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+8874, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSS[] = {
    {I_VADDSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+8881, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+8888, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSUBPD[] = {
    {I_VADDSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8895, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8902, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8909, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+8916, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSUBPS[] = {
    {I_VADDSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8923, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8930, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8937, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+8944, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESDEC[] = {
    {I_VAESDEC, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8776, IF_AVX|IF_SANDYBRIDGE},
    {I_VAESDEC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8783, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESDECLAST[] = {
    {I_VAESDECLAST, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8790, IF_AVX|IF_SANDYBRIDGE},
    {I_VAESDECLAST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8797, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESENC[] = {
    {I_VAESENC, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8748, IF_AVX|IF_SANDYBRIDGE},
    {I_VAESENC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8755, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESENCLAST[] = {
    {I_VAESENCLAST, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8762, IF_AVX|IF_SANDYBRIDGE},
    {I_VAESENCLAST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8769, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESIMC[] = {
    {I_VAESIMC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8804, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESKEYGENASSIST[] = {
    {I_VAESKEYGENASSIST, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6116, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDNPD[] = {
    {I_VANDNPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9007, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9014, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9021, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9028, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDNPS[] = {
    {I_VANDNPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9035, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9042, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9049, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9056, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDPD[] = {
    {I_VANDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8951, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8958, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8965, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+8972, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDPS[] = {
    {I_VANDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8979, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8986, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8993, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9000, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDPD[] = {
    {I_VBLENDPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6124, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6132, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+6140, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6148, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDPS[] = {
    {I_VBLENDPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6156, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6164, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+6172, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6180, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDVPD[] = {
    {I_VBLENDVPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+54, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPD, 3, {XMMREG,RM_XMM|BITS128,XMM0,0,0}, nasm_bytecodes+9063, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+63, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPD, 3, {YMMREG,RM_YMM|BITS256,YMM0,0,0}, nasm_bytecodes+9070, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPD, 3, {YMMREG,RM_YMM|BITS256,YMM0,0,0}, nasm_bytecodes+9084, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDVPS[] = {
    {I_VBLENDVPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+72, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPS, 3, {XMMREG,RM_XMM|BITS128,XMM0,0,0}, nasm_bytecodes+9077, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+81, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTF128[] = {
    {I_VBROADCASTF128, 2, {YMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+9112, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTSD[] = {
    {I_VBROADCASTSD, 2, {YMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+9105, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTSS[] = {
    {I_VBROADCASTSS, 2, {XMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+9091, IF_AVX|IF_SANDYBRIDGE},
    {I_VBROADCASTSS, 2, {YMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+9098, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQPD[] = {
    {I_VCMPEQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+90, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+99, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+108, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+117, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQPS[] = {
    {I_VCMPEQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1242, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1251, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1260, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1269, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQSD[] = {
    {I_VCMPEQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2394, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2403, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQSS[] = {
    {I_VCMPEQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+2970, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+2979, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSPD[] = {
    {I_VCMPEQ_OSPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+666, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+675, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+684, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+693, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSPS[] = {
    {I_VCMPEQ_OSPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1818, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1827, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1836, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1845, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSSD[] = {
    {I_VCMPEQ_OSSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2682, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2691, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSSS[] = {
    {I_VCMPEQ_OSSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3258, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3267, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQPD[] = {
    {I_VCMPEQ_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+378, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+387, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+396, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+405, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQPS[] = {
    {I_VCMPEQ_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1530, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1539, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1548, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1557, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQSD[] = {
    {I_VCMPEQ_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2538, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2547, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQSS[] = {
    {I_VCMPEQ_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3114, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3123, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USPD[] = {
    {I_VCMPEQ_USPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+954, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+963, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+972, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+981, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USPS[] = {
    {I_VCMPEQ_USPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2106, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2115, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2124, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2133, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USSD[] = {
    {I_VCMPEQ_USSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2826, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2835, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USSS[] = {
    {I_VCMPEQ_USSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3402, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3411, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSEPD[] = {
    {I_VCMPFALSEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+486, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+495, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+504, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+513, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSEPS[] = {
    {I_VCMPFALSEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1638, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1647, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1656, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1665, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSESD[] = {
    {I_VCMPFALSESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2592, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2601, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSESS[] = {
    {I_VCMPFALSESS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3168, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSESS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3177, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSPD[] = {
    {I_VCMPFALSE_OSPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1062, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1071, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1080, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1089, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSPS[] = {
    {I_VCMPFALSE_OSPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2214, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2223, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2232, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2241, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSSD[] = {
    {I_VCMPFALSE_OSSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2880, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2889, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSSS[] = {
    {I_VCMPFALSE_OSSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3456, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3465, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGEPD[] = {
    {I_VCMPGEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+558, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+567, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+576, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+585, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGEPS[] = {
    {I_VCMPGEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1710, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1719, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1728, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1737, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGESD[] = {
    {I_VCMPGESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2628, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2637, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGESS[] = {
    {I_VCMPGESS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3204, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGESS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3213, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQPD[] = {
    {I_VCMPGE_OQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1134, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1143, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1152, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1161, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQPS[] = {
    {I_VCMPGE_OQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2286, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2295, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2304, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2313, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQSD[] = {
    {I_VCMPGE_OQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2916, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2925, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQSS[] = {
    {I_VCMPGE_OQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3492, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3501, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTPD[] = {
    {I_VCMPGTPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+594, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+603, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+612, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+621, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTPS[] = {
    {I_VCMPGTPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1746, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1755, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1764, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1773, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTSD[] = {
    {I_VCMPGTSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2646, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2655, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTSS[] = {
    {I_VCMPGTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3222, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3231, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQPD[] = {
    {I_VCMPGT_OQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1170, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1179, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1188, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1197, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQPS[] = {
    {I_VCMPGT_OQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2322, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2331, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2340, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2349, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQSD[] = {
    {I_VCMPGT_OQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2934, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2943, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQSS[] = {
    {I_VCMPGT_OQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3510, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3519, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLEPD[] = {
    {I_VCMPLEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+162, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+171, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+180, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+189, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLEPS[] = {
    {I_VCMPLEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1314, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1323, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1332, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1341, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLESD[] = {
    {I_VCMPLESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2430, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2439, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLESS[] = {
    {I_VCMPLESS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3006, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLESS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3015, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQPD[] = {
    {I_VCMPLE_OQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+738, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+747, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+756, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+765, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQPS[] = {
    {I_VCMPLE_OQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1890, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1899, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1908, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1917, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQSD[] = {
    {I_VCMPLE_OQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2718, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2727, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQSS[] = {
    {I_VCMPLE_OQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3294, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3303, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTPD[] = {
    {I_VCMPLTPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+126, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+135, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+144, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+153, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTPS[] = {
    {I_VCMPLTPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1278, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1287, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1296, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1305, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTSD[] = {
    {I_VCMPLTSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2412, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2421, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTSS[] = {
    {I_VCMPLTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+2988, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+2997, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQPD[] = {
    {I_VCMPLT_OQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+702, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+711, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+720, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+729, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQPS[] = {
    {I_VCMPLT_OQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1854, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1863, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1872, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1881, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQSD[] = {
    {I_VCMPLT_OQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2700, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2709, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQSS[] = {
    {I_VCMPLT_OQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3276, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3285, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQPD[] = {
    {I_VCMPNEQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+234, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+243, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+252, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+261, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQPS[] = {
    {I_VCMPNEQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1386, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1395, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1404, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1413, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQSD[] = {
    {I_VCMPNEQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2466, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2475, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQSS[] = {
    {I_VCMPNEQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3042, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3051, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQPD[] = {
    {I_VCMPNEQ_OQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+522, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+531, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+540, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+549, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQPS[] = {
    {I_VCMPNEQ_OQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1674, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1683, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1692, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1701, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQSD[] = {
    {I_VCMPNEQ_OQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2610, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2619, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQSS[] = {
    {I_VCMPNEQ_OQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3186, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3195, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSPD[] = {
    {I_VCMPNEQ_OSPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1098, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1107, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1116, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1125, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSPS[] = {
    {I_VCMPNEQ_OSPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2250, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2259, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2268, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2277, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSSD[] = {
    {I_VCMPNEQ_OSSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2898, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2907, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSSS[] = {
    {I_VCMPNEQ_OSSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3474, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3483, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USPD[] = {
    {I_VCMPNEQ_USPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+810, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+819, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+828, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+837, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USPS[] = {
    {I_VCMPNEQ_USPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1962, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1971, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1980, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1989, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USSD[] = {
    {I_VCMPNEQ_USSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2754, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2763, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USSS[] = {
    {I_VCMPNEQ_USSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3330, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3339, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGEPD[] = {
    {I_VCMPNGEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+414, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+423, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+432, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+441, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGEPS[] = {
    {I_VCMPNGEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1566, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1575, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1584, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1593, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGESD[] = {
    {I_VCMPNGESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2556, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2565, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGESS[] = {
    {I_VCMPNGESS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3132, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGESS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3141, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQPD[] = {
    {I_VCMPNGE_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+990, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+999, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1008, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1017, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQPS[] = {
    {I_VCMPNGE_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2142, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2151, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2160, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2169, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQSD[] = {
    {I_VCMPNGE_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2844, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2853, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQSS[] = {
    {I_VCMPNGE_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3420, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3429, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTPD[] = {
    {I_VCMPNGTPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+450, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+459, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+468, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+477, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTPS[] = {
    {I_VCMPNGTPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1602, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1611, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1620, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1629, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTSD[] = {
    {I_VCMPNGTSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2574, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2583, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTSS[] = {
    {I_VCMPNGTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3150, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3159, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQPD[] = {
    {I_VCMPNGT_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1026, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1035, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1044, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1053, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQPS[] = {
    {I_VCMPNGT_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2178, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2187, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2196, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2205, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQSD[] = {
    {I_VCMPNGT_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2862, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2871, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQSS[] = {
    {I_VCMPNGT_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3438, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3447, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLEPD[] = {
    {I_VCMPNLEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+306, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+315, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+324, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+333, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLEPS[] = {
    {I_VCMPNLEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1458, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1467, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1476, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1485, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLESD[] = {
    {I_VCMPNLESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2502, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2511, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLESS[] = {
    {I_VCMPNLESS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3078, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLESS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3087, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQPD[] = {
    {I_VCMPNLE_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+882, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+891, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+900, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+909, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQPS[] = {
    {I_VCMPNLE_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2034, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2043, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2052, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2061, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQSD[] = {
    {I_VCMPNLE_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2790, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2799, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQSS[] = {
    {I_VCMPNLE_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3366, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3375, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTPD[] = {
    {I_VCMPNLTPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+270, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+279, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+288, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+297, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTPS[] = {
    {I_VCMPNLTPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1422, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1431, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1440, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1449, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTSD[] = {
    {I_VCMPNLTSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2484, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2493, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTSS[] = {
    {I_VCMPNLTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3060, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3069, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQPD[] = {
    {I_VCMPNLT_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+846, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+855, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+864, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+873, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQPS[] = {
    {I_VCMPNLT_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1998, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2007, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2016, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2025, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQSD[] = {
    {I_VCMPNLT_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2772, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2781, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQSS[] = {
    {I_VCMPNLT_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3348, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3357, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDPD[] = {
    {I_VCMPORDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+342, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+351, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+360, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+369, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDPS[] = {
    {I_VCMPORDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1494, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1503, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1512, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1521, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDSD[] = {
    {I_VCMPORDSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2520, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2529, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDSS[] = {
    {I_VCMPORDSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3096, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3105, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SPD[] = {
    {I_VCMPORD_SPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+918, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+927, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+936, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+945, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SPS[] = {
    {I_VCMPORD_SPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2070, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2079, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2088, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2097, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SSD[] = {
    {I_VCMPORD_SSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2808, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2817, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SSS[] = {
    {I_VCMPORD_SSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3384, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3393, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPPD[] = {
    {I_VCMPPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6188, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6196, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+6204, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6212, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPPS[] = {
    {I_VCMPPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6220, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6228, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+6236, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6244, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPSD[] = {
    {I_VCMPSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0}, nasm_bytecodes+6252, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPSD, 3, {XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6260, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPSS[] = {
    {I_VCMPSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+6268, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPSS, 3, {XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6276, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUEPD[] = {
    {I_VCMPTRUEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+630, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+639, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+648, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+657, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUEPS[] = {
    {I_VCMPTRUEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1782, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1791, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1800, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1809, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUESD[] = {
    {I_VCMPTRUESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2664, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2673, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUESS[] = {
    {I_VCMPTRUESS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3240, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUESS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3249, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USPD[] = {
    {I_VCMPTRUE_USPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1206, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1215, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1224, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1233, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USPS[] = {
    {I_VCMPTRUE_USPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2358, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2367, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2376, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2385, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USSD[] = {
    {I_VCMPTRUE_USSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2952, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2961, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USSS[] = {
    {I_VCMPTRUE_USSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3528, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3537, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDPD[] = {
    {I_VCMPUNORDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+198, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+207, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+216, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+225, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDPS[] = {
    {I_VCMPUNORDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1350, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1359, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1368, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1377, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDSD[] = {
    {I_VCMPUNORDSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2448, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2457, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDSS[] = {
    {I_VCMPUNORDSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3024, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3033, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SPD[] = {
    {I_VCMPUNORD_SPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+774, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+783, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+792, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+801, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SPS[] = {
    {I_VCMPUNORD_SPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1926, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1935, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1944, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1953, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SSD[] = {
    {I_VCMPUNORD_SSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2736, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2745, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SSS[] = {
    {I_VCMPUNORD_SSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+3312, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3321, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCOMISD[] = {
    {I_VCOMISD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9119, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCOMISS[] = {
    {I_VCOMISS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9126, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTDQ2PD[] = {
    {I_VCVTDQ2PD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9133, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTDQ2PD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9140, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTDQ2PS[] = {
    {I_VCVTDQ2PS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9147, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTDQ2PS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9154, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPD2DQ[] = {
    {I_VCVTPD2DQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+9161, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPD2DQ, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+9161, IF_AVX|IF_SANDYBRIDGE|IF_SO},
    {I_VCVTPD2DQ, 2, {XMMREG,YMMREG,0,0,0}, nasm_bytecodes+9168, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPD2DQ, 2, {XMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+9168, IF_AVX|IF_SANDYBRIDGE|IF_SY},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPD2PS[] = {
    {I_VCVTPD2PS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+9175, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPD2PS, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+9175, IF_AVX|IF_SANDYBRIDGE|IF_SO},
    {I_VCVTPD2PS, 2, {XMMREG,YMMREG,0,0,0}, nasm_bytecodes+9182, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPD2PS, 2, {XMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+9182, IF_AVX|IF_SANDYBRIDGE|IF_SY},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPH2PS[] = {
    {I_VCVTPH2PS, 3, {XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6980, IF_AMD|IF_SSE5},
    {I_VCVTPH2PS, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6988, IF_AMD|IF_SSE5},
    {I_VCVTPH2PS, 3, {YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6996, IF_AMD|IF_SSE5},
    {I_VCVTPH2PS, 3, {YMMREG,RM_YMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6996, IF_AMD|IF_SSE5},
    {I_VCVTPH2PS, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+7004, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2DQ[] = {
    {I_VCVTPS2DQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9189, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPS2DQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9196, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2PD[] = {
    {I_VCVTPS2PD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9203, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPS2PD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9210, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2PH[] = {
    {I_VCVTPS2PH, 3, {RM_XMM|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7012, IF_AMD|IF_SSE5},
    {I_VCVTPS2PH, 2, {RM_XMM|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+7020, IF_AMD|IF_SSE5},
    {I_VCVTPS2PH, 3, {RM_XMM|BITS128,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7028, IF_AMD|IF_SSE5},
    {I_VCVTPS2PH, 3, {RM_YMM|BITS128,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7028, IF_AMD|IF_SSE5},
    {I_VCVTPS2PH, 2, {RM_YMM|BITS128,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+7036, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSD2SI[] = {
    {I_VCVTSD2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9217, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTSD2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9224, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSD2SS[] = {
    {I_VCVTSD2SS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+9231, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTSD2SS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9238, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSI2SD[] = {
    {I_VCVTSI2SD, 3, {XMMREG,XMMREG,RM_GPR|BITS32,0,0}, nasm_bytecodes+9245, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SD, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+9252, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SD, 3, {XMMREG,XMMREG,MEMORY|BITS32,0,0}, nasm_bytecodes+9245, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SD, 2, {XMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+9252, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SD, 3, {XMMREG,XMMREG,RM_GPR|BITS64,0,0}, nasm_bytecodes+9259, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    {I_VCVTSI2SD, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+9266, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSI2SS[] = {
    {I_VCVTSI2SS, 3, {XMMREG,XMMREG,RM_GPR|BITS32,0,0}, nasm_bytecodes+9273, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SS, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+9280, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SS, 3, {XMMREG,XMMREG,MEMORY|BITS32,0,0}, nasm_bytecodes+9273, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SS, 2, {XMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+9280, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SS, 3, {XMMREG,XMMREG,RM_GPR|BITS64,0,0}, nasm_bytecodes+9287, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    {I_VCVTSI2SS, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+9294, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSS2SD[] = {
    {I_VCVTSS2SD, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+9301, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTSS2SD, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9308, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSS2SI[] = {
    {I_VCVTSS2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9315, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTSS2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9322, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPD2DQ[] = {
    {I_VCVTTPD2DQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+9329, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTTPD2DQ, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+9329, IF_AVX|IF_SANDYBRIDGE|IF_SO},
    {I_VCVTTPD2DQ, 2, {XMMREG,YMMREG,0,0,0}, nasm_bytecodes+9336, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTTPD2DQ, 2, {XMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+9336, IF_AVX|IF_SANDYBRIDGE|IF_SY},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPS2DQ[] = {
    {I_VCVTTPS2DQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9343, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTTPS2DQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9350, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTSD2SI[] = {
    {I_VCVTTSD2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9357, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTTSD2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9364, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTSS2SI[] = {
    {I_VCVTTSS2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9371, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTTSS2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9378, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVPD[] = {
    {I_VDIVPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9385, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9392, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9399, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9406, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVPS[] = {
    {I_VDIVPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9413, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9420, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9427, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9434, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVSD[] = {
    {I_VDIVSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+9441, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9448, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVSS[] = {
    {I_VDIVSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+9455, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9462, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDPPD[] = {
    {I_VDPPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6284, IF_AVX|IF_SANDYBRIDGE},
    {I_VDPPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6292, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDPPS[] = {
    {I_VDPPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6300, IF_AVX|IF_SANDYBRIDGE},
    {I_VDPPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6308, IF_AVX|IF_SANDYBRIDGE},
    {I_VDPPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+6316, IF_AVX|IF_SANDYBRIDGE},
    {I_VDPPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6324, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VERR[] = {
    {I_VERR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18739, IF_286|IF_PROT},
    {I_VERR, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+18739, IF_286|IF_PROT},
    {I_VERR, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18739, IF_286|IF_PROT},
    ITEMPLATE_END
};

static const struct itemplate instrux_VERW[] = {
    {I_VERW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18744, IF_286|IF_PROT},
    {I_VERW, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+18744, IF_286|IF_PROT},
    {I_VERW, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18744, IF_286|IF_PROT},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTF128[] = {
    {I_VEXTRACTF128, 3, {RM_XMM|BITS128,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6332, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTPS[] = {
    {I_VEXTRACTPS, 3, {RM_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6340, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123PD[] = {
    {I_VFMADD123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12234, IF_FMA|IF_FUTURE},
    {I_VFMADD123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12241, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123PS[] = {
    {I_VFMADD123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12220, IF_FMA|IF_FUTURE},
    {I_VFMADD123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12227, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123SD[] = {
    {I_VFMADD123SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12717, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123SS[] = {
    {I_VFMADD123SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12710, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132PD[] = {
    {I_VFMADD132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12206, IF_FMA|IF_FUTURE},
    {I_VFMADD132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12213, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132PS[] = {
    {I_VFMADD132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12192, IF_FMA|IF_FUTURE},
    {I_VFMADD132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12199, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132SD[] = {
    {I_VFMADD132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12703, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132SS[] = {
    {I_VFMADD132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12696, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213PD[] = {
    {I_VFMADD213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12234, IF_FMA|IF_FUTURE},
    {I_VFMADD213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12241, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213PS[] = {
    {I_VFMADD213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12220, IF_FMA|IF_FUTURE},
    {I_VFMADD213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12227, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213SD[] = {
    {I_VFMADD213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12717, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213SS[] = {
    {I_VFMADD213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12710, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231PD[] = {
    {I_VFMADD231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12262, IF_FMA|IF_FUTURE},
    {I_VFMADD231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12269, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231PS[] = {
    {I_VFMADD231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12248, IF_FMA|IF_FUTURE},
    {I_VFMADD231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12255, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231SD[] = {
    {I_VFMADD231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12731, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231SS[] = {
    {I_VFMADD231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12724, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312PD[] = {
    {I_VFMADD312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12206, IF_FMA|IF_FUTURE},
    {I_VFMADD312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12213, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312PS[] = {
    {I_VFMADD312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12192, IF_FMA|IF_FUTURE},
    {I_VFMADD312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12199, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312SD[] = {
    {I_VFMADD312SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12703, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312SS[] = {
    {I_VFMADD312SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12696, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321PD[] = {
    {I_VFMADD321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12262, IF_FMA|IF_FUTURE},
    {I_VFMADD321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12269, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321PS[] = {
    {I_VFMADD321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12248, IF_FMA|IF_FUTURE},
    {I_VFMADD321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12255, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321SD[] = {
    {I_VFMADD321SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12731, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321SS[] = {
    {I_VFMADD321SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12724, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDPD[] = {
    {I_VFMADDPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+3960, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+3969, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+3978, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+3987, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+3996, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+4005, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+4014, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+4023, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDPS[] = {
    {I_VFMADDPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4032, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4041, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4050, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4059, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+4068, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+4077, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+4086, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+4095, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSD[] = {
    {I_VFMADDSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,XMMREG,0}, nasm_bytecodes+4104, IF_AMD|IF_SSE5},
    {I_VFMADDSD, 3, {XMMREG,RM_XMM|BITS64,XMMREG,0,0}, nasm_bytecodes+4113, IF_AMD|IF_SSE5},
    {I_VFMADDSD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS64,0}, nasm_bytecodes+4122, IF_AMD|IF_SSE5},
    {I_VFMADDSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+4131, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSS[] = {
    {I_VFMADDSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,XMMREG,0}, nasm_bytecodes+4140, IF_AMD|IF_SSE5},
    {I_VFMADDSS, 3, {XMMREG,RM_XMM|BITS32,XMMREG,0,0}, nasm_bytecodes+4149, IF_AMD|IF_SSE5},
    {I_VFMADDSS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS32,0}, nasm_bytecodes+4158, IF_AMD|IF_SSE5},
    {I_VFMADDSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+4167, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB123PD[] = {
    {I_VFMADDSUB123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12318, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12325, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB123PS[] = {
    {I_VFMADDSUB123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12304, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12311, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB132PD[] = {
    {I_VFMADDSUB132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12290, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12297, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB132PS[] = {
    {I_VFMADDSUB132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12276, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12283, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB213PD[] = {
    {I_VFMADDSUB213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12318, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12325, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB213PS[] = {
    {I_VFMADDSUB213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12304, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12311, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB231PD[] = {
    {I_VFMADDSUB231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12346, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12353, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB231PS[] = {
    {I_VFMADDSUB231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12332, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12339, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB312PD[] = {
    {I_VFMADDSUB312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12290, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12297, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB312PS[] = {
    {I_VFMADDSUB312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12276, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12283, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB321PD[] = {
    {I_VFMADDSUB321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12346, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12353, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB321PS[] = {
    {I_VFMADDSUB321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12332, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12339, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUBPD[] = {
    {I_VFMADDSUBPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4176, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4185, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4194, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4203, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+4212, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+4221, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+4230, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+4239, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUBPS[] = {
    {I_VFMADDSUBPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4248, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4257, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4266, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4275, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+4284, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+4293, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+4302, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+4311, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123PD[] = {
    {I_VFMSUB123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12402, IF_FMA|IF_FUTURE},
    {I_VFMSUB123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12409, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123PS[] = {
    {I_VFMSUB123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12388, IF_FMA|IF_FUTURE},
    {I_VFMSUB123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12395, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123SD[] = {
    {I_VFMSUB123SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12759, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123SS[] = {
    {I_VFMSUB123SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12752, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132PD[] = {
    {I_VFMSUB132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12374, IF_FMA|IF_FUTURE},
    {I_VFMSUB132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12381, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132PS[] = {
    {I_VFMSUB132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12360, IF_FMA|IF_FUTURE},
    {I_VFMSUB132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12367, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132SD[] = {
    {I_VFMSUB132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12745, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132SS[] = {
    {I_VFMSUB132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12738, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213PD[] = {
    {I_VFMSUB213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12402, IF_FMA|IF_FUTURE},
    {I_VFMSUB213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12409, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213PS[] = {
    {I_VFMSUB213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12388, IF_FMA|IF_FUTURE},
    {I_VFMSUB213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12395, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213SD[] = {
    {I_VFMSUB213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12759, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213SS[] = {
    {I_VFMSUB213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12752, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231PD[] = {
    {I_VFMSUB231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12430, IF_FMA|IF_FUTURE},
    {I_VFMSUB231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12437, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231PS[] = {
    {I_VFMSUB231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12416, IF_FMA|IF_FUTURE},
    {I_VFMSUB231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12423, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231SD[] = {
    {I_VFMSUB231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12773, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231SS[] = {
    {I_VFMSUB231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12766, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312PD[] = {
    {I_VFMSUB312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12374, IF_FMA|IF_FUTURE},
    {I_VFMSUB312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12381, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312PS[] = {
    {I_VFMSUB312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12360, IF_FMA|IF_FUTURE},
    {I_VFMSUB312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12367, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312SD[] = {
    {I_VFMSUB312SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12745, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312SS[] = {
    {I_VFMSUB312SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12738, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321PD[] = {
    {I_VFMSUB321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12430, IF_FMA|IF_FUTURE},
    {I_VFMSUB321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12437, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321PS[] = {
    {I_VFMSUB321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12416, IF_FMA|IF_FUTURE},
    {I_VFMSUB321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12423, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321SD[] = {
    {I_VFMSUB321SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12773, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321SS[] = {
    {I_VFMSUB321SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12766, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD123PD[] = {
    {I_VFMSUBADD123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12486, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12493, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD123PS[] = {
    {I_VFMSUBADD123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12472, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12479, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD132PD[] = {
    {I_VFMSUBADD132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12458, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12465, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD132PS[] = {
    {I_VFMSUBADD132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12444, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12451, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD213PD[] = {
    {I_VFMSUBADD213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12486, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12493, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD213PS[] = {
    {I_VFMSUBADD213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12472, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12479, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD231PD[] = {
    {I_VFMSUBADD231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12514, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12521, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD231PS[] = {
    {I_VFMSUBADD231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12500, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12507, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD312PD[] = {
    {I_VFMSUBADD312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12458, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12465, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD312PS[] = {
    {I_VFMSUBADD312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12444, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12451, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD321PD[] = {
    {I_VFMSUBADD321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12514, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12521, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD321PS[] = {
    {I_VFMSUBADD321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12500, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12507, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADDPD[] = {
    {I_VFMSUBADDPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4320, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4329, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4338, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4347, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+4356, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+4365, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+4374, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+4383, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADDPS[] = {
    {I_VFMSUBADDPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4392, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4401, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4410, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4419, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+4428, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+4437, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+4446, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+4455, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBPD[] = {
    {I_VFMSUBPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4464, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4473, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4482, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4491, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+4500, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+4509, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+4518, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+4527, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBPS[] = {
    {I_VFMSUBPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4536, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4545, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4554, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4563, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+4572, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+4581, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+4590, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+4599, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBSD[] = {
    {I_VFMSUBSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,XMMREG,0}, nasm_bytecodes+4608, IF_AMD|IF_SSE5},
    {I_VFMSUBSD, 3, {XMMREG,RM_XMM|BITS64,XMMREG,0,0}, nasm_bytecodes+4617, IF_AMD|IF_SSE5},
    {I_VFMSUBSD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS64,0}, nasm_bytecodes+4626, IF_AMD|IF_SSE5},
    {I_VFMSUBSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+4635, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBSS[] = {
    {I_VFMSUBSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,XMMREG,0}, nasm_bytecodes+4644, IF_AMD|IF_SSE5},
    {I_VFMSUBSS, 3, {XMMREG,RM_XMM|BITS32,XMMREG,0,0}, nasm_bytecodes+4653, IF_AMD|IF_SSE5},
    {I_VFMSUBSS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS32,0}, nasm_bytecodes+4662, IF_AMD|IF_SSE5},
    {I_VFMSUBSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+4671, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123PD[] = {
    {I_VFNMADD123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12570, IF_FMA|IF_FUTURE},
    {I_VFNMADD123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12577, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123PS[] = {
    {I_VFNMADD123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12556, IF_FMA|IF_FUTURE},
    {I_VFNMADD123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12563, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123SD[] = {
    {I_VFNMADD123SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12801, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123SS[] = {
    {I_VFNMADD123SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12794, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132PD[] = {
    {I_VFNMADD132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12542, IF_FMA|IF_FUTURE},
    {I_VFNMADD132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12549, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132PS[] = {
    {I_VFNMADD132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12528, IF_FMA|IF_FUTURE},
    {I_VFNMADD132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12535, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132SD[] = {
    {I_VFNMADD132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12787, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132SS[] = {
    {I_VFNMADD132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12780, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213PD[] = {
    {I_VFNMADD213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12570, IF_FMA|IF_FUTURE},
    {I_VFNMADD213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12577, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213PS[] = {
    {I_VFNMADD213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12556, IF_FMA|IF_FUTURE},
    {I_VFNMADD213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12563, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213SD[] = {
    {I_VFNMADD213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12801, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213SS[] = {
    {I_VFNMADD213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12794, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231PD[] = {
    {I_VFNMADD231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12598, IF_FMA|IF_FUTURE},
    {I_VFNMADD231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12605, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231PS[] = {
    {I_VFNMADD231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12584, IF_FMA|IF_FUTURE},
    {I_VFNMADD231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12591, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231SD[] = {
    {I_VFNMADD231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12815, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231SS[] = {
    {I_VFNMADD231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12808, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312PD[] = {
    {I_VFNMADD312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12542, IF_FMA|IF_FUTURE},
    {I_VFNMADD312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12549, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312PS[] = {
    {I_VFNMADD312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12528, IF_FMA|IF_FUTURE},
    {I_VFNMADD312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12535, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312SD[] = {
    {I_VFNMADD312SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12787, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312SS[] = {
    {I_VFNMADD312SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12780, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321PD[] = {
    {I_VFNMADD321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12598, IF_FMA|IF_FUTURE},
    {I_VFNMADD321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12605, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321PS[] = {
    {I_VFNMADD321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12584, IF_FMA|IF_FUTURE},
    {I_VFNMADD321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12591, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321SD[] = {
    {I_VFNMADD321SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12815, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321SS[] = {
    {I_VFNMADD321SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12808, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDPD[] = {
    {I_VFNMADDPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4680, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4689, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4698, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4707, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+4716, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+4725, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+4734, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+4743, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDPS[] = {
    {I_VFNMADDPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4752, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4761, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4770, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4779, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+4788, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+4797, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+4806, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+4815, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDSD[] = {
    {I_VFNMADDSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,XMMREG,0}, nasm_bytecodes+4824, IF_AMD|IF_SSE5},
    {I_VFNMADDSD, 3, {XMMREG,RM_XMM|BITS64,XMMREG,0,0}, nasm_bytecodes+4833, IF_AMD|IF_SSE5},
    {I_VFNMADDSD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS64,0}, nasm_bytecodes+4842, IF_AMD|IF_SSE5},
    {I_VFNMADDSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+4851, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDSS[] = {
    {I_VFNMADDSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,XMMREG,0}, nasm_bytecodes+4860, IF_AMD|IF_SSE5},
    {I_VFNMADDSS, 3, {XMMREG,RM_XMM|BITS32,XMMREG,0,0}, nasm_bytecodes+4869, IF_AMD|IF_SSE5},
    {I_VFNMADDSS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS32,0}, nasm_bytecodes+4878, IF_AMD|IF_SSE5},
    {I_VFNMADDSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+4887, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123PD[] = {
    {I_VFNMSUB123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12654, IF_FMA|IF_FUTURE},
    {I_VFNMSUB123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12661, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123PS[] = {
    {I_VFNMSUB123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12640, IF_FMA|IF_FUTURE},
    {I_VFNMSUB123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12647, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123SD[] = {
    {I_VFNMSUB123SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12843, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123SS[] = {
    {I_VFNMSUB123SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12836, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132PD[] = {
    {I_VFNMSUB132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12626, IF_FMA|IF_FUTURE},
    {I_VFNMSUB132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12633, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132PS[] = {
    {I_VFNMSUB132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12612, IF_FMA|IF_FUTURE},
    {I_VFNMSUB132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12619, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132SD[] = {
    {I_VFNMSUB132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12829, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132SS[] = {
    {I_VFNMSUB132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12822, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213PD[] = {
    {I_VFNMSUB213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12654, IF_FMA|IF_FUTURE},
    {I_VFNMSUB213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12661, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213PS[] = {
    {I_VFNMSUB213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12640, IF_FMA|IF_FUTURE},
    {I_VFNMSUB213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12647, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213SD[] = {
    {I_VFNMSUB213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12843, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213SS[] = {
    {I_VFNMSUB213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12836, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231PD[] = {
    {I_VFNMSUB231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12682, IF_FMA|IF_FUTURE},
    {I_VFNMSUB231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12689, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231PS[] = {
    {I_VFNMSUB231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12668, IF_FMA|IF_FUTURE},
    {I_VFNMSUB231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12675, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231SD[] = {
    {I_VFNMSUB231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12857, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231SS[] = {
    {I_VFNMSUB231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12850, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312PD[] = {
    {I_VFNMSUB312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12626, IF_FMA|IF_FUTURE},
    {I_VFNMSUB312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12633, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312PS[] = {
    {I_VFNMSUB312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12612, IF_FMA|IF_FUTURE},
    {I_VFNMSUB312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12619, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312SD[] = {
    {I_VFNMSUB312SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12829, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312SS[] = {
    {I_VFNMSUB312SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12822, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321PD[] = {
    {I_VFNMSUB321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12682, IF_FMA|IF_FUTURE},
    {I_VFNMSUB321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12689, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321PS[] = {
    {I_VFNMSUB321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12668, IF_FMA|IF_FUTURE},
    {I_VFNMSUB321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12675, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321SD[] = {
    {I_VFNMSUB321SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12857, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321SS[] = {
    {I_VFNMSUB321SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12850, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBPD[] = {
    {I_VFNMSUBPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4896, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4905, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4914, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4923, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+4932, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+4941, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+4950, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+4959, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBPS[] = {
    {I_VFNMSUBPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4968, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4977, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4986, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4995, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5004, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5013, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5022, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+5031, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBSD[] = {
    {I_VFNMSUBSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,XMMREG,0}, nasm_bytecodes+5040, IF_AMD|IF_SSE5},
    {I_VFNMSUBSD, 3, {XMMREG,RM_XMM|BITS64,XMMREG,0,0}, nasm_bytecodes+5049, IF_AMD|IF_SSE5},
    {I_VFNMSUBSD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS64,0}, nasm_bytecodes+5058, IF_AMD|IF_SSE5},
    {I_VFNMSUBSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+5067, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBSS[] = {
    {I_VFNMSUBSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,XMMREG,0}, nasm_bytecodes+5076, IF_AMD|IF_SSE5},
    {I_VFNMSUBSS, 3, {XMMREG,RM_XMM|BITS32,XMMREG,0,0}, nasm_bytecodes+5085, IF_AMD|IF_SSE5},
    {I_VFNMSUBSS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS32,0}, nasm_bytecodes+5094, IF_AMD|IF_SSE5},
    {I_VFNMSUBSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+5103, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZPD[] = {
    {I_VFRCZPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12906, IF_AMD|IF_SSE5},
    {I_VFRCZPD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+12913, IF_AMD|IF_SSE5},
    {I_VFRCZPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12920, IF_AMD|IF_SSE5},
    {I_VFRCZPD, 1, {YMMREG,0,0,0,0}, nasm_bytecodes+12927, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZPS[] = {
    {I_VFRCZPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12934, IF_AMD|IF_SSE5},
    {I_VFRCZPS, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+12941, IF_AMD|IF_SSE5},
    {I_VFRCZPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12948, IF_AMD|IF_SSE5},
    {I_VFRCZPS, 1, {YMMREG,0,0,0,0}, nasm_bytecodes+12955, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZSD[] = {
    {I_VFRCZSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+12962, IF_AMD|IF_SSE5},
    {I_VFRCZSD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+12969, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZSS[] = {
    {I_VFRCZSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+12976, IF_AMD|IF_SSE5},
    {I_VFRCZSS, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+12983, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHADDPD[] = {
    {I_VHADDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9469, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9476, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9483, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9490, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHADDPS[] = {
    {I_VHADDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9497, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9504, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9511, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9518, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHSUBPD[] = {
    {I_VHSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9525, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9532, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9539, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9546, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHSUBPS[] = {
    {I_VHSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9553, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9560, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9567, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9574, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTF128[] = {
    {I_VINSERTF128, 4, {YMMREG,YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6348, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTPS[] = {
    {I_VINSERTPS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+6356, IF_AVX|IF_SANDYBRIDGE},
    {I_VINSERTPS, 3, {XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6364, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VLDDQU[] = {
    {I_VLDDQU, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+9581, IF_AVX|IF_SANDYBRIDGE},
    {I_VLDDQU, 2, {YMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+9588, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VLDMXCSR[] = {
    {I_VLDMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+9595, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VLDQQU[] = {
    {I_VLDQQU, 2, {YMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+9588, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMASKMOVDQU[] = {
    {I_VMASKMOVDQU, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+9602, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMASKMOVPD[] = {
    {I_VMASKMOVPD, 3, {XMMREG,XMMREG,MEMORY|BITS128,0,0}, nasm_bytecodes+9637, IF_AVX|IF_SANDYBRIDGE},
    {I_VMASKMOVPD, 3, {YMMREG,YMMREG,MEMORY|BITS256,0,0}, nasm_bytecodes+9644, IF_AVX|IF_SANDYBRIDGE},
    {I_VMASKMOVPD, 3, {MEMORY|BITS128,XMMREG,XMMREG,0,0}, nasm_bytecodes+9651, IF_AVX|IF_SANDYBRIDGE},
    {I_VMASKMOVPD, 3, {MEMORY|BITS256,YMMREG,YMMREG,0,0}, nasm_bytecodes+9658, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMASKMOVPS[] = {
    {I_VMASKMOVPS, 3, {XMMREG,XMMREG,MEMORY|BITS128,0,0}, nasm_bytecodes+9609, IF_AVX|IF_SANDYBRIDGE},
    {I_VMASKMOVPS, 3, {YMMREG,YMMREG,MEMORY|BITS256,0,0}, nasm_bytecodes+9616, IF_AVX|IF_SANDYBRIDGE},
    {I_VMASKMOVPS, 3, {MEMORY|BITS128,XMMREG,XMMREG,0,0}, nasm_bytecodes+9623, IF_AVX|IF_SANDYBRIDGE|IF_SO},
    {I_VMASKMOVPS, 3, {MEMORY|BITS256,XMMREG,XMMREG,0,0}, nasm_bytecodes+9630, IF_AVX|IF_SANDYBRIDGE|IF_SY},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXPD[] = {
    {I_VMAXPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9665, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9672, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9679, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9686, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXPS[] = {
    {I_VMAXPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9693, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9700, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9707, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9714, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXSD[] = {
    {I_VMAXSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+9721, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9728, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXSS[] = {
    {I_VMAXSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+9735, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9742, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMCALL[] = {
    {I_VMCALL, 0, {0,0,0,0,0}, nasm_bytecodes+18864, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMCLEAR[] = {
    {I_VMCLEAR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+15804, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINPD[] = {
    {I_VMINPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9749, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9756, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9763, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9770, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINPS[] = {
    {I_VMINPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9777, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9784, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9791, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9798, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINSD[] = {
    {I_VMINSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+9805, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9812, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINSS[] = {
    {I_VMINSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+9819, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9826, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMLAUNCH[] = {
    {I_VMLAUNCH, 0, {0,0,0,0,0}, nasm_bytecodes+18869, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMLOAD[] = {
    {I_VMLOAD, 0, {0,0,0,0,0}, nasm_bytecodes+18874, IF_X64|IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMMCALL[] = {
    {I_VMMCALL, 0, {0,0,0,0,0}, nasm_bytecodes+18879, IF_X64|IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVAPD[] = {
    {I_VMOVAPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9833, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPD, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+9840, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9847, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPD, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9854, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVAPS[] = {
    {I_VMOVAPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9861, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPS, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+9868, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9875, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPS, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9882, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVD[] = {
    {I_VMOVD, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+9917, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVD, 2, {RM_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+9924, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDDUP[] = {
    {I_VMOVDDUP, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9931, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDDUP, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9938, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQA[] = {
    {I_VMOVDQA, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9945, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQA, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+9952, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQA, 2, {YMMREG,RM_YMM,0,0,0}, nasm_bytecodes+9959, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQA, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9966, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQU[] = {
    {I_VMOVDQU, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9973, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQU, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+9980, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQU, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9987, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQU, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9994, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVHLPS[] = {
    {I_VMOVHLPS, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+10001, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVHLPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+10008, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVHPD[] = {
    {I_VMOVHPD, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, nasm_bytecodes+10015, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVHPD, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+10022, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVHPD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10029, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVHPS[] = {
    {I_VMOVHPS, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, nasm_bytecodes+10036, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVHPS, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+10043, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVHPS, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10050, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVLHPS[] = {
    {I_VMOVLHPS, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+10036, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVLHPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+10043, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVLPD[] = {
    {I_VMOVLPD, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, nasm_bytecodes+10057, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVLPD, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+10064, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVLPD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10071, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVLPS[] = {
    {I_VMOVLPS, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, nasm_bytecodes+10001, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVLPS, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+10008, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVLPS, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10078, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVMSKPD[] = {
    {I_VMOVMSKPD, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10085, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VMOVMSKPD, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+10085, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVMSKPD, 2, {REG_GPR|BITS64,YMMREG,0,0,0}, nasm_bytecodes+10092, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VMOVMSKPD, 2, {REG_GPR|BITS32,YMMREG,0,0,0}, nasm_bytecodes+10092, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVMSKPS[] = {
    {I_VMOVMSKPS, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10099, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VMOVMSKPS, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+10099, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVMSKPS, 2, {REG_GPR|BITS64,YMMREG,0,0,0}, nasm_bytecodes+10106, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VMOVMSKPS, 2, {REG_GPR|BITS32,YMMREG,0,0,0}, nasm_bytecodes+10106, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTDQ[] = {
    {I_VMOVNTDQ, 2, {MEMORY|BITS128,XMMREG,0,0,0}, nasm_bytecodes+10113, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVNTDQ, 2, {MEMORY|BITS256,YMMREG,0,0,0}, nasm_bytecodes+10120, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTDQA[] = {
    {I_VMOVNTDQA, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+10127, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTPD[] = {
    {I_VMOVNTPD, 2, {MEMORY|BITS128,XMMREG,0,0,0}, nasm_bytecodes+10134, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVNTPD, 2, {MEMORY|BITS256,YMMREG,0,0,0}, nasm_bytecodes+10141, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTPS[] = {
    {I_VMOVNTPS, 2, {MEMORY|BITS128,XMMREG,0,0,0}, nasm_bytecodes+10148, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVNTPS, 2, {MEMORY|BITS128,YMMREG,0,0,0}, nasm_bytecodes+10155, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTQQ[] = {
    {I_VMOVNTQQ, 2, {MEMORY|BITS256,YMMREG,0,0,0}, nasm_bytecodes+10120, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVQ[] = {
    {I_VMOVQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9889, IF_AVX|IF_SANDYBRIDGE|IF_SQ},
    {I_VMOVQ, 2, {RM_XMM|BITS64,XMMREG,0,0,0}, nasm_bytecodes+9896, IF_AVX|IF_SANDYBRIDGE|IF_SQ},
    {I_VMOVQ, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+9903, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    {I_VMOVQ, 2, {RM_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+9910, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVQQA[] = {
    {I_VMOVQQA, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9959, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVQQA, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9966, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVQQU[] = {
    {I_VMOVQQU, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9987, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVQQU, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9994, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSD[] = {
    {I_VMOVSD, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+10162, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+10169, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSD, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+10176, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSD, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+10183, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+10190, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10197, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSHDUP[] = {
    {I_VMOVSHDUP, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10204, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSHDUP, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10211, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSLDUP[] = {
    {I_VMOVSLDUP, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10218, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSLDUP, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10225, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSS[] = {
    {I_VMOVSS, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+10232, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+10239, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSS, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+10246, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSS, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+10253, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+10260, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSS, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10267, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVUPD[] = {
    {I_VMOVUPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10274, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPD, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+10281, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10288, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPD, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+10295, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVUPS[] = {
    {I_VMOVUPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10302, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPS, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+10309, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10316, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPS, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+10323, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMPSADBW[] = {
    {I_VMPSADBW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6372, IF_AVX|IF_SANDYBRIDGE},
    {I_VMPSADBW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6380, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMPTRLD[] = {
    {I_VMPTRLD, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+15811, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMPTRST[] = {
    {I_VMPTRST, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+18884, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMREAD[] = {
    {I_VMREAD, 2, {RM_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+8189, IF_VMX|IF_NOLONG|IF_SD},
    {I_VMREAD, 2, {RM_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+8188, IF_X64|IF_VMX|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMRESUME[] = {
    {I_VMRESUME, 0, {0,0,0,0,0}, nasm_bytecodes+18889, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMRUN[] = {
    {I_VMRUN, 0, {0,0,0,0,0}, nasm_bytecodes+18894, IF_X64|IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMSAVE[] = {
    {I_VMSAVE, 0, {0,0,0,0,0}, nasm_bytecodes+18899, IF_X64|IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULPD[] = {
    {I_VMULPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10330, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10337, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+10344, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10351, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULPS[] = {
    {I_VMULPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10358, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10365, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+10372, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10379, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULSD[] = {
    {I_VMULSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+10386, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+10393, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULSS[] = {
    {I_VMULSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+10400, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+10407, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMWRITE[] = {
    {I_VMWRITE, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+8196, IF_VMX|IF_NOLONG|IF_SD},
    {I_VMWRITE, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+8195, IF_X64|IF_VMX|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMXOFF[] = {
    {I_VMXOFF, 0, {0,0,0,0,0}, nasm_bytecodes+18904, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMXON[] = {
    {I_VMXON, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+15810, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VORPD[] = {
    {I_VORPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10414, IF_AVX|IF_SANDYBRIDGE},
    {I_VORPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10421, IF_AVX|IF_SANDYBRIDGE},
    {I_VORPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+10428, IF_AVX|IF_SANDYBRIDGE},
    {I_VORPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10435, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VORPS[] = {
    {I_VORPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10442, IF_AVX|IF_SANDYBRIDGE},
    {I_VORPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10449, IF_AVX|IF_SANDYBRIDGE},
    {I_VORPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+10456, IF_AVX|IF_SANDYBRIDGE},
    {I_VORPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10463, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPABSB[] = {
    {I_VPABSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10470, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPABSD[] = {
    {I_VPABSD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10484, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPABSW[] = {
    {I_VPABSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10477, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKSSDW[] = {
    {I_VPACKSSDW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10505, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKSSDW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10512, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKSSWB[] = {
    {I_VPACKSSWB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10491, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKSSWB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10498, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKUSDW[] = {
    {I_VPACKUSDW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10533, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKUSDW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10540, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKUSWB[] = {
    {I_VPACKUSWB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10519, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKUSWB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10526, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDB[] = {
    {I_VPADDB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10547, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10554, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDD[] = {
    {I_VPADDD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10575, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10582, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDQ[] = {
    {I_VPADDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10589, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10596, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDSB[] = {
    {I_VPADDSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10603, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10610, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDSW[] = {
    {I_VPADDSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10617, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10624, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDUSB[] = {
    {I_VPADDUSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10631, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDUSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10638, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDUSW[] = {
    {I_VPADDUSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10645, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDUSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10652, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDW[] = {
    {I_VPADDW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10561, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10568, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPALIGNR[] = {
    {I_VPALIGNR, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6388, IF_AVX|IF_SANDYBRIDGE},
    {I_VPALIGNR, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6396, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPAND[] = {
    {I_VPAND, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10659, IF_AVX|IF_SANDYBRIDGE},
    {I_VPAND, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10666, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPANDN[] = {
    {I_VPANDN, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10673, IF_AVX|IF_SANDYBRIDGE},
    {I_VPANDN, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10680, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPAVGB[] = {
    {I_VPAVGB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10687, IF_AVX|IF_SANDYBRIDGE},
    {I_VPAVGB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10694, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPAVGW[] = {
    {I_VPAVGW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10701, IF_AVX|IF_SANDYBRIDGE},
    {I_VPAVGW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10708, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDVB[] = {
    {I_VPBLENDVB, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+3546, IF_AVX|IF_SANDYBRIDGE},
    {I_VPBLENDVB, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+3555, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDW[] = {
    {I_VPBLENDW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6404, IF_AVX|IF_SANDYBRIDGE},
    {I_VPBLENDW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6412, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULHQHQDQ[] = {
    {I_VPCLMULHQHQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+3942, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCLMULHQHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3951, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULHQLQDQ[] = {
    {I_VPCLMULHQLQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+3906, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCLMULHQLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3915, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULLQHQDQ[] = {
    {I_VPCLMULLQHQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+3924, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCLMULLQHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3933, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULLQLQDQ[] = {
    {I_VPCLMULLQLQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+3888, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCLMULLQLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3897, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULQDQ[] = {
    {I_VPCLMULQDQ, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6916, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCLMULQDQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6924, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMOV[] = {
    {I_VPCMOV, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5112, IF_AMD|IF_SSE5},
    {I_VPCMOV, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5121, IF_AMD|IF_SSE5},
    {I_VPCMOV, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+5130, IF_AMD|IF_SSE5},
    {I_VPCMOV, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+5139, IF_AMD|IF_SSE5},
    {I_VPCMOV, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5148, IF_AMD|IF_SSE5},
    {I_VPCMOV, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5157, IF_AMD|IF_SSE5},
    {I_VPCMOV, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5166, IF_AMD|IF_SSE5},
    {I_VPCMOV, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+5175, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQB[] = {
    {I_VPCMPEQB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10715, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10722, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQD[] = {
    {I_VPCMPEQD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10743, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10750, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQQ[] = {
    {I_VPCMPEQQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10757, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10764, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQW[] = {
    {I_VPCMPEQW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10729, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10736, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPESTRI[] = {
    {I_VPCMPESTRI, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6420, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPESTRM[] = {
    {I_VPCMPESTRM, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6428, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTB[] = {
    {I_VPCMPGTB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10771, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10778, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTD[] = {
    {I_VPCMPGTD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10799, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10806, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTQ[] = {
    {I_VPCMPGTQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10813, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10820, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTW[] = {
    {I_VPCMPGTW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10785, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10792, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPISTRI[] = {
    {I_VPCMPISTRI, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6436, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPISTRM[] = {
    {I_VPCMPISTRM, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6444, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMB[] = {
    {I_VPCOMB, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+7044, IF_AMD|IF_SSE5},
    {I_VPCOMB, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7052, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMD[] = {
    {I_VPCOMD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+7060, IF_AMD|IF_SSE5},
    {I_VPCOMD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7068, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMQ[] = {
    {I_VPCOMQ, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+7076, IF_AMD|IF_SSE5},
    {I_VPCOMQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7084, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUB[] = {
    {I_VPCOMUB, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+7092, IF_AMD|IF_SSE5},
    {I_VPCOMUB, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7100, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUD[] = {
    {I_VPCOMUD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+7108, IF_AMD|IF_SSE5},
    {I_VPCOMUD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7116, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUQ[] = {
    {I_VPCOMUQ, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+7124, IF_AMD|IF_SSE5},
    {I_VPCOMUQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7132, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUW[] = {
    {I_VPCOMUW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+7140, IF_AMD|IF_SSE5},
    {I_VPCOMUW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7148, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMW[] = {
    {I_VPCOMW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+7156, IF_AMD|IF_SSE5},
    {I_VPCOMW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7164, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERM2F128[] = {
    {I_VPERM2F128, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+6484, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMIL2PD[] = {
    {I_VPERMIL2PD, 5, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,IMMEDIATE|BITS8}, nasm_bytecodes+3672, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMIL2PD, 5, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8}, nasm_bytecodes+3681, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMIL2PD, 5, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,IMMEDIATE|BITS8}, nasm_bytecodes+3690, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMIL2PD, 5, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8}, nasm_bytecodes+3699, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMIL2PS[] = {
    {I_VPERMIL2PS, 5, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,IMMEDIATE|BITS8}, nasm_bytecodes+3816, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMIL2PS, 5, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8}, nasm_bytecodes+3825, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMIL2PS, 5, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,IMMEDIATE|BITS8}, nasm_bytecodes+3834, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMIL2PS, 5, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8}, nasm_bytecodes+3843, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILMO2PD[] = {
    {I_VPERMILMO2PD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+3600, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMO2PD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+3609, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMO2PD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+3618, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMO2PD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+3627, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILMO2PS[] = {
    {I_VPERMILMO2PS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+3744, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMO2PS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+3753, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMO2PS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+3762, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMO2PS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+3771, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILMZ2PD[] = {
    {I_VPERMILMZ2PD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+3636, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMZ2PD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+3645, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMZ2PD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+3654, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMZ2PD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+3663, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILMZ2PS[] = {
    {I_VPERMILMZ2PS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+3780, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMZ2PS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+3789, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMZ2PS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+3798, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILMZ2PS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+3807, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILPD[] = {
    {I_VPERMILPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10827, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+10834, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6452, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6460, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILPS[] = {
    {I_VPERMILPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10841, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+10848, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6468, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6476, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILTD2PD[] = {
    {I_VPERMILTD2PD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+3564, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILTD2PD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+3573, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILTD2PD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+3582, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILTD2PD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+3591, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILTD2PS[] = {
    {I_VPERMILTD2PS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+3708, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILTD2PS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+3717, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILTD2PS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+3726, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILTD2PS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+3735, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRB[] = {
    {I_VPEXTRB, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6492, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPEXTRB, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6492, IF_AVX|IF_SANDYBRIDGE},
    {I_VPEXTRB, 3, {MEMORY|BITS8,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6492, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRD[] = {
    {I_VPEXTRD, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6516, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPEXTRD, 3, {RM_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6516, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRQ[] = {
    {I_VPEXTRQ, 3, {RM_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6524, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRW[] = {
    {I_VPEXTRW, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6500, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPEXTRW, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6500, IF_AVX|IF_SANDYBRIDGE},
    {I_VPEXTRW, 3, {MEMORY|BITS16,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6500, IF_AVX|IF_SANDYBRIDGE},
    {I_VPEXTRW, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6508, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPEXTRW, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6508, IF_AVX|IF_SANDYBRIDGE},
    {I_VPEXTRW, 3, {MEMORY|BITS16,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6508, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDBD[] = {
    {I_VPHADDBD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12990, IF_AMD|IF_SSE5},
    {I_VPHADDBD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+12997, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDBQ[] = {
    {I_VPHADDBQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13004, IF_AMD|IF_SSE5},
    {I_VPHADDBQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13011, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDBW[] = {
    {I_VPHADDBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13018, IF_AMD|IF_SSE5},
    {I_VPHADDBW, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13025, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDD[] = {
    {I_VPHADDD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10869, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHADDD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10876, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDDQ[] = {
    {I_VPHADDDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13032, IF_AMD|IF_SSE5},
    {I_VPHADDDQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13039, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDSW[] = {
    {I_VPHADDSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10883, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHADDSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10890, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUBD[] = {
    {I_VPHADDUBD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13046, IF_AMD|IF_SSE5},
    {I_VPHADDUBD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13053, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUBQ[] = {
    {I_VPHADDUBQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13060, IF_AMD|IF_SSE5},
    {I_VPHADDUBQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13067, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUBW[] = {
    {I_VPHADDUBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13074, IF_AMD|IF_SSE5},
    {I_VPHADDUBW, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13081, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUDQ[] = {
    {I_VPHADDUDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13088, IF_AMD|IF_SSE5},
    {I_VPHADDUDQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13095, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUWD[] = {
    {I_VPHADDUWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13102, IF_AMD|IF_SSE5},
    {I_VPHADDUWD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13109, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUWQ[] = {
    {I_VPHADDUWQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13116, IF_AMD|IF_SSE5},
    {I_VPHADDUWQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13123, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDW[] = {
    {I_VPHADDW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10855, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHADDW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10862, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDWD[] = {
    {I_VPHADDWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13130, IF_AMD|IF_SSE5},
    {I_VPHADDWD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13137, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDWQ[] = {
    {I_VPHADDWQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13144, IF_AMD|IF_SSE5},
    {I_VPHADDWQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13151, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHMINPOSUW[] = {
    {I_VPHMINPOSUW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10897, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBBW[] = {
    {I_VPHSUBBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13158, IF_AMD|IF_SSE5},
    {I_VPHSUBBW, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13165, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBD[] = {
    {I_VPHSUBD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10918, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHSUBD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10925, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBDQ[] = {
    {I_VPHSUBDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13172, IF_AMD|IF_SSE5},
    {I_VPHSUBDQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13179, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBSW[] = {
    {I_VPHSUBSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10932, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHSUBSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10939, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBW[] = {
    {I_VPHSUBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10904, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHSUBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10911, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBWD[] = {
    {I_VPHSUBWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13186, IF_AMD|IF_SSE5},
    {I_VPHSUBWD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13193, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRB[] = {
    {I_VPINSRB, 4, {XMMREG,XMMREG,MEMORY|BITS8,IMMEDIATE|BITS8,0}, nasm_bytecodes+6532, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRB, 3, {XMMREG,MEMORY|BITS8,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6540, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRB, 4, {XMMREG,XMMREG,RM_GPR|BITS8,IMMEDIATE|BITS8,0}, nasm_bytecodes+6532, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRB, 3, {XMMREG,RM_GPR|BITS8,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6540, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRB, 4, {XMMREG,XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+6532, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRB, 3, {XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6540, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRD[] = {
    {I_VPINSRD, 4, {XMMREG,XMMREG,MEMORY|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+6564, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRD, 3, {XMMREG,MEMORY|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6572, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRD, 4, {XMMREG,XMMREG,RM_GPR|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+6564, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRD, 3, {XMMREG,RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6572, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRQ[] = {
    {I_VPINSRQ, 4, {XMMREG,XMMREG,MEMORY|BITS64,IMMEDIATE|BITS8,0}, nasm_bytecodes+6580, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPINSRQ, 3, {XMMREG,MEMORY|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6588, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPINSRQ, 4, {XMMREG,XMMREG,RM_GPR|BITS64,IMMEDIATE|BITS8,0}, nasm_bytecodes+6580, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPINSRQ, 3, {XMMREG,RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6588, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRW[] = {
    {I_VPINSRW, 4, {XMMREG,XMMREG,MEMORY|BITS16,IMMEDIATE|BITS8,0}, nasm_bytecodes+6548, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRW, 3, {XMMREG,MEMORY|BITS16,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6556, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRW, 4, {XMMREG,XMMREG,RM_GPR|BITS16,IMMEDIATE|BITS8,0}, nasm_bytecodes+6548, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRW, 3, {XMMREG,RM_GPR|BITS16,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6556, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRW, 4, {XMMREG,XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+6548, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRW, 3, {XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6556, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSDD[] = {
    {I_VPMACSDD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5184, IF_AMD|IF_SSE5},
    {I_VPMACSDD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5193, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSDQH[] = {
    {I_VPMACSDQH, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5202, IF_AMD|IF_SSE5},
    {I_VPMACSDQH, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5211, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSDQL[] = {
    {I_VPMACSDQL, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5220, IF_AMD|IF_SSE5},
    {I_VPMACSDQL, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5229, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSDD[] = {
    {I_VPMACSSDD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5238, IF_AMD|IF_SSE5},
    {I_VPMACSSDD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5247, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSDQH[] = {
    {I_VPMACSSDQH, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5256, IF_AMD|IF_SSE5},
    {I_VPMACSSDQH, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5265, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSDQL[] = {
    {I_VPMACSSDQL, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5274, IF_AMD|IF_SSE5},
    {I_VPMACSSDQL, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5283, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSWD[] = {
    {I_VPMACSSWD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5292, IF_AMD|IF_SSE5},
    {I_VPMACSSWD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5301, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSWW[] = {
    {I_VPMACSSWW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5310, IF_AMD|IF_SSE5},
    {I_VPMACSSWW, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5319, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSWD[] = {
    {I_VPMACSWD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5328, IF_AMD|IF_SSE5},
    {I_VPMACSWD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5337, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSWW[] = {
    {I_VPMACSWW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5346, IF_AMD|IF_SSE5},
    {I_VPMACSWW, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5355, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADCSSWD[] = {
    {I_VPMADCSSWD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5364, IF_AMD|IF_SSE5},
    {I_VPMADCSSWD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5373, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADCSWD[] = {
    {I_VPMADCSWD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5382, IF_AMD|IF_SSE5},
    {I_VPMADCSWD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5391, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADDUBSW[] = {
    {I_VPMADDUBSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10960, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMADDUBSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10967, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADDWD[] = {
    {I_VPMADDWD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10946, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMADDWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10953, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXSB[] = {
    {I_VPMAXSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10974, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10981, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXSD[] = {
    {I_VPMAXSD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11002, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXSD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11009, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXSW[] = {
    {I_VPMAXSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10988, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10995, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXUB[] = {
    {I_VPMAXUB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11016, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXUB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11023, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXUD[] = {
    {I_VPMAXUD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11044, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXUD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11051, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXUW[] = {
    {I_VPMAXUW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11030, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXUW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11037, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINSB[] = {
    {I_VPMINSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11058, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11065, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINSD[] = {
    {I_VPMINSD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11086, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINSD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11093, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINSW[] = {
    {I_VPMINSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11072, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11079, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINUB[] = {
    {I_VPMINUB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11100, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINUB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11107, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINUD[] = {
    {I_VPMINUD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11128, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINUD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11135, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINUW[] = {
    {I_VPMINUW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11114, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINUW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11121, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVMSKB[] = {
    {I_VPMOVMSKB, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+11142, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPMOVMSKB, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+11142, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXBD[] = {
    {I_VPMOVSXBD, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11156, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXBQ[] = {
    {I_VPMOVSXBQ, 2, {XMMREG,RM_XMM|BITS16,0,0,0}, nasm_bytecodes+11163, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXBW[] = {
    {I_VPMOVSXBW, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11149, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXDQ[] = {
    {I_VPMOVSXDQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11184, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXWD[] = {
    {I_VPMOVSXWD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11170, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXWQ[] = {
    {I_VPMOVSXWQ, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11177, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXBD[] = {
    {I_VPMOVZXBD, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11198, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXBQ[] = {
    {I_VPMOVZXBQ, 2, {XMMREG,RM_XMM|BITS16,0,0,0}, nasm_bytecodes+11205, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXBW[] = {
    {I_VPMOVZXBW, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11191, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXDQ[] = {
    {I_VPMOVZXDQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11226, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXWD[] = {
    {I_VPMOVZXWD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11212, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXWQ[] = {
    {I_VPMOVZXWQ, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11219, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULDQ[] = {
    {I_VPMULDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11317, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11324, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULHRSW[] = {
    {I_VPMULHRSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11247, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULHRSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11254, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULHUW[] = {
    {I_VPMULHUW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11233, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULHUW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11240, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULHW[] = {
    {I_VPMULHW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11261, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULHW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11268, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULLD[] = {
    {I_VPMULLD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11289, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULLD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11296, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULLW[] = {
    {I_VPMULLW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11275, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULLW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11282, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULUDQ[] = {
    {I_VPMULUDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11303, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULUDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11310, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPOR[] = {
    {I_VPOR, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11331, IF_AVX|IF_SANDYBRIDGE},
    {I_VPOR, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11338, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPPERM[] = {
    {I_VPPERM, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5400, IF_AMD|IF_SSE5},
    {I_VPPERM, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5409, IF_AMD|IF_SSE5},
    {I_VPPERM, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5418, IF_AMD|IF_SSE5},
    {I_VPPERM, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5427, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTB[] = {
    {I_VPROTB, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13200, IF_AMD|IF_SSE5},
    {I_VPROTB, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13207, IF_AMD|IF_SSE5},
    {I_VPROTB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13214, IF_AMD|IF_SSE5},
    {I_VPROTB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13221, IF_AMD|IF_SSE5},
    {I_VPROTB, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7172, IF_AMD|IF_SSE5},
    {I_VPROTB, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+7180, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTD[] = {
    {I_VPROTD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13228, IF_AMD|IF_SSE5},
    {I_VPROTD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13235, IF_AMD|IF_SSE5},
    {I_VPROTD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13242, IF_AMD|IF_SSE5},
    {I_VPROTD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13249, IF_AMD|IF_SSE5},
    {I_VPROTD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7188, IF_AMD|IF_SSE5},
    {I_VPROTD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+7196, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTQ[] = {
    {I_VPROTQ, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13256, IF_AMD|IF_SSE5},
    {I_VPROTQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13263, IF_AMD|IF_SSE5},
    {I_VPROTQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13270, IF_AMD|IF_SSE5},
    {I_VPROTQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13277, IF_AMD|IF_SSE5},
    {I_VPROTQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7204, IF_AMD|IF_SSE5},
    {I_VPROTQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+7212, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTW[] = {
    {I_VPROTW, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13284, IF_AMD|IF_SSE5},
    {I_VPROTW, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13291, IF_AMD|IF_SSE5},
    {I_VPROTW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13298, IF_AMD|IF_SSE5},
    {I_VPROTW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13305, IF_AMD|IF_SSE5},
    {I_VPROTW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7220, IF_AMD|IF_SSE5},
    {I_VPROTW, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+7228, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSADBW[] = {
    {I_VPSADBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11345, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSADBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11352, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAB[] = {
    {I_VPSHAB, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13312, IF_AMD|IF_SSE5},
    {I_VPSHAB, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13319, IF_AMD|IF_SSE5},
    {I_VPSHAB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13326, IF_AMD|IF_SSE5},
    {I_VPSHAB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13333, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAD[] = {
    {I_VPSHAD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13340, IF_AMD|IF_SSE5},
    {I_VPSHAD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13347, IF_AMD|IF_SSE5},
    {I_VPSHAD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13354, IF_AMD|IF_SSE5},
    {I_VPSHAD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13361, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAQ[] = {
    {I_VPSHAQ, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13368, IF_AMD|IF_SSE5},
    {I_VPSHAQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13375, IF_AMD|IF_SSE5},
    {I_VPSHAQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13382, IF_AMD|IF_SSE5},
    {I_VPSHAQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13389, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAW[] = {
    {I_VPSHAW, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13396, IF_AMD|IF_SSE5},
    {I_VPSHAW, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13403, IF_AMD|IF_SSE5},
    {I_VPSHAW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13410, IF_AMD|IF_SSE5},
    {I_VPSHAW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13417, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLB[] = {
    {I_VPSHLB, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13424, IF_AMD|IF_SSE5},
    {I_VPSHLB, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13431, IF_AMD|IF_SSE5},
    {I_VPSHLB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13438, IF_AMD|IF_SSE5},
    {I_VPSHLB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13445, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLD[] = {
    {I_VPSHLD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13452, IF_AMD|IF_SSE5},
    {I_VPSHLD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13459, IF_AMD|IF_SSE5},
    {I_VPSHLD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13466, IF_AMD|IF_SSE5},
    {I_VPSHLD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13473, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLQ[] = {
    {I_VPSHLQ, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13480, IF_AMD|IF_SSE5},
    {I_VPSHLQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13487, IF_AMD|IF_SSE5},
    {I_VPSHLQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13494, IF_AMD|IF_SSE5},
    {I_VPSHLQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13501, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLW[] = {
    {I_VPSHLW, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13508, IF_AMD|IF_SSE5},
    {I_VPSHLW, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13515, IF_AMD|IF_SSE5},
    {I_VPSHLW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13522, IF_AMD|IF_SSE5},
    {I_VPSHLW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13529, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFB[] = {
    {I_VPSHUFB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11359, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSHUFB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11366, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFD[] = {
    {I_VPSHUFD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6596, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFHW[] = {
    {I_VPSHUFHW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6604, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFLW[] = {
    {I_VPSHUFLW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6612, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSIGNB[] = {
    {I_VPSIGNB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11373, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSIGNB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11380, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSIGND[] = {
    {I_VPSIGND, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11401, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSIGND, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11408, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSIGNW[] = {
    {I_VPSIGNW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11387, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSIGNW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11394, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLD[] = {
    {I_VPSLLD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11429, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11436, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLD, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6668, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6676, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLDQ[] = {
    {I_VPSLLDQ, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6620, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLDQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6628, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLQ[] = {
    {I_VPSLLQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11443, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11450, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLQ, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6684, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6692, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLW[] = {
    {I_VPSLLW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11415, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11422, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLW, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6652, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLW, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6660, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRAD[] = {
    {I_VPSRAD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11471, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11478, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAD, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6716, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6724, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRAW[] = {
    {I_VPSRAW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11457, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11464, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAW, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6700, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAW, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6708, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLD[] = {
    {I_VPSRLD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11499, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11506, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLD, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6748, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6756, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLDQ[] = {
    {I_VPSRLDQ, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6636, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLDQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6644, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLQ[] = {
    {I_VPSRLQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11513, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11520, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLQ, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6764, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6772, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLW[] = {
    {I_VPSRLW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11485, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11492, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLW, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6732, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLW, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6740, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBB[] = {
    {I_VPSUBB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11541, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11548, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBD[] = {
    {I_VPSUBD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11569, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11576, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBQ[] = {
    {I_VPSUBQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11583, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11590, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBSB[] = {
    {I_VPSUBSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11597, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11604, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBSW[] = {
    {I_VPSUBSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11611, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11618, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBUSB[] = {
    {I_VPSUBUSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11625, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBUSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11632, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBUSW[] = {
    {I_VPSUBUSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11639, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBUSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11646, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBW[] = {
    {I_VPSUBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11555, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11562, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTEST[] = {
    {I_VPTEST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11527, IF_AVX|IF_SANDYBRIDGE},
    {I_VPTEST, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11534, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHBW[] = {
    {I_VPUNPCKHBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11653, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11660, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHDQ[] = {
    {I_VPUNPCKHDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11681, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11688, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHQDQ[] = {
    {I_VPUNPCKHQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11695, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11702, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHWD[] = {
    {I_VPUNPCKHWD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11667, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11674, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLBW[] = {
    {I_VPUNPCKLBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11709, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11716, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLDQ[] = {
    {I_VPUNPCKLDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11737, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11744, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLQDQ[] = {
    {I_VPUNPCKLQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11751, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11758, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLWD[] = {
    {I_VPUNPCKLWD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11723, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11730, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPXOR[] = {
    {I_VPXOR, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11765, IF_AVX|IF_SANDYBRIDGE},
    {I_VPXOR, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11772, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCPPS[] = {
    {I_VRCPPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11779, IF_AVX|IF_SANDYBRIDGE},
    {I_VRCPPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11786, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCPSS[] = {
    {I_VRCPSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+11793, IF_AVX|IF_SANDYBRIDGE},
    {I_VRCPSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11800, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDPD[] = {
    {I_VROUNDPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6780, IF_AVX|IF_SANDYBRIDGE},
    {I_VROUNDPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6788, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDPS[] = {
    {I_VROUNDPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6796, IF_AVX|IF_SANDYBRIDGE},
    {I_VROUNDPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6804, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDSD[] = {
    {I_VROUNDSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0}, nasm_bytecodes+6812, IF_AVX|IF_SANDYBRIDGE},
    {I_VROUNDSD, 3, {XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6820, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDSS[] = {
    {I_VROUNDSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+6828, IF_AVX|IF_SANDYBRIDGE},
    {I_VROUNDSS, 3, {XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6836, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRTPS[] = {
    {I_VRSQRTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11807, IF_AVX|IF_SANDYBRIDGE},
    {I_VRSQRTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11814, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRTSS[] = {
    {I_VRSQRTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+11821, IF_AVX|IF_SANDYBRIDGE},
    {I_VRSQRTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11828, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSHUFPD[] = {
    {I_VSHUFPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6844, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6852, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+6860, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6868, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSHUFPS[] = {
    {I_VSHUFPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6876, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6884, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+6892, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6900, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTPD[] = {
    {I_VSQRTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11835, IF_AVX|IF_SANDYBRIDGE},
    {I_VSQRTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11842, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTPS[] = {
    {I_VSQRTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11849, IF_AVX|IF_SANDYBRIDGE},
    {I_VSQRTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11856, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTSD[] = {
    {I_VSQRTSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+11863, IF_AVX|IF_SANDYBRIDGE},
    {I_VSQRTSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11870, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTSS[] = {
    {I_VSQRTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+11877, IF_AVX|IF_SANDYBRIDGE},
    {I_VSQRTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11884, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSTMXCSR[] = {
    {I_VSTMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+11891, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBPD[] = {
    {I_VSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11898, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11905, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+11912, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11919, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBPS[] = {
    {I_VSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11926, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11933, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+11940, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11947, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBSD[] = {
    {I_VSUBSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+11954, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11961, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBSS[] = {
    {I_VSUBSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+11968, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11975, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VTESTPD[] = {
    {I_VTESTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11996, IF_AVX|IF_SANDYBRIDGE},
    {I_VTESTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12003, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VTESTPS[] = {
    {I_VTESTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11982, IF_AVX|IF_SANDYBRIDGE},
    {I_VTESTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11989, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUCOMISD[] = {
    {I_VUCOMISD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+12010, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUCOMISS[] = {
    {I_VUCOMISS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+12017, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKHPD[] = {
    {I_VUNPCKHPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12024, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12031, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12038, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12045, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKHPS[] = {
    {I_VUNPCKHPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12052, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12059, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12066, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12073, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKLPD[] = {
    {I_VUNPCKLPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12080, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12087, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12094, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12101, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKLPS[] = {
    {I_VUNPCKLPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12108, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12115, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12122, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12129, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VXORPD[] = {
    {I_VXORPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12136, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12143, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12150, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12157, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VXORPS[] = {
    {I_VXORPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12164, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12171, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12178, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12185, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VZEROALL[] = {
    {I_VZEROALL, 0, {0,0,0,0,0}, nasm_bytecodes+15840, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VZEROUPPER[] = {
    {I_VZEROUPPER, 0, {0,0,0,0,0}, nasm_bytecodes+15846, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_WBINVD[] = {
    {I_WBINVD, 0, {0,0,0,0,0}, nasm_bytecodes+19906, IF_486|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_WRMSR[] = {
    {I_WRMSR, 0, {0,0,0,0,0}, nasm_bytecodes+19910, IF_PENT|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_WRSHR[] = {
    {I_WRSHR, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+14688, IF_P6|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XADD[] = {
    {I_XADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+18749, IF_486|IF_SM},
    {I_XADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+18749, IF_486},
    {I_XADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+14694, IF_486|IF_SM},
    {I_XADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+14694, IF_486},
    {I_XADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14700, IF_486|IF_SM},
    {I_XADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14700, IF_486},
    {I_XADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+14706, IF_X64|IF_SM},
    {I_XADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+14706, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_XBTS[] = {
    {I_XBTS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+14712, IF_386|IF_SW|IF_UNDOC},
    {I_XBTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+14712, IF_386|IF_UNDOC},
    {I_XBTS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+14718, IF_386|IF_SD|IF_UNDOC},
    {I_XBTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+14718, IF_386|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCHG[] = {
    {I_XCHG, 2, {REG_AX,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+19914, IF_8086},
    {I_XCHG, 2, {REG_EAX,REG32NA,0,0,0}, nasm_bytecodes+19918, IF_386},
    {I_XCHG, 2, {REG_RAX,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+19922, IF_X64},
    {I_XCHG, 2, {REG_GPR|BITS16,REG_AX,0,0,0}, nasm_bytecodes+19926, IF_8086},
    {I_XCHG, 2, {REG32NA,REG_EAX,0,0,0}, nasm_bytecodes+19930, IF_386},
    {I_XCHG, 2, {REG_GPR|BITS64,REG_RAX,0,0,0}, nasm_bytecodes+19934, IF_X64},
    {I_XCHG, 2, {REG_EAX,REG_EAX,0,0,0}, nasm_bytecodes+19938, IF_386|IF_NOLONG},
    {I_XCHG, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+19942, IF_8086|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19942, IF_8086},
    {I_XCHG, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+18754, IF_8086|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18754, IF_8086},
    {I_XCHG, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+18759, IF_386|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18759, IF_386},
    {I_XCHG, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+18764, IF_X64|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18764, IF_X64},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19946, IF_8086|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19946, IF_8086},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18769, IF_8086|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18769, IF_8086},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18774, IF_386|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18774, IF_386},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18779, IF_X64|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18779, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTCBC[] = {
    {I_XCRYPTCBC, 0, {0,0,0,0,0}, nasm_bytecodes+15858, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTCFB[] = {
    {I_XCRYPTCFB, 0, {0,0,0,0,0}, nasm_bytecodes+15870, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTCTR[] = {
    {I_XCRYPTCTR, 0, {0,0,0,0,0}, nasm_bytecodes+15864, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTECB[] = {
    {I_XCRYPTECB, 0, {0,0,0,0,0}, nasm_bytecodes+15852, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTOFB[] = {
    {I_XCRYPTOFB, 0, {0,0,0,0,0}, nasm_bytecodes+15876, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XGETBV[] = {
    {I_XGETBV, 0, {0,0,0,0,0}, nasm_bytecodes+15006, IF_NEHALEM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XLAT[] = {
    {I_XLAT, 0, {0,0,0,0,0}, nasm_bytecodes+20025, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_XLATB[] = {
    {I_XLATB, 0, {0,0,0,0,0}, nasm_bytecodes+20025, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_XOR[] = {
    {I_XOR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19950, IF_8086|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19950, IF_8086},
    {I_XOR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18784, IF_8086|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18784, IF_8086},
    {I_XOR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18789, IF_386|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18789, IF_386},
    {I_XOR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18794, IF_X64|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18794, IF_X64},
    {I_XOR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+11208, IF_8086|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+11208, IF_8086},
    {I_XOR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+18799, IF_8086|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18799, IF_8086},
    {I_XOR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+18804, IF_386|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18804, IF_386},
    {I_XOR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+18809, IF_X64|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18809, IF_X64},
    {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14724, IF_8086},
    {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14730, IF_386},
    {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+14736, IF_X64},
    {I_XOR, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+19954, IF_8086|IF_SM},
    {I_XOR, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+14724, IF_8086|IF_SM},
    {I_XOR, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+18814, IF_8086|IF_SM},
    {I_XOR, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+14730, IF_386|IF_SM},
    {I_XOR, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18819, IF_386|IF_SM},
    {I_XOR, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+14736, IF_X64|IF_SM},
    {I_XOR, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18824, IF_X64|IF_SM},
    {I_XOR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18829, IF_8086|IF_SM},
    {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+14742, IF_8086|IF_SM},
    {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+14748, IF_386|IF_SM},
    {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+14754, IF_X64|IF_SM},
    {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+18829, IF_8086|IF_SM},
    {I_XOR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+14742, IF_8086|IF_SM},
    {I_XOR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+14748, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XORPD[] = {
    {I_XORPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15738, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_XORPS[] = {
    {I_XORPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+15000, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_XRSTOR[] = {
    {I_XRSTOR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+15024, IF_NEHALEM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVE[] = {
    {I_XSAVE, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+15018, IF_NEHALEM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSETBV[] = {
    {I_XSETBV, 0, {0,0,0,0,0}, nasm_bytecodes+15012, IF_NEHALEM|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSHA1[] = {
    {I_XSHA1, 0, {0,0,0,0,0}, nasm_bytecodes+15888, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSHA256[] = {
    {I_XSHA256, 0, {0,0,0,0,0}, nasm_bytecodes+15894, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSTORE[] = {
    {I_XSTORE, 0, {0,0,0,0,0}, nasm_bytecodes+18909, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMOVcc[] = {
    {I_CMOVcc, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+7817, IF_P6|IF_SM},
    {I_CMOVcc, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+7817, IF_P6},
    {I_CMOVcc, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+7824, IF_P6|IF_SM},
    {I_CMOVcc, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+7824, IF_P6},
    {I_CMOVcc, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+7831, IF_X64|IF_SM},
    {I_CMOVcc, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7831, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_Jcc[] = {
    {I_Jcc, 1, {IMMEDIATE|NEAR,0,0,0,0}, nasm_bytecodes+7838, IF_386},
    {I_Jcc, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, nasm_bytecodes+7845, IF_386},
    {I_Jcc, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, nasm_bytecodes+7852, IF_386},
    {I_Jcc, 1, {IMMEDIATE|SHORT,0,0,0,0}, nasm_bytecodes+18835, IF_8086},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+18834, IF_8086},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+7853, IF_386},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+7859, IF_8086},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+18835, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_SETcc[] = {
    {I_SETcc, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+14760, IF_386|IF_SB},
    {I_SETcc, 1, {REG_GPR|BITS8,0,0,0,0}, nasm_bytecodes+14760, IF_386},
    ITEMPLATE_END
};

const struct itemplate * const nasm_instructions[] = {
    instrux_AAA,
    instrux_AAD,
    instrux_AAM,
    instrux_AAS,
    instrux_ADC,
    instrux_ADD,
    instrux_ADDPD,
    instrux_ADDPS,
    instrux_ADDSD,
    instrux_ADDSS,
    instrux_ADDSUBPD,
    instrux_ADDSUBPS,
    instrux_AESDEC,
    instrux_AESDECLAST,
    instrux_AESENC,
    instrux_AESENCLAST,
    instrux_AESIMC,
    instrux_AESKEYGENASSIST,
    instrux_AND,
    instrux_ANDNPD,
    instrux_ANDNPS,
    instrux_ANDPD,
    instrux_ANDPS,
    instrux_ARPL,
    instrux_BB0_RESET,
    instrux_BB1_RESET,
    instrux_BLENDPD,
    instrux_BLENDPS,
    instrux_BLENDVPD,
    instrux_BLENDVPS,
    instrux_BOUND,
    instrux_BSF,
    instrux_BSR,
    instrux_BSWAP,
    instrux_BT,
    instrux_BTC,
    instrux_BTR,
    instrux_BTS,
    instrux_CALL,
    instrux_CBW,
    instrux_CDQ,
    instrux_CDQE,
    instrux_CLC,
    instrux_CLD,
    instrux_CLFLUSH,
    instrux_CLGI,
    instrux_CLI,
    instrux_CLTS,
    instrux_CMC,
    instrux_CMP,
    instrux_CMPEQPD,
    instrux_CMPEQPS,
    instrux_CMPEQSD,
    instrux_CMPEQSS,
    instrux_CMPLEPD,
    instrux_CMPLEPS,
    instrux_CMPLESD,
    instrux_CMPLESS,
    instrux_CMPLTPD,
    instrux_CMPLTPS,
    instrux_CMPLTSD,
    instrux_CMPLTSS,
    instrux_CMPNEQPD,
    instrux_CMPNEQPS,
    instrux_CMPNEQSD,
    instrux_CMPNEQSS,
    instrux_CMPNLEPD,
    instrux_CMPNLEPS,
    instrux_CMPNLESD,
    instrux_CMPNLESS,
    instrux_CMPNLTPD,
    instrux_CMPNLTPS,
    instrux_CMPNLTSD,
    instrux_CMPNLTSS,
    instrux_CMPORDPD,
    instrux_CMPORDPS,
    instrux_CMPORDSD,
    instrux_CMPORDSS,
    instrux_CMPPD,
    instrux_CMPPS,
    instrux_CMPSB,
    instrux_CMPSD,
    instrux_CMPSQ,
    instrux_CMPSS,
    instrux_CMPSW,
    instrux_CMPUNORDPD,
    instrux_CMPUNORDPS,
    instrux_CMPUNORDSD,
    instrux_CMPUNORDSS,
    instrux_CMPXCHG,
    instrux_CMPXCHG16B,
    instrux_CMPXCHG486,
    instrux_CMPXCHG8B,
    instrux_COMISD,
    instrux_COMISS,
    instrux_CPUID,
    instrux_CPU_READ,
    instrux_CPU_WRITE,
    instrux_CQO,
    instrux_CRC32,
    instrux_CVTDQ2PD,
    instrux_CVTDQ2PS,
    instrux_CVTPD2DQ,
    instrux_CVTPD2PI,
    instrux_CVTPD2PS,
    instrux_CVTPI2PD,
    instrux_CVTPI2PS,
    instrux_CVTPS2DQ,
    instrux_CVTPS2PD,
    instrux_CVTPS2PI,
    instrux_CVTSD2SI,
    instrux_CVTSD2SS,
    instrux_CVTSI2SD,
    instrux_CVTSI2SS,
    instrux_CVTSS2SD,
    instrux_CVTSS2SI,
    instrux_CVTTPD2DQ,
    instrux_CVTTPD2PI,
    instrux_CVTTPS2DQ,
    instrux_CVTTPS2PI,
    instrux_CVTTSD2SI,
    instrux_CVTTSS2SI,
    instrux_CWD,
    instrux_CWDE,
    instrux_DAA,
    instrux_DAS,
    instrux_DB,
    instrux_DD,
    instrux_DEC,
    instrux_DIV,
    instrux_DIVPD,
    instrux_DIVPS,
    instrux_DIVSD,
    instrux_DIVSS,
    instrux_DMINT,
    instrux_DO,
    instrux_DPPD,
    instrux_DPPS,
    instrux_DQ,
    instrux_DT,
    instrux_DW,
    instrux_DY,
    instrux_EMMS,
    instrux_ENTER,
    instrux_EQU,
    instrux_EXTRACTPS,
    instrux_EXTRQ,
    instrux_F2XM1,
    instrux_FABS,
    instrux_FADD,
    instrux_FADDP,
    instrux_FBLD,
    instrux_FBSTP,
    instrux_FCHS,
    instrux_FCLEX,
    instrux_FCMOVB,
    instrux_FCMOVBE,
    instrux_FCMOVE,
    instrux_FCMOVNB,
    instrux_FCMOVNBE,
    instrux_FCMOVNE,
    instrux_FCMOVNU,
    instrux_FCMOVU,
    instrux_FCOM,
    instrux_FCOMI,
    instrux_FCOMIP,
    instrux_FCOMP,
    instrux_FCOMPP,
    instrux_FCOS,
    instrux_FDECSTP,
    instrux_FDISI,
    instrux_FDIV,
    instrux_FDIVP,
    instrux_FDIVR,
    instrux_FDIVRP,
    instrux_FEMMS,
    instrux_FENI,
    instrux_FFREE,
    instrux_FFREEP,
    instrux_FIADD,
    instrux_FICOM,
    instrux_FICOMP,
    instrux_FIDIV,
    instrux_FIDIVR,
    instrux_FILD,
    instrux_FIMUL,
    instrux_FINCSTP,
    instrux_FINIT,
    instrux_FIST,
    instrux_FISTP,
    instrux_FISTTP,
    instrux_FISUB,
    instrux_FISUBR,
    instrux_FLD,
    instrux_FLD1,
    instrux_FLDCW,
    instrux_FLDENV,
    instrux_FLDL2E,
    instrux_FLDL2T,
    instrux_FLDLG2,
    instrux_FLDLN2,
    instrux_FLDPI,
    instrux_FLDZ,
    instrux_FMUL,
    instrux_FMULP,
    instrux_FNCLEX,
    instrux_FNDISI,
    instrux_FNENI,
    instrux_FNINIT,
    instrux_FNOP,
    instrux_FNSAVE,
    instrux_FNSTCW,
    instrux_FNSTENV,
    instrux_FNSTSW,
    instrux_FPATAN,
    instrux_FPREM,
    instrux_FPREM1,
    instrux_FPTAN,
    instrux_FRNDINT,
    instrux_FRSTOR,
    instrux_FSAVE,
    instrux_FSCALE,
    instrux_FSETPM,
    instrux_FSIN,
    instrux_FSINCOS,
    instrux_FSQRT,
    instrux_FST,
    instrux_FSTCW,
    instrux_FSTENV,
    instrux_FSTP,
    instrux_FSTSW,
    instrux_FSUB,
    instrux_FSUBP,
    instrux_FSUBR,
    instrux_FSUBRP,
    instrux_FTST,
    instrux_FUCOM,
    instrux_FUCOMI,
    instrux_FUCOMIP,
    instrux_FUCOMP,
    instrux_FUCOMPP,
    instrux_FWAIT,
    instrux_FXAM,
    instrux_FXCH,
    instrux_FXRSTOR,
    instrux_FXSAVE,
    instrux_FXTRACT,
    instrux_FYL2X,
    instrux_FYL2XP1,
    instrux_GETSEC,
    instrux_HADDPD,
    instrux_HADDPS,
    instrux_HINT_NOP0,
    instrux_HINT_NOP1,
    instrux_HINT_NOP10,
    instrux_HINT_NOP11,
    instrux_HINT_NOP12,
    instrux_HINT_NOP13,
    instrux_HINT_NOP14,
    instrux_HINT_NOP15,
    instrux_HINT_NOP16,
    instrux_HINT_NOP17,
    instrux_HINT_NOP18,
    instrux_HINT_NOP19,
    instrux_HINT_NOP2,
    instrux_HINT_NOP20,
    instrux_HINT_NOP21,
    instrux_HINT_NOP22,
    instrux_HINT_NOP23,
    instrux_HINT_NOP24,
    instrux_HINT_NOP25,
    instrux_HINT_NOP26,
    instrux_HINT_NOP27,
    instrux_HINT_NOP28,
    instrux_HINT_NOP29,
    instrux_HINT_NOP3,
    instrux_HINT_NOP30,
    instrux_HINT_NOP31,
    instrux_HINT_NOP32,
    instrux_HINT_NOP33,
    instrux_HINT_NOP34,
    instrux_HINT_NOP35,
    instrux_HINT_NOP36,
    instrux_HINT_NOP37,
    instrux_HINT_NOP38,
    instrux_HINT_NOP39,
    instrux_HINT_NOP4,
    instrux_HINT_NOP40,
    instrux_HINT_NOP41,
    instrux_HINT_NOP42,
    instrux_HINT_NOP43,
    instrux_HINT_NOP44,
    instrux_HINT_NOP45,
    instrux_HINT_NOP46,
    instrux_HINT_NOP47,
    instrux_HINT_NOP48,
    instrux_HINT_NOP49,
    instrux_HINT_NOP5,
    instrux_HINT_NOP50,
    instrux_HINT_NOP51,
    instrux_HINT_NOP52,
    instrux_HINT_NOP53,
    instrux_HINT_NOP54,
    instrux_HINT_NOP55,
    instrux_HINT_NOP56,
    instrux_HINT_NOP57,
    instrux_HINT_NOP58,
    instrux_HINT_NOP59,
    instrux_HINT_NOP6,
    instrux_HINT_NOP60,
    instrux_HINT_NOP61,
    instrux_HINT_NOP62,
    instrux_HINT_NOP63,
    instrux_HINT_NOP7,
    instrux_HINT_NOP8,
    instrux_HINT_NOP9,
    instrux_HLT,
    instrux_HSUBPD,
    instrux_HSUBPS,
    instrux_IBTS,
    instrux_ICEBP,
    instrux_IDIV,
    instrux_IMUL,
    instrux_IN,
    instrux_INC,
    instrux_INCBIN,
    instrux_INSB,
    instrux_INSD,
    instrux_INSERTPS,
    instrux_INSERTQ,
    instrux_INSW,
    instrux_INT,
    instrux_INT01,
    instrux_INT03,
    instrux_INT1,
    instrux_INT3,
    instrux_INTO,
    instrux_INVD,
    instrux_INVEPT,
    instrux_INVLPG,
    instrux_INVLPGA,
    instrux_INVVPID,
    instrux_IRET,
    instrux_IRETD,
    instrux_IRETQ,
    instrux_IRETW,
    instrux_JCXZ,
    instrux_JECXZ,
    instrux_JMP,
    instrux_JMPE,
    instrux_JRCXZ,
    instrux_LAHF,
    instrux_LAR,
    instrux_LDDQU,
    instrux_LDMXCSR,
    instrux_LDS,
    instrux_LEA,
    instrux_LEAVE,
    instrux_LES,
    instrux_LFENCE,
    instrux_LFS,
    instrux_LGDT,
    instrux_LGS,
    instrux_LIDT,
    instrux_LLDT,
    instrux_LLWPCB,
    instrux_LMSW,
    instrux_LOADALL,
    instrux_LOADALL286,
    instrux_LODSB,
    instrux_LODSD,
    instrux_LODSQ,
    instrux_LODSW,
    instrux_LOOP,
    instrux_LOOPE,
    instrux_LOOPNE,
    instrux_LOOPNZ,
    instrux_LOOPZ,
    instrux_LSL,
    instrux_LSS,
    instrux_LTR,
    instrux_LWPINS,
    instrux_LWPVAL,
    instrux_LZCNT,
    instrux_MASKMOVDQU,
    instrux_MASKMOVQ,
    instrux_MAXPD,
    instrux_MAXPS,
    instrux_MAXSD,
    instrux_MAXSS,
    instrux_MFENCE,
    instrux_MINPD,
    instrux_MINPS,
    instrux_MINSD,
    instrux_MINSS,
    instrux_MONITOR,
    instrux_MONTMUL,
    instrux_MOV,
    instrux_MOVAPD,
    instrux_MOVAPS,
    instrux_MOVBE,
    instrux_MOVD,
    instrux_MOVDDUP,
    instrux_MOVDQ2Q,
    instrux_MOVDQA,
    instrux_MOVDQU,
    instrux_MOVHLPS,
    instrux_MOVHPD,
    instrux_MOVHPS,
    instrux_MOVLHPS,
    instrux_MOVLPD,
    instrux_MOVLPS,
    instrux_MOVMSKPD,
    instrux_MOVMSKPS,
    instrux_MOVNTDQ,
    instrux_MOVNTDQA,
    instrux_MOVNTI,
    instrux_MOVNTPD,
    instrux_MOVNTPS,
    instrux_MOVNTQ,
    instrux_MOVNTSD,
    instrux_MOVNTSS,
    instrux_MOVQ,
    instrux_MOVQ2DQ,
    instrux_MOVSB,
    instrux_MOVSD,
    instrux_MOVSHDUP,
    instrux_MOVSLDUP,
    instrux_MOVSQ,
    instrux_MOVSS,
    instrux_MOVSW,
    instrux_MOVSX,
    instrux_MOVSXD,
    instrux_MOVUPD,
    instrux_MOVUPS,
    instrux_MOVZX,
    instrux_MPSADBW,
    instrux_MUL,
    instrux_MULPD,
    instrux_MULPS,
    instrux_MULSD,
    instrux_MULSS,
    instrux_MWAIT,
    instrux_NEG,
    instrux_NOP,
    instrux_NOT,
    instrux_OR,
    instrux_ORPD,
    instrux_ORPS,
    instrux_OUT,
    instrux_OUTSB,
    instrux_OUTSD,
    instrux_OUTSW,
    instrux_PABSB,
    instrux_PABSD,
    instrux_PABSW,
    instrux_PACKSSDW,
    instrux_PACKSSWB,
    instrux_PACKUSDW,
    instrux_PACKUSWB,
    instrux_PADDB,
    instrux_PADDD,
    instrux_PADDQ,
    instrux_PADDSB,
    instrux_PADDSIW,
    instrux_PADDSW,
    instrux_PADDUSB,
    instrux_PADDUSW,
    instrux_PADDW,
    instrux_PALIGNR,
    instrux_PAND,
    instrux_PANDN,
    instrux_PAUSE,
    instrux_PAVEB,
    instrux_PAVGB,
    instrux_PAVGUSB,
    instrux_PAVGW,
    instrux_PBLENDVB,
    instrux_PBLENDW,
    instrux_PCLMULHQHQDQ,
    instrux_PCLMULHQLQDQ,
    instrux_PCLMULLQHQDQ,
    instrux_PCLMULLQLQDQ,
    instrux_PCLMULQDQ,
    instrux_PCMPEQB,
    instrux_PCMPEQD,
    instrux_PCMPEQQ,
    instrux_PCMPEQW,
    instrux_PCMPESTRI,
    instrux_PCMPESTRM,
    instrux_PCMPGTB,
    instrux_PCMPGTD,
    instrux_PCMPGTQ,
    instrux_PCMPGTW,
    instrux_PCMPISTRI,
    instrux_PCMPISTRM,
    instrux_PDISTIB,
    instrux_PEXTRB,
    instrux_PEXTRD,
    instrux_PEXTRQ,
    instrux_PEXTRW,
    instrux_PF2ID,
    instrux_PF2IW,
    instrux_PFACC,
    instrux_PFADD,
    instrux_PFCMPEQ,
    instrux_PFCMPGE,
    instrux_PFCMPGT,
    instrux_PFMAX,
    instrux_PFMIN,
    instrux_PFMUL,
    instrux_PFNACC,
    instrux_PFPNACC,
    instrux_PFRCP,
    instrux_PFRCPIT1,
    instrux_PFRCPIT2,
    instrux_PFRCPV,
    instrux_PFRSQIT1,
    instrux_PFRSQRT,
    instrux_PFRSQRTV,
    instrux_PFSUB,
    instrux_PFSUBR,
    instrux_PHADDD,
    instrux_PHADDSW,
    instrux_PHADDW,
    instrux_PHMINPOSUW,
    instrux_PHSUBD,
    instrux_PHSUBSW,
    instrux_PHSUBW,
    instrux_PI2FD,
    instrux_PI2FW,
    instrux_PINSRB,
    instrux_PINSRD,
    instrux_PINSRQ,
    instrux_PINSRW,
    instrux_PMACHRIW,
    instrux_PMADDUBSW,
    instrux_PMADDWD,
    instrux_PMAGW,
    instrux_PMAXSB,
    instrux_PMAXSD,
    instrux_PMAXSW,
    instrux_PMAXUB,
    instrux_PMAXUD,
    instrux_PMAXUW,
    instrux_PMINSB,
    instrux_PMINSD,
    instrux_PMINSW,
    instrux_PMINUB,
    instrux_PMINUD,
    instrux_PMINUW,
    instrux_PMOVMSKB,
    instrux_PMOVSXBD,
    instrux_PMOVSXBQ,
    instrux_PMOVSXBW,
    instrux_PMOVSXDQ,
    instrux_PMOVSXWD,
    instrux_PMOVSXWQ,
    instrux_PMOVZXBD,
    instrux_PMOVZXBQ,
    instrux_PMOVZXBW,
    instrux_PMOVZXDQ,
    instrux_PMOVZXWD,
    instrux_PMOVZXWQ,
    instrux_PMULDQ,
    instrux_PMULHRIW,
    instrux_PMULHRSW,
    instrux_PMULHRWA,
    instrux_PMULHRWC,
    instrux_PMULHUW,
    instrux_PMULHW,
    instrux_PMULLD,
    instrux_PMULLW,
    instrux_PMULUDQ,
    instrux_PMVGEZB,
    instrux_PMVLZB,
    instrux_PMVNZB,
    instrux_PMVZB,
    instrux_POP,
    instrux_POPA,
    instrux_POPAD,
    instrux_POPAW,
    instrux_POPCNT,
    instrux_POPF,
    instrux_POPFD,
    instrux_POPFQ,
    instrux_POPFW,
    instrux_POR,
    instrux_PREFETCH,
    instrux_PREFETCHNTA,
    instrux_PREFETCHT0,
    instrux_PREFETCHT1,
    instrux_PREFETCHT2,
    instrux_PREFETCHW,
    instrux_PSADBW,
    instrux_PSHUFB,
    instrux_PSHUFD,
    instrux_PSHUFHW,
    instrux_PSHUFLW,
    instrux_PSHUFW,
    instrux_PSIGNB,
    instrux_PSIGND,
    instrux_PSIGNW,
    instrux_PSLLD,
    instrux_PSLLDQ,
    instrux_PSLLQ,
    instrux_PSLLW,
    instrux_PSRAD,
    instrux_PSRAW,
    instrux_PSRLD,
    instrux_PSRLDQ,
    instrux_PSRLQ,
    instrux_PSRLW,
    instrux_PSUBB,
    instrux_PSUBD,
    instrux_PSUBQ,
    instrux_PSUBSB,
    instrux_PSUBSIW,
    instrux_PSUBSW,
    instrux_PSUBUSB,
    instrux_PSUBUSW,
    instrux_PSUBW,
    instrux_PSWAPD,
    instrux_PTEST,
    instrux_PUNPCKHBW,
    instrux_PUNPCKHDQ,
    instrux_PUNPCKHQDQ,
    instrux_PUNPCKHWD,
    instrux_PUNPCKLBW,
    instrux_PUNPCKLDQ,
    instrux_PUNPCKLQDQ,
    instrux_PUNPCKLWD,
    instrux_PUSH,
    instrux_PUSHA,
    instrux_PUSHAD,
    instrux_PUSHAW,
    instrux_PUSHF,
    instrux_PUSHFD,
    instrux_PUSHFQ,
    instrux_PUSHFW,
    instrux_PXOR,
    instrux_RCL,
    instrux_RCPPS,
    instrux_RCPSS,
    instrux_RCR,
    instrux_RDM,
    instrux_RDMSR,
    instrux_RDPMC,
    instrux_RDSHR,
    instrux_RDTSC,
    instrux_RDTSCP,
    instrux_RESB,
    instrux_RESD,
    instrux_RESO,
    instrux_RESQ,
    instrux_REST,
    instrux_RESW,
    instrux_RESY,
    instrux_RET,
    instrux_RETF,
    instrux_RETN,
    instrux_ROL,
    instrux_ROR,
    instrux_ROUNDPD,
    instrux_ROUNDPS,
    instrux_ROUNDSD,
    instrux_ROUNDSS,
    instrux_RSDC,
    instrux_RSLDT,
    instrux_RSM,
    instrux_RSQRTPS,
    instrux_RSQRTSS,
    instrux_RSTS,
    instrux_SAHF,
    instrux_SAL,
    instrux_SALC,
    instrux_SAR,
    instrux_SBB,
    instrux_SCASB,
    instrux_SCASD,
    instrux_SCASQ,
    instrux_SCASW,
    instrux_SFENCE,
    instrux_SGDT,
    instrux_SHL,
    instrux_SHLD,
    instrux_SHR,
    instrux_SHRD,
    instrux_SHUFPD,
    instrux_SHUFPS,
    instrux_SIDT,
    instrux_SKINIT,
    instrux_SLDT,
    instrux_SLWPCB,
    instrux_SMI,
    instrux_SMINT,
    instrux_SMINTOLD,
    instrux_SMSW,
    instrux_SQRTPD,
    instrux_SQRTPS,
    instrux_SQRTSD,
    instrux_SQRTSS,
    instrux_STC,
    instrux_STD,
    instrux_STGI,
    instrux_STI,
    instrux_STMXCSR,
    instrux_STOSB,
    instrux_STOSD,
    instrux_STOSQ,
    instrux_STOSW,
    instrux_STR,
    instrux_SUB,
    instrux_SUBPD,
    instrux_SUBPS,
    instrux_SUBSD,
    instrux_SUBSS,
    instrux_SVDC,
    instrux_SVLDT,
    instrux_SVTS,
    instrux_SWAPGS,
    instrux_SYSCALL,
    instrux_SYSENTER,
    instrux_SYSEXIT,
    instrux_SYSRET,
    instrux_TEST,
    instrux_UCOMISD,
    instrux_UCOMISS,
    instrux_UD0,
    instrux_UD1,
    instrux_UD2,
    instrux_UD2A,
    instrux_UD2B,
    instrux_UMOV,
    instrux_UNPCKHPD,
    instrux_UNPCKHPS,
    instrux_UNPCKLPD,
    instrux_UNPCKLPS,
    instrux_VADDPD,
    instrux_VADDPS,
    instrux_VADDSD,
    instrux_VADDSS,
    instrux_VADDSUBPD,
    instrux_VADDSUBPS,
    instrux_VAESDEC,
    instrux_VAESDECLAST,
    instrux_VAESENC,
    instrux_VAESENCLAST,
    instrux_VAESIMC,
    instrux_VAESKEYGENASSIST,
    instrux_VANDNPD,
    instrux_VANDNPS,
    instrux_VANDPD,
    instrux_VANDPS,
    instrux_VBLENDPD,
    instrux_VBLENDPS,
    instrux_VBLENDVPD,
    instrux_VBLENDVPS,
    instrux_VBROADCASTF128,
    instrux_VBROADCASTSD,
    instrux_VBROADCASTSS,
    instrux_VCMPEQPD,
    instrux_VCMPEQPS,
    instrux_VCMPEQSD,
    instrux_VCMPEQSS,
    instrux_VCMPEQ_OSPD,
    instrux_VCMPEQ_OSPS,
    instrux_VCMPEQ_OSSD,
    instrux_VCMPEQ_OSSS,
    instrux_VCMPEQ_UQPD,
    instrux_VCMPEQ_UQPS,
    instrux_VCMPEQ_UQSD,
    instrux_VCMPEQ_UQSS,
    instrux_VCMPEQ_USPD,
    instrux_VCMPEQ_USPS,
    instrux_VCMPEQ_USSD,
    instrux_VCMPEQ_USSS,
    instrux_VCMPFALSEPD,
    instrux_VCMPFALSEPS,
    instrux_VCMPFALSESD,
    instrux_VCMPFALSESS,
    instrux_VCMPFALSE_OSPD,
    instrux_VCMPFALSE_OSPS,
    instrux_VCMPFALSE_OSSD,
    instrux_VCMPFALSE_OSSS,
    instrux_VCMPGEPD,
    instrux_VCMPGEPS,
    instrux_VCMPGESD,
    instrux_VCMPGESS,
    instrux_VCMPGE_OQPD,
    instrux_VCMPGE_OQPS,
    instrux_VCMPGE_OQSD,
    instrux_VCMPGE_OQSS,
    instrux_VCMPGTPD,
    instrux_VCMPGTPS,
    instrux_VCMPGTSD,
    instrux_VCMPGTSS,
    instrux_VCMPGT_OQPD,
    instrux_VCMPGT_OQPS,
    instrux_VCMPGT_OQSD,
    instrux_VCMPGT_OQSS,
    instrux_VCMPLEPD,
    instrux_VCMPLEPS,
    instrux_VCMPLESD,
    instrux_VCMPLESS,
    instrux_VCMPLE_OQPD,
    instrux_VCMPLE_OQPS,
    instrux_VCMPLE_OQSD,
    instrux_VCMPLE_OQSS,
    instrux_VCMPLTPD,
    instrux_VCMPLTPS,
    instrux_VCMPLTSD,
    instrux_VCMPLTSS,
    instrux_VCMPLT_OQPD,
    instrux_VCMPLT_OQPS,
    instrux_VCMPLT_OQSD,
    instrux_VCMPLT_OQSS,
    instrux_VCMPNEQPD,
    instrux_VCMPNEQPS,
    instrux_VCMPNEQSD,
    instrux_VCMPNEQSS,
    instrux_VCMPNEQ_OQPD,
    instrux_VCMPNEQ_OQPS,
    instrux_VCMPNEQ_OQSD,
    instrux_VCMPNEQ_OQSS,
    instrux_VCMPNEQ_OSPD,
    instrux_VCMPNEQ_OSPS,
    instrux_VCMPNEQ_OSSD,
    instrux_VCMPNEQ_OSSS,
    instrux_VCMPNEQ_USPD,
    instrux_VCMPNEQ_USPS,
    instrux_VCMPNEQ_USSD,
    instrux_VCMPNEQ_USSS,
    instrux_VCMPNGEPD,
    instrux_VCMPNGEPS,
    instrux_VCMPNGESD,
    instrux_VCMPNGESS,
    instrux_VCMPNGE_UQPD,
    instrux_VCMPNGE_UQPS,
    instrux_VCMPNGE_UQSD,
    instrux_VCMPNGE_UQSS,
    instrux_VCMPNGTPD,
    instrux_VCMPNGTPS,
    instrux_VCMPNGTSD,
    instrux_VCMPNGTSS,
    instrux_VCMPNGT_UQPD,
    instrux_VCMPNGT_UQPS,
    instrux_VCMPNGT_UQSD,
    instrux_VCMPNGT_UQSS,
    instrux_VCMPNLEPD,
    instrux_VCMPNLEPS,
    instrux_VCMPNLESD,
    instrux_VCMPNLESS,
    instrux_VCMPNLE_UQPD,
    instrux_VCMPNLE_UQPS,
    instrux_VCMPNLE_UQSD,
    instrux_VCMPNLE_UQSS,
    instrux_VCMPNLTPD,
    instrux_VCMPNLTPS,
    instrux_VCMPNLTSD,
    instrux_VCMPNLTSS,
    instrux_VCMPNLT_UQPD,
    instrux_VCMPNLT_UQPS,
    instrux_VCMPNLT_UQSD,
    instrux_VCMPNLT_UQSS,
    instrux_VCMPORDPD,
    instrux_VCMPORDPS,
    instrux_VCMPORDSD,
    instrux_VCMPORDSS,
    instrux_VCMPORD_SPD,
    instrux_VCMPORD_SPS,
    instrux_VCMPORD_SSD,
    instrux_VCMPORD_SSS,
    instrux_VCMPPD,
    instrux_VCMPPS,
    instrux_VCMPSD,
    instrux_VCMPSS,
    instrux_VCMPTRUEPD,
    instrux_VCMPTRUEPS,
    instrux_VCMPTRUESD,
    instrux_VCMPTRUESS,
    instrux_VCMPTRUE_USPD,
    instrux_VCMPTRUE_USPS,
    instrux_VCMPTRUE_USSD,
    instrux_VCMPTRUE_USSS,
    instrux_VCMPUNORDPD,
    instrux_VCMPUNORDPS,
    instrux_VCMPUNORDSD,
    instrux_VCMPUNORDSS,
    instrux_VCMPUNORD_SPD,
    instrux_VCMPUNORD_SPS,
    instrux_VCMPUNORD_SSD,
    instrux_VCMPUNORD_SSS,
    instrux_VCOMISD,
    instrux_VCOMISS,
    instrux_VCVTDQ2PD,
    instrux_VCVTDQ2PS,
    instrux_VCVTPD2DQ,
    instrux_VCVTPD2PS,
    instrux_VCVTPH2PS,
    instrux_VCVTPS2DQ,
    instrux_VCVTPS2PD,
    instrux_VCVTPS2PH,
    instrux_VCVTSD2SI,
    instrux_VCVTSD2SS,
    instrux_VCVTSI2SD,
    instrux_VCVTSI2SS,
    instrux_VCVTSS2SD,
    instrux_VCVTSS2SI,
    instrux_VCVTTPD2DQ,
    instrux_VCVTTPS2DQ,
    instrux_VCVTTSD2SI,
    instrux_VCVTTSS2SI,
    instrux_VDIVPD,
    instrux_VDIVPS,
    instrux_VDIVSD,
    instrux_VDIVSS,
    instrux_VDPPD,
    instrux_VDPPS,
    instrux_VERR,
    instrux_VERW,
    instrux_VEXTRACTF128,
    instrux_VEXTRACTPS,
    instrux_VFMADD123PD,
    instrux_VFMADD123PS,
    instrux_VFMADD123SD,
    instrux_VFMADD123SS,
    instrux_VFMADD132PD,
    instrux_VFMADD132PS,
    instrux_VFMADD132SD,
    instrux_VFMADD132SS,
    instrux_VFMADD213PD,
    instrux_VFMADD213PS,
    instrux_VFMADD213SD,
    instrux_VFMADD213SS,
    instrux_VFMADD231PD,
    instrux_VFMADD231PS,
    instrux_VFMADD231SD,
    instrux_VFMADD231SS,
    instrux_VFMADD312PD,
    instrux_VFMADD312PS,
    instrux_VFMADD312SD,
    instrux_VFMADD312SS,
    instrux_VFMADD321PD,
    instrux_VFMADD321PS,
    instrux_VFMADD321SD,
    instrux_VFMADD321SS,
    instrux_VFMADDPD,
    instrux_VFMADDPS,
    instrux_VFMADDSD,
    instrux_VFMADDSS,
    instrux_VFMADDSUB123PD,
    instrux_VFMADDSUB123PS,
    instrux_VFMADDSUB132PD,
    instrux_VFMADDSUB132PS,
    instrux_VFMADDSUB213PD,
    instrux_VFMADDSUB213PS,
    instrux_VFMADDSUB231PD,
    instrux_VFMADDSUB231PS,
    instrux_VFMADDSUB312PD,
    instrux_VFMADDSUB312PS,
    instrux_VFMADDSUB321PD,
    instrux_VFMADDSUB321PS,
    instrux_VFMADDSUBPD,
    instrux_VFMADDSUBPS,
    instrux_VFMSUB123PD,
    instrux_VFMSUB123PS,
    instrux_VFMSUB123SD,
    instrux_VFMSUB123SS,
    instrux_VFMSUB132PD,
    instrux_VFMSUB132PS,
    instrux_VFMSUB132SD,
    instrux_VFMSUB132SS,
    instrux_VFMSUB213PD,
    instrux_VFMSUB213PS,
    instrux_VFMSUB213SD,
    instrux_VFMSUB213SS,
    instrux_VFMSUB231PD,
    instrux_VFMSUB231PS,
    instrux_VFMSUB231SD,
    instrux_VFMSUB231SS,
    instrux_VFMSUB312PD,
    instrux_VFMSUB312PS,
    instrux_VFMSUB312SD,
    instrux_VFMSUB312SS,
    instrux_VFMSUB321PD,
    instrux_VFMSUB321PS,
    instrux_VFMSUB321SD,
    instrux_VFMSUB321SS,
    instrux_VFMSUBADD123PD,
    instrux_VFMSUBADD123PS,
    instrux_VFMSUBADD132PD,
    instrux_VFMSUBADD132PS,
    instrux_VFMSUBADD213PD,
    instrux_VFMSUBADD213PS,
    instrux_VFMSUBADD231PD,
    instrux_VFMSUBADD231PS,
    instrux_VFMSUBADD312PD,
    instrux_VFMSUBADD312PS,
    instrux_VFMSUBADD321PD,
    instrux_VFMSUBADD321PS,
    instrux_VFMSUBADDPD,
    instrux_VFMSUBADDPS,
    instrux_VFMSUBPD,
    instrux_VFMSUBPS,
    instrux_VFMSUBSD,
    instrux_VFMSUBSS,
    instrux_VFNMADD123PD,
    instrux_VFNMADD123PS,
    instrux_VFNMADD123SD,
    instrux_VFNMADD123SS,
    instrux_VFNMADD132PD,
    instrux_VFNMADD132PS,
    instrux_VFNMADD132SD,
    instrux_VFNMADD132SS,
    instrux_VFNMADD213PD,
    instrux_VFNMADD213PS,
    instrux_VFNMADD213SD,
    instrux_VFNMADD213SS,
    instrux_VFNMADD231PD,
    instrux_VFNMADD231PS,
    instrux_VFNMADD231SD,
    instrux_VFNMADD231SS,
    instrux_VFNMADD312PD,
    instrux_VFNMADD312PS,
    instrux_VFNMADD312SD,
    instrux_VFNMADD312SS,
    instrux_VFNMADD321PD,
    instrux_VFNMADD321PS,
    instrux_VFNMADD321SD,
    instrux_VFNMADD321SS,
    instrux_VFNMADDPD,
    instrux_VFNMADDPS,
    instrux_VFNMADDSD,
    instrux_VFNMADDSS,
    instrux_VFNMSUB123PD,
    instrux_VFNMSUB123PS,
    instrux_VFNMSUB123SD,
    instrux_VFNMSUB123SS,
    instrux_VFNMSUB132PD,
    instrux_VFNMSUB132PS,
    instrux_VFNMSUB132SD,
    instrux_VFNMSUB132SS,
    instrux_VFNMSUB213PD,
    instrux_VFNMSUB213PS,
    instrux_VFNMSUB213SD,
    instrux_VFNMSUB213SS,
    instrux_VFNMSUB231PD,
    instrux_VFNMSUB231PS,
    instrux_VFNMSUB231SD,
    instrux_VFNMSUB231SS,
    instrux_VFNMSUB312PD,
    instrux_VFNMSUB312PS,
    instrux_VFNMSUB312SD,
    instrux_VFNMSUB312SS,
    instrux_VFNMSUB321PD,
    instrux_VFNMSUB321PS,
    instrux_VFNMSUB321SD,
    instrux_VFNMSUB321SS,
    instrux_VFNMSUBPD,
    instrux_VFNMSUBPS,
    instrux_VFNMSUBSD,
    instrux_VFNMSUBSS,
    instrux_VFRCZPD,
    instrux_VFRCZPS,
    instrux_VFRCZSD,
    instrux_VFRCZSS,
    instrux_VHADDPD,
    instrux_VHADDPS,
    instrux_VHSUBPD,
    instrux_VHSUBPS,
    instrux_VINSERTF128,
    instrux_VINSERTPS,
    instrux_VLDDQU,
    instrux_VLDMXCSR,
    instrux_VLDQQU,
    instrux_VMASKMOVDQU,
    instrux_VMASKMOVPD,
    instrux_VMASKMOVPS,
    instrux_VMAXPD,
    instrux_VMAXPS,
    instrux_VMAXSD,
    instrux_VMAXSS,
    instrux_VMCALL,
    instrux_VMCLEAR,
    instrux_VMINPD,
    instrux_VMINPS,
    instrux_VMINSD,
    instrux_VMINSS,
    instrux_VMLAUNCH,
    instrux_VMLOAD,
    instrux_VMMCALL,
    instrux_VMOVAPD,
    instrux_VMOVAPS,
    instrux_VMOVD,
    instrux_VMOVDDUP,
    instrux_VMOVDQA,
    instrux_VMOVDQU,
    instrux_VMOVHLPS,
    instrux_VMOVHPD,
    instrux_VMOVHPS,
    instrux_VMOVLHPS,
    instrux_VMOVLPD,
    instrux_VMOVLPS,
    instrux_VMOVMSKPD,
    instrux_VMOVMSKPS,
    instrux_VMOVNTDQ,
    instrux_VMOVNTDQA,
    instrux_VMOVNTPD,
    instrux_VMOVNTPS,
    instrux_VMOVNTQQ,
    instrux_VMOVQ,
    instrux_VMOVQQA,
    instrux_VMOVQQU,
    instrux_VMOVSD,
    instrux_VMOVSHDUP,
    instrux_VMOVSLDUP,
    instrux_VMOVSS,
    instrux_VMOVUPD,
    instrux_VMOVUPS,
    instrux_VMPSADBW,
    instrux_VMPTRLD,
    instrux_VMPTRST,
    instrux_VMREAD,
    instrux_VMRESUME,
    instrux_VMRUN,
    instrux_VMSAVE,
    instrux_VMULPD,
    instrux_VMULPS,
    instrux_VMULSD,
    instrux_VMULSS,
    instrux_VMWRITE,
    instrux_VMXOFF,
    instrux_VMXON,
    instrux_VORPD,
    instrux_VORPS,
    instrux_VPABSB,
    instrux_VPABSD,
    instrux_VPABSW,
    instrux_VPACKSSDW,
    instrux_VPACKSSWB,
    instrux_VPACKUSDW,
    instrux_VPACKUSWB,
    instrux_VPADDB,
    instrux_VPADDD,
    instrux_VPADDQ,
    instrux_VPADDSB,
    instrux_VPADDSW,
    instrux_VPADDUSB,
    instrux_VPADDUSW,
    instrux_VPADDW,
    instrux_VPALIGNR,
    instrux_VPAND,
    instrux_VPANDN,
    instrux_VPAVGB,
    instrux_VPAVGW,
    instrux_VPBLENDVB,
    instrux_VPBLENDW,
    instrux_VPCLMULHQHQDQ,
    instrux_VPCLMULHQLQDQ,
    instrux_VPCLMULLQHQDQ,
    instrux_VPCLMULLQLQDQ,
    instrux_VPCLMULQDQ,
    instrux_VPCMOV,
    instrux_VPCMPEQB,
    instrux_VPCMPEQD,
    instrux_VPCMPEQQ,
    instrux_VPCMPEQW,
    instrux_VPCMPESTRI,
    instrux_VPCMPESTRM,
    instrux_VPCMPGTB,
    instrux_VPCMPGTD,
    instrux_VPCMPGTQ,
    instrux_VPCMPGTW,
    instrux_VPCMPISTRI,
    instrux_VPCMPISTRM,
    instrux_VPCOMB,
    instrux_VPCOMD,
    instrux_VPCOMQ,
    instrux_VPCOMUB,
    instrux_VPCOMUD,
    instrux_VPCOMUQ,
    instrux_VPCOMUW,
    instrux_VPCOMW,
    instrux_VPERM2F128,
    instrux_VPERMIL2PD,
    instrux_VPERMIL2PS,
    instrux_VPERMILMO2PD,
    instrux_VPERMILMO2PS,
    instrux_VPERMILMZ2PD,
    instrux_VPERMILMZ2PS,
    instrux_VPERMILPD,
    instrux_VPERMILPS,
    instrux_VPERMILTD2PD,
    instrux_VPERMILTD2PS,
    instrux_VPEXTRB,
    instrux_VPEXTRD,
    instrux_VPEXTRQ,
    instrux_VPEXTRW,
    instrux_VPHADDBD,
    instrux_VPHADDBQ,
    instrux_VPHADDBW,
    instrux_VPHADDD,
    instrux_VPHADDDQ,
    instrux_VPHADDSW,
    instrux_VPHADDUBD,
    instrux_VPHADDUBQ,
    instrux_VPHADDUBW,
    instrux_VPHADDUDQ,
    instrux_VPHADDUWD,
    instrux_VPHADDUWQ,
    instrux_VPHADDW,
    instrux_VPHADDWD,
    instrux_VPHADDWQ,
    instrux_VPHMINPOSUW,
    instrux_VPHSUBBW,
    instrux_VPHSUBD,
    instrux_VPHSUBDQ,
    instrux_VPHSUBSW,
    instrux_VPHSUBW,
    instrux_VPHSUBWD,
    instrux_VPINSRB,
    instrux_VPINSRD,
    instrux_VPINSRQ,
    instrux_VPINSRW,
    instrux_VPMACSDD,
    instrux_VPMACSDQH,
    instrux_VPMACSDQL,
    instrux_VPMACSSDD,
    instrux_VPMACSSDQH,
    instrux_VPMACSSDQL,
    instrux_VPMACSSWD,
    instrux_VPMACSSWW,
    instrux_VPMACSWD,
    instrux_VPMACSWW,
    instrux_VPMADCSSWD,
    instrux_VPMADCSWD,
    instrux_VPMADDUBSW,
    instrux_VPMADDWD,
    instrux_VPMAXSB,
    instrux_VPMAXSD,
    instrux_VPMAXSW,
    instrux_VPMAXUB,
    instrux_VPMAXUD,
    instrux_VPMAXUW,
    instrux_VPMINSB,
    instrux_VPMINSD,
    instrux_VPMINSW,
    instrux_VPMINUB,
    instrux_VPMINUD,
    instrux_VPMINUW,
    instrux_VPMOVMSKB,
    instrux_VPMOVSXBD,
    instrux_VPMOVSXBQ,
    instrux_VPMOVSXBW,
    instrux_VPMOVSXDQ,
    instrux_VPMOVSXWD,
    instrux_VPMOVSXWQ,
    instrux_VPMOVZXBD,
    instrux_VPMOVZXBQ,
    instrux_VPMOVZXBW,
    instrux_VPMOVZXDQ,
    instrux_VPMOVZXWD,
    instrux_VPMOVZXWQ,
    instrux_VPMULDQ,
    instrux_VPMULHRSW,
    instrux_VPMULHUW,
    instrux_VPMULHW,
    instrux_VPMULLD,
    instrux_VPMULLW,
    instrux_VPMULUDQ,
    instrux_VPOR,
    instrux_VPPERM,
    instrux_VPROTB,
    instrux_VPROTD,
    instrux_VPROTQ,
    instrux_VPROTW,
    instrux_VPSADBW,
    instrux_VPSHAB,
    instrux_VPSHAD,
    instrux_VPSHAQ,
    instrux_VPSHAW,
    instrux_VPSHLB,
    instrux_VPSHLD,
    instrux_VPSHLQ,
    instrux_VPSHLW,
    instrux_VPSHUFB,
    instrux_VPSHUFD,
    instrux_VPSHUFHW,
    instrux_VPSHUFLW,
    instrux_VPSIGNB,
    instrux_VPSIGND,
    instrux_VPSIGNW,
    instrux_VPSLLD,
    instrux_VPSLLDQ,
    instrux_VPSLLQ,
    instrux_VPSLLW,
    instrux_VPSRAD,
    instrux_VPSRAW,
    instrux_VPSRLD,
    instrux_VPSRLDQ,
    instrux_VPSRLQ,
    instrux_VPSRLW,
    instrux_VPSUBB,
    instrux_VPSUBD,
    instrux_VPSUBQ,
    instrux_VPSUBSB,
    instrux_VPSUBSW,
    instrux_VPSUBUSB,
    instrux_VPSUBUSW,
    instrux_VPSUBW,
    instrux_VPTEST,
    instrux_VPUNPCKHBW,
    instrux_VPUNPCKHDQ,
    instrux_VPUNPCKHQDQ,
    instrux_VPUNPCKHWD,
    instrux_VPUNPCKLBW,
    instrux_VPUNPCKLDQ,
    instrux_VPUNPCKLQDQ,
    instrux_VPUNPCKLWD,
    instrux_VPXOR,
    instrux_VRCPPS,
    instrux_VRCPSS,
    instrux_VROUNDPD,
    instrux_VROUNDPS,
    instrux_VROUNDSD,
    instrux_VROUNDSS,
    instrux_VRSQRTPS,
    instrux_VRSQRTSS,
    instrux_VSHUFPD,
    instrux_VSHUFPS,
    instrux_VSQRTPD,
    instrux_VSQRTPS,
    instrux_VSQRTSD,
    instrux_VSQRTSS,
    instrux_VSTMXCSR,
    instrux_VSUBPD,
    instrux_VSUBPS,
    instrux_VSUBSD,
    instrux_VSUBSS,
    instrux_VTESTPD,
    instrux_VTESTPS,
    instrux_VUCOMISD,
    instrux_VUCOMISS,
    instrux_VUNPCKHPD,
    instrux_VUNPCKHPS,
    instrux_VUNPCKLPD,
    instrux_VUNPCKLPS,
    instrux_VXORPD,
    instrux_VXORPS,
    instrux_VZEROALL,
    instrux_VZEROUPPER,
    instrux_WBINVD,
    instrux_WRMSR,
    instrux_WRSHR,
    instrux_XADD,
    instrux_XBTS,
    instrux_XCHG,
    instrux_XCRYPTCBC,
    instrux_XCRYPTCFB,
    instrux_XCRYPTCTR,
    instrux_XCRYPTECB,
    instrux_XCRYPTOFB,
    instrux_XGETBV,
    instrux_XLAT,
    instrux_XLATB,
    instrux_XOR,
    instrux_XORPD,
    instrux_XORPS,
    instrux_XRSTOR,
    instrux_XSAVE,
    instrux_XSETBV,
    instrux_XSHA1,
    instrux_XSHA256,
    instrux_XSTORE,
    instrux_CMOVcc,
    instrux_Jcc,
    instrux_SETcc,
};
