.TITLE Virtex5 Inputs - XILINX CONFIDENTIAL
* release 1.0
*******************************************************************************
*Section A  Temperature
*******************************************************************************

.TEMP 		   25

*******************************************************************************
*Section B Pkg parasitics
******************************************************************************************
* package parasitics

.param  r_pkg        = 0.1
.param  l_pkg        = 0.8nH
.param  c_pkg        = 0.5pF


********************************************************************************
* Section C  Set voltages
*******************************************************************************  
* Range for Vdd -                 0.95, 1.0, 1.05
* Range for Vcco (3.3V) -         3.14, 3.3, 3.46
* Range for Vcco (2.5V) -         2.38, 2.5, 2.62
* Range for Vcco (1.8v)           1.71, 1.8, 1.89
* Range for Vcco (1.5V) -         1.43, 1.5, 1.58
* Range for Vcco (1.2V) -         1.14, 1.2, 1.26
* Range for Vccaux (2.5V) -       2.38, 2.5, 2.62



* The supply for Vccint(Vdd) must be instantiated once.
vdd             vdd              0      vddval
vccaux          vccaux           0      vccauxval
vcco            vcco             0      vccoval
vvss             vss             0      0
vgnd             gnd             0      0
vref		vref		 0     	vrefval
 
* Define values for Vdd,vcci,vcco,vref
.param vddval=1.0
.param vccauxval=2.5
.param vccoval=3.3
.param vrefval=0.0


*******************************************************************************
** Section D STIMULI & ANALYSIS
*******************************************************************************

.param clk_freq         = 200e6
.param edge_width       = 0.1e-9
.param clk_period       = '1/clk_freq'
.param clk_width        = '(clk_period/2) - edge_width'
.param vilval = 0.8v
.param vihval = 2.0v

vin1  in1  0        pulse(vilval vihval 1.0ns edge_width edge_width clk_width clk_period)
vin2  in2  0        0

.tran 0.02ns 50ns
 
 

*******************************************************************************
**  Section E Options, process models, netlist definitions
*******************************************************************************
.options post=1 measdgt=3 brief accurate gmindc=1.0e-13 nomod 
.options search='../subcircuits_rec'
.lib  '../models/rx0.20_enc.lib' TT
.lib  '../models/rx0.20_enc.lib' T_res
.include 'netlist.main'
.include 'bitsettings'

.END
