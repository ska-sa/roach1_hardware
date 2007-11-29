**/////////////////////////////////////////////////////////////////////////////
**$Date: 2007/11/06 18:10:55 $
**$RCSfile: v5_gtp_rx_slow.sp,v $
**$Revision: 1.1 $
**//////////////////////////////////////////////////////////////////////////////
**   ____  ____ 
**  /   /\/   / 
** /___/  \  /    Vendor: Xilinx 
** \   \   \/     Version : 1.0
**  \   \         Filename : v5_gtp_rx_slow.sp
**  /   /         
** /___/   /\
** \   \  /  \ 
**  \___\/\___\ 
**
**                VIRTEX-5 FPGA ROCKETIO SIGNAL INTEGRITY KIT
**
**
** Model       : Virtex-5 GTP Receiver Analog Front End 
** Type        : Circuit
** Description : Virtex-5 GTP Receiver Analog Front End with equalization 
**               control with Slow Process Corner
**//////////////////////////////////////////////////////////////////////////////


.subckt v5_gtp_rx_slow
+ MGTAVCCRX
+ MGTAVSSRX
+ MGTAVTTRX
+ MGTRXOUTN
+ MGTRXOUTP
+ MGTRXN
+ MGTRXP 
+ RCV_TERM_GND
+ RCV_TERM_MID
+ RCV_TERM_VTTRX
+ AC_CAP_DIS
+ RXENEQB
+ RXEQMIX_1
+ RXEQMIX_0

***************************
** Virtex-5 GTP RX Model **
***************************
** Encrypted Virtex-5 GTP RX Model **
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/xrx_encrypt.ckt.inc'

** Slow Process Corner Models **
.option brief=1
.LIB "$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/rx65_1.01_e.lib" SSSS3T
.LIB "$XILINX_V5_RIO_SIS_KIT/v5_gtp_transceiver_models/hspice/rx65_1.01_e.lib" S_res
.option brief=0

** RX Termination Control **
eTERMINATION_CTRL_4_RX TERMINATION_CTRL_4_RX 0 MGTAVTTRX 0 1
eTERMINATION_CTRL_3_RX TERMINATION_CTRL_3_RX 0 MGTAVTTRX 0 1
eTERMINATION_CTRL_2_RX TERMINATION_CTRL_2_RX 0 MGTAVTTRX 0 1
eTERMINATION_CTRL_1_RX TERMINATION_CTRL_1_RX 0 MGTAVTTRX 0 1
eTERMINATION_CTRL_0_RX TERMINATION_CTRL_0_RX 0 MGTAVTTRX 0 1



**************************
** Virtex-5 GTP RX      **
**************************
Xrx
+ MGTAVCCRX
+ MGTAVSSRX
+ MGTAVTTRX
+ RCV_TERM_GND
+ RCV_TERM_MID
+ RCV_TERM_VTTRX
+ RXENEQB
+ RXEQMIX_1
+ RXEQMIX_0
+ MGTRXOUTN
+ MGTRXOUTP
+ TERMINATION_CTRL_4_RX
+ TERMINATION_CTRL_3_RX
+ TERMINATION_CTRL_2_RX
+ TERMINATION_CTRL_1_RX
+ TERMINATION_CTRL_0_RX
+ MGTRXN
+ MGTRXP 
+ AC_CAP_DIS 
+ gt3_xrIOModel_Wrap

.ends v5_gtp_rx_slow
