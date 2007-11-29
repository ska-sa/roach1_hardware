**/////////////////////////////////////////////////////////////////////////////
**$Date: 2007/11/06 18:10:54 $
**$RCSfile: demo_testbench_v5_gtp_refclk.sp,v $
**$Revision: 1.1 $
**//////////////////////////////////////////////////////////////////////////////
**   ____  ____ 
**  /   /\/   / 
** /___/  \  /    Vendor: Xilinx 
** \   \   \/     Version : 1.0
**  \   \         Filename : demo_testbench_v5_gtp_refclk.sp
**  /   /         
** /___/   /\
** \   \  /  \ 
**  \___\/\___\ 
**
**                VIRTEX-5 FPGA ROCKETIO SIGNAL INTEGRITY KIT
**
**
** Description : Virtex-5 GTP REFCLK TestBench 
**//////////////////////////////////////////////////////////////////////////////



********************************************************************************
**                                                                            **
**                            SIMIULATION SETUP                               **
**                                                                            **
********************************************************************************
.TITLE Virtex-5 GTP REFCLK TestBench

**************************
** Simulation control   **
**************************
.options post=1 measdgt=3 brief accurate gmindc=1.0e-13 nomod probe

.param SIMULATION_STEP = 3p
.param SIMULATION_START = 0n
.param SIMULATION_END = 8n

.op
.tran SIMULATION_STEP SIMULATION_END SIMULATION_START

.probe v(MGTAVCCPLL_REFCLK_V5_GTP) v(MGTAVSS_REFCLK_V5_GTP)
.probe v(REFCLKPOWERDNB_V5_GTP)
.probe v(MGTREFCLKN_V5_GTP) v(MGTREFCLKP_V5_GTP)
.probe v(REFCLK_OUTN_V5_GTP) v(REFCLK_OUTP_V5_GTP)


*******************************************************************
** Global Temperature, Supply and Termination Voltage Selection **
*******************************************************************
* 1 - Typical Setting - 025 deg.C, 1.20V
* 2 - Fast Setting    - 000 deg.C, 1.26V
* 3 - Slow Setting    - 100 deg.C, 1.14V
.param voltage_temperature_environment = 1


*********************
** Reference Clock **
*********************
.include '$XILINX_V5_RIO_SIS_KIT/clock_patterns/v5_gtp_refclk_clock_pulse.ckt'


*************************************
** Reference Clock Input Setup **
*************************************
.param duty_cycle_clk = 0.5
.param trise_clk = 100p
.param tfall_clk = 100p
.param freq_clk = 375e6    
.param period_clk ='1/freq_clk'       
.param pulse_width_clk ='duty_cycle_clk*period_clk-(trise_clk)'
.param swing_single_ended_clk = 150mV


**************************
** Channel Model        **
**************************
.include '$XILINX_V5_RIO_SIS_KIT/channel_models/pcb_20in_model.ckt' 


*******************************
** Virtex-5 GTP REFCLK Model **
*******************************
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/v5_gtp_refclk_typ.sp'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/v5_gtp_refclk_fast.sp'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/v5_gtp_refclk_slow.sp'

*************************
** GTP REFCLK Settings **
*************************
** REFCLK Powerdown Control; '0' for OFF, '1' for ON ** 
vREFCLKPOWERDNB_V5_GTP REFCLKPOWERDNB_V5_GTP 0 '1*vsuph_refclk_v5_gtp'

** Supply voltage  ** 
vMGTAVCCPLL_REFCLK_V5_GTP 	MGTAVCCPLL_REFCLK_V5_GTP 	0 	'vsuph_refclk_v5_gtp'
vMGTAVSS_REFCLK_V5_GTP	MGTAVSS_REFCLK_V5_GTP 	0 	0

** DO NOT CHANGE THE FOLLOWING LINE **
.param vcm = 'vsuph_refclk_v5_gtp/2'

************************
** Package Parasitics **
************************
*
*   1/2C  R   L    1/2C -------
*   ---/\/\--()()()-----| ckt |
*    =              =   ------
*
* Use the xls file provided in the package models directory to specify
* the appropriate values for the desired device/package combination

.param cp = 1.225p
.param cn = 1.295p
.param pl = 6.3n
.param nl = 6.43n
.param rp = 0.378
.param rn = 0.386


********************************************************************************
**                                                                            **
**                            TOP LEVEL TEST BENCH                            **
**                                                                            **
********************************************************************************

** REFERENCE CLOCK INPUT **
Xv5_gtp_refclk_clock_pulse MGTREFCLKN_V5_GTP MGTREFCLKP_V5_GTP 0 v5_gtp_refclk_clock_pulse

** GTP REFCLK WITH PACKAGE PARASITICS **
Xv5_gtp_refclk_0 
+ MGTAVCCPLL_REFCLK_V5_GTP 
+ MGTAVSS_REFCLK_V5_GTP 
+ REFCLK_OUTN_V5_GTP 
+ REFCLK_OUTP_V5_GTP
+ MGTREFCLKN_V5_GTP 
+ MGTREFCLKP_V5_GTP
+ REFCLKPOWERDNB_V5_GTP
+ v5_gtp_refclk_typ



********************************************************************************
**                                                                            **
**                             SELECTION SETUP                                **
**                                                                            **
********************************************************************************

*****************************************************************
** Global Temperature, Supply and Termination Voltage Settings **
*****************************************************************
.if ( voltage_temperature_environment == 1 )
** Typical Voltage and Temperature Settings **
	.include '$XILINX_V5_RIO_SIS_KIT/testbenches/hspice/temperature_settings_typ.ckt'
	.include '$XILINX_V5_RIO_SIS_KIT/testbenches/hspice/v5_gtp_voltage_settings_typ.ckt'
.elseif ( voltage_temperature_environment == 2  )
** Fast Voltage and Temperature Settings **
	.include '$XILINX_V5_RIO_SIS_KIT/testbenches/hspice/temperature_settings_fast.ckt'
	.include '$XILINX_V5_RIO_SIS_KIT/testbenches/hspice/v5_gtp_voltage_settings_fast.ckt'
.elseif ( voltage_temperature_environment == 3  )
** Slow Voltage and Temperature Settings **
	.include '$XILINX_V5_RIO_SIS_KIT/testbenches/hspice/temperature_settings_slow.ckt'
	.include '$XILINX_V5_RIO_SIS_KIT/testbenches/hspice/v5_gtp_voltage_settings_slow.ckt'
.else
** DEFAULT - Typical Voltage and Temperature Settings **
	.include '$XILINX_V5_RIO_SIS_KIT/testbenches/hspice/temperature_settings_typ.ckt'
	.include '$XILINX_V5_RIO_SIS_KIT/testbenches/hspice/v5_gtp_voltage_settings_typ.ckt'
.endif


.end
