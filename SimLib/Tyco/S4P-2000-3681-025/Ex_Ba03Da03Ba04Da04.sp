* MODEL [Ba03Da03Ba04Da04]
*
*************************************
*   TYCO ELECTRONICS CONFIDENTIAL   *
*    COPYRIGHT, TYCO ELECTRONICS    *
* ALL INTERNATIONAL RIGHTS RESERVED *
*************************************
*
* Connector: Z-DOK, 0.050" PITCH,  4 ROW, RIGHT ANGLE PLUG TO RIGHT ANGLE RECEPTACLE
* Pins     : A3A4
* Board    : 0.093" Thick FR4
* Filename : BA03DA03BA04DA04.s4p
* Rev Date : 9/15/02
* Status   : VALIDATED MEASURED MODEL
* Structure: 4 Port S-parameter
* Rating   : 50 MHz to 10.05 GHz
* Transform Limits : 50 ps Min. Time Resolution 1/(2*MaxFreq)
*
*
*************************************************
* S-ELEMENT USAGE PROCEDURE:                    *
*  S-Element usage has been accurately          *
*  validated using HSPICE version 2003.09-SP1.  *
*  The following procedure details two .MODEL   *
*  parameters (FMAX & FBASE) which should be    *
*  calculated and set for each S-element.       *
*   1) Define FMAX as the highest frequency     *
*      available in the S-parameter model file. *
*   2) Calculate "prelimFBASE" as:              *
*   prelimFBASE = 1/(2*transient_time_period)   *
*   3) Calculate the minimum integer ("N")      *
*      which satisfies:                         *
*            (2^N) >= FMAX/prelimFBASE          *
*   4) Using "N", calculate "FBASE" from:       *
*               FBASE = FMAX/(2^N)              *
*                                               *
*  EXAMPLE CALCULATION:                         *
*     - largest freq point in model = 10.05 GHz *
*     - transient_time_period = 2 ns (found in  *
*        the .TRAN statement)                   *
*   1) FMAX = 10.05 GHz                         *
*   2) prelimFBASE = 1/(2*2ns) = 250 MHz        *
*   3) (2^N) >= 10.05/0.250                     *
*        where N = 5.33, forcing N = 6          *
*   4) FBASE = 10.05 GHz/(2^6) = 157.03125 MHz  *
*  NOTE: The final freqency point (FBASE*2^N)   *
*    should never exceed FMAX, or inaccurate    *
*    interpolation could result.                *
*************************************************
*
*
*************************************************
* CAUTIONS for S-Element Use:                   *
* 1) More than one S-element call within an     *
*     HSPICE analysis may result in simulation  *
*     inaccuracy.  To avoid possible            *
*     miscalculations in HSPICE when more than  *
*     one S-parameter model is required,        *
*     combine all S-parameter models first.     *
* 2) The simulation timestep resolution (2ps in *
*     the .TRAN statement below) used for the   *
*     transient analysis does not necessarily   *
*     equate to the time resolution of the      *
*     S-parameter model transform.  The model   *
*     transform resolution is stated in the     *
*     model.                                    *
* 3) The use of sinusoid sources can cause      *
*     inaccuracies.                             *
* 4) All unused ports should be terminated.     *
*************************************************
*
*
*************************************************
* Input/Output Instructions                     *
*************************************************
* Driven Ports
.PRINT TRAN PORT1=V(110)
.PRINT TRAN PORT3=V(130)
* Quiet Ports
.PRINT TRAN PORT2=V(220)
.PRINT TRAN PORT4=V(240)
*
*************************************************
* Analysis and Control                          *
*************************************************
.TRAN 2PS 2NS
.OPTIONS INGOLD=2 PROBE METHOD=GEAR POST=2
*
*************************************************
* Excitation/Sources                            *
*************************************************
XDR10402 110 130 000 DCP
*
*************************************************
* Terminations                                  *
* NOTE: Terminations lifted on driven lines.    *
*************************************************
*RPORT1 110 000 50
RPORT2 220 000 50
*RPORT3 130 000 50
RPORT4 240 000 50
*
*************************************************
* S-Element Connector Model                     *
*************************************************
SCON1 110 220 130 240 000 MNAME=SCONNECT1
.MODEL SCONNECT1 S TSTONEFILE=Ba03Da03Ba04Da04.s4p FMAX=10.05GIG FBASE=157.03125MEG
*
*************************************************
* Sub-circuits                                  *
*************************************************
** Driven Waveform
*********	0.25	0.250	0.00	0.25		
** 10-90%	volts	nanosec	low	high		
.SUBCKT	DCP	11	21	2		
*******	name	*OUT	*out	*REF		
R11	13	2	50	$ SOURCE IMPEDANCE		
V11	11	13	PWL(			
+	0.00E+00	0.002	2.50E-11	0.007	5.00E-11	0.017
+	7.50E-11	0.032	1.00E-10	0.052	2.25E-10	0.252
+	3.50E-10	0.452	3.75E-10	0.472	4.00E-10	0.487
+	4.25E-10	0.497	4.50E-10	0.502	)	
R21	23	2	50	$ SOURCE IMPEDANCE		
V21	21	23	PWL(			
+	0.00E+00	0.502	2.50E-11	0.497	5.00E-11	0.487
+	7.50E-11	0.472	1.00E-10	0.452	2.25E-10	0.252
+	3.50E-10	0.052	3.75E-10	0.032	4.00E-10	0.017
+	4.25E-10	0.007	4.50E-10	0.002	)	
*****	
.ENDS	DCP
*****
*
.END

