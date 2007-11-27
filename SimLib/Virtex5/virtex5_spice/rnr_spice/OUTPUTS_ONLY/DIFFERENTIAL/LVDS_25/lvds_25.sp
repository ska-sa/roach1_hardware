.TITLE Virtex5 O/Ps - XILINX CONFIDENTIAL
* release 1.0
*******************************************************************************
*Section A  Temperature
*******************************************************************************

.TEMP 		  25 

*******************************************************************************
*Section B Pkg information
*******************************************************************************
* package parasitics

.param  r_pkg        = 0.1
.param  l_pkg        = 0.8nH
.param  c_pkg        = 0.5pF

*******************************************************************************

*******************************************************************************
* Section C  Set voltages
*******************************************************************************
* Range for Vdd -                 0.95, 1.0, 1.05
* Range for Vcco (3.3V) -         3.14, 3.3, 3.46
* Range for Vcco (2.5V) -         2.38, 2.5, 2.62
* Range for Vcco (1.8v)           1.71, 1.8, 1.89
* Range for Vcco (1.5V) -         1.43, 1.5, 1.58
* Range for Vcco (1.2V) -         1.14, 1.2, 1.26
* Range for Vccaux (2.5V) -       2.38, 2.5, 2.62


vdd             vdd              0      vddval
vccaux 		vccaux		 0      vccauxval
vcco 		vcco	         0      vccoval

vvss             vss             0      0

vgg             vgg              0      vggval
vbg             vbg              0      vbgval


 
* Define values for Vdd,vccaux,vcco,vref,vterm,vgg
.param vddval=1.0
.param vccival=2.5
.param vccauxval=2.5
.param vccoval=2.5
.param vggval= 1.45
.param vbgval=1.21

*******************************************************************************
** Section D STIMULI & ANALYSIS
*******************************************************************************
* Control signals for data path a
Vseld1  s1_out        0       vddval
Vseld2  s2_out        0       vddval
Vselq1  s3_out        0       0
Vselq2  s4_out        0       0
Vlat1   lat_en_out    0       0


* Control signals for  tristate path a
Vseldts1 s1_trist     0       vddval
Vseldts2 s2_trist     0       vddval
Vselqts1 s3_trist     0       0
Vselqts2 s4_trist     0       0
Vlatts1 lat_en_trist  0       0

* Bit settings for buffer type
vlvds_m<0>    lvds_m<0>  0  vddval
vlvds_m<1>    lvds_m<1>  0  0
vlvds_m<2>    lvds_m<2>  0  0
vlvds_m<3>    lvds_m<3>  0  0
vlvds_m<4>    lvds_m<4>  0  0
vlvds_m<5>    lvds_m<5>  0  0
vlvds_m<6>    lvds_m<6>  0  0

vlvds_s<0>    lvds_s<0>  0  0
vlvds_s<1>    lvds_s<1>  0  0
vlvds_s<2>    lvds_s<2>  0  vddval
vlvds_s<3>    lvds_s<3>  0  vddval
vlvds_s<4>    lvds_s<4>  0  0
vlvds_s<5>    lvds_s<5>  0  0
vlvds_s<6>    lvds_s<6>  0  0
vlvds_s<7>    lvds_s<7>  0  vddval
vlvds_s<8>    lvds_s<8>  0  vddval

* bit settings for Bias Options 
vcbit0  cbit<0> 0       0
vcbit1  cbit<1> 0       0
vcbit2  cbit<2> 0       0
vcbit3  cbit<3> 0       0
vcbit4  cbit<4> 0       0
vcbit5  cbit<5> 0       0
vcbit6  cbit<6> 0       0
vcbit7  cbit<7> 0       0
vcbit8  cbit<8> 0       vddval
vcbit9  cbit<9> 0       0
vcbit10 cbit<10> 0      0


.param clk_freq         = 200e6
.param edge_width       = 0.1e-9
.param edge_width1      = 0.2e-9
.param clk_period       = '1/clk_freq'
.param clk_width        = '(clk_period/2) - edge_width'

vck1in  clkin    0        pulse(0v vddval 5.0ns edge_width edge_width clk_width clk_period)
vck2in  clkin_b  0        pulse(vddval 0v 5.0ns edge_width edge_width clk_width clk_period)
vd1in  din1      0        vddval
vd2in  din2      0        0
vts1in  t1       0        0
vts2in  t2       0        0
vtsb    ts_b     0        vddval
vgsr    gsr      0        0

********* CLK EDGE CAPTURE ***********
vd<30>   d<30>   0        vddval
vd<31>   d<31>   0        0
vd_b<30> d_b<30> 0        0
vd_b<31> d_b<31> 0        vddval



.tran 0.01ns 50ns 
 

*******************************************************************************
** Section E Options, process models, netlist definitions 
*******************************************************************************
.options post=1 measdgt=3 brief accurate gmindc=1.0e-13 nomod converge=1
.lib  '../models/rx0.20_enc.lib' TT
.options search='../subcircuits_lvds'
.include 'netlist.main'

.END
