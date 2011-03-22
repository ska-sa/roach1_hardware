* SPICE TEST file for net Lsw00 - C:\Work\Roach\elec\SISim\PPC_DDR2\_1I289_PPC_ECC6.sp


*** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE ***
*                                                                         *
* Be sure to check all settings if you make use of this test circuit.     *
*                                                                         *
*** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE ***



* Output from HyperLynx SPICE Writer
* Created by . on Date: Monday Mar. 3,2008   Time: 8:26:58
* Created with HyperLynx version: 7.7 build: 385
* Design file: $1I289_PPC_ECC6.ffs
* Special Settings: Coupled

.option  compat

*Temperature used in HyperLynx transmission line field solver: 20.000000 c

V1003 1003 0            5 *Vcc
V1004 1004 0            0 *Vss
V1005 1005 0            5 *Vt1
V1006 1006 0            5 *Vt2
V1007 1007 0            5 *Vt3
V1008 1008 0            5 *Vt4
V1009 1009 0            5 *Vt5
V1010 1010 0            5 *Vt6
V1011 1011 0            5 *VpullUp
V1012 1012 0            0 *VpullDn
V1013 1013 0            0 *$1I2\$1N651
V1014 1014 0            0 *$1I2\$1N859
V1015 1015 0            0 *$1I2\$1N894
V1016 1016 0            0 *$1I3\$1N588
V1017 1017 0            0 *$1I3\$1N681
V1018 1018 0            0 *$1I3\$1N692
V1019 1019 0            0 *$1I42\$1N20
V1020 1020 0            0 *$1I144\$1N61
V1021 1021 0            0 *$1I144\$1N128
V1022 1022 0            0 *$1I671\$1N147
V1023 1023 0            0 *$1I860\N14667223
V1024 1024 0            0 *$1I860\N28513723
V1025 1025 0            0 *$1I860\N28645813
V1026 1026 0            0 *$1I860\N28645819
V1027 1027 0            1 *1V0
V1028 1028 0          1.5 *1V5
V1029 1029 0          1.5 *1V5_CPU
V1030 1030 0          1.5 *1V5AUX
V1031 1031 0          1.8 *1V8
V1032 1032 0          1.8 *1V8_CPU
V1033 1033 0          2.5 *2V5
V1034 1034 0          2.5 *2V5_CPU
V1035 1035 0          3.3 *3V3
V1036 1036 0          3.3 *3V3_CPU
V1037 1037 0          3.3 *3V3AUX
V1038 1038 0            5 *5V
V1039 1039 0            5 *5VAUX
V1040 1040 0          0.9 *DDR_VREF_0V9
V1041 1041 0          0.9 *DDR_VTT
V1042 1042 0            1 *I1V0
V1043 1043 0          1.5 *I1V5
V1044 1044 0          1.8 *I1V8
V1045 1045 0          2.5 *I2V5
V1046 1046 0            1 *MGT_AVCC
V1047 1047 0          1.2 *MGT_AVCCPLL
V1048 1048 0          1.2 *MGT_AVTT
V1049 1049 0            0 *UNUSED_PINS_PADS00
V1050 1050 0          0.9 *VREF_0V9
V1051 1051 0         0.75 *VREF_QDR_BY0_1
V1052 1052 0         0.75 *VREF_QDR_BY2_3
V1053 1053 0          0.9 *VTT_0V9
V1054 1054 0         0.75 *VTT_QDR_BY0_1
V1055 1055 0         0.75 *VTT_QDR_BY2_3
V000  1001 0     0.0
Vinp  1056 0  PWL   0.0000ns   0.00V   0.0006ns   1.00V   3.6842ns   1.00V   3.6848ns   0.00V   7.5188ns   0.00V   7.5194ns   1.00V  11.2030ns   1.00V  11.2036ns   0.00V  15.0376ns   0.00V  15.0382ns   1.00V  18.7218ns   1.00V  18.7224ns   0.00V  22.5564ns   0.00V  22.5570ns   1.00V  26.2406ns   1.00V  26.2412ns   0.00V  30.0752ns   0.00V  30.0758ns   1.00V  33.7594ns   1.00V  33.7600ns   0.00V  37.5940ns   0.00V  37.5946ns   1.00V  41.2782ns   1.00V  41.2788ns   0.00V
+   45.1128ns   0.00V  45.1134ns   1.00V  48.7970ns   1.00V  48.7976ns   0.00V
Vinn  1057 0  PWL   0.0000ns   1.00V   0.0006ns   0.00V   3.6842ns   0.00V   3.6848ns   1.00V   7.5188ns   1.00V   7.5194ns   0.00V  11.2030ns   0.00V  11.2036ns   1.00V  15.0376ns   1.00V  15.0382ns   0.00V  18.7218ns   0.00V  18.7224ns   1.00V  22.5564ns   1.00V  22.5570ns   0.00V  26.2406ns   0.00V  26.2412ns   1.00V  30.0752ns   1.00V  30.0758ns   0.00V  33.7594ns   0.00V  33.7600ns   1.00V  37.5940ns   1.00V  37.5946ns   0.00V  41.2782ns   0.00V  41.2788ns   1.00V
+   45.1128ns   1.00V  45.1134ns   0.00V  48.7970ns   0.00V  48.7976ns   1.00V
X1 1056 1057 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
+  25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49
+  50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 _1I289_PPC_ECC6



* Node   1 = EBD-J8_C249.1 (at pin)
* Node   2 = EBD-J8_R102.2 (at pin)
* Node   3 = EBD-J8_R102.1 (at pin)
* Node   4 = EBD-J8_U15.J9 (at pin) (receiver)
* Node   5 = EBD-J8_U5.J1 (at pin) (receiver)
* Node   6 = J10.17 (at pin)
* Node   7 = J10.32 (at pin)
* Node   8 = R32.2 (at pin)
* Node   9 = J10.31 (at pin)
* Node  10 = R31.2 (at pin)
* Node  11 = J10.30 (at pin)
* Node  12 = R30.2 (at pin)
* Node  13 = J10.29 (at pin)
* Node  14 = R29.2 (at pin)
* Node  15 = J10.28 (at pin)
* Node  16 = R28.2 (at pin)
* Node  17 = J10.27 (at pin)
* Node  18 = R27.2 (at pin)
* Node  19 = J10.26 (at pin)
* Node  20 = R26.2 (at pin)
* Node  21 = J10.25 (at pin)
* Node  22 = R25.2 (at pin)
* Node  23 = J10.24 (at pin)
* Node  24 = R24.2 (at pin)
* Node  25 = J10.23 (at pin)
* Node  26 = R23.2 (at pin)
* Node  27 = J10.22 (at pin)
* Node  28 = R22.2 (at pin)
* Node  29 = J10.21 (at pin)
* Node  30 = R21.2 (at pin)
* Node  31 = J10.20 (at pin)
* Node  32 = R20.2 (at pin)
* Node  33 = J10.19 (at pin)
* Node  34 = R19.2 (at pin)
* Node  35 = J10.18 (at pin)
* Node  36 = R18.2 (at pin)
* Node  37 = J10.16 (at pin)
* Node  38 = R16.2 (at pin)
* Node  39 = J10.15 (at pin)
* Node  40 = R15.2 (at pin)
* Node  41 = J10.14 (at pin)
* Node  42 = R14.2 (at pin)
* Node  43 = J10.13 (at pin)
* Node  44 = R13.2 (at pin)
* Node  45 = J10.12 (at pin)
* Node  46 = R12.2 (at pin)
* Node  47 = J10.11 (at pin)
* Node  48 = R11.2 (at pin)
* Node  49 = J10.10 (at pin)
* Node  50 = R10.2 (at pin)
* Node  51 = J10.9 (at pin)
* Node  52 = R9.2 (at pin)
* Node  53 = J10.8 (at pin)
* Node  54 = R8.2 (at pin)
* Node  55 = J10.7 (at pin)
* Node  56 = R7.2 (at pin)
* Node  57 = J10.6 (at pin)
* Node  58 = R6.2 (at pin)
* Node  59 = J10.5 (at pin)
* Node  60 = R5.2 (at pin)
* Node  61 = J10.4 (at pin)
* Node  62 = R4.2 (at pin)
* Node  63 = J10.3 (at pin)
* Node  64 = R3.2 (at pin)
* Node  65 = J10.2 (at pin)
* Node  66 = R2.2 (at pin)
* Node  67 = U1.AM10 (at pin) (driver)
* Node  68 = J10.1 (at pin)

* Node   0 = Gnd (Common Return)

*<<<Spice Models>>>
*.subckt mlm87916_int_revA 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
X2 68 65 63 61 59 57 55 53 51 49 47 45 43 41 39 37 6 35 33 31 29 27 25 23 21 19 17 15 13 11 9 7 mlm87916_int_revA
+ EXTRAP_TO_DC=1
+ FORCE_PASSIVITY=2
+ SYMMETRY=1
.options search='C:\MentorGraphics\2007PADS\SDD_HOME\hyperlynx\LIBS\'
.options search='C:\Work\ROACH\elec\SimLib\Micron\MT18HTF51272AY-667A1\'
.options search='C:\Work\ROACH\elec\SimLib\Virtex5\virtex5_pkg\'
.options search='C:\Work\ROACH\elec\SimLib\Virtex5\'
.options search='C:\Work\ROACH\elec\SimLib\Virtex5\rnr_spice\'
.options search='C:\Work\ROACH\elec\SimLib\Virtex5\virtex5_spice\home\pkgtech\Characterization\electrical_data\data\_IBISwriter_data\Virtex5\'
.options search='C:\Work\ROACH\elec\SimLib\Virtex5\v5_rio_sis_kit_1_0\package_models\'
.options search='C:\Work\ROACH\elec\SimLib\Spansion\'
.options search='C:\Work\ROACH\elec\SimLib\AMCC\'
.options search='C:\Work\ROACH\elec\SimLib\CoolrunnerII\'
.options search='C:\Work\ROACH\elec\SimLib\TI\'
.options search='C:\Work\Roach\elec\SimLib\DDR2\IBIS_models\'
.options search='C:\Work\Roach\elec\SimLib\Samtec\ELDO_QTH_QSH\'
.options search='C:\Work\Roach\elec\SimLib\Samtec\ICM_QTH_QSH\'
.options search='C:\Work\Roach\elec\SimLib\Samtec\PSPICE_QTH_QSH\Orcad-Capture-LIB_QTH_QSH\'
.options search='C:\Work\Roach\elec\SimLib\Molex\'
.include 'C:\Work\Roach\elec\SimLib\Molex\mlm87916_int_revA.sp'
*<<<End Spice Models>>>


.inc 'C:\Work\Roach\elec\SISim\PPC_DDR2\_1I289_PPC_ECC6.sp'

*<<<Scope Time>>>
.TRAN 0.58PS 50.00NS 
.option step=5.8e-013
.param Mentor_Step=5.8e-013
.param Mentor_SimStopTime=5e-008


.PLOT TRAN V(67 )
V333 67 333 0.0
.PLOT TRAN V(7 )
V334 7 334 0.0
.PLOT TRAN V(9 )
V335 9 335 0.0
.PLOT TRAN V(11 )
V336 11 336 0.0
.PLOT TRAN V(13 )
V337 13 337 0.0
.PLOT TRAN V(15 )
V338 15 338 0.0
.PLOT TRAN V(17 )
V339 17 339 0.0
.PLOT TRAN V(19 )
V340 19 340 0.0
.PLOT TRAN V(21 )
V341 21 341 0.0
.PLOT TRAN V(23 )
V342 23 342 0.0
.PLOT TRAN V(25 )
V343 25 343 0.0
.PLOT TRAN V(27 )
V344 27 344 0.0
.PLOT TRAN V(29 )
V345 29 345 0.0
.PLOT TRAN V(31 )
V346 31 346 0.0
.PLOT TRAN V(33 )
V347 33 347 0.0
.PLOT TRAN V(35 )
V348 35 348 0.0
.PLOT TRAN V(6 )
V349 6 349 0.0
.PLOT TRAN V(37 )
V350 37 350 0.0
.PLOT TRAN V(39 )
V351 39 351 0.0
.PLOT TRAN V(41 )
V352 41 352 0.0
.PLOT TRAN V(43 )
V353 43 353 0.0
.PLOT TRAN V(45 )
V354 45 354 0.0
.PLOT TRAN V(47 )
V355 47 355 0.0
.PLOT TRAN V(49 )
V356 49 356 0.0
.PLOT TRAN V(51 )
V357 51 357 0.0
.PLOT TRAN V(53 )
V358 53 358 0.0
.PLOT TRAN V(55 )
V359 55 359 0.0
.PLOT TRAN V(57 )
V360 57 360 0.0
.PLOT TRAN V(59 )
V361 59 361 0.0
.PLOT TRAN V(61 )
V362 61 362 0.0
.PLOT TRAN V(63 )
V363 63 363 0.0
.PLOT TRAN V(65 )
V364 65 364 0.0
.PLOT TRAN V(68 )
V365 68 365 0.0
.PLOT TRAN V(4 )
V366 4 366 0.0
.PLOT TRAN V(5 )
V367 5 367 0.0
.PLOT TRAN V(1 )
V368 1 368 0.0
.PLOT TRAN V(3 )
V369 3 369 0.0
.PLOT TRAN V(2 )
V370 2 370 0.0
.PLOT TRAN V(66 )
V371 66 371 0.0
.PLOT TRAN V(64 )
V372 64 372 0.0
.PLOT TRAN V(62 )
V373 62 373 0.0
.PLOT TRAN V(60 )
V374 60 374 0.0
.PLOT TRAN V(58 )
V375 58 375 0.0
.PLOT TRAN V(56 )
V376 56 376 0.0
.PLOT TRAN V(54 )
V377 54 377 0.0
.PLOT TRAN V(52 )
V378 52 378 0.0
.PLOT TRAN V(50 )
V379 50 379 0.0
.PLOT TRAN V(48 )
V380 48 380 0.0
.PLOT TRAN V(46 )
V381 46 381 0.0
.PLOT TRAN V(44 )
V382 44 382 0.0
.PLOT TRAN V(42 )
V383 42 383 0.0
.PLOT TRAN V(40 )
V384 40 384 0.0
.PLOT TRAN V(38 )
V385 38 385 0.0
.PLOT TRAN V(36 )
V386 36 386 0.0
.PLOT TRAN V(34 )
V387 34 387 0.0
.PLOT TRAN V(32 )
V388 32 388 0.0
.PLOT TRAN V(30 )
V389 30 389 0.0
.PLOT TRAN V(28 )
V390 28 390 0.0
.PLOT TRAN V(26 )
V391 26 391 0.0
.PLOT TRAN V(24 )
V392 24 392 0.0
.PLOT TRAN V(22 )
V393 22 393 0.0
.PLOT TRAN V(20 )
V394 20 394 0.0
.PLOT TRAN V(18 )
V395 18 395 0.0
.PLOT TRAN V(16 )
V396 16 396 0.0
.PLOT TRAN V(14 )
V397 14 397 0.0
.PLOT TRAN V(12 )
V398 12 398 0.0
.PLOT TRAN V(10 )
V399 10 399 0.0
.PLOT TRAN V(8 )
V400 8 400 0.0

.END

