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
.param vccoval=1.8v
.param vtermval=0.9v


*******************************************************************************
** Section D STIMULI & ANALYSIS
*******************************************************************************
.param clk_freq         = 200e6
.param edge_width       = 0.10e-9
.param clk_period       = '1/clk_freq'
.param clk_width        = '(clk_period/2) - edge_width'

vck1ina  clkina    0        pulse(0v vddval 2.0ns edge_width edge_width clk_width clk_period)
vck2ina  clkina_b  0        pulse(vddval 0v 2.0ns edge_width edge_width clk_width clk_period)
vck1inb  clkinb    0        pulse(0v vddval 2.0ns edge_width edge_width clk_width clk_period)
vck2inb  clkinb_b  0        pulse(vddval 0v 2.0ns edge_width edge_width clk_width clk_period)


vd1ina  din1a      0        0
vd2ina  din2a      0        vddval
vd1inb  din1b      0        vddval
vd2inb  din2b      0        0

vts1ina  t1a      0       0
vts2ina  t2a      0       0
vts1inb  t1b      0       0
vts2inb  t2b      0       0

vgsr    gsr    0         0

* Control signals for data path a
Vseld1a  s1_outa        0       vddval
Vseld2a  s2_outa        0       vddval
Vselq1a  s3_outa        0       0
Vselq2a  s4_outa        0       0
Vlat1a   lat_en_outa    0       0

* Control signals for data path b
Vseld1b  s1_outb        0       vddval
Vseld2b  s2_outb        0       vddval
Vselq1b  s3_outb        0       0
Vselq2b  s4_outb        0       0
Vlat1b   lat_en_outb    0       0

* Control signals for  tristate path a
Vseldts1a s1_trista     0       vddval
Vseldts2a s2_trista     0       vddval
Vselqts1a s3_trista     0       0
Vselqts2a s4_trista     0       0
Vlatts1a lat_en_trista  0       0

* Control signals for  tristate path b
Vseldts1b s1_tristb     0       vddval
Vseldts2b s2_tristb     0       vddval
Vselqts1b s3_tristb     0       0
Vselqts2b s4_tristb     0       0
Vlatts1b lat_en_tristb  0       0

********* CLK EDGE CAPTURE a ***********
vda<30>   da<30>   0       vddval
vda<31>   da<31>   0       0
vda_b<30> da_b<30> 0       0
vda_b<31> da_b<31> 0       vddval

********* CLK EDGE CAPTURE b ***********
vdb<30>   db<30>   0       vddval
vdb<31>   db<31>   0       0
vdb_b<30> db_b<30> 0       0
vdb_b<31> db_b<31> 0       vddval



.tran .02ns 50n 

*******************************************************************************
** Section E Options, process models, netlist definitions
*******************************************************************************

.options post=1 measdgt=3 brief accurate gmindc=1.0e-13 nomod
.lib  '../models/rx0.20_enc.lib' TT
.options search='../subcircuits_diff'
.include 'netlist.main'
.include 'bitsettings'

.end
