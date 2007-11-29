**/////////////////////////////////////////////////////////////////////////////
**$Date: 2007/11/06 18:10:55 $
**$RCSfile: v5_gtp_refclk_fast.sp,v $
**$Revision: 1.1 $
**//////////////////////////////////////////////////////////////////////////////
**   ____  ____ 
**  /   /\/   / 
** /___/  \  /    Vendor: Xilinx 
** \   \   \/     Version : 1.0
**  \   \         Filename : v5_gtp_refclk_fast.sp
**  /   /         
** /___/   /\
** \   \  /  \ 
**  \___\/\___\ 
**
**                VIRTEX-5 FPGA ROCKETIO SIGNAL INTEGRITY KIT
**
**
** Model       : Virtex-5 GTP REFCLK Input Buffer
** Type        : Circuit
** Description : Virtex-5 GTP REFCLK Input Buffer with Powerdown control
**               and Internal AC Coupling always ON
**//////////////////////////////////////////////////////////////////////////////

.subckt v5_gtp_refclk_fast
+ MGTAVCCPLL
+ MGTAVSS
+ REFCLK_OUTN
+ REFCLK_OUTP
+ MGTREFCLKN
+ MGTREFCLKP
+ REFCLKPOWERDNB


*******************************
** Virtex-5 GTP REFCLK Model **
*******************************
.LIB  '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/rx65_1.01_e.lib" FFFF3T
.LIB  '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/rx65_1.01_e.lib" F_res

.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiascell.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasgenampbias.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasgenamp_v2.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasmaster.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasmasterr.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasmasterrcal.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasmasterrcal10x.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasmasterrcal20x.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasmasterrcal2p25x.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasmasterrcal2p5x.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasmasterrcal40x.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasmasterrcal5x.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_bbiasselect.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_ickbuf_dbuf.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_ickbuf_term.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_sysclk_bias.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gt3_xrprogtermsatacmgen.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gtp_clk_buf.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gtp_sys_custom_v2.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/gtx_pkg_model.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/xi_inv_mlvtxxx.inc'
.include '$XILINX_V5_RIO_SIS_KIT/v5_gtp_refclk_models/hspice/xi_nand2_mlvtxxx.inc'

** Internal AC Coupling always turned ON **
eCLKINDC_B CLKINDC_B 0 MGTAVCCPLL 0 1

**************************
** Virtex-5 GTP REFCLK  **
**************************
Xgtp_refclk_0 
+ MGTAVCCPLL
+ MGTAVSS
+ MGTREFCLKN
+ MGTREFCLKP
+ CLKINDC_B 
+ REFCLK_OUTN
+ REFCLK_OUTP
+ REFCLKPOWERDNB
+ gtp_sys_custom_v2

.ends v5_gtp_refclk_fast