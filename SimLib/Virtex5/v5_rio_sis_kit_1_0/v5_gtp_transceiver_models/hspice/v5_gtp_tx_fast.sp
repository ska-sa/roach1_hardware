**/////////////////////////////////////////////////////////////////////////////
**$Date: 2007/11/06 18:10:55 $
**$RCSfile: v5_gtp_tx_fast.sp,v $
**$Revision: 1.1 $
**//////////////////////////////////////////////////////////////////////////////
**   ____  ____ 
**  /   /\/   / 
** /___/  \  /    Vendor: Xilinx 
** \   \   \/     Version : 1.0
**  \   \         Filename : v5_gtp_tx_fast.sp
**  /   /         
** /___/   /\
** \   \  /  \ 
**  \___\/\___\ 
**
**                VIRTEX-5 FPGA ROCKETIO SIGNAL INTEGRITY KIT
**
**
** Model       : Virtex-5 GTP Transmit Driver 
** Type        : Circuit
** Description : Virtex-5 GTP Transmit Driver with amplitude and pre-emphasis 
**               control with Fast Process Corner
**//////////////////////////////////////////////////////////////////////////////

.subckt v5_gtp_tx_fast
+ MGTAVCCTX
+ MGTAVSSTX
+ MGTAVTTTX
+ MGTTXN
+ MGTTXP
+ IP
+ TXDIFFCTRL_2
+ TXDIFFCTRL_1
+ TXDIFFCTRL_0
+ TXPREEMPHASIS_2
+ TXPREEMPHASIS_1
+ TXPREEMPHASIS_0

***************************
** Virtex-5 GTP TX Model **
***************************

** Encrypted Virtex-5 GTP TX Model **
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/xtx_encrypt.ckt.inc'

** Fast Process Corner Models **
.option brief=1
.LIB "$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/rx65_1.01_e.lib" FFFF3T
.LIB "$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/rx65_1.01_e.lib" F_res
.option brief=0

** TX Termination Control
eTERMINATION_CTRL_4_TX TERMINATION_CTRL_4_TX 0 MGTAVTTTX 0 0
eTERMINATION_CTRL_3_TX TERMINATION_CTRL_3_TX 0 MGTAVTTTX 0 1
eTERMINATION_CTRL_2_TX TERMINATION_CTRL_2_TX 0 MGTAVTTTX 0 0
eTERMINATION_CTRL_1_TX TERMINATION_CTRL_1_TX 0 MGTAVTTTX 0 1
eTERMINATION_CTRL_0_TX TERMINATION_CTRL_0_TX 0 MGTAVTTTX 0 1

** Pre-Driver swing control; '000' for max, '111' for min **
** Always tied to TXDIFFCTRL **
eTXBUFDIFFCTRL_2 TXBUFDIFFCTRL_2 0 TXDIFFCTRL_2 0 1
eTXBUFDIFFCTRL_1 TXBUFDIFFCTRL_1 0 TXDIFFCTRL_1 0 1
eTXBUFDIFFCTRL_0 TXBUFDIFFCTRL_0 0 TXDIFFCTRL_0 0 1


**************************
** Virtex-5 GTP TX      **
**************************
Xtx
+ MGTAVCCTX
+ MGTAVSSTX
+ MGTAVTTTX
+ IP
+ TXBUFDIFFCTRL_2
+ TXBUFDIFFCTRL_1
+ TXBUFDIFFCTRL_0
+ TXDIFFCTRL_2
+ TXDIFFCTRL_1
+ TXDIFFCTRL_0
+ MGTTXN
+ MGTTXP
+ TXPREEMPHASIS_2
+ TXPREEMPHASIS_1
+ TXPREEMPHASIS_0
+ TERMINATION_CTRL_4_TX
+ TERMINATION_CTRL_3_TX
+ TERMINATION_CTRL_2_TX
+ TERMINATION_CTRL_1_TX
+ TERMINATION_CTRL_0_TX
+ gt3_xtDriverModel_Wrap

.ends v5_gtp_tx_fast