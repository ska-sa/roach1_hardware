**/////////////////////////////////////////////////////////////////////////////
**$Date: 2007/11/06 18:10:54 $
**$RCSfile: demo_testbench_v5_gtp_tx_v5_gtp_rx.sp,v $
**$Revision: 1.1 $
**//////////////////////////////////////////////////////////////////////////////
**   ____  ____ 
**  /   /\/   / 
** /___/  \  /    Vendor: Xilinx 
** \   \   \/     Version : 1.0
**  \   \         Filename : demo_testbench_v5_gtp_tx_v5_gtp_rx.sp
**  /   /         
** /___/   /\
** \   \  /  \ 
**  \___\/\___\ 
**
**                VIRTEX-5 FPGA ROCKETIO SIGNAL INTEGRITY KIT
**
**
** Description : Virtex-5 GTP Transceiver TestBench 
**//////////////////////////////////////////////////////////////////////////////


********************************************************************************
**                                                                            **
**                            SIMIULATION SETUP                               **
**                                                                            **
********************************************************************************
.TITLE Virtex-5 GTP Transceiver TestBench

**************************
** Simulation control   **
**************************
.option post probe

.param SIMULATION_STEP = 1p
.param SIMULATION_START = 0n
.param SIMULATION_END = '200*tbit'

.op
.tran SIMULATION_STEP SIMULATION_END SIMULATION_START

.probe v(MGTAVCCTX_V5_GTP) v(MGTAVSSTX_V5_GTP) v(MGTAVTTTX_V5_GTP) 
.probe v(MGTAVCCRX_V5_GTP) v(MGTAVSSRX_V5_GTP) v(MGTAVTTRX_V5_GTP)

.probe v(TXDIFFCTRL_2_V5_GTP) v(TXDIFFCTRL_1_V5_GTP) v(TXDIFFCTRL_0_V5_GTP)
.probe v(TXPREEMPHASIS_2_V5_GTP) v(TXPREEMPHASIS_1_V5_GTP) v(TXPREEMPHASIS_0_V5_GTP)

.probe v(RCV_TERM_GND_V5_GTP) v(RCV_TERM_MID_V5_GTP) v(RCV_TERM_VTTRX_V5_GTP)
.probe v(AC_CAP_DIS_V5_GTP)
.probe v(RXENEQB_V5_GTP) v(RXEQMIX_1_V5_GTP) v(RXEQMIX_0_V5_GTP)
.probe v(Xv5_gtp_rx_0.Xrx.rxCM) v(Xv5_gtp_rx_0.Xrx.rxdWBN) v(Xv5_gtp_rx_0.Xrx.rxdWBP)

.probe v(MGTTXN_V5_GTP) v(MGTTXP_V5_GTP) v(IP_V5_GTP) 
.probe v(TXP) v(TXN)

.probe v(RXP) v(RXN) v(MGTRXP_V5_GTP) v(MGTRXN_V5_GTP)
.probe v(MGTRXOUTN_V5_GTP) v(MGTRXOUTP_V5_GTP)


************************************************************************
** Global Temperature, Power Supply and Termination Voltage Selection **
************************************************************************
* 1 - Typical Setting - +025 deg.C, 1.00V & 1.20V
* 2 - Fast Setting    - -040 deg.C, 1.05V & 1.26V
* 3 - Slow Setting    - +100 deg.C, 0.95V & 1.14V
.param voltage_temperature_environment = 1


*********************************
** Data Rate and UI Parameters **
*********************************
** Data rate **
.param data_rate = 3.75e9

** UI parameters **
.param tbit='1/data_rate'
.param trise_v5_gtp = 10p
.param tfall_v5_gtp = 10p


********************
** Channel Models **
********************
.include '$XILINX_V5_RIO_SIS_KIT/channel_models/pcb_20in_model.ckt' 


********************
** Package Models **
********************
** W element Package Model **
.include '$XILINX_V5_RIO_SIS_KIT/package_models/pkg_model_Welement.ckt'

** S-parameter Package Model **
.include '$XILINX_V5_RIO_SIS_KIT/package_models/pkg_model_v5_lxt_sxt_ff1136_typ.ckt'


*******************
** Data Patterns **
*******************
** Data pattern; PRBS2^7-1 **
.include '$XILINX_V5_RIO_SIS_KIT/data_patterns/v5_gtp_prbs7.ckt'


************************************
** Virtex-5 GTP Transceiver Model **
************************************
** Virtex-5 GTP RX**
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/v5_gtp_rx_typ.sp'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/v5_gtp_rx_fast.sp'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/v5_gtp_rx_slow.sp'

** Virtex-5 GTP TX**
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/v5_gtp_tx_typ.sp'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/v5_gtp_tx_fast.sp'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/v5_gtp_tx_slow.sp'


**************************
** Transmitter Settings **
**************************
** Driver swing control; '000' for max, '111' for min **
vTXDIFFCTRL_2_V5_GTP TXDIFFCTRL_2_V5_GTP 0 '0*vsuph_tx_v5_gtp'
vTXDIFFCTRL_1_V5_GTP TXDIFFCTRL_1_V5_GTP 0 '0*vsuph_tx_v5_gtp'
vTXDIFFCTRL_0_V5_GTP TXDIFFCTRL_0_V5_GTP 0 '0*vsuph_tx_v5_gtp'

** Pre-emphasis level control; '000' for min, '111' for max  **
vTXPREEMPHASIS_2_V5_GTP TXPREEMPHASIS_2_V5_GTP 0 '1*vsuph_tx_v5_gtp'
vTXPREEMPHASIS_1_V5_GTP TXPREEMPHASIS_1_V5_GTP 0 '1*vsuph_tx_v5_gtp'
vTXPREEMPHASIS_0_V5_GTP TXPREEMPHASIS_0_V5_GTP 0 '1*vsuph_tx_v5_gtp'

** Supply voltage  **
vMGTAVCCTX_V5_GTP MGTAVCCTX_V5_GTP 0 vsup_tx_v5_gtp
vMGTAVSSTX_V5_GTP MGTAVSSTX_V5_GTP 0 0
vMGTAVTTTX_V5_GTP MGTAVTTTX_V5_GTP 0 vsuph_tx_v5_gtp


***********************
** Receiver Settings **
***********************
** RX Equalization Enable **
vRXENEQB_V5_GTP		RXENEQB_V5_GTP		0	'0*vsup_rx_v5_gtp'

** RX Equalization Control min '10', '01', '00', '11' max  **
vRXEQMIX_1_V5_GTP	RXEQMIX_1_V5_GTP	0	'1*vsup_rx_v5_gtp'
vRXEQMIX_0_V5_GTP	RXEQMIX_0_V5_GTP	0	'1*vsup_rx_v5_gtp'

** Supply voltage  ** 
vMGTAVCCRX_V5_GTP MGTAVCCRX_V5_GTP 0 vsup_rx_v5_gtp
vMGTAVSSRX_V5_GTP MGTAVSSRX_V5_GTP 0 0
vMGTAVTTRX_V5_GTP MGTAVTTRX_V5_GTP 0 vsuph_rx_v5_gtp

** Receiver Termination and External AC Coupling Cap Setting **
** gnd_term   external_cap| Internal  External      RX       |      LINK      **
**                        |   Cap       Cap     Termination  | RECOMMENDATION **
**   ***           ***    |   ***       ***         ***      |       ***      **
**    0             0     |    N         N         VTTRX     |     GTP-GTP    **
**    0             1     |    N         Y       2/3 VTTRX   |     General    **
**    1             0     |   ***********NOT ALLOWED*******  |       ***      **
**    1             1     |    Y         Y          GND      | Protocol- PCIe **
.param gnd_term = 0
.param external_cap = 1



********************************************************************************
**                                                                            **
**                            TOP LEVEL TEST BENCH                            **
**                                                                            **
********************************************************************************

** TX DATA INPUT**
Xv5_gtp_prbs7 IP_V5_GTP MGTAVSSTX_V5_GTP v5_gtp_prbs7


** TRANSMITTER **
Xv5_gtp_tx_0
+ MGTAVCCTX_V5_GTP
+ MGTAVSSTX_V5_GTP
+ MGTAVTTTX_V5_GTP
+ MGTTXN_V5_GTP
+ MGTTXP_V5_GTP
+ IP_V5_GTP
+ TXDIFFCTRL_2_V5_GTP
+ TXDIFFCTRL_1_V5_GTP
+ TXDIFFCTRL_0_V5_GTP
+ TXPREEMPHASIS_2_V5_GTP
+ TXPREEMPHASIS_1_V5_GTP
+ TXPREEMPHASIS_0_V5_GTP
+ v5_gtp_tx_typ

** TX PACKAGE **
** Ball+ Ball- Bump+ Bump- GND **
Xtxpkg TXP TXN MGTTXP_V5_GTP MGTTXN_V5_GTP MGTAVSSTX_V5_GTP pkg_model_v5_lxt_sxt_ff1136_typ



** CHANNEL **
.if (external_cap == 0)
** PCB **
** IN+ IN- OUT+ OUT- **
	Xpcb TXP TXN RXP RXN pcb_20in_model

.else
** PCB **
** IN+ IN- OUT+ OUT- **
	Xpcb TXP TXN ACCAPP ACCAPN pcb_20in_model

** AC COUPLING CAP **
	C_accapp ACCAPP RXP 0.1u
	C_accapn ACCAPN RXN 0.1u
.endif


** RX PACKAGE **
** Ball+ Ball- Bump+ Bump- GND **
Xrxpkg RXP RXN MGTRXP_V5_GTP MGTRXN_V5_GTP MGTAVSSRX_V5_GTP pkg_model_v5_lxt_sxt_ff1136_typ

** RECEIVER **
Xv5_gtp_rx_0
+ MGTAVCCRX_V5_GTP
+ MGTAVSSRX_V5_GTP
+ MGTAVTTRX_V5_GTP
+ MGTRXOUTN_V5_GTP
+ MGTRXOUTP_V5_GTP
+ MGTRXN_V5_GTP
+ MGTRXP_V5_GTP 
+ RCV_TERM_GND_V5_GTP
+ RCV_TERM_MID_V5_GTP
+ RCV_TERM_VTTRX_V5_GTP
+ AC_CAP_DIS_V5_GTP
+ RXENEQB_V5_GTP
+ RXEQMIX_1_V5_GTP
+ RXEQMIX_0_V5_GTP
+ v5_gtp_rx_typ


** INITIAL CONDITIONS**
** These speed up simulation time **
.ic MGTRXP_V5_GTP='vsup_rx_v5_gtp'
.ic MGTRXN_V5_GTP='vsup_rx_v5_gtp-300m'
.ic ACCAPP='vsup_rx_v5_gtp'
.ic ACCAPN='vsup_rx_v5_gtp-300m'



********************************************************************************
**                                                                            **
**                             SELECTION SETUP                                **
**                                                                            **
********************************************************************************

***************************************************************
** Receiver Termination and External AC Coupling Cap Setting **
***************************************************************
.if (gnd_term == 0 && external_cap == 0)
** This setting recommended for Virtex-5 GTP to Virtex-5 GTP links **
** Internal AC Coupling Capacitor bypassed **
** No External AC Coupling Capacitor, RX Termination Set to VTTRX **
	vAC_CAP_DIS_V5_GTP 	AC_CAP_DIS_V5_GTP 	0 	'1*vsup_rx_v5_gtp'
	
	vRCV_TERM_GND_V5_GTP	RCV_TERM_GND_V5_GTP	0	'0*vsup_rx_v5_gtp'
	vRCV_TERM_MID_V5_GTP	RCV_TERM_MID_V5_GTP	0	'0*vsup_rx_v5_gtp'
	vRCV_TERM_VTTRX_V5_GTP	RCV_TERM_VTTRX_V5_GTP	0	'1*vsup_rx_v5_gtp'

.elseif (gnd_term == 0 && external_cap == 1)
** This setting recommended for most links **
** Internal AC Coupling Capacitor bypassed **
** External AC Coupling Capacitor present, RX Termination Set to 2/3 VTTRX **
	vAC_CAP_DIS_V5_GTP 	AC_CAP_DIS_V5_GTP 	0 	'1*vsup_rx_v5_gtp'
	
	vRCV_TERM_GND_V5_GTP	RCV_TERM_GND_V5_GTP	0	'0*vsup_rx_v5_gtp'
	vRCV_TERM_MID_V5_GTP	RCV_TERM_MID_V5_GTP	0	'0*vsup_rx_v5_gtp'
	vRCV_TERM_VTTRX_V5_GTP	RCV_TERM_VTTRX_V5_GTP	0	'0*vsup_rx_v5_gtp'	

.elseif (gnd_term == 1 && external_cap == 1)
** This setting recommended for links supporting TX Detection
** such as PCI-Express **
** Internal AC Coupling Capacitor in the path **
** External AC Coupling Capacitor present, RX Termination Set to GND **
	vAC_CAP_DIS_V5_GTP 	AC_CAP_DIS_V5_GTP 	0 	'0*vsup_rx_v5_gtp'
	.ic Xv5_gtp_rx_0.Xrx.rxdWBP='vsup_rx_v5_gtp'
	.ic Xv5_gtp_rx_0.Xrx.rxdWBN='vsup_rx_v5_gtp-300m'
	.ic Xv5_gtp_rx_0.Xrx.rxCM='vsup_rx_v5_gtp-150m'
	
	vRCV_TERM_GND_V5_GTP	RCV_TERM_GND_V5_GTP	0	'1*vsup_rx_v5_gtp'
	vRCV_TERM_MID_V5_GTP	RCV_TERM_MID_V5_GTP	0	'1*vsup_rx_v5_gtp'
	vRCV_TERM_VTTRX_V5_GTP	RCV_TERM_VTTRX_V5_GTP	0	'0*vsup_rx_v5_gtp'
	
.else
** DEFAULT - This setting recommended for most links **
** Internal AC Coupling Capacitor bypassed **
** External AC Coupling Capacitor present, RX Termination Set to 2/3 VTTRX **

	vAC_CAP_DIS_V5_GTP 	AC_CAP_DIS_V5_GTP 	0 	'1*vsup_rx_v5_gtp'
	
	vRCV_TERM_GND_V5_GTP	RCV_TERM_GND_V5_GTP	0	'0*vsup_rx_v5_gtp'
	vRCV_TERM_MID_V5_GTP	RCV_TERM_MID_V5_GTP	0	'0*vsup_rx_v5_gtp'
	vRCV_TERM_VTTRX_V5_GTP	RCV_TERM_VTTRX_V5_GTP	0	'0*vsup_rx_v5_gtp'
	
.endif

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
