* SPICE TEST file for net Lsw00 - D:\ROACH\elec\SISim\roach_ddr2_dqs_single_fpga2dimm.sp


*** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE ***
*                                                                         *
* Be sure to check all settings if you make use of this test circuit.     *
*                                                                         *
*** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE *** NOTE ***



* Output from HyperLynx SPICE Writer
* Created by Francois on Date: Wednesday Nov. 28,2007   Time: 15:33:06
* Created with HyperLynx version: 7.7 build: 385
* Design file: roach_ddr2_dq_dual_fpga2dimm.ffs
* Special Settings: Coupled

.option  compat

*Temperature used in HyperLynx transmission line field solver: 20.000000 c

V1003 1003 0          1.8 *Vcc
V1004 1004 0          1.8 *VDD
V1005 1005 0          1.8 *VDDQ
V1006 1006 0            0 *VpullDn
V1007 1007 0          1.8 *VpullUp
V1008 1008 0            0 *Vss
V1009 1009 0            0 *VSSQ
V1010 1010 0          0.9 *Vt1
V1011 1011 0          0.9 *VTT
V000  1001 0     0.0
Vinp  1012 0  PWL   0.0000ns   0.00V   0.0013ns   1.00V   1.2250ns   1.00V   1.2263ns   0.00V   2.5000ns   0.00V   2.5013ns   1.00V   3.7250ns   1.00V   3.7263ns   0.00V   5.0000ns   0.00V   5.0013ns   1.00V   6.2250ns   1.00V   6.2263ns   0.00V   7.5000ns   0.00V   7.5013ns   1.00V   8.7250ns   1.00V   8.7263ns   0.00V  10.0000ns   0.00V  10.0013ns   1.00V
Vinn  1013 0  PWL   0.0000ns   1.00V   0.0013ns   0.00V   1.2250ns   0.00V   1.2263ns   1.00V   2.5000ns   1.00V   2.5013ns   0.00V   3.7250ns   0.00V   3.7263ns   1.00V   5.0000ns   1.00V   5.0013ns   0.00V   6.2250ns   0.00V   6.2263ns   1.00V   7.5000ns   1.00V   7.5013ns   0.00V   8.7250ns   0.00V   8.7263ns   1.00V  10.0000ns   1.00V  10.0013ns   0.00V
X1 1012 1013 1 2 3 4 5 6 7 8 9 10 11 12 13 14 roach_ddr2_dqs_single_fpga2dimm



* Node   1 = J1.Port4 (at pin)
* Node   2 = U8.1 (at pin) (receiver)
* Node   3 = R8.1 (at pin)
* Node   4 = J1.Port3 (at pin)
* Node   5 = R7.2 (at pin)
* Node   6 = U7.1 (at pin) (receiver)
* Node   7 = J1.Port2 (at pin)
* Node   8 = U6.1 (at pin) (driver)
* Node   9 = J1.Port1 (at pin)
* Node  10 = U5.1 (at pin) (driver)
* Node  11 = U3.2 (at pin) (driver)
* Node  12 = R1.2 (at pin)
* Node  13 = R1.1 (at pin)
* Node  14 = U3.1 (at pin) (driver)

* Node   0 = Gnd (Common Return)

*<<<Spice Models>>>
* Spice model wrapper for Touchstone file
YSNPORT42 FBLOCK param:
+ idx_m=0
+ EXTRAP_TO_DC=1
+ FORCE_PASSIVITY=2
+ SYMMETRY=1
+ pin: 9 0 7 0 4 0 1 0
+ STRING: 'D:\ROACH\elec\SimLib\Virtex5\v5_rio_sis_kit_1_0\package_models\pkg_model_v5_lxt_sxt_ff1136_typ.s4p'
.options search='C:\MentorGraphics\2007.1PADS\SDD_HOME\hyperlynx\LIBS\'
.options search='D:\ROACH\elec\SimLib\Micron\MT18HTF51272AY-667A1\'
.options search='D:\ROACH\elec\SimLib\Virtex5\virtex5_pkg\'
.options search='D:\ROACH\elec\SimLib\Virtex5\'
.options search='D:\ROACH\elec\SimLib\Virtex5\rnr_spice\'
.options search='D:\ROACH\elec\SimLib\Virtex5\virtex5_spice\home\pkgtech\Characterization\electrical_data\data\_IBISwriter_data\Virtex5\'
.options search='D:\ROACH\elec\SimLib\Virtex5\v5_rio_sis_kit_1_0\package_models\'
*<<<End Spice Models>>>


.inc 'D:\ROACH\elec\SISim\roach_ddr2_dqs_single_fpga2dimm.sp'

*<<<Scope Time>>>
.TRAN 1.3PS 10.00NS 
.option step=1.3e-012
.param Mentor_Step=1.3e-012
.param Mentor_SimStopTime=1e-008


.PLOT TRAN V(1 )
V137 1 137 0.0
.PLOT TRAN V(11 ,14)
.PLOT TRAN V(11 )
V138 11 138 0.0
.PLOT TRAN V(14 )
V139 14 139 0.0
.PLOT TRAN V(4 )
V140 4 140 0.0
.PLOT TRAN V(7 )
V141 7 141 0.0
.PLOT TRAN V(9 )
V142 9 142 0.0
.PLOT TRAN V(13 )
V143 13 143 0.0
.PLOT TRAN V(12 )
V144 12 144 0.0
.PLOT TRAN V(10 )
V145 10 145 0.0
.PLOT TRAN V(8 )
V146 8 146 0.0
.PLOT TRAN V(6 )
V147 6 147 0.0
.PLOT TRAN V(2 )
V148 2 148 0.0
.PLOT TRAN V(5 )
V149 5 149 0.0
.PLOT TRAN V(3 )
V150 3 150 0.0

.END

