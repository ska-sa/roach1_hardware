.TITLE Virtex5 O/Ps - XILINX CONFIDENTIAL

*******************************************************************************
*Section A  Temperature
*******************************************************************************

.TEMP             25

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
vccaux          vccaux           0      vccival
vcco            vcco             0      vccoval
vgnd            vss              0      0
vterm           vterm            0      vtermval

* Define values for Vdd,vcci,vcco,vref
.param vddval=1.0v
.param vccival=2.5v
.param vccoval=3.3v
.param vtermval=0.0v


*******************************************************************************
** Section D STIMULI & ANALYSIS
*******************************************************************************
.param clk_freq         = 200e6
.param edge_width       = 0.10e-9
.param clk_period       = '1/clk_freq'
.param clk_width        = '(clk_period/2) - edge_width'

vck1in  clkin    0        pulse(0v vddval 5.0ns edge_width edge_width clk_width clk_period)
vck2in  clkin_b  0        pulse(vddval 0v 5.0ns edge_width edge_width clk_width clk_period)

vd1in  din1      0       pulse(0v vddval 4.5ns edge_width edge_width clk_width clk_period) 
vd2in  din2      0       pulse(0v vddval 4.5ns edge_width edge_width clk_width clk_period) 

vts1in  t1      0       0
vts2in  t2      0       0

vgsr    gsr    0         0

* Control signals for data path 

Vseld1  s1_out        0       vddval
Vseld2  s2_out        0       vddval
Vselq1  s3_out        0       0
Vselq2  s4_out        0       0
Vlat1   lat_en_out    0       0

* Control signals for  tristate path 

Vseldts1 s1_trist     0       vddval
Vseldts2 s2_trist     0       vddval
Vselqts1 s3_trist     0       0
Vselqts2 s4_trist     0       0
Vlatts1 lat_en_trist  0       0


********* CLK EDGE CAPTURE ***********
vd<30>   d<30>   0       vddval
vd<31>   d<31>   0       0
vd_b<30> d_b<30> 0       0
vd_b<31> d_b<31> 0       vddval


.tran .02ns 50n 

*******************************************************************************
** Section E Options, process models, netlist definitions
*******************************************************************************

.options post=1 measdgt=3 brief accurate gmindc=1.0e-13 nomod
.lib  '../models/rx0.20_enc.lib' TT
.options search='../subcircuits_drv'
.include 'netlist.main'
.include 'bitsettings'

.end
