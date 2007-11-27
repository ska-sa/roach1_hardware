** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_p_c
** View name: schematic
************************************
.subckt iob_obc_pred_p_c loc_gnd loc_vccaux loc_vcco opp opp_del oppi
+oppi_del pslew0 pslew1 pslew2 pslew3 pslew4 pslew5 pslew_lowvcc
.prot FREELIB
7O['(7\) 'uS$,T/qn[ $,T/qn[ $,T/qn[ $#kv<x.f5<#M-[B);7%((EV2\Yq+:00*P[
49+xH280sUm/XI/,<M(9[(Jb-h:r.A.O\;:=md/%TOcIX4y=++39i*P!RI:0P*P7$K-/Z
F>#S,:=2'5B5w2BI(,X#=0kd!8y#=0kd!8y# Um0'W)-4:DAHzX3wf)1-0H#!O)12\9Q+Y
3MZj=]w+*7Jp$#T<R2477%V%cGZv7%V%cGZv7\90B7D'BrwI) -Se#=-/b+$Rd((94uYX8
oU=7H77\) 'UV$.z=9DdLWu9/%9ID[62 O9ID[62 O9[oW9SV7'v2,_3X#9I*p!-i:=E*57$;-! 2\9QPY
3[H(J# 9X%+)7*kf*CH$#<2C'%23mGsz=p28\tk mEJ07x(3e%+$,Q+hixmv_jwrBA:l
)\PW'xZt%-4>9$u30x+:=2'5Jjwfm>gA#dw+o.ujm4up9C*7!jP:RA:z<vwr%A:$Rz((6
ezs7\) 'VS$,T/q\>Agr4WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!3WF)1-)>#!o)12\9q+y
3MZj=vw+*7J0H#=0kd!8y# 9X%))7%V%cGZv7\90B7D'BrwI) -Se#=-/b+$Rd((94uYX8
oU=7:$#<2Ci/269%)I:xLWs/D+%xLWs/D+%xZ>mz203%+$uQPh'xLYX+u>9[FYB#!O)\H$Rz(36
ez7>RW+*7)Pb#t<r2477\) '1Y$,T/qn[ $#kv<x.f5<#M-[B);7%((EV2\Yq+:00*P[
49+x/2w.*So*i2w.*#q%2l$#<2m/%23MgSZ=P28\TK Me)s7X(cE*+$,q+H:Xz'_;WR%a:$rZ((6
eO8%34:=2'5b-W2bi(,=#=0KD!8Y#=0KD!8Y# uM0'w)-4:dahZbRWF)1-07$;-/XM/_JQ
7O['77\) 'VS$.Z=9dV23MgSZ=P23MgSZ=P28\TK Mej07X(m9i*P!-I:0P*P7$K-/Z
F>#SP(9.i67tT2wxZt%-3E9ID[62 O9[oW9SV7uU2,_3X#9I*p!vw+3AJ$Rd(*[xm/_3q
7O['7b# 9x%t*7*KF*cG3MXY%KXlwS/d+%XlwS/d+%Xz>MZ203%+$UqpH(Xlyx+U>9[fyb#!o)\h$rZ(36
eO8%33:M$I.Y<=:M$IH6D)F9[(Jbul:r.A.O\;:=md/%TOmUX4y=+,:ra:Zh# 7)%2\Yq6394Uy=8
o+2xZt%-4>9$u30x3:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+u:RA:zBvwr%A:$Rz((6
eO8%3h:=2'5=yWFM>Ga#DWFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!;,:ra:Z<#!o)12\9q+y
3[H(H# 9X%+)7*kf*CJ$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[bJ$,Q+h:h2\yQ+:00*p[
49+xV280s3('XI/,<M>9id[62 o9id[62 o9[Ow9sv7'V2,_3xm'Xlyx+U>9[fyb#!o)\h$rZ(36
eO8%-W+*7)Pb#t<r2407%v%CgzV7%v%CgzV7\90b7d'bRWi)u-s7%((E%S$rD((94Uyx8
oU=7y$#<2M/%23mGsz=p280Su3sxLWs/D+%xZ>mz203%+$uQPhuf23_jXp94 YX#!<)10
'#uW+*7)Pb#t<r24s7%v%CgzV7%v%CgzV7\90b7d'bRWi) -sb#=-/Bj)7$;-/XM/_JQ
7= v)7\) U1j$.Z=9d1280sU3:XlwS/d+%Xz>MZ203%+$UqpH/u23_JxP94 yx#!<)10
'\\23$XzT%-p>9$U30X+:=2'5=JWFM>Ga#DW+O.UJM4UP9c*7!J3:ra:Z<#!o)12\9q+y
3MZj=Yw+*7J7X#T<R24p7%V%cGZv7%V%cGZv7\90B7D'BrwI) -pJ#=-/b+$Rd((94uYX8
o+'xZt%;+C9ID[69/%54F$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[bH$,Q+h:h2\yQ+:00*p[
4 3SJ280s3('XI/,<Mc9id[62 o9id[62 o9[Ow9sv7'V2,_3xm'Xlyx+Ie94 yx#!<)10
'\\2m9.I67Tt2WXzT%-4>9id[62 o9[Ow9sv7Uu2,_-xP9i*P!VW+3a)$rD((94Uyx8
oU]7:$m*TQ%2L$m*T!9ID[69/%mxLWs/y%k.26\tk mE)S7x(Ce*+$,Q+h'h28)QH:0p*==#!<) 0
'.3+39.I67Tt2WXlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-'Bt07%((E%v$#4()94 y33WRbahL
!$ 2y.'l
.ends iob_obc_pred_p_c