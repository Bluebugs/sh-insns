// This file autogenerated see https://github.com/Bluebugs/sh-insns/tree/master/script

// mov.l	Rm,@(disp,Rn)
#define FEATURES_1000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.b	Rm,@Rn
#define FEATURES_2000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.w	Rm,@Rn
#define FEATURES_2001 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.l	Rm,@Rn
#define FEATURES_2002 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// cas.l	Rm, Rn, @R0
#define FEATURES_2003 SH_FEATURE_JC

// mov.b	Rm,@-Rn
#define FEATURES_2004 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.w	Rm,@-Rn
#define FEATURES_2005 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.l	Rm,@-Rn
#define FEATURES_2006 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// div0s	Rm,Rn
#define FEATURES_2007 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// tst	Rm,Rn
#define FEATURES_2008 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// and	Rm,Rn
#define FEATURES_2009 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// cmp/eq	Rm,Rn
#define FEATURES_3000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// cmp/hs	Rm,Rn
#define FEATURES_3002 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// cmp/ge	Rm,Rn
#define FEATURES_3003 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// div1	Rm,Rn
#define FEATURES_3004 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// dmulu.l	Rm,Rn
#define FEATURES_3005 SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// cmp/hi	Rm,Rn
#define FEATURES_3006 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// cmp/gt	Rm,Rn
#define FEATURES_3007 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// sub	Rm,Rn
#define FEATURES_3008 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shll	Rn
#define FEATURES_4000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shlr	Rn
#define FEATURES_4001 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// sts.l	MACH,@-Rn
#define FEATURES_4002 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// stc.l	SR,@-Rn
#define FEATURES_4003 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// rotl	Rn
#define FEATURES_4004 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// rotr	Rn
#define FEATURES_4005 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// lds.l	@Rm+,MACH
#define FEATURES_4006 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// ldc.l	@Rm+,SR
#define FEATURES_4007 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shll2	Rn
#define FEATURES_4008 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shlr2	Rn
#define FEATURES_4009 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// dt	Rn
#define FEATURES_4010 SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// cmp/pz	Rn
#define FEATURES_4011 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// sts.l	MACL,@-Rn
#define FEATURES_4012 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// stc.l	GBR,@-Rn
#define FEATURES_4013 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// cmp/pl	Rn
#define FEATURES_4015 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// lds.l	@Rm+,MACL
#define FEATURES_4016 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// ldc.l	@Rm+,GBR
#define FEATURES_4017 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shll8	Rn
#define FEATURES_4018 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shlr8	Rn
#define FEATURES_4019 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shal	Rn
#define FEATURES_4020 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shar	Rn
#define FEATURES_4021 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// sts.l	PR,@-Rn
#define FEATURES_4022 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// stc.l	VBR,@-Rn
#define FEATURES_4023 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// rotcl	Rn
#define FEATURES_4024 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// rotcr	Rn
#define FEATURES_4025 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// lds.l	@Rm+,PR
#define FEATURES_4026 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// ldc.l	@Rm+,VBR
#define FEATURES_4027 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shll16	Rn
#define FEATURES_4028 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shlr16	Rn
#define FEATURES_4029 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// stc.l	SGR,@-Rn
#define FEATURES_4032 SH_FEATURE_SH4 | SH_FEATURE_SH4A

// stc.l	SSR,@-Rn
#define FEATURES_4033 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// ldc.l	@Rm+,SGR
#define FEATURES_4036 SH_FEATURE_SH4A

// ldc.l	@Rm+,SSR
#define FEATURES_4037 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// stc.l	SPC,@-Rn
#define FEATURES_4043 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// ldc.l	@Rm+,SPC
#define FEATURES_4047 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// sts.l	FPUL,@-Rn
#define FEATURES_4052 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// lds.l	@Rm+,FPUL
#define FEATURES_4056 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// sts.l	FPSCR,@-Rn
#define FEATURES_4062 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// lds.l	@Rm+,FPSCR
#define FEATURES_4066 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// mulr	R0,Rn
#define FEATURES_4080 SH_FEATURE_SH2A

// clipu.b	Rn
#define FEATURES_4081 SH_FEATURE_SH2A

// stc.l	Rm_BANK,@-Rn
#define FEATURES_4083 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// divu	R0,Rn
#define FEATURES_4084 SH_FEATURE_SH2A

// clipu.w	Rn
#define FEATURES_4085 SH_FEATURE_SH2A

// ldc.l	@Rm+,Rn_BANK
#define FEATURES_4087 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// clips.b	Rn
#define FEATURES_4091 SH_FEATURE_SH2A

// divs	R0,Rn
#define FEATURES_4094 SH_FEATURE_SH2A

// clips.w	Rn
#define FEATURES_4095 SH_FEATURE_SH2A

// mov.l	@(disp,Rm),Rn
#define FEATURES_5000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.b	@Rm,Rn
#define FEATURES_6000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.w	@Rm,Rn
#define FEATURES_6001 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.l	@Rm,Rn
#define FEATURES_6002 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov	Rm,Rn
#define FEATURES_6003 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.b	@Rm+,Rn
#define FEATURES_6004 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.w	@Rm+,Rn
#define FEATURES_6005 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.l	@Rm+,Rn
#define FEATURES_6006 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// not	Rm,Rn
#define FEATURES_6007 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// swap.b	Rm,Rn
#define FEATURES_6008 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// swap.w	Rm,Rn
#define FEATURES_6009 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// add	#imm,Rn
#define FEATURES_7000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.b	R0,@(disp,Rn)
#define FEATURES_8000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.w	R0,@(disp,Rn)
#define FEATURES_8100 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// jsr/n	@@(disp8,TBR)
#define FEATURES_8300 SH_FEATURE_SH2A

// mov.b	@(disp,Rm),R0
#define FEATURES_8400 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.w	@(disp,Rm),R0
#define FEATURES_8500 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// bclr       #imm3,Rn
#define FEATURES_8600 SH_FEATURE_SH2A

// bset       #imm3,Rn
#define FEATURES_8608 SH_FEATURE_SH2A

// bst        #imm3,Rn
#define FEATURES_8700 SH_FEATURE_SH2A

// bld        #imm3,Rn
#define FEATURES_8708 SH_FEATURE_SH2A

// cmp/eq	#imm,R0
#define FEATURES_8800 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// bt	label
#define FEATURES_8900 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.w	@(disp,PC),Rn
#define FEATURES_9000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.b	Rm,@(disp12,Rn)
#define FEATURES_30010000 SH_FEATURE_SH2A

// mov.w	Rm,@(disp12,Rn)
#define FEATURES_30011000 SH_FEATURE_SH2A

// mov.l	Rm,@(disp12,Rn)
#define FEATURES_30012000 SH_FEATURE_SH2A

// fmov.s	FRm,@(disp12,Rn) && fmov.d	DRm,@(disp12,Rn)
#define FEATURES_30013000 SH_FEATURE_SH2A | SH_FEATURE_SH2A

// mov.b	@(disp12,Rm),Rn
#define FEATURES_30014000 SH_FEATURE_SH2A

// mov.w	@(disp12,Rm),Rn
#define FEATURES_30015000 SH_FEATURE_SH2A

// mov.l	@(disp12,Rm),Rn
#define FEATURES_30016000 SH_FEATURE_SH2A

// fmov.s	@(disp12,Rm),FRn && fmov.d	@(disp12,Rm),DRn
#define FEATURES_30017000 SH_FEATURE_SH2A | SH_FEATURE_SH2A

// movu.b	@(disp12,Rm),Rn
#define FEATURES_30018000 SH_FEATURE_SH2A

// movu.w	@(disp12,Rm),Rn
#define FEATURES_30019000 SH_FEATURE_SH2A

// bclr.b     #imm3,@(disp12,Rn)
#define FEATURES_30090000 SH_FEATURE_SH2A

// bset.b     #imm3,@(disp12,Rn)
#define FEATURES_30091000 SH_FEATURE_SH2A

// bst.b      #imm3,@(disp12,Rn)
#define FEATURES_30092000 SH_FEATURE_SH2A

// bld.b      #imm3,@(disp12,Rn)
#define FEATURES_30093000 SH_FEATURE_SH2A

// band.b     #imm3,@disp12,Rn
#define FEATURES_30094000 SH_FEATURE_SH2A

// bor.b      #imm3,@(disp12,Rn)
#define FEATURES_30095000 SH_FEATURE_SH2A

// bxor.b     #imm3,@(disp12,Rn)
#define FEATURES_30096000 SH_FEATURE_SH2A

// mov	#imm,Rn
#define FEATURES_e000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// movi20	#imm20,Rn
#define FEATURES_00000000 SH_FEATURE_SH2A

// movi20s	#imm20,Rn
#define FEATURES_00010000 SH_FEATURE_SH2A

// mova	@(disp,PC),R0
#define FEATURES_c700 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.l	@(disp,PC),Rn
#define FEATURES_d000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.b	@-Rm,R0
#define FEATURES_40cb SH_FEATURE_SH2A

// mov.w	@-Rm,R0
#define FEATURES_40db SH_FEATURE_SH2A

// mov.l	@-Rm,R0
#define FEATURES_40eb SH_FEATURE_SH2A

// mov.b	R0,@Rn+
#define FEATURES_408b SH_FEATURE_SH2A

// mov.w	R0,@Rn+
#define FEATURES_409b SH_FEATURE_SH2A

// mov.l	R0,@Rn+
#define FEATURES_40ab SH_FEATURE_SH2A

// mov.b	@(R0,Rm),Rn
#define FEATURES_000c SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.w	@(R0,Rm),Rn
#define FEATURES_000d SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.l	@(R0,Rm),Rn
#define FEATURES_000e SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.b	Rm,@(R0,Rn)
#define FEATURES_0004 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.w	Rm,@(R0,Rn)
#define FEATURES_0005 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.l	Rm,@(R0,Rn)
#define FEATURES_0006 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.b	@(disp,GBR),R0
#define FEATURES_c400 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.w	@(disp,GBR),R0
#define FEATURES_c500 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.l	@(disp,GBR),R0
#define FEATURES_c600 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.b	R0,@(disp,GBR)
#define FEATURES_c000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.w	R0,@(disp,GBR)
#define FEATURES_c100 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mov.l	R0,@(disp,GBR)
#define FEATURES_c200 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// movco.l	R0,@Rn
#define FEATURES_0073 SH_FEATURE_SH4A

// movli.l	@Rm,R0
#define FEATURES_0063 SH_FEATURE_SH4A

// movua.l	@Rm,R0
#define FEATURES_40a9 SH_FEATURE_SH4A

// movua.l	@Rm+,R0
#define FEATURES_40e9 SH_FEATURE_SH4A

// movml.l	Rm,@-R15
#define FEATURES_40f1 SH_FEATURE_SH2A

// movml.l	@R15+,Rn
#define FEATURES_40f5 SH_FEATURE_SH2A

// movmu.l	Rm,@-R15
#define FEATURES_40f0 SH_FEATURE_SH2A

// movmu.l	@R15+,Rn
#define FEATURES_40f4 SH_FEATURE_SH2A

// movrt	Rn
#define FEATURES_0039 SH_FEATURE_SH2A

// movt	Rn
#define FEATURES_0029 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// nott
#define FEATURES_0068 SH_FEATURE_SH2A

// xtrct	Rm,Rn
#define FEATURES_200d SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// bandnot.b  #imm3,@(disp12,Rn)
#define FEATURES_3009c000 SH_FEATURE_SH2A

// bldnot.b   #imm3,@(disp12,Rn)
#define FEATURES_3009b000 SH_FEATURE_SH2A

// bornot.b   #imm3,@(disp12,Rn)
#define FEATURES_3009d000 SH_FEATURE_SH2A

// add	Rm,Rn
#define FEATURES_300c SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// addc	Rm,Rn
#define FEATURES_300e SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// addv	Rm,Rn
#define FEATURES_300f SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// cmp/str	Rm,Rn
#define FEATURES_200c SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// div0u
#define FEATURES_0019 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// dmuls.l	Rm,Rn
#define FEATURES_300d SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// exts.b	Rm,Rn
#define FEATURES_600e SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// exts.w	Rm,Rn
#define FEATURES_600f SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// extu.b	Rm,Rn
#define FEATURES_600c SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// extu.w	Rm,Rn
#define FEATURES_600d SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mac.l	@Rm+,@Rn+
#define FEATURES_000f SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mac.w	@Rm+,@Rn+
#define FEATURES_400f SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mul.l	Rm,Rn
#define FEATURES_0007 SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// muls.w	Rm,Rn
#define FEATURES_200f SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// mulu.w	Rm,Rn
#define FEATURES_200e SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// neg	Rm,Rn
#define FEATURES_600b SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// negc	Rm,Rn
#define FEATURES_600a SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// subc	Rm,Rn
#define FEATURES_300a SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// subv	Rm,Rn
#define FEATURES_300b SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// and	#imm,R0
#define FEATURES_c900 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// and.b	#imm,@(R0,GBR)
#define FEATURES_cd00 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// or	Rm,Rn
#define FEATURES_200b SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// or	#imm,R0
#define FEATURES_cb00 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// or.b	#imm,@(R0,GBR)
#define FEATURES_cf00 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// tas.b	@Rn
#define FEATURES_401b SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// tst	#imm,R0
#define FEATURES_c800 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// tst.b	#imm,@(R0,GBR)
#define FEATURES_cc00 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// xor	Rm,Rn
#define FEATURES_200a SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// xor	#imm,R0
#define FEATURES_ca00 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// xor.b	#imm,@(R0,GBR)
#define FEATURES_ce00 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shad	Rm,Rn
#define FEATURES_400c SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// shld	Rm,Rn
#define FEATURES_400d SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// bf	label
#define FEATURES_8b00 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// bf/s	label
#define FEATURES_8f00 SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// bt/s	label
#define FEATURES_8d00 SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// bra	label
#define FEATURES_a000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// braf	Rm
#define FEATURES_0023 SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// bsr	label
#define FEATURES_b000 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// bsrf	Rm
#define FEATURES_0003 SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// jmp	@Rm
#define FEATURES_402b SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// jsr	@Rm
#define FEATURES_400b SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// jsr/n	@Rm
#define FEATURES_404b SH_FEATURE_SH2A

// rts
#define FEATURES_000b SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// rts/n
#define FEATURES_006b SH_FEATURE_SH2A

// rtv/n	Rm
#define FEATURES_007b SH_FEATURE_SH2A

// clrmac
#define FEATURES_0028 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// clrs
#define FEATURES_0048 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// clrt
#define FEATURES_0008 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// icbi	@Rn
#define FEATURES_00e3 SH_FEATURE_SH4A

// ldbank	@Rm,R0
#define FEATURES_40e5 SH_FEATURE_SH2A

// ldc	Rm,SR
#define FEATURES_400e SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// ldc	Rm,TBR
#define FEATURES_404a SH_FEATURE_SH2A

// ldc	Rm,GBR
#define FEATURES_401e SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// ldc	Rm,VBR
#define FEATURES_402e SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// ldc	Rm,SGR
#define FEATURES_403a SH_FEATURE_SH4A

// ldc	Rm,SSR
#define FEATURES_403e SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// ldc	Rm,SPC
#define FEATURES_404e SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// ldc	Rm,DBR && ldc.l	@Rm+,DBR
#define FEATURES_40f6 SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// ldc	Rm,Rn_BANK
#define FEATURES_408e SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// lds	Rm,MACH
#define FEATURES_400a SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// lds	Rm,MACL
#define FEATURES_401a SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// lds	Rm,PR
#define FEATURES_402a SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// ldtbl
#define FEATURES_0038 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// movca.l	R0,@Rn
#define FEATURES_00c3 SH_FEATURE_SH4 | SH_FEATURE_SH4A

// nop
#define FEATURES_0009 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// ocbi	@Rn
#define FEATURES_0093 SH_FEATURE_SH4 | SH_FEATURE_SH4A

// ocbp	@Rn
#define FEATURES_00a3 SH_FEATURE_SH4 | SH_FEATURE_SH4A

// ocbwb	@Rn
#define FEATURES_00b3 SH_FEATURE_SH4 | SH_FEATURE_SH4A

// pref	@Rn
#define FEATURES_0083 SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// prefi	@Rn
#define FEATURES_00d3 SH_FEATURE_SH4A

// resbank
#define FEATURES_005b SH_FEATURE_SH2A

// rte
#define FEATURES_002b SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// sets && sett
#define FEATURES_0018 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// sleep
#define FEATURES_001b SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// stbank	R0,@Rn
#define FEATURES_40e1 SH_FEATURE_SH2A

// stc	SR,Rn
#define FEATURES_0002 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// stc	TBR,Rn
#define FEATURES_004a SH_FEATURE_SH2A

// stc	GBR,Rn
#define FEATURES_0012 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// stc	VBR,Rn
#define FEATURES_0022 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// stc	SGR,Rn
#define FEATURES_003a SH_FEATURE_SH4 | SH_FEATURE_SH4A

// stc	SSR,Rn
#define FEATURES_0032 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// stc	SPC,Rn
#define FEATURES_0042 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// stc	DBR,Rn
#define FEATURES_00fa SH_FEATURE_SH4 | SH_FEATURE_SH4A

// stc.l	DBR,@-Rn
#define FEATURES_40f2 SH_FEATURE_SH4 | SH_FEATURE_SH4A

// stc	Rm_BANK,Rn
#define FEATURES_0082 SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// sts	MACH,Rn
#define FEATURES_000a SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// sts	MACL,Rn
#define FEATURES_001a SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// sts	PR,Rn
#define FEATURES_002a SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// synco
#define FEATURES_00ab SH_FEATURE_SH4A

// trapa	#imm
#define FEATURES_c300 SH_FEATURE_SH1 | SH_FEATURE_SH2 | SH_FEATURE_SH2A | SH_FEATURE_SH3 | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_JC

// fmov	FRm,FRn && fmov	DRm,DRn
#define FEATURES_f00c SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.s	@Rm,FRn && fmov.d	@Rm,DRn
#define FEATURES_f008 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.s	FRm,@Rn && fmov.d	DRm,@Rn
#define FEATURES_f00a SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.s	@Rm+,FRn && fmov.d	@Rm+,DRn
#define FEATURES_f009 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.s	FRm,@-Rn && fmov.d	DRm,@-Rn
#define FEATURES_f00b SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.s	@(R0,Rm),FRn && fmov.d	@(R0,Rm),DRn
#define FEATURES_f006 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.s	FRm,@(R0,Rn) && fmov.d	DRm,@(R0,Rn)
#define FEATURES_f007 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov	DRm,XDn
#define FEATURES_f10c SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov	XDm,DRn
#define FEATURES_f01c SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov	XDm,XDn
#define FEATURES_f11c SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.d	@Rm,XDn
#define FEATURES_f108 SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.d	XDm,@Rn
#define FEATURES_f01a SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.d	@Rm+,XDn
#define FEATURES_f109 SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.d	XDm,@-Rn
#define FEATURES_f01b SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.d	@(R0,Rm),XDn
#define FEATURES_f106 SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmov.d	XDm,@(R0,Rn)
#define FEATURES_f017 SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fldi0	FRn
#define FEATURES_f08d SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fldi1	FRn
#define FEATURES_f09d SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// flds	FRm,FPUL
#define FEATURES_f01d SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fsts	FPUL,FRn
#define FEATURES_f00d SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fabs	FRn && fabs	DRn
#define FEATURES_f05d SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fneg	FRn && fneg	DRn
#define FEATURES_f04d SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fadd	FRm,FRn && fadd	DRm,DRn
#define FEATURES_f000 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fsub	FRm,FRn && fsub	DRm,DRn
#define FEATURES_f001 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmul	FRm,FRn && fmul	DRm,DRn
#define FEATURES_f002 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fmac	FR0,FRm,FRn
#define FEATURES_f00e SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fdiv	FRm,FRn && fdiv	DRm,DRn
#define FEATURES_f003 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fsqrt	FRn && fsqrt	DRn
#define FEATURES_f06d SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fcmp/eq	FRm,FRn && fcmp/eq	DRm,DRn
#define FEATURES_f004 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fcmp/gt	FRm,FRn && fcmp/gt	DRm,DRn
#define FEATURES_f005 SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// float	FPUL,FRn && float	FPUL,DRn
#define FEATURES_f02d SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// ftrc	FRm,FPUL && ftrc	DRm,FPUL
#define FEATURES_f03d SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A | SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fipr	FVm,FVn
#define FEATURES_f0ed SH_FEATURE_SH4 | SH_FEATURE_SH4A

// ftrv	XMTRX,FVn
#define FEATURES_f1fd SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fsrra	FRn
#define FEATURES_f07d SH_FEATURE_SH4A

// fsca	FPUL,DRn
#define FEATURES_f0fd SH_FEATURE_SH4A

// fcnvds	DRm,FPUL
#define FEATURES_f0bd SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fcnvsd	FPUL,DRn
#define FEATURES_f0ad SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// lds	Rm,FPSCR
#define FEATURES_406a SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// sts	FPSCR,Rn
#define FEATURES_006a SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// lds	Rm,FPUL
#define FEATURES_405a SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// sts	FPUL,Rn
#define FEATURES_005a SH_FEATURE_SH2E | SH_FEATURE_SH2A | SH_FEATURE_SH3E | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// frchg
#define FEATURES_fbfd SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fschg
#define FEATURES_f3fd SH_FEATURE_SH2A | SH_FEATURE_SH4 | SH_FEATURE_SH4A

// fpchg
#define FEATURES_f7fd SH_FEATURE_SH4A

