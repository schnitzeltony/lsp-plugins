/*
 * const16.h
 *
 *  Created on: 13 авг. 2018 г.
 *      Author: sadko
 */

#ifndef DSP_F32VEC4
    #error "This header should not be included directly"
#endif /* DSP_F32VEC4 */

/* Sine approximation coefficients */
DSP_F32VEC4(SIN_C0,  1.00000000000000000000);
DSP_F32VEC4(SIN_C1, -0.16666666666666665741);
DSP_F32VEC4(SIN_C2,  0.00833333333333333322);
DSP_F32VEC4(SIN_C3, -0.00019841269841269841);
DSP_F32VEC4(SIN_C4,  0.00000275573192239859);
DSP_F32VEC4(SIN_C5, -0.00000002505210838544);

/* Cosine approximation coefficients */
DSP_F32VEC4(COS_C0,  1.00000000000000000000);
DSP_F32VEC4(COS_C1, -0.50000000000000000000);
DSP_F32VEC4(COS_C2,  0.04166666666666666435);
DSP_F32VEC4(COS_C3, -0.00138888888888888894);
DSP_F32VEC4(COS_C4,  0.00002480158730158730);
DSP_F32VEC4(COS_C5, -0.00000027557319223986);

/* Logarithm approximation coefficients */
DSP_F32VEC4(LOG_C0, 7.0376836292E-2);
DSP_F32VEC4(LOG_C1, -1.1514610310E-1);
DSP_F32VEC4(LOG_C2, 1.1676998740E-1);
DSP_F32VEC4(LOG_C3, -1.2420140846E-1);
DSP_F32VEC4(LOG_C4, +1.4249322787E-1);
DSP_F32VEC4(LOG_C5, -1.6668057665E-1);
DSP_F32VEC4(LOG_C6, +2.0000714765E-1);
DSP_F32VEC4(LOG_C7, -2.4999993993E-1);
DSP_F32VEC4(LOG_C8, +3.3333331174E-1);
DSP_F32VEC4(LOG_C9, 0.5);
DSP_F32VEC4(LOG_LXE, -2.12194440e-4);

/* Math constants */
DSP_F32VEC4(ZERO, 0.0f);
DSP_F32VEC4(ONE, 1.0f);
DSP_F32VEC4(PI,  M_PI);
DSP_F32VEC4(PI_2, M_PI_2);
DSP_F32VEC4(SQRT1_2, M_SQRT1_2);
DSP_F32VEC4(LN2, M_LN2);

/* Sign Mask */
DSP_U32VEC4(X_SIGN,  0x7fffffff);
DSP_U32VEC4(X_ISIGN, 0x80000000);
DSP_F32VEC4(X_HALF,  0.5f);
DSP_F32VEC4(X_MINUS_ONE,  -1.0f);
DSP_U32VEC4(X_MANT,  0x007fffff);
DSP_U32VEC4(X_MMASK, 0x0000007f);
DSP_F32VEC4(X_AMP_THRESH, AMPLIFICATION_THRESH);
DSP_U32VEC4(X_P_DENORM, 0x00800000);
DSP_U32VEC4(X_N_DENORM, 0x80800000);

/* Positive and negative infinities */
DSP_U32VEC4(X_P_INF,  0x7f800000);
DSP_U32VEC4(X_N_INF,  0xff800000);
DSP_U32VEC4(X_P_INFM1,0x7f7fffff);
DSP_U32VEC4(X_N_INFM1,0xff7fffff);
DSP_U32VEC4(X_ZERO_M1,0xffffffff);
DSP_U32VEC4(X_CMASK,  0x00ff00ff);

/* Saturation replacement */
DSP_F32VEC4(SX_P_INF, FLOAT_SAT_P_INF);
DSP_F32VEC4(SX_N_INF, FLOAT_SAT_N_INF);
DSP_F32VEC4(SX_P_NAN, FLOAT_SAT_P_NAN);
DSP_F32VEC4(SX_N_NAN, FLOAT_SAT_N_NAN);

/* Miscellaneous vectors */
DSP_U32VECX4(X_MASK0001, -1, 0, 0, 0);
DSP_U32VECX4(X_MASK0111, -1, -1, -1, 0);
DSP_U32VECX4(X_SMASK0010, 0, 0x80000000, 0, 0);
DSP_U32VECX4(X_SMASK0001, 0x80000000, 0, 0, 0);

DSP_F32VECX4(X_3DPOINT, 0.0f, 0.0f, 0.0f, 1.0f);

/* 3D */
DSP_F32VEC4(X_3D_TOLERANCE, DSP_3D_TOLERANCE);

/* FFT vectors */
DSP_F32ARRAY(XFFT_W_RE,
    DSP_F32REP4(0.0000000000000000f),
    DSP_F32REP4(0.0000000000000000f),
    DSP_F32REP4(0.7071067811865475f),
    DSP_F32REP4(0.9238795325112868f),
    DSP_F32REP4(0.9807852804032305f),
    DSP_F32REP4(0.9951847266721969f),
    DSP_F32REP4(0.9987954562051724f),
    DSP_F32REP4(0.9996988186962042f),
    DSP_F32REP4(0.9999247018391445f),
    DSP_F32REP4(0.9999811752826011f),
    DSP_F32REP4(0.9999952938095762f),
    DSP_F32REP4(0.9999988234517019f),
    DSP_F32REP4(0.9999997058628822f),
    DSP_F32REP4(0.9999999264657179f),
    DSP_F32REP4(0.9999999816164293f),
    DSP_F32REP4(0.9999999954041073f),
    DSP_F32REP4(0.9999999988510268f)
);

DSP_F32ARRAY(XFFT_W_IM,
    DSP_F32REP4(1.0000000000000000f),
    DSP_F32REP4(1.0000000000000000f),
    DSP_F32REP4(0.7071067811865475f),
    DSP_F32REP4(0.3826834323650898f),
    DSP_F32REP4(0.1950903220161283f),
    DSP_F32REP4(0.0980171403295606f),
    DSP_F32REP4(0.0490676743274180f),
    DSP_F32REP4(0.0245412285229123f),
    DSP_F32REP4(0.0122715382857199f),
    DSP_F32REP4(0.0061358846491545f),
    DSP_F32REP4(0.0030679567629660f),
    DSP_F32REP4(0.0015339801862848f),
    DSP_F32REP4(0.0007669903187427f),
    DSP_F32REP4(0.0003834951875714f),
    DSP_F32REP4(0.0001917475973107f),
    DSP_F32REP4(0.0000958737990960f),
    DSP_F32REP4(0.0000479368996031f)
);

DSP_F32ARRAY(XFFT_W,
    DSP_F32REP4(0.0000000000000000f), DSP_F32REP4(1.0000000000000000f),
    DSP_F32REP4(0.0000000000000000f), DSP_F32REP4(1.0000000000000000f),
    DSP_F32REP4(0.7071067811865475f), DSP_F32REP4(0.7071067811865475f),
    DSP_F32REP4(0.9238795325112868f), DSP_F32REP4(0.3826834323650898f),
    DSP_F32REP4(0.9807852804032305f), DSP_F32REP4(0.1950903220161283f),
    DSP_F32REP4(0.9951847266721969f), DSP_F32REP4(0.0980171403295606f),
    DSP_F32REP4(0.9987954562051724f), DSP_F32REP4(0.0490676743274180f),
    DSP_F32REP4(0.9996988186962042f), DSP_F32REP4(0.0245412285229123f),
    DSP_F32REP4(0.9999247018391445f), DSP_F32REP4(0.0122715382857199f),
    DSP_F32REP4(0.9999811752826011f), DSP_F32REP4(0.0061358846491545f),
    DSP_F32REP4(0.9999952938095762f), DSP_F32REP4(0.0030679567629660f),
    DSP_F32REP4(0.9999988234517019f), DSP_F32REP4(0.0015339801862848f),
    DSP_F32REP4(0.9999997058628822f), DSP_F32REP4(0.0007669903187427f),
    DSP_F32REP4(0.9999999264657179f), DSP_F32REP4(0.0003834951875714f),
    DSP_F32REP4(0.9999999816164293f), DSP_F32REP4(0.0001917475973107f),
    DSP_F32REP4(0.9999999954041073f), DSP_F32REP4(0.0000958737990960f),
    DSP_F32REP4(0.9999999988510268f), DSP_F32REP4(0.0000479368996031f)
);

DSP_F32ARRAY(XFFT_A_RE,
    1.0000000000000000f, 0.7071067811865475f, 0.0000000000000001f, -0.7071067811865475f,
    1.0000000000000000f, 0.9238795325112868f, 0.7071067811865475f, 0.3826834323650898f,
    1.0000000000000000f, 0.9807852804032305f, 0.9238795325112868f, 0.8314696123025452f,
    1.0000000000000000f, 0.9951847266721969f, 0.9807852804032305f, 0.9569403357322089f,
    1.0000000000000000f, 0.9987954562051724f, 0.9951847266721969f, 0.9891765099647810f,
    1.0000000000000000f, 0.9996988186962042f, 0.9987954562051724f, 0.9972904566786902f,
    1.0000000000000000f, 0.9999247018391445f, 0.9996988186962042f, 0.9993223845883495f,
    1.0000000000000000f, 0.9999811752826011f, 0.9999247018391445f, 0.9998305817958234f,
    1.0000000000000000f, 0.9999952938095762f, 0.9999811752826011f, 0.9999576445519639f,
    1.0000000000000000f, 0.9999988234517019f, 0.9999952938095762f, 0.9999894110819284f,
    1.0000000000000000f, 0.9999997058628822f, 0.9999988234517019f, 0.9999973527669782f,
    1.0000000000000000f, 0.9999999264657179f, 0.9999997058628822f, 0.9999993381915255f,
    1.0000000000000000f, 0.9999999816164293f, 0.9999999264657179f, 0.9999998345478677f,
    1.0000000000000000f, 0.9999999954041073f, 0.9999999816164293f, 0.9999999586369661f,
    1.0000000000000000f, 0.9999999988510268f, 0.9999999954041073f, 0.9999999896592415f
);

DSP_F32ARRAY(XFFT_A_IM,
    0.0000000000000000f, 0.7071067811865475f, 1.0000000000000000f, 0.7071067811865476f,
    0.0000000000000000f, 0.3826834323650898f, 0.7071067811865475f, 0.9238795325112867f,
    0.0000000000000000f, 0.1950903220161283f, 0.3826834323650898f, 0.5555702330196022f,
    0.0000000000000000f, 0.0980171403295606f, 0.1950903220161283f, 0.2902846772544624f,
    0.0000000000000000f, 0.0490676743274180f, 0.0980171403295606f, 0.1467304744553617f,
    0.0000000000000000f, 0.0245412285229123f, 0.0490676743274180f, 0.0735645635996674f,
    0.0000000000000000f, 0.0122715382857199f, 0.0245412285229123f, 0.0368072229413588f,
    0.0000000000000000f, 0.0061358846491545f, 0.0122715382857199f, 0.0184067299058048f,
    0.0000000000000000f, 0.0030679567629660f, 0.0061358846491545f, 0.0092037547820598f,
    0.0000000000000000f, 0.0015339801862848f, 0.0030679567629660f, 0.0046019261204486f,
    0.0000000000000000f, 0.0007669903187427f, 0.0015339801862848f, 0.0023009691514258f,
    0.0000000000000000f, 0.0003834951875714f, 0.0007669903187427f, 0.0011504853371138f,
    0.0000000000000000f, 0.0001917475973107f, 0.0003834951875714f, 0.0005752427637321f,
    0.0000000000000000f, 0.0000958737990960f, 0.0001917475973107f, 0.0002876213937629f,
    0.0000000000000000f, 0.0000479368996031f, 0.0000958737990960f, 0.0001438106983686f
);

DSP_F32ARRAY(XFFT_A,
    1.0000000000000000f, 0.7071067811865475f, 0.0000000000000001f, -0.7071067811865475f,0.0000000000000000f, 0.7071067811865475f, 1.0000000000000000f, 0.7071067811865476f,
    1.0000000000000000f, 0.9238795325112868f, 0.7071067811865475f, 0.3826834323650898f, 0.0000000000000000f, 0.3826834323650898f, 0.7071067811865475f, 0.9238795325112867f,
    1.0000000000000000f, 0.9807852804032305f, 0.9238795325112868f, 0.8314696123025452f, 0.0000000000000000f, 0.1950903220161283f, 0.3826834323650898f, 0.5555702330196022f,
    1.0000000000000000f, 0.9951847266721969f, 0.9807852804032305f, 0.9569403357322089f, 0.0000000000000000f, 0.0980171403295606f, 0.1950903220161283f, 0.2902846772544624f,
    1.0000000000000000f, 0.9987954562051724f, 0.9951847266721969f, 0.9891765099647810f, 0.0000000000000000f, 0.0490676743274180f, 0.0980171403295606f, 0.1467304744553617f,
    1.0000000000000000f, 0.9996988186962042f, 0.9987954562051724f, 0.9972904566786902f, 0.0000000000000000f, 0.0245412285229123f, 0.0490676743274180f, 0.0735645635996674f,
    1.0000000000000000f, 0.9999247018391445f, 0.9996988186962042f, 0.9993223845883495f, 0.0000000000000000f, 0.0122715382857199f, 0.0245412285229123f, 0.0368072229413588f,
    1.0000000000000000f, 0.9999811752826011f, 0.9999247018391445f, 0.9998305817958234f, 0.0000000000000000f, 0.0061358846491545f, 0.0122715382857199f, 0.0184067299058048f,
    1.0000000000000000f, 0.9999952938095762f, 0.9999811752826011f, 0.9999576445519639f, 0.0000000000000000f, 0.0030679567629660f, 0.0061358846491545f, 0.0092037547820598f,
    1.0000000000000000f, 0.9999988234517019f, 0.9999952938095762f, 0.9999894110819284f, 0.0000000000000000f, 0.0015339801862848f, 0.0030679567629660f, 0.0046019261204486f,
    1.0000000000000000f, 0.9999997058628822f, 0.9999988234517019f, 0.9999973527669782f, 0.0000000000000000f, 0.0007669903187427f, 0.0015339801862848f, 0.0023009691514258f,
    1.0000000000000000f, 0.9999999264657179f, 0.9999997058628822f, 0.9999993381915255f, 0.0000000000000000f, 0.0003834951875714f, 0.0007669903187427f, 0.0011504853371138f,
    1.0000000000000000f, 0.9999999816164293f, 0.9999999264657179f, 0.9999998345478677f, 0.0000000000000000f, 0.0001917475973107f, 0.0003834951875714f, 0.0005752427637321f,
    1.0000000000000000f, 0.9999999954041073f, 0.9999999816164293f, 0.9999999586369661f, 0.0000000000000000f, 0.0000958737990960f, 0.0001917475973107f, 0.0002876213937629f,
    1.0000000000000000f, 0.9999999988510268f, 0.9999999954041073f, 0.9999999896592415f, 0.0000000000000000f, 0.0000479368996031f, 0.0000958737990960f, 0.0001438106983686f
);