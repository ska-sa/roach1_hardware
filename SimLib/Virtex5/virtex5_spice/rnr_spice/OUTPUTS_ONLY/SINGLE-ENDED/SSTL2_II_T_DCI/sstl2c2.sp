.TITLE Whitney O/Ps - XILINX CONFIDENTIAL
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
* Range for Vdd -                 1.14, 1.2, 1.26
* Range for Vcco (3.3V) -         3.14, 3.3, 3.46
* Range for Vcco (2.5V) -         2.38, 2.5, 2.62
* Range for Vcco (1.8v)           1.71, 1.8, 1.89
* Range for Vcco (1.5V) -         1.43, 1.5, 1.58
* Range for Vccaux (2.5V) -       2.38, 2.5, 2.62


vdd             vdd              0      pwl 0n 0 1n 0 2n vddval
vccaux 		vccaux		 0      pwl 0n 0 1n 0 2n vccauxval
vcco 		vcco	         0      pwl 0n 0 1n 0 2n vccoval

vvss             vss             0      0

vref		vref		 0     	vrefval
vterm		vterm		 0	vtermval
vgg             vgg              0      vggval

 
* Define values for Vdd,vccaux,vcco,vref,vterm,vgg
.param vddval=1.2
.param vccauxval=2.5
.param vccoval=2.5
.param vrefval=1.25
.param vtermval=1.25
.param  vggval= 1.65

*******************************************************************************
** Section D STIMULI & ANALYSIS
*******************************************************************************
* Control signals for data path
Vseld1  seld1   0       0
Vseld2  seld2   0       0
Vselq1  selq1   0       vddval
Vselq2  selq2   0       vddval
Vlat1   lat1_en    0       0
Vlat2   lat2_en    0       0

* Control signals for  tristate path
Vseldts1 seldts1  0       0
Vseldts2 seldts2  0       0
Vselqts1        selqts1 0       vddval
Vselqts2        selqts2 0       vddval
Vlatts1 latts1_en  0       0
Vlatts2 latts2_en  0       0



.param clk_freq         = 200e6
.param edge_width       = 0.1e-9
.param edge_width1       = 0.2e-9
.param clk_period       = '1/clk_freq'
.param clk_width        = '(clk_period/2) - edge_width'

vck1in  ck1in  0        pulse(0v vddval 5.0ns edge_width edge_width clk_width clk_period)
vck2in  ck2in  0        pulse(vddval 0v 5.0ns edge_width edge_width clk_width clk_period)

vd1in  d1in  0        pulse(0v vddval 4.5ns edge_width1 edge_width1 clk_width clk_period)
vd2in  d2in  0        pulse(0v vddval 4.5ns edge_width1 edge_width1 clk_width clk_period)

vts1in	ts1in	0	0
vts2in	ts2in	0	0


vgsr	 gsr	  0     pwl (0ns 0v 1ns 0v 1.5ns vddval 2.5ns vddval 3ns 0v) 

vd<0>	d<0>	0	0
vd<1>	d<1>	0	vddval

.tran 0.02ns 50ns 
 

 

*******************************************************************************
** Section E Options, process models, netlist definitions 
*******************************************************************************
.options post=1 measdgt=3 brief accurate gmindc=1.0e-13 nomod 
.lib  '../models/wt_s95_tt_e.lib' TT
.options search='../subcircuits_drv'
.include 'netlist.main'
.include 'bitsettings'

.END
