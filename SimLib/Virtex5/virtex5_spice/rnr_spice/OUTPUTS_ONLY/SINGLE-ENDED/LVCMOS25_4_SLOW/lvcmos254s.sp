*** vddval means that the bit is turned ON.
*** 0 means that the bit is OFF.
*** This does not apply to DCI P-control & N-control which is the opposite  
*** ie 0 means ON and vddval means OFF.

*** misc
vcbnet<39>      tsb_s<0>        0       0       $ts_term
vcbnet<38>      cbnet<38>       0       0       $keeper
vcbnet<37>      cbnet<37>       0       0       $pup
vcbnet<36>      cbnet<36>       0       0       $pdown
vcbnet<35>      cbnet<35>       0       0        $update
vcbnet<34>      cbnet<34>       0       0       $pdelbyp
vcbnet<33>      cbnet<33>       0       0       $plvlsel

*** DCI bits
vcbnet<32>      cbnet<32>       0       0       $refio
vcbnet<31>      cbnet<31>       0       0       $type2
vcbnet<30>      cbnet<30>       0       0       $type1
vcbnet<29>      cbnet<29>       0       0       $type0
vcbnet<28>      cbnet<28>       0       0       $ybit=anx.anx1

*** Spare bit
vcbnet<17>      cbnet<17>       0       0        $spare

*** LVDS enable bit

vcbnet<16>      cbnet<16>       0       0       $lvds0

*** IO bank selection P & N
vcbnet<27>      cbnet<27>       0       0       $apa
vcbnet<26>      cbnet<26>       0       0       $ana
vcbnet<25>      cbnet<25>       0       0       $dpb
vcbnet<24>      cbnet<24>       0       0       $anb
vcbnet<23>      cbnet<23>       0       vddval  $apc
vcbnet<22>      cbnet<22>       0       0       $dnc
vcbnet<21>      cbnet<21>       0       0       $apd
vcbnet<20>      cbnet<20>       0       vddval  $dnd
vcbnet<19>      cbnet<19>       0       vddval  $dpe
vcbnet<18>      cbnet<18>       0       vddval  $dne

*** Slew bits
vcbnet<15>      cbnet<15>       0       0       $gtl2
vcbnet<14>      cbnet<14>       0       0       $gtl1
vcbnet<13>      cbnet<13>       0       0       $gtl0
vcbnet<12>      cbnet<12>       0       0       $pslew_lowvcc
vcbnet<11>      cbnet<11>       0       0       $nslew5
vcbnet<10>      cbnet<10>       0       0       $pslew5
vcbnet<9>       cbnet<9>        0       0       $nslew4
vcbnet<8>       cbnet<8>        0       0       $pslew4
vcbnet<7>       cbnet<7>        0       0       $nslew3
vcbnet<6>       cbnet<6>        0       0       $pslew3
vcbnet<5>       cbnet<5>        0       0       $nslew2
vcbnet<4>       cbnet<4>        0       0       $pslew2
vcbnet<3>       cbnet<3>        0       vddval  $nslew1
vcbnet<2>       cbnet<2>        0       0       $pslew1
vcbnet<1>       cbnet<1>        0       vddval  $nslew0	
vcbnet<0>       cbnet<0>        0       vddval  $pslew0

**** DCI P-control bits
vcnpd<19>       cnpd<19>        0       vddval
vcnpd<18>       cnpd<18>        0       vddval
vcnpd<17>       cnpd<17>        0       vddval
vcnpd<16>       cnpd<16>        0       vddval
vcnpd<15>       cnpd<15>        0       vddval
vcnpd<14>       cnpd<14>        0       vddval
vcnpd<13>       cnpd<13>        0       vddval
vcnpd<12>       cnpd<12>        0       vddval
vcnpd<11>       cnpd<11>        0       vddval
vcnpd<10>       cnpd<10>        0       vddval

vcnpd<9>        cnpd<9>         0       vddval
vcnpd<8>        cnpd<8>         0       vddval
vcnpd<7>        cnpd<7>         0       vddval
vcnpd<6>        cnpd<6>         0       vddval
vcnpd<5>        cnpd<5>         0       vddval
vcnpd<4>        cnpd<4>         0       vddval
vcnpd<3>        cnpd<3>         0       vddval
vcnpd<2>        cnpd<2>         0       vddval
vcnpd<1>        cnpd<1>         0       vddval
vcnpd<0>        cnpd<0>         0       vddval

*** DCI N-control bits
vcnnd<13>       cnnd<13>        0       vddval
vcnnd<12>       cnnd<12>        0       vddval
vcnnd<11>       cnnd<11>        0       vddval
vcnnd<10>       cnnd<10>        0       vddval

vcnnd<9>        cnnd<9>         0       vddval
vcnnd<8>        cnnd<8>         0       vddval
vcnnd<7>        cnnd<7>         0       vddval
vcnnd<6>        cnnd<6>         0       vddval
vcnnd<5>        cnnd<5>         0       vddval
vcnnd<4>        cnnd<4>         0       vddval
vcnnd<3>        cnnd<3>         0       vddval
vcnnd<2>        cnnd<2>         0       vddval
vcnnd<1>        cnnd<1>         0       vddval
vcnnd<0>        cnnd<0>         0       vddval

