** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_p_bs
** View name: schematic
************************************
.subckt iob_obc_pred_p_bs loc_gnd loc_vccaux loc_vcco opp opp_del oppi
+oppi_del pslew0 pslew1 pslew2 pslew3 pslew4 pslew5 pslew_lowvcc
.prot FREELIB
7O$'P7Tt2CP(37Tt2WXlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-UBY07%((E%v$#4()94 y33WRbahL
)*P([xD6.#V2]823mGs6k>D$,t/Q\>aW7*90B7D'J;wI)U-9<#=-/bJ*7\o-2xmv_.P:00*7[
49+xF280sUPIXI/,<M39id[62 o9id[62 o9[Ow9sv7'V2,_3x):Xlyx+4:0P*P7$K-/Z
F>#Si:m$i.y<=:m$ih6d)f9[(jB5J:R.a.o\;:=MD/%toMux4YJ+4:RA:zH# 7)U2\yQ+:00*p[
49+xJ280s33[XlwS/d+%XzT%;4#9id[62 o9[Ow9sv7'V2,_3x):Xlyx+4:0P*P7$K-/Z
F8=Ui:=2'S=3w2BI(,B#=0kd!8y#=0kd!8y# Um0'W)-4:DAHz<Ywf)1-)>#!O)12\9Q+Y
3MZj># 9XU+07*kf*C:$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[b:$,Q+hixmv_jwrBA:l
)K  [v280S3p[xi/,<m39ID[62 O9ID[62 O9[oW9SV7'v2,_3XW2xLYX+4:0p*p7$k-/z
F8$# 9XUH77*kf*C)$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[b+*7%((e%s$Rd((94uYX8
o+uxZt%;P39ID[69/%54F$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[bT$,Q+h:h2\yQ+:00*p[
49+x%280sU)$XI/,<MP9id[62 o9id[62 o9[Ow9sv7'V2,_-x39i*P!-I:=e*57$;-! 2\9qpy
3MZj<# 9X%y(7*kf*Cs$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[by*7%((e%s$#4(C94 Y33wrBAHl
)\u:=2'5$Uwfm>g<sG$r3xLWs/D+%xLWs/D+%xZ>mz203%+$uQPh$xLYX+iE94 YX#!<)10
'\\2m9.I67Tt2WXzT%;p39id[62 o9[Ow9sv7Uu2,_;xm9i*P!VW+3a)$rD((94Uyx8
o+$xZt%-HW9$u30x3:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+HE9I*p!-i:0p*p7$k-/z
F>#SP>9[(jBr,:]0Ltujwfm>gA#dwfm>gA#dw+o.ujm4up9C*77%((evT$Rd((94uYX8
oU=7T$#<2C2*23mGsz=p280S3)uxLWs/D+%xZ>mz203%+$uQPh2/23_jXp94 YX#!<)10
'\\232XzT%;4#9id[62 o9id[62 o9id[62 o9[Ow9sv7'V2,_3x):Xlyx+4:0P*P7$K-/Z
F8=U3:=2'S=3w2BI(,=# 9X%+07%V%cGZv7\90B7D'BrwI) -9H#=-/b+$Rd((94uYX8
oU=7Hp7tT29.i64# 9X%e;7%V%cGZv7\90B7D'J;wI)%-07%((e/28)Qu:0p*==#!<) 0
'#3l)9[(Jb5j:]0lTU-WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!5l:ra:ZhyWR%a:$rZ((6
eO8%3W+*7)7=#t<r2407%v%CgzV7%v%CgzV7\90b7d'bRWi) -;>#=-/Bj)7\O-'XMV_.p:00*7[
49+x h$#<2c(F269%)iCid,+g/:r.A.O\;:r.A.O\;:=md/%TOcIX4yb+4:ra:ZbVW+3aj$rD(*[XM/_3Q
7= t57\) U h$.Z=9d1280s3PIXlwS/d+%Xz>MZ203%+$UqpH/Xlyx+4:0P*P7$K-/Z
F>#SPW9[(jJ53:R.a.o\;:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+H>9I*p!rwr%A:$Rz((6
eO8%JW+*7)7=#t<r24)7%v%CgzV7%v%CgzV7\90b7d'bRWi) -0>#=-/Bj)7\O-'XMV_.p:00*7[
4 3SV280sU)$XI/,<M39[(JjRp:r.A.O\;:=md/%TOcIX4y=+j)9i*P!RWR%a:$rZ((6
eO8%3U:=2'5>uW2bi(,6%vi\>A$,T/qn[ $,T/qn[ $#kv<x.f5<#M-'B+$,q+H'/28)qU:0P*==#!<) 0
'\\23UXd6./;9rXd6.cSo*i280sUe$XlwS/d+%Xz>MZ203u)$UqUHIXlyx+I:=e*57$;-! 2\9qpy
3[H*H# 9X%y(7*kf*C:$#<2Cif23mGsz=p28\tk mEJ07x(39I*p!rJ:0p*p7$k-/z
-\#*50Xz
.ends iob_obc_pred_p_bs
