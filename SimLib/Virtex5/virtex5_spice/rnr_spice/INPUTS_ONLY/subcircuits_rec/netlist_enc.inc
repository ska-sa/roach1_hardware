.GLOBAL vss vdd vcco vccaux
.PARAM dfln=0.07 dflp=0.07 dflnn=0.07 dflpn=0.07
.PARAM dflnmlvt=0.1 dfln12=0.12 dflp12=0.12
.PARAM dfln15=0.12 dflp15=0.12 dflnt=0.24 dflpt=0.24
.PARAM dflntt=0.27 dflptt=0.27
.PARAM dfwn=0.2 dfwp=0.2 dfwnlvt=0.15 dfwplvt=0.15
.PARAM dfwnmlvt=0.16 dfwnmox=0.16 dfwpmox=0.16
.PARAM dfwnt=0.36 dfwpt=0.36
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload
** View name: schematic
************************************
.subckt rcload in out
.prot FREELIB
H]=3g\#/FM= y=:W;r.;V_3Q
%[Xd\%#Y<bXAyS%v'%Z
ap7C :\0u$sQ/fm= l
8jw!=xD\%#5-yIDGy8
Xr=$3W%8
.ends rcload
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_inv
** View name: schematic
************************************
.subckt xi_inv A Y
.prot FREELIB
H]=3g\#M+)123#q+:=_78O<5<) 2,.q+:r$*P7*[!=g(:9qpy
3[H$2#$:\0u$+zk:=MD/7x(I=xLY,\w+3AZ 4\D9y02\yQ6394uY=8
o2[x#$1#yO%xPvy#TUm02,_xT:RAL67\o-]_78o<5<94 Y33wrBAHl
!$ 2y.'l
.ends xi_inv
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_nand2
** View name: schematic
************************************
.subckt xi_nand2 A B Y
.prot FREELIB
H]=3g\#M+)123#q+:=_78O<5<) 2,.q+:r$*P7*[!=g(:9qpy
3[J$#<2C/x/$+zk:\0u$#KV<9C*,##=-R[28)Q tw[!t8zwr%AH$Rz((6
ez77PW'9[(JbJW6b028\TK:da487%(F=Xz'_\[!=g(:9#!o)12\9qpy
3$H$2#$:\p $+d;:]MD/7x(I]xLY,*w+3Ai 4\D9y02\yQP:00*p[
4tc9o2X79;o9- V7*90bX4yU*WF)iI$#4(2j8za0'K:0P*77$K-/Z
-\#*50Xz
.ends xi_nand2
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_nor2
** View name: schematic
************************************
.subckt xi_nor2 A B Y
.prot FREELIB
H]=3g\#M+)123#q+:=_78O<5<) 2,.q+:r$*P7*[!=g(:9qpy
3[J$2#F:\0u$+zk:=MD/7x(I=xLY,\w+3AZ 4\D9y02\yQP:00*p[
4 39o2g79K<9-U/7\90bX4yU\WF)iz$#4(+j8za0'K:0P*77$K-/Z
F6B# 9X%V$-#yO%xPvy#TUm02,_xT:RAL67\o-]_78o<5<94 Y=#!<)10
'.3W89=280sUe9- V7*90bX4yU*WF)iI$#4(2j8za0'K:0P*P7$K-[Z
-\#*50Xz
.ends xi_nor2
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_pdown
** View name: schematic
************************************
.subckt iob_pdown extst_smpl ghigh_b gts_cfg_b hswap_en pdown io
.prot FREELIB
7=%Y(7cv:=2's$# 9xu:$+ZK:=md/%TOmUX4yI+Uw9i*P!VWR%ah$rZ(36
ez5># 9xu:$#<2m(Xp/9#Y<bXz>MZ203%+$UqUH[Xlyb+U:0P*77$K-[Z
Fhi;wzF8!d60w+*7))74#Qw[P$u\((e%:p7% -/b:(X# tw[!t8z(39CiYX+u(/z
$3.Q+h/*:$.:#+N23/_3q
7WV+$#<2>(XzT%;h:38GH#9Wi=a:ZbJ+:r[*P!Jj(9[\H#2);bah$U*((E%:P[
a=2)1-PIJW2j8za0'K-[Z
Fhirw+*7s07\) :%280S3#9E7.#[ O'x48_jXC/123#Q+h/*:$#:#+N23/_3wI]A:zBj+Y
8IiYX++W/xi 4\D9y0*7[
4#>SX!D42*q-XIVMX :=2')b#O!C[;8Y-Wi=a:ZbJ+:r[*P!Jj(9[\H#2);bahL
TxT-/bJpX#=2)1-pijw2J8ZA0'k-[z
Fhivw937uj6z92RxZt%;i:=2')<#o!c[;8y-wI=A:zBj+:R[*p!jJ(9[\h#2);BAHl
TxT-/bJpX#=2)1-pijw2J8ZA0'k-[z
Fh<vwzX0g[D2s[9;u,1*s9=xZt%v,:38g8m'u:D[*p!-+(9IZYX++W/xZ 4\D9y0*7[
aM2)1-5xJWF]a:Zxu+:]_78O<5<) 0
Zr\t;M70
.ends iob_pdown
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_nor3
** View name: schematic
************************************
.subckt xi_nor3 A B C Y
.prot FREELIB
H]=3g\#M+)123#q+:=_78O<5<) 2,.q+:r$*P7*[!=g(:9qpy
3[)$2#/:\0u$+zk:=MD/7x(I=xLY,\w+3AZ 4\D9y02\yQP:00*p[
4 c9o2X79K<9-U/7\90bX4yU\WF)iz$#4(+j8za0'K:0P*77$K-[Z
F8=#::5xP/9#y<BxZ>mzwI)CZ$,Q=+9[FY#:#+N23/7$;-/xm/_3q
7]u280s3c9>2<YDW6%P26\TK:da467%(F]Xz'_*[!=g(:9#!o) 2\9q+y
3$J$#<2M2x/$#<2M'xPvy#TUm02,_xT:RAL67\o-]_78o<5<94 Y=#!<) 0
'.3W89=280s3)9- V7*90bX4yU*WF)iI$#4(2j8za0'K:0P*P7$K-[Z
-\#*50Xz
.ends xi_nor3
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_tlvsht1_33
** View name: schematic
************************************
.subckt iob_tlvsht1_33 A V Y1 Y1_vdd Y2 por_b
.prot FREELIB
7=%2eb#:3C- V79K<9-U/7\90b7d'j;Wi)V-;>#=-/BS$#4(c94 y33WRbahL
)K  /xP/9#:39OJ$+zk:=MD/%toMux4Y=#=-/bs$Rd((94uYX8
o+[x#77[w6B02<9zw+o.ujm43M9C*0!]L:RA:zH# 7)%2\yQ6394uY=8
o2'x#57pP:\xP$.KV<X.FSJ#m-/by$,QP:0p*p7$k-/z
F6=#:39OJ$+#y:]MD/%toMux4YX+H:RAH$Rd((94uYX8
oU]7:$23w2m6gx79w69$oW9SV7uU2,_jXp'xLYX+uE94 YX#!<)10
'.#:3C- V7[W6%P2<YDW2O.U$Uq+HIJ23_Jx($XMV_JWRba:L
)\w8[dPvy#$:\0u$+zk:=MD/7x((e%V$,Q+h/*2\yQ+:00*p[
+!+]6dJ[
.ends iob_tlvsht1_33
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_aoi22
** View name: schematic
************************************
.subckt xi_aoi22 A1 A2 B1 B2 Y
.prot FREELIB
H]=3g\#M+-a:$,\((9czX6:#+n23/_3Wi==*P7X 'C_78O<5<) 2,.[((9iIyx8
_I]=g 4\D9y0*77xT[)12,.0stw[!t8z(36
ezXb# 9xu)$--W6b02<9ZW+O.U$UqM+-Xly,\W+3a48-/[!=g(:9#!o) 2\9qpy
3[/77pw[[xZt%;3:\0u$#KV<9C*,#0wf)IZ$#4(I=3g 4\D9y02\yQP:00*7[
4 ''XzT%Vp:5%2<9ZW6b028\TK:da481#=-r[28)qM+5D\H#2);bXMV_3WRbahL
)\$39O2G=# 9X/H$+zk:=MD/7x(I==23_% :=E*,#[stw[!t8zwr%AH$Rz(36
eIgb#::5%280s4(9- V7*90bX4yU*$:ral67\O-d$;.dc Z*6U$rD(394Uyx8
o25 2E7[P:=2'0X#yO%xi>mzwI)CiG7%(f]xZ'_xT'c_78o<5<94 Y=#!<)10
'.0U:=2'0x#fc9- V79;o9$Ow9#M-d$/$,q=29[fyU*fqj8za0'K:0P*77$K-/Z
F6-3w+*7+p70P:\p $+d;:]MD/7x(I]323_%T:=E*,.0stw[!t8zwr%AH$Rz((6
BM8.'v 6
.ends xi_aoi22
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_aoi21
** View name: schematic
************************************
.subckt xi_aoi21 A1 A2 B Y
.prot FREELIB
H]=3g\#M+5a:$,\((9czg6:#+n23/_3Wi=3*P7X [C_78O<5<) 2,.[((9iIyx8
_I]=g 4\D9y0*77xT[)12,.0stw[!t8z(36
ezgb# 9x%Y$1-W6b02<9ZW+O.U$UqM+5Xly,\W+3a481/[!=g(:9#!o) 2\9q+y
3[;77pw'[xZt%-H:\0u$#KV<9C*,#[wf)IZ$#4(I==g 4\D9y02\yQP:00*p[
4 [9o2X79K<9-U/7\90bX4yU\f:ral87\O-d[/.dc Z*6U$rD(394Uyx8
o25 2E7[P:=2'Se#yO%xi>mzwI)CiG7%(f]xZ'_xT'c_78o<5<94 Y=#!<)10
'.0W+*7);70W6%P2<YDW2O.U$UqM2-Xly,*W+3a46-/[!=g(:9#!o) 2\9q+y
3$;57pw''xZt%;,:\p $.KV<9C*,.[wf)Ii$#4(I]=g 4\D9y02\yQP:00*p[
+!+]6dJ[
.ends xi_aoi21
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_pup_vco
** View name: schematic
************************************
.subckt iob_pup_vco fst_cfg_b ghigh_b gts_cfg_b gts_usr_b hswapen io
+loc_vcco por_b_vcco pup sysmon_auxin
.prot FREELIB
7]uv$4TW+*7S*7\) :J23MgS6K>d$.kv<x.fsj#M-2Bj(7%((E%v$#4(c94 y=#!<) 0
'.uh:=2')$# 9x/v$,T/q\>Aw7%v%C-A[M#tuM0'w);3:dahZ>RWF)u-*7$;-[XM/_3Q
7W hs7\) $V2/2Z90=D;\)c :=2'0h#O!C[;8Y-Wi=a:ZbJ+:r[*P!Jj(9[\H#2);bahL
TxT-/bJpX#=2)1-pijw2J8ZA0'k-[z
Fh=3P:=2'*H# 9X*J$#<2WuxZt%r,:38g8m'3:D[*p!-+(9IZYX++W/xZ 4\D9y0*7[
aM2)1-5xJWF]a:Zxu+:]_78O<5<) 0
'43p(9[(J<]WFM>G<Sgv:=2')># 9xJY$#<2)UXIw8/fq\>Aw7cv[C7l<9H23Cu)L
)CLE9[(jiUwzX0g\9's[9G'/6G[zc326R*w+*7T574#Q5.75B#m+-A:zBj+:R[*p!jJ(6
:48-/[!=g(:9qp:d[;yx+U(/X481/[!=g(:9qp:d$;yx+U(/Xl6_Jx($10
oU*$qj8za0'K-[X46-q+H'1:$U*fqj8za0'K-[Z
Fh=3u:=2'0H# 9X*)$)Cs!=-2,#Q+h'1:$,\((e1Tp7\[!=G(:9QP:D$*p!-+(6
:l6_Jx($126dc Z*6Uy=8
o![ s$Dz2Qk_!.-# 9X*+$)Cs!=-2,#Q+h'1:$,\((e1Tp7\[!=G(:9QP:D$*p!-+(6
:l6_Jx($126dc Z*6Uy=8
o![1e$oSkQk_!.-# 9X*T$)Cs!=-2,#Q+h'1:$,\((e1Tp7\[!=G(:9QP:D$*p!-+(6
:l6_Jx($126dc Z*6Uy=8
o![1:$/zm']2Z$#<2E[xFh6C 69CZYX+u(/xL8_jX($128DC z*6uY=#m2)1-5Xjq
$r$*P!Jj(9$\H#2);bahL
)C,#9$m672*!N;gx7\) s 280SL>9E7.1t#C[x481Q+h'1:$,\((e1Tp[
aM+5D\H#2);bah$U\f-/BjPx#M+-D\H#2);bah$U*$-/BjPx#=2)1-PIJQ
$d$;.dc Z*6Uy=#M2-a:ZbJ+:d$/.dc Z*6Uy=8
Xr=$3W%8
.ends iob_pup_vco
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_nand3
** View name: schematic
************************************
.subckt xi_nand3 A B C Y
.prot FREELIB
H]=3g\#M2)123.q+:]_78O<5<) 2,#q+:r[*P7\[!=g(:9qpy
3$H$2#$:\p $+d;:]MD/7x(I]xLY,*w+3Ai 4\D9y02\yQ+:00*7[
4tc9o2X79;o9- V7*90bX4yU*WF)iI$#4(2j8za0'K:0P*77$K-[Z
F6J#::kxPvy#yO%xi>mzwI)Ci$,Q=29[FY.:#+N23/7$;-[xm/_jq
7=%280s3w93280s3m9-U/7\90bX4yU\WF)iz$#4(+j8za0'K:0P*77$K-[Z
F8=#::5xZt%;J:\0u$#KV<9C*,##=-R[28)Q tw[!t8zwr%A:$Rz(36
ezs7\) Uu2[79K<9-U/7\90bX4yU\WF)iz$#4(+j8za0'K:0P*77$K-/Z
-\#*50Xz
.ends xi_nand3
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_up_dn_keep
** View name: schematic
************************************
.subckt iob_up_dn_keep eoc_user_en extst_smpl ghigh_b gts_cfg_b gts_usr_b
+hswapen inbufout loc_vcco io pup pdown keeper por_b_vcco fst_cfg_b
+sysmon_auxin
.prot FREELIB
7W$ wU\+:*e'/%/Ku]i2a/cdaC32a%ZS%jgGX7HKi5$(87\) (12HM##0-DIVMX y
38i\./y%m12 9Ss%JGgx72*!N;gx722<c>\A60wzX0g\9's[9;u,1*)+98D$,t/Q\>aW[
at0YD/.+g/09[(J>yW<<0Ow#/$R38z$4Tfq]4I.+gvy
38eS7<V%c4ut8/)+9G'/6G[zc3280S,)9[(jivw7wdZG#d3:D$*p!-+(9IiYX++W/z
$6DC z*6uY=#m+)1-5Xjwf=A:zXU+:=_78o<5<) 0
'4;h:W[/\dT! 9[(JE;W20$280sj#9e7.1T#c[X481q+H'1:$,\((E1tP[
aM+5D\H#2);bah$U\f-/BjPx#M+-D\H#2);bah$U*$-/BjPx#=2)1-PIJQ
$d$;.dc Z*6Uy=#M2-a:ZbJ+:d$/.dc Z*6Uy=8
o!u*280SL)9[(je;w2%.487\) sU2'4/$0w%H$u\$-/bJpX#=+)1-pijq
$d[;.dc Z*6Uy=#M+-a:ZbJ+:d[/.dc Z*6Uy=#M25a:ZbJ+:r$*P!Jj(6
:461/[!=g(:9qp:d$/yx+U(/X46-/[!=g(:9qpy
38e77W)9]23$#<2E:xFh6C 69CZYX+u(/xL8_jX($128DC z*6uY=#m2)1-5Xjq
$r$*P!Jj(9$\H#2);bahL
)C,(98ZxR:VrXxZt%YH:38gh#9wI=A:zBj+:R[*p!jJ(9[\h#2);BAH$u*((e%:p[
a=2)1-PIJW2j8za0'K-[Z
Fh>]w+*7T;7\) sh2'4/#+\x48_jXC/123#Q+h/*:$#:#+N23/_3wI]A:zBj+Y
8IiYX++W/xi 4\D9y0*7[
4#P(XzT%y3:=2';x#O!C8z<7X -/BjPx#=+)1-PIJW+j8za0'K-[X46_Jxc/10
o,*((E1tP7*[!=g(:9qpy
38yS7\) $/280SL>9[(je;w7wdZG#du:D[*p!-+(9IZYX++W/xZ 4\D9y0*77xT-/bJpX8
_f]A:zXU+:]_78o<5<) 0
'45U:]Pd,##tR]XzT%]h:38G8M'U:d[*P!-+(9izyx++w/Xz 4\d9Y0*77Xt-/BjPx8
_f]A:zXU+:]_78o<5<) 0
Zr\t;M70
.ends iob_up_dn_keep
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_y
** View name: schematic
************************************
.subckt iob_obc_drv_y io loc_gnd loc_vcco opn opp
.prot FREELIB
7= 280sI>9.I87cv:r.A.O\;:=md/%TOmUX4yI+UP9i*P!VWR%ah$rZ((9e yx+3>IXf/_Jxw[XfaSD((EuS074d%ba:ZbV4:=gAw#qUy
3MZjB# 9X/s$,t/QN[ $#<2>:xLWs/D+%xZ>mz203U)$uQJh'v23_jX>94 Y=#!<)12'yQ+hu/+$)z((e*H$)2/O)1-SHrw7N>uYX+u>ixZAst -'z
F>#S+:=2')H#V2=x7W7%V%cGZv7\90B7D'J;wI)*-5<#=-/bs$Rd(394uYX#oO)1-SHrw7BA:zi3w7N> YX+3>ixFAsz((e%s07\D%m[*5[
49+x 280sI>9id[62 o9[(JhVWFM>Ga#DW+O.UJM43m9c*(!-4:ra:Zh#!o) 2\9q+:3P*P!;IP9eUyx+j39e![Yq+HU/+$)2/<)1-5hRW+n>d8_-Q
7] 280sI>9.I67%v%C-A[M#=0KDp[STW2O.UJM43m9c**!;3:ra:ZbyW+3ajP7$;-/XM/_3W7%a:ZjV4:30*P!54P9e![Yq+HU/+$)2/<)1-5hRW+n>d8_-Q
H0[I:MsQ
.ends iob_obc_drv_y
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_xn
** View name: schematic
************************************
.subckt iob_obc_drv_xn io loc_gnd opn
.prot FREELIB
7=12HM#v2=XlwS/d+%XlwS/d+%Xz>MZ203u)$UqjH'*23_Jx>94 y=#!<)12'Yq+HU/+$)Z((E*h$)2/o)1-shRW7n>Uyx+U>IXzaST -'Z
-\#*50Xz
.ends iob_obc_drv_xn
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_xp1
** View name: schematic
************************************
.subckt iob_obc_drv_xp1 io loc_vcco opp
.prot FREELIB
7] EP7cv:M$I$,T/q\>Aw7%v%C-A[M#tuM0'w);3:dah5!RI:ra:ZbyWR%ah$rZ((9e yx+3>IXf/_Jx)IV2'Og;-/B))<#OZK0*P!-IP9[![M\(c6
BM8.'v 6
.ends iob_obc_drv_xp1
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_xp
** View name: schematic
************************************
.subckt iob_obc_drv_xp io loc_vcco opp
.prot FREELIB
7O$'P7cv:M$I$,T/q\>Aw7%v%C-A[M#tuM0'w);3:dah5!RI:ra:ZbyWR%ah$rZ((9e yx+3>IXf/_Jx)IV2'Og;-/B))<#OZK0*P!-IP9[![M\(c6
eI7EJW!MXd6.#=0KDp[STWFM>G<Sgv:]md/%TOmUX4y=-xP:Xlyx+Ue94 y=#!<)12'Yq+HU/+$)Z((EJ+074d%%a:ZjV4:3gA/_Jxc:V28Ogv+)%0
Zr\t;M70
.ends iob_obc_drv_xp
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_w
** View name: schematic
************************************
.subckt iob_obc_drv_w io loc_vcco opp opp_del
.prot FREELIB
7O$'P7cv:M$I.Y<=:r.A.+g/09id[69/%MXI>MZ203u)$UqpcEVS$,q+H'H2\Yqp:00*P74;-/B))<#O<)1-9<RW7n> yx+3>IXfaSZ((E%S07\d%M[*5[
4t3(12HM#v2]XlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-[%-0h#=-/Bj*7$;-[XM/_JW7%a:ZjV4:30*P!54P9e![Yq+HU/+$)2/<)1-5hRW+n>d8_-Q
H0[I:MsQ
.ends iob_obc_drv_w
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_s
** View name: schematic
************************************
.subckt iob_obc_drv_s io loc_gnd loc_vcco opn opn_del opp opp_del
.prot FREELIB
7=12HM#v2=XlwS/d+%XlwS/d+%Xz>MZ203u)$UqjH'*23_Jx>94 y=#!<)12'Yq+HU/+$)Z((E*h$)2/o)1-shRW7n>Uyx+U>IXzaST -'Z
F>#S+:w.2W.\sO*I23mGsz=p23mGsz=p28\tk mE)S7x(We%T$,Q+h:xmv_3wrBA:$)d((eUs074k-/bT774D%%A:zJv4:3Ga/_jXC:v28oGV+)%0
'\*2(98d$M*tq%2l$,T/q\>Aw7%v%C-A[M#tuM0'w);3:dah5!RI:ra:ZbyW+3aY$rD(394Uyx#Oo)1-shRW7ba:Z$R4:3gAV_Jxm:V2'OgK-/Bj)<# ZK.zyb8
o2'x7W7tT29ID[69/%mxLWs/y%k.26\tk mE)S7x(3'b+)7%((e%V$#4()94 Y=#!<)12'yQ+hu/+$)z((ej+074D%%A:zJv4:3Ga/_jXC:v28oGV+)%0
Zr\t;M70
.ends iob_obc_drv_s
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_e
** View name: schematic
************************************
.subckt iob_obc_drv_e io loc_gnd loc_vcco opn opn_del opp opp_del
.prot FREELIB
7=12HM#v2=XlwS/d+%XlwS/d+%Xz>MZ203u)$UqjH'*23_Jx>94 y=#!<)12'Yq+HU/+$)Z((E*h$)2/o)1-shRW7n>Uyx+U>IXzaST -'Z
F>#S+:w.2W.\sO*I23mGsz=p23mGsz=p28\tk mE)S7x(We%T$,Q+h:xmv_3wrBA:$)d((eUs074k-/bT774D%%A:zJv4:3Ga/_jXC:v28oGV+)%0
'.-W!MXd6.#=0KDp[STWFM>G<Sgv:]md/%TOmUX4y=-xP:Xlyx+Ue94 y=#!<)12'Yq+HU/+$)Z((EJ+074d%%a:ZjV4:3gA/_Jxc:V28Ogv+)%0
'\*2(98d$M*tq%2l$,T/q\>Aw7%v%C-A[M#tuM0'w);3:dah5!RI:ra:ZbyWR%ah$rZ((9e yx+3>IXf/_Jx)IV2'Og;-/B))<#OZK0*P!-IP9[![M\(c6
BM8.'v 6
.ends iob_obc_drv_e
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_d
** View name: schematic
************************************
.subckt iob_obc_drv_d io loc_gnd loc_vcco opn opn_del opp opp_del
.prot FREELIB
7O['P7cv:M$z.Y<=:r.A.O\;:r.A.O\;:=md/%TOmUX4yI+Uw9i*P!VW+3aj$rD((94Uy=#Oo)1-shRW7ba:ZI3W7n> yx+3>IXfaSZ((E%S07\d%M[*5[
4 (98d$M* :r.A.O\;:r.A.O\;:=md/%TOmUX4yI+Uw9i*P!VW+3aj$rD((94Uy=#Oo)1-shRW7ba:ZI3W7n> yx+3>IXfaSZ((E%S07\d%M[*5[
4tc98d$M*t:r.A.+g/09id[69/%MXI>MZ203u)$UqhH'*23_JxcSXz'_;WR%ah$rZ((9e yx+3>IXf/_Jx)IV2'Og;-/B))<#OZK0*P!-IP9[![M\(c6
eO6%JW!MXd6./;9rXlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-2Bj(7%((E%v$#4(m94 y=#!<)12'Yq+HU/+$)Z((EJ+074d%%a:ZjV4:3gA/_Jxc:V28Ogv+)%0
Zr\t;M70
.ends iob_obc_drv_d
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_c
** View name: schematic
************************************
.subckt iob_obc_drv_c io loc_gnd loc_vcco opn opn_del opp opp_del
.prot FREELIB
7O['P7cv:M$z.Y<=:r.A.O\;:r.A.O\;:=md/%TOmUX4y=VxP:Xlyx+I:=e*57$;-/XM/_3W7%a:ZjV4:30*P!up:3gAV_Jxm:V2'OgK-/Bj)<# ZK.zyb8
o+/x7W7tT+9ID[62 O9ID[62 O9[oW9SV7uU2,_3ihi/23_jX>9[FYB#!O)12\9QP:3p*p!;ip9EuYX+J39E![yQ+hu/+$)2/<)1-5Hrw+N>D8_-q
7]%2HM#v2]XlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-[%-0h#=-/Bj*7\O-UXMV_3WRba:$)D((EuS074K-/BY0<#OZKP*P!;IP9e![9q+H'/+$#2/0=ajL
)KT /x7W7tT2cp(37%V%c-a[m#=0kdP[stw2o.ujm43M9C*7B+4>9I*p!-L:=E*S7$;-[xm/_jw7%A:zJv4:30*p!54p9E![yQ+hu/+$)2/<)1-5Hrw+N>D8_-q
H0[I:MsQ
.ends iob_obc_drv_c
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_b
** View name: schematic
************************************
.subckt iob_obc_drv_b opn opn_del opp opp_del io loc_gnd loc_vcco
.prot FREELIB
7=12HM#v2=XlwS/d+%XlwS/d+%Xz>MZ203u)$Uqp>EVS$,q+H:Xz'_VWR%a:$rZ(39e yx+3>IXf/_Jxw[XfaSD((EuS074d%ba:ZbV4:=gAw#qUy
3MZjX##09.i86d)f9ID[62 O9ID[62 O9[oW9SV7uU2,_3ihi/23_jX>9[FYH#!O)12\9QP:3p*p!;ip9EuYX+J39E![yQ+hu/+$)2/<)1-5Hrw+N>D8_-q
7]%2HM#v2]XlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-[%-0h#=-/Bj*7\O-$XMV_3WRba:$)D((EuS074K-/BY0<#OZKP*P!;IP9e![9q+H'/+$#2/0=ajL
)KT /x7W7tT2cp(37%V%c-a[m#=0kdP[stw2o.ujm43M9C*7B+4>9I*p!-L:=E*(7$;-[xm/_jw7%A:zJv4:30*p!54p9E![yQ+hu/+$)2/<)1-5Hrw+N>D8_-q
H0[I:MsQ
.ends iob_obc_drv_b
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_a
** View name: schematic
************************************
.subckt iob_obc_drv_a opn opn_del opp opp_del io loc_gnd loc_vcco
.prot FREELIB
7=/2HM#v2=XlwS/d+%XlwS/d+%Xz>MZ203u)$Uqp>EVS$,q+H:Xz'_yWR%ah$rZ(39e yx+3>IXf/_Jxw[XfaSD((EuS074d%ba:ZbV4:=gAw#qUy
3MZjX##09.i86d)f9ID[62 O9ID[62 O9[oW9SV7uU2,_3ihi/23_jX>9[FY>#!O) 2\9QP:3p*p!;ip9EuYX+J39E![yQ+hu/+$)2/<)1-5Hrw+N>D8_-q
7O$'P7cv:M$I.Y<=:r.A.+g/09id[69/%MXI>MZ203u)$UqpcEVS$,q+H'H28)qpm94 y=#!<)12'Yq+HU/+$)Z((EJ+074d%%a:ZjV4:3gA/_Jxc:V28Ogv+)%0
'.RW!MXd6.#=0KDp[STWFM>G<Sgv:]md/%TOmUX4y=-xP:Xlyx+Ue9[fy=;WR%ah$rZ((9e yx+3>IXf/_Jx)IV2'Og;-/B))<#OZK0*P!-IP9[![M\(c6
BM8.'v 6
.ends iob_obc_drv_a
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_obc_drv_cz
** View name: schematic
************************************
.subckt iob_obc_drv_cz loc_gnd_drv opn_a opn_a_del opn_b opn_b_del opn_c
+opn_c_del opn_d opn_d_del opn_e opn_e_del opn_es opn_es_del
+opn_x<8> opn_x<7> opn_x<6> opn_x<5> opn_x<4> opn_x<3> opn_x<2>
+opn_x<1> opn_x<0> opn_y opp_a opp_a_del opp_b opp_b_del opp_bs
+opp_bs_del opp_c opp_c_del opp_d opp_d_del opp_e opp_e_del opp_es
+opp_es_del opp_x<13> opp_x<12> opp_x<11> opp_x<10> opp_x<9>
+opp_x<8> opp_x<7> opp_x<6> opp_x<5> opp_x<4> opp_x<3> opp_x<2>
+opp_x<1> opp_x<0> opp_y pad vcco
.prot FREELIB
7WP3<d\W25P23MgSZ=PGV89W6K>d$M* q<Xd6./::W./.M0/q%6p.28
o!%6P'wYe:]= $,t/QN[ .y'y:m$Z.)MLv98Dx6tF%cp3<64 Y
38 :+41W+xiGy#=0kd!8y/;;\xD6#/o_$)2hm0s0->gv89s7=z
Fhy'y7Hjq$.[;:R.a.o\;Q%6P$m* Q3ry%7CV[c./[6d56cEZl
)C;;\Ec0P#T'%xLWs/D+%d :+#V2=dF#<1w!m3gW-GsOy-g'#8
o!%6P'wve:]= $,t/QN[ .y'y:m$Z.)Miv98Dx6tF%cp3<64 Y
38 :+41M+xiGy#=0kd!8y/;;\xD6#/o_u)2hm0s0->gv89s7=z
Fhy'y7H%q$.[;:R.a.o\;Q%6P$m* Q3rJ%7CV[c./[6d56cEZl
)C;;\Ec7P#T'%xLWs/D+%d :+#V2=dF#=1w!m3gW-GsOy-g'#8
o!%6P'wje:]= $,t/QN[ .y'y:m$Z.)M+v98Dx6tF%cp3<64 Y
38 :+*[3Hfq$.[;:\>aW7tT2cEc7X1w!m3gW-GsOy-g'.3q
7WP3<.:p_S)261DW6K>d$M*tq3RE%7cv[C./[6D56CeI7[
4#oY-I =mjV9$;V79/%MXd6./O_S)2HM0S0->GV89S7] 0
'4D56]_h#$1W25P2<Sgv:M$I.)mjV98dX6Tf%CP3<64t36
e7V89tT[R+%7*$o9-A[M#v2]Df#$1W!M3Gw-gSoY-G'.3Q
7WP3<.:p_:)261DW6K>d$M*tq3R+%7cv[C./[6D56CeI7[
4#oY-I =m3V9$;V79/%MXd6./O_:)2HM0S0->GV89S7] 0
'4D56]_h#b1W25P2<Sgv:M$I.)mUV98dX6Tf%CP3<64t36
e7V89tT[Rh%7*$o9-A[M#v2]Df#=1W!M3Gw-gSoY-G'.3Q
7WP3<.:p_/)261DW6K>d$M*tq3R:%7cv[C./[6D56CeI7[
4#oY-I W;E:]= $+g/09.I66413U)2HM0S0->GV89S7]Z
Fhy'y2JrJ%7*$O9-a[m#V2]dF#=-e:w./.m0/Q%6P.)*q
7WP3<.:13+XIgY#Y%K.2w.*S7h h%7cv[C./[6D56CeIL
)C;;\$\#X1w25p2<sGV:m$i.)M3v98Dx6tF%cp3<64TY
38 :+xw25p2<sGV:m$i.0zw0]$gt9/;9Rx7W-/V[kd :+/mY
38 :+*+:]= $,t/QN[ .y'y:\>aW7tT+c2u$m* Q*0gv0%w0]$gx9#V2]d//6d)f6
:7w-/v[KD :+/Ky
38 :+<+:]= $,t/QN[ .y'y:\>aW7tT+c22W.\s9cp(37tT2c22W.*s9cp(3[
a#0-DdXS/;;\D(L
)C;;\p:$.[;:R.a.o\;Q%6P$+G/09.i86dw0][gv6d)f9.i66dw0]$gv6d)f6
:7w-/v[KD :+/;y
38 :+G+:]= $,t/QN[ .y'y:\>aW7tT+c>2W.\s%cp(37tT2c>2W.*s%cp(3[
a#0-DdXS/;;\DAL
)C;;\3:$m* Q-xD6#/FQ%2L$m*TQ-xD6./FQ%2L$.[;:R.a.o\;Q%6P$+G/06
:7w-/v[KD :+/fy
38 :+[+:m$Z.1#V2=d;.y<=:m$i.1#V2]d;.y<=:]= $,t/QN[ .y'y:\>aW[
a#0-DdXS/;;\D;L
!$ 2y.'l
.ends iob_obc_drv_cz
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: out_load_vref
** View name: schematic
************************************
.subckt out_load_vref pad pad_int vccaux vcco
.prot FREELIB
7O['7x#Y<bXIgY/#+xXp/9#Y<bXz>MZ203%+$UqpH/V23_Jxc2Xz'_yWR%a:$rZ(36
eO8%3p:\0U$.[;qW['$+ZK:\0U$#kv<x.f5<#M-[B:07%((E%Y$\4(c9[fy>#!o)12\9qpy
3MZj=-w6B0261ds!=72<9zw6B028\tk mEJ07x(3e1H$,QPh'xZ'_-wr%A577$k-[z
F>#SPM9-u/7*$Oc8Zj79k<9-u/7\90B7D'BrwI) -p<#=-/bJ97\o-sxmv_jwrBAHl
)KT ixiGy/#+XxP[stw6k>D$+G/09$oW9SV7uU2,_3uhi/23_jXCsxo'_-wr%A:$Rz((6
ez)7*$o9-A[1$O:=2'sx5W6b028\TK Me)s7X(wE%t$,q+H:Xz'_3h:0P*P7$K-[Z
F>#S+:\0u$+zk:\0u$+zk:=MD/%toMux4Yi+uW9I*p!vwr%A:$Rz((6
eO8%]W25PGH#sW6b02<9ZW6b028\TK Me)s7X(wE%t$,q+H:XO'_-WR%a:$rZ((6
e7\./;+C,(T.JW6b02<9ZW6%P2<YDW6%P2<9ZW6b02<Sgv:=2')b-W6b02<9ZW6b02<Sgv:\P $+ZKy
88Dx6$TQ%[gM0<TY
3MZjX[w+*7s5B#y<BxP/9#y<BxZ>mz203%+$uQJh2f+$,Q+h:xZ'_-wr%AH$Rz(39E YX+3>ixF/_jXpsv2'oG;-/b))<#ozk0*p!;up6
eO8%J$qjXzT%VUc9-U/79K<9-U/7\90b7d'bRWi)u-*j#=-/BS$#4(c94 y=#!<) 2'Yq+HU/+$)Z((EVv074d%%a:ZjV4:3gA/_Jxm'V0
'\\2c5XzT%VUc9-U/79K<9-U/7\90b7d'bRWi)*-9ERWF)1-)7\O-SXMV_3WRbah$)D((EuS074K-/B+*<#OZKP*P!;IP9e![9q+HU%+L
)K  [=280SiC'xP/9#y<BxP/9# Um0'W)-4:DATz$]4:RA:zH# 7)/2\yQP:00*774;-/b))<#o<)1-0>rw7N> YX+3>ixFAsz((eUJ0[
49+x 280sIc'Xp/9#Y<bXp/9# uM0'w)-4:daYZI5WF)1-s7\O-:XMV_3WRbah$)D((EuS074K-/B+*<#OZKP*P!;IP9e![9q+HU%+L
)K  'xZt%vuC9-u/79k<9-u/7\90B7D'BrwI)j-($#=-/b)$#4(>94 Y=#!<) 2'yQ+hu/+$)z((evV074D%%A:zJv4:3Ga/_jXM'v0
'\\2m9[(Jh-U:\0U$+ZK:\0U$#kv<x.f5<#M-2Bt$,q+HUXz'_5WR%ah$rZ(39e yx+3>IXf/_JxPSV2'Og;-/B))<#OZK0*P!;UP6
eO8%VW+*7S5b#Y<bXp/9#Y<bXz>MZ203%+$UqhH$Xlyx+3:=e*7>#!o) 2\9qp:3P*P!;IP9eUyx+4eIXfaSD((EuS074d%ba:Zj-4y
3MZj<# 9X/J579k<9-u/79k<9[oW9SV7'v2,_5XW2xLYX+3:=E*97$;-[xm/_3w7%A:zJv4:30*p!rLp9E![yQ+hu/+$)2/<)1-SBrq
7O['97\) :%j$+ZK:\0U$+ZK:=md/%TOcIX4y$+j:ra:Zj# 7)J2\Yqp:00*774;-/B))<#O<)1-0>RW7n> yx+3>IXfaSZ((Euj0[
49+x*280sIc'Xp/9#Y<bXp/9# uM0'w)-4:daYZI#=-/B)$#4(3/XMV_3WRbah$)D((EuS074K-/B+*<#OZKP*P!;IP9e![9q+HU%+L
)K  sxZt%vuC9-u/79k<9-u/7\90B7D'BrwI)j-($#=-/b)$#4(3/xmv_3wrBAH$)d((eUs074k-/b+*<#ozkp*p!;ip9E![9Q+hu%+l
)KT /=280SiC'xP[stw6k>D$+G/09$oW9SV7'v2,_]X>iv23_jXCsxZ'_-wr%AH$Rz(39E YX+3>ixF/_jXpsv2'oG;-/b))<#ozk0*p!;up6
eO6%-$:=2')b-W6K>d$+g/09-A[M#tuM0'w)-4:daEZhR4:ra:ZbyW+3av$rD(394Uy=#Oo)1-shRW7ba:Z<y4:3gAV_Jxm:V2'OgK-/B)5<8
oU]7HG7\) :%J$+G/09-a[m#y%k.26\tk mEJ07x(#e/+07%((e%V$#4(>94 Y=#!<) 2'yQ+hu/+$)z((evV074D%%A:zJv4:3Ga/_jXM'v0
'\*2(5D\$#<2>'%2<Sgv:\>Aw79/%MXI>MZ203%+$UqIH/H23_JxcSXz'_-WR%ah$rZ(39e yx+3>IXf/_JxPSV2'Og;-/B))<#OZK0*P!;UP6
eO6%JW+*7S5b#Y%K.2<Sgv:\>Aw7*90b7d'bRWi)V-;E#=-/B)07\O-:XMV_3WRbah$)D((EuS074K-/B+*<#OZKP*P!;IP9e![9q+HU%+L
)C+:\0u$+zk:\0u$+zk:\0u$+zk:\0u$+zk:\0u$+zk:\0u$+zk:\0u$+zk:\0u$+zk:\0u$+zk:\0u$+zk:\0u$+zk:\0u$+G/09-a[m#y%k.2<sGVY
8-a[m#y%k.2<sGV:\>aW79/%mxP[stw6k>D$+G/09-a[m#y%k.2<sGV:\>aW79/%mz
$<sGV:\>aW79/%mxP[stw6k>D$+G/09-a[m#y%k.2<sGV:\>aW79/%mxP[stw+*7s5B8
_6k>D$4tFQm3a.y'yQkK0
:x# 9x/j57*$o96*9jJ9y
yU261ds!=7280S3(2x3Y=j+h/1:l
8-w+*7)p$# 9XU:97'(3/1-pXjq
%/XzT%VUc9-U/7g(mEJIL
!$ 2y.'l
.ends out_load_vref
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_tlvsht1_25
** View name: schematic
************************************
.subckt iob_tlvsht1_25 A V Y1 Y1_vdd Y2 por_b
.prot FREELIB
7=X#769;o9=2<9ZW6b028\TK:da:ZbyWF)1-PI#!o)12\9q+y
3$2E=/yO%x;$+d;:\p $.KV<9C*p!rH:RA:zXUwr%A:$Rz((6
eI57PU:< 2<79W2O.UJM4UP9c*P!RWF) 2\Yq+:00*P[
4tm9oh$.T5q-Xp$+#tuM0'w)-4:da:Z<-WF)1-5h#!o)12\9q+y
3$H$23w8'xP$+#TUm0'W)-4:DA:z<#=-[xmv_jwrBA:l
)\u:<%2E=/yO%xP/9#y<BxZ>mz203%+$uQ3:RA:zBvw+3AJ$Rd(*[xm/_3q
7=u2<9ZW8[X#579K<9[Ow9sv7'V2,_JxP'Xlyx+U>94 yx#!<)10
'#3W8[X;$+ZK:\0U$#kv<x.f5<#M-UXlyx+U>9[fyb#!o)\h$rZ(36
BM8.'v 6
.ends iob_tlvsht1_25
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_term_enable_aux
** View name: schematic
************************************
.subckt iob_lvds_term_enable_aux Term_Enable_0 Term_Enable_1 Term_Enable_2
+lvds<0> lvds_term_bit<0> lvds_term_bit<1> lvds_term_bit<2>
+lvds_term_ovrd por_b_vcc tstateb vcc Term_Enable_F0
+lvds_term_bit_F<0>
.prot FREELIB
7Wip39HS *6Os7%YobD'T8kS_')2<SgW+*7h7j# 9x h57s);OD(810=9C%26M'S[C-A[[
a#0-D'3+Z* [Dj0[
4#F\iUD6s);O 23+DKqx23>6m+V9-A[7\) $u280sp32X'T8kS9==/30/+:].3.-/Y%KZ
$hm0s R-ud%3sCiz
Fh,9=<Fd't8Ku:R- /6S);odc7P#y%kxZt%3PW9[(j>jw *6o.0\$[R2g77*V;c3g<sGq
$W./.%%Y<f7h.bRQ
7Wip39HS *6OP7%YobD'T8kSTh1Q$+g/:=2'*<# 9xHY$%<5uC2zg-%)qj126M'S[C-A[[
a#0-D'3+Z* [Dj0[
4#PS 280spc/XzT%y,:r- /6s);ODC5p#O!C[;8Y-Wi=ahZ<J+:r[*P!Jj(6
:z 4\d9Y0*77Xt-[B+Px#=2)1-PIJW2j8za0'K-[Z
Fh<Y4:R- /6S);od/h%Muv9IPv9/29yMgW+';:=2'*e#o!c[;8y-wI=AHz<j+Y
8IZYX++W/xZ 4\D9y0*77xT-[b+pX#=2)1-pijw2J8ZA0'k-[z
Fh<34:R- /6S);od/h%/[_/)23+dkQX23>6ty;%xZt%]4:38g81\;C9CZY=+4(/z
$3#Q+h/*:$#:#+N23/_3wI]AHz<j+:R$*p!jJ(9$\h#2);BAHl
)C43sxZt%3u>9[(jerwf\pu.%<5Uc_cpP#o!c[;8y-wI=AHz<j+:R[*p!jJ(6
:z 4\d9Y0*77Xt-[B+Px#=2)1-PIJW2j8za0'K-[Z
Fh<;3:R- /6S);od/h%M+v9IPv9/29yMgW+';:=2'7X3w7wdZG#du:D[*7!r+(6
:l8_Jx($128dc Z*6Uy=#M2) -0xJWF]a:Zxu+:]_78O<5<) 0
'4R3)9ipV9/29YmGX4s13+Xl<YZS *6O.M95o9[(J=JI:38G81\;c9czy=+4(/Z
$3#Q+h/*:$#:#+N23/_3wI]AHz<j+:R$*p!jJ(9$\h#2);BAHl
)C4M:xZt%33C9[(j=jP:R- /6S);odcpP#o!c[;8y-wI=AHz<j+:R[*p!jJ(6
:z 4\d9Y0*77Xt-[B+Px#=2)1-PIJW2j8za0'K-[Z
Fh<;4:=2'7BYw+*7HpH#=6%0gj0'9QH q$)Cs+5[ 57x -[b+pX#=+)1-pijq
$=_78O<5<) 2,.qpHI1:$,*((E1tP7*[!=g(:9qpy
38+*H#2<X='t-#=6%0cpP#=6%0gj0'9Q-8'#B1w+*7H5X#o!c[;8y;wI]AJ$,*((e1Tp[
atTW[!T8Z(39czyb#=+)1-PIJW+j8za0'K-[Z
Fh<-L:X0'G%<F:R- /wje:R- /6S);od/h%/[_/)280SPC:xFh6\$+%U2,.QuY
8IiYX++W/xi 4\D9y0*77x -'xL8_jX($128DC z*6uY=8
o!iUT$%z2'X2/$,9;<H1q$,9;<c7(:\/F!XrH%7\) [%V$)Cs+5[ S7xT-'xL6_jX($10
o.:#+n23/_3Wi=aj$,\((E1tP7\[!=g(:9qpy
38+SB#2<X='t-#=6%0cpP#=6%0gj0'9Q-8'#X1w+*7HSB#o!c[;8y;wI]AJ$,*((e1Tp[
atTW[!T8Z(39czyb#=+)1-PIJW+j8za0'K-[Z
-\#*50Xz
.ends iob_lvds_term_enable_aux
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_stds_lvlsh
** View name: schematic
************************************
.subckt iob_lvds_stds_lvlsh cbit_diff15_vccaux cbit_diff15_vcco
+cbit_diff18_vccaux cbit_diff18_vcco cbit_ext_vccaux cbit_ext_vcco
+cbit_ldt_vccaux cbit_ldt_vcco lvds_m<6> lvds_m<5> lvds_m<4>
+lvds_m<3> lvds_m<2> lvds_m<1> por_b_vccaux por_b_vcco vccaux vcco
.prot FREELIB
7Wip39HSF%7G<Sgv:r- /6k1c+Xp[STW+*7hPh# 9x :s7gf!xDlV%/Y%K.0
o.T5q-Dp[STW!M3GJ,9Kax Gsj8
o!R-L///;!J_H069/%mxL<yzsUH/q$+G/09[(j=3P:=2'7=jw%-8'.yC[t[vg<sGVY
8$D:60s6k>D$4tFQXIP//SPQuU0
'4%YFb;GT)sS6K>d$,9;<CmC7p#Y%K.280sp(SXzT%3+w9>/H%/)7xDp[STQ
$].3.-/Y%K.2HM0S r-UD%3SmUZ
Fh,9=<Fdo969/%mxL<yzsUHjq$+G/09[(jeUw+*7e*7\) (f26m's[c-a[m8
_!m3gj,9kAX gSJ8
o!R-L///;!J_H*69/%mxL<yzsUHUq$+G/09[(j<3w+*7+57GF!Xd hD:PEc-a[m8
_2m6gx69/%mx7W-/2f\0>j=/3M6
e73+%KaCm+.+g/09ipV9/9_I)2<Sgv:=2'0I# 9xVv$#<2P2XIw8/fq\>Aw[
a#0-D'3+Z* [D)s[
4#F\iUD6%; C-A[1$O:r- /6k1c+Xp[S[!79[(J=Jh:=2'(x#/[W7G3YsS6K>;\)8
_2m6gx69/%54F$4tFQXIP//SPQ'v0
'4%YFb;GV4:[3ID;\)#=6%0G>WVE:\>Agr4W+*7t07\) $J2[-c2q%8\ =RS6K>;\)8
_2m6gx69/%54F$4tFQXIP//SPQ'v0
'4%YFb;G>$/$R3Xl<YZSuhJQ$+g/'0e280shm9[(J=J+:=2'7x3W2M6GX69/%54fL
TCV[c7L<9h23c%+l
)C=6R0>.yC[t[hgGR4wf\pu.\M3v9-a[1$o:=2'*=# 9XhJ$s0# cp7 D3LQ\>aGR4q
$].3.-/Y%K=M'7cv[C7l<9H23C%+L
)C=6R0>.042Q\>aGR4wf\pu.\MPv9-a[1$o:=2'*i# 9XhV$s0# c2Fj69/%54Fl
T*V;c3g<sG$r3x7W-/2f\0>j=/up6
e73+%KaCm+.1$O:r- /6k1P+Xp[S[!79[(J=-U:=2'7=yW+*7h5j#t0YD/.+g/'0e0
o4Tfqxip//spq'V0
Zr\t;M70
.ends iob_lvds_stds_lvlsh
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_tinv_33xxx
** View name: schematic
************************************
.subckt xi_tinv_33xxx A Y psup nsup
.prot FREELIB
H]=3g\#M+)123#q+:=_78O<5<) 2,.q+:r$*P7*[!=g(:9qpy
3[2E7[w+B4i$#z!29[oW9SV7uU2,_x :RAL87\o-=_78o<5<94 YX#!<)10
'.#::5XI/r*W2b4I$.kv<x.fsj#M-d$23_%t:=e*6dc Z*6U$rD((94Uyx8
Xr=$3W%8
.ends xi_tinv_33xxx
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_invxxx
** View name: schematic
************************************
.subckt xi_invxxx A Y psup nsup
.prot FREELIB
H]=3g\#M2)123.q+:]_78O<5<) 2,#q+:r[*P7\[!=g(:9qpy
3$H$2#$:]0m67*kr]xi>mzwI)Ci$,Q=29[FY.:#+N23/7$;-! 2\9QPY
3[H$2#$:=0m67\kr]xZ>mzwI)CZ$,Q=+9[FY#:#+N23/7$;-! 2\9QPY
e4Z68t2Y
.ends xi_invxxx
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_lvlshf
** View name: schematic
************************************
.subckt iob_lvds_lvlshf in loc_gnd loc_vcc loc_vdd out por_b
.prot FREELIB
7O$'77\) C1hPI#=0KD!8Y#=0KDp[S#=0KDp[S#tuM0'w)-4:dahP7%((E%S$rD((94Uyx8
oU]7:$#<2E[xiW8/F:R.a.+G/:R.a.+G/:]MD/%toCix4Y=++:RA:zBvwr%A:$Rz((6
eIP7\) CHS$#<2e[XlwS/Y%KXlwS/Y%KXI>MZ203%+$Uqp(E/+$,q+H'/28)qU:0P*==#!<) 0
'.-U:M4'$4\f:=2'.>VWFM>G<SgW2O.UJM4UP9c*7x+IP9i*P!-I:=e*57$;-! 2\9qpy
3$J$#<2E[x787\) ch:$,t/Q\>a$.KV<X.F5<#m-$bHS7%((e%s$Rd((94uYX8
o2'1e$#<2Qs1280SiE9ID[69/%9ID[69/%9$oW9SV7'v2,_UX3uxLYX+u>94 YX#!<)10
'.uW+*7G7xVW+*7S*7%v%C-A[7%v%C-A[7*90b7d'bRWi)/-s>#=-/Bj)7$;-/XM/_JQ
7]J280sl)9[(J>3WFM>G<SgWFM>G<SgW2O.UJM4UP9c*)!-p:ra:ZbVWR%a:$rZ((6
eI07\) :H2H#0W+*7v97%v%C-A[7*90b7d'bRWi)/-5=#=-/Bj)7$;-/XM/_JQ
7=1280sIe98zX7%v%CgzV7%v%CgzV7\90b7d'bRWi) +Z$3WF)1-5h#!o)12\9q+y
38)p7C :w[/$,t/Q\p $,t/QN[ $)Cs!=-F')#m2)/-*Xjwf]A:zXU+:]_78o<5<) 0
oU\(cE/:P7% -/B:(x# TW[!T8Z(36
ezs7T! 9[(J>3WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*P!;l:ra:Zb5WR%a:$rZ((6
eO8%JW+*7v77c :r.A.O\;:r.A.O\;:=md/%TOcIX4yb+h#9i*P!-I:=e*07$;-/XM/_JQ
7O['77\) S 2H##=0KD!8Y#=0KD!8Y# uM0'w)-4:dajZI#=-/Bj)7$;-/XM/_JQ
7=*2wrsW+*7G7xVWFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7j+4:ra:ZbVWR%a:$rZ((6
ez)7T! 9[(JhyW+*7GP=Jj:r.A.O\;:=md/%TOcIX4yj+439i*P!-I:0P*P7$K-/Z
F8=YL:=2'*=##+9ID[62 O9ID[62 O9[oW9SV7'v2,_jXp9I*p!-i:=E*;7$;-/xm/_jq
7=J280sS3//2H##=0KD!8Y#=0KD!8Y# uM0'w)-4:davZh3WF)1-5h#!o)12\9q+y
3[+$#<2>sxZt%YP:R.a.o\;:R.a.o\;:=MD/%toCix4YX+4:RA:zBvwr%A:$Rz((6
BM8.'v 6
.ends iob_lvds_lvlshf
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_lvlshf_data
** View name: schematic
************************************
.subckt iob_lvds_lvlshf_data in loc_gnd loc_vcc loc_vdd out por_b
.prot FREELIB
7=V23MgSZ=P23MgSZ=P23MgSZ=P23MgSZ=P28\TK Mej07X(3E/h$,q+H'/2\Yq+:00*P[
4 >9.MJ7\) :H280sS(2*23MgSZ=P28\TK Mej07X(mEVh$,q+H'/2\Yq+:00*P[
4 c9[(J6]+:W[23MgSZ=P23MgSZ=P28\TK Mej07X(eE/h$,q+H'/2\Yq+:00*P[
4 3SH280sl398z$,T/qn[ $,T/qn[ $#kv<x.f5<#M-/B+$,q+H'/28)q,:0P*P7$K-/Z
F8i#VrXxZt%/,(9ID[62 O9ID[62 O9[oW9SV7'v2,_33hixLYX+u>94 YX#!<)10
'\\2(9[(J>3W!=XlwS/d+%XlwS/d+%Xz>MZ203%+$UqUH2F23_Jxc:Xz'_RWR%a:$rZ((6
eO8%3W+*7v77c :r.A.O\;:r.A.O\;:=md/%TOcIX4yb+j:ra:ZbVWR%a:$rZ((6
ez97\) CF:$#<2>SXlwS/d+%XlwS/d+%Xz>MZ203%+$Uq+HUH23_Jxc:XMV_JWRba:L
)CPE/x787C [9ID[69;O9ID[62 O9E7.4\y73E2,.Qihs1:$,*((e1Tp7*[!=G(:9QPY
8CZYB+i(/xL8_jX($128DC z*6uY=8
o+/xZt%vL:w[/$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[v-9=#=-/bJ)7$;-/xm/_jq
7O$'77\) C1Y(7%v%CgzV7%v%C-A[7%v%C-A[7*90b7d'bRWi) :$,q+H'/2\Yq+:00*P[
4t(9[(J63U(9[(J>3WFM>G<SgWFM>G<SgW2O.UJM4UP9c*7x+IP9i*P!-I:=e*57$;-! 2\9qpy
3MijX# 9X/V$.t5Q-xLWs/y%kxLWs/y%kxi>mz203%+$uQPh/xLYX+u>94 YX#!<)10
'.-+#9[(J63pc9.MJ7%v%C-A[7%v%C-A[7*90b7d'bRWi)*-7j#=-/Bj)7$;-/XM/_JQ
7]V280sIe98zX7\) SJ23MgS6K>26\TK Mej07X(>E%h$,q+H'/2\Yq+:00*P[
4t)9[(J>5W+*7v77%v%C-A[7%v%C-A[7*90b7d'bRWi)/-5=#=-/Bj)7$;-/XM/_JQ
7]%j$M$2:W[/$#<2q[%:$,T/q\>A$.kv<x.f5<#M-[1-)<#=-/Bj)7\O-'XMV_.p:00*7[
4tc[XzT%yp:W[280sS3[%23MgS6K>26\TK Mej07X(wE )$,q+H'/2\Yq+:00*P[
4tw9[(J6]+:=2')>#=0KDp[S#=0KDp[S#tuM0'w)-4:daSZjyWF)1-5h#!o)12\9q+y
e4Z68t2Y
.ends iob_lvds_lvlshf_data
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_term_enable
** View name: schematic
************************************
.subckt iob_lvds_term_enable Term_Enable_0 Term_Enable_1 Term_Enable_2
+lvds<0> lvds_term_bit<0> lvds_term_bit<1> lvds_term_bit<2>
+lvds_term_ovrd por_b_vcc tstateb vcc Term_Enable_F0
+lvds_term_bit_F<0>
.prot FREELIB
7Wip39HS *6Os7%YobD'T8kS_')2<SgW+*7h7j# 9x h57s);OD(810=9C%26M'S[C-A[[
a#0-D'3+Z* [D)s[
4#F\iUD6s);O 23+DKqx23>6m+V9-A[7\) $u280sp32X'T8kS9==/30/+:].3.-/Y%KZ
$hm0s R-ud%3sMuz
Fh,9=<Fd't8Ku:R- /6S);odc7P#y%kxZt%3PW9[(j>jw *6o.0\$[R2g77*V;c3g<sGq
$W./.%%Y<f7h.j;Q
7Wip39HS *6OP7%YobD'T8kSTh1Q$+g/:=2'*<# 9xHY$%<5uC2zg-%)qj126M'S[C-A[[
a#0-D'3+Z* [D)s[
4#PS 280spc/XzT%y,:r- /6s);ODC5p#O!C[;8Y-Wi=ahZ<J+:r[*P!Jj(6
:z 4\d9Y0*77Xt-[B+Px#=2)1-PIJW2j8za0'K-[Z
Fh<Y4:R- /6S);od/h%Muv9IPv9/29yMgW+';:=2'*e#o!c[;8y-wI=AHz<j+Y
8IZYX++W/xZ 4\D9y0*77xT-[b+pX#=2)1-pijw2J8ZA0'k-[z
Fh<34:R- /6S);od/h%/[_/)23+dkQX23>6ty;%xZt%]4:38g81\;C9CZY=+4(/z
$3#Q+h/*:$#:#+N23/_3wI]AHz<j+:R$*p!jJ(9$\h#2);BAHl
)C43sxZt%3u>9[(jerwf\pu.%<5Uc_cpP#o!c[;8y-wI=AHz<j+:R[*p!jJ(6
:z 4\d9Y0*77Xt-[B+Px#=2)1-PIJW2j8za0'K-[Z
Fh<;3:R- /6S);od/h%M+v9IPv9/29yMgW+';:=2'7X3w7wdZG#du:D[*7!r+(6
:l8_Jx($128dc Z*6Uy=#M2) -0xJWF]a:Zxu+:]_78O<5<) 0
'4R3)9ipV9/29YmGX4s13+Xl<YZS *6O.M95o9[(J=JI:38G81\;c9czy=+4(/Z
$3#Q+h/*:$#:#+N23/_3wI]AHz<j+:R$*p!jJ(9$\h#2);BAHl
)C4M:xZt%33C9[(j=jP:R- /6S);odcpP#o!c[;8y-wI=AHz<j+:R[*p!jJ(6
:z 4\d9Y0*77Xt-[B+Px#=2)1-PIJW2j8za0'K-[Z
Fh<;4:=2'7BYw+*7HpH#=6%0gj0'9QH q$)Cs+5[ 57x -[b+pX#=+)1-pijq
$=_78O<5<) 2,.qpHI1:$,*((E1tP7*[!=g(:9qpy
38+*H#2<X='t-#=6%0cpP#=6%0gj0'9Q-8'#B1w+*7H5X#o!c[;8y;wI]AJ$,*((e1Tp[
atTW[!T8Z(39czyb#=+)1-PIJW+j8za0'K-[Z
Fh<-L:X0'G%<F:R- /wje:R- /6S);od/h%/[_/)280SPC:xFh6\$+%U2,.QuY
8IiYX++W/xi 4\D9y0*77x -'xL8_jX($128DC z*6uY=8
o!iUT$%z2'X2/$,9;<H1q$,9;<c7(:\/F!XrH%7\) [%V$)Cs+5[ S7xT-'xL6_jX($10
o.:#+n23/_3Wi=aj$,\((E1tP7\[!=g(:9qpy
38+SB#2<X='t-#=6%0cpP#=6%0gj0'9Q-8'#X1w+*7HSB#o!c[;8y;wI]AJ$,*((e1Tp[
atTW[!T8Z(39czyb#=+)1-PIJW+j8za0'K-[Z
-\#*50Xz
.ends iob_lvds_term_enable
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_term_plyr
** View name: schematic
************************************
.subckt iob_lvds_term_plyr Rout_pn1 Rout_pn2 Rvos_pn1 Rvos_pn2
.prot FREELIB
7Y12:+TKq][j$#<2wUXp/9#t8b33T9#M-$Xlyb+4>IXO/_3WuYah$\g(3907a8q+y
36:GX# 9X*)$#<2EixP/9#T8B33t9#m-[/23_-Xpi12>9QP:o6*77K/-[xuho'((6
e3P13W+*7ts7\) SV2<9ZW2<0/:0ZWi) S$,qUHIV:$\Z(39m3y=#9%) 2/425-/Z
F:X[u:=2'(J# 9Xh+$+zk:]Oux8<k:DAH)7%(Cev+p7Kk-[xo:_3wUkAH$9CD;)10
'8J$m9[(JI;W+*7v079K<9$#/-')<9c*7h#=-'B+0x#9<) 2>8qp:O>*77Z#ZYa:L
)'+[uxZt%Y4:y.mj6* 39-u/7*:<-6(/7x(3:xLYB+4p/xo/_3wUyAH$\G(3907A8Q+Y
36:xB# 9Xh+$8t! c$Z779k<9$#/-')<9C*7H#=-'b+0X#9<) 2>8QP:o>*77z#zyA:l
)'+[[xZt%Y4:y.mj6* 39-u/7*:<-6(/7x(3:xLYB+4p/xo/_3wUyAH$\G(3907A8Q+Y
36:xX# 9Xh+$8t! c$Z779k<9$#/-')<9C*7H#=-'b+0X#9<) 2>8QP:o>*77z#zyA:l
)'P[uxZt%3u>96D\%/T+'xP/9#T8B33t9#m-[/23_-Xpi12>9QP:o6*77K/-[xuho'((6
e37--W+*7h5h#5007G6#-W6b0262Zf;*02,_3I:rajZ<R+:O0*77k5-[XO[_3W<Wg3yx8
o;[3H$#<23'/2:m$2Q][J$+zk:]Oux8<k:DAH)7%(Cev+p7Kk-[xo:_3wUkAH$9CD;)10
'83f(9[(J=-I:Y.MJ6* c9-U/7*:<-6(/7X(3:Xlyb+4P/XO/_3WuYah$\g(3907a8q+y
36H$89V<c$Z77\) [ J$+zk:]Oux8<k:DAT$,Quhi/+$\z(39M3Y=#9%) 2/425-/z
F:=[+:=2'7=-w+*7H5H#y<BxiE9059Bx4Y=vwf)%-0<jwUBAH$\'(39MaY=#k!N6*p[
4535 280sp3'XzT%3U>9-U/7*:<-6(/7X(3:Xlyb+4P/XO/_3WuYah$\g(3907a8q+y
36HGB# 9X H57\) [%s$+zk:]Oux8<k:DAH)7%(Cev+p7Kk-[xo:_3wUkAH$9CD;)10
'83$m9[(J=3U:=2'7bVW6b0262Zf;*02,_3I:rajZ<R+:O0*77k5-[XO[_3W<Wg3yx8
Xr=$3W%8
.ends iob_lvds_term_plyr
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_tnor3
** View name: schematic
************************************
.subckt xi_tnor3 A B C Y psup
.prot FREELIB
H]=3g\#M+Ua:$,\3-/X48j/[!=g(:9qp:d[jyx#=+'a:$U\Uqj8za0'K-[X48=q+:r[hyx8
_I= g 4\D9y0*77xTC)123.-((9Ci56:#+N23/_3wI] *p7%T3)12,.3stw[!t8z(36
:46jq+:r$)yx#M2UD\H#2);bahL
)\3:<xa$+zk:\0u$#KV<X.F5<#m-D[)$,Q=+uxZ'_x Mc_78o<5<94 Y=#!<)10
'#-W8932<9ZW6b028\TK Mej07X(i=%23_% c9[fyU\Uqj8za0'K:0P*77$K-[Z
F8=#::5xP/9#y<BxZ>mz203%+$uQm+[xLY,\P:=E*,#3stw[!t8zwr%A:$Rz(36
eI57\) UF2X7\) :%269$t:]md/%TOcIX4yU*U:ral6b# 7)cI56:#+n23/7$;-[XM/_3Q
7] 2e7[W+*7);7*KR]XI>MZ203%+$UqM2[Xly,*p:=e*,.3STW[!T8ZWR%a:$rZ(36
eIs7\) :%2[7*KR]XI/r*W2O.UJM4UP9c*,.;WF)iIs7\O-d$).dc Z*6U$rD(394Uyx8
Xr=$3W%8
.ends xi_tnor3
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_tnor3_33xxx
** View name: schematic
************************************
.subckt iob_tnor3_33xxx A B C Y nsup psup
.prot FREELIB
H]=3g\#M2UahZh#=2Ua:ZbyWi]uG 4\d9Y0*77Xtc) -)7%tc)1-5>#M2'D\H#2);bahL
TxT3) -)7%T3)1-5>#m2[d\h#2);BAH$u\3-[xL8JQ+h:x48J/[!=G(:9QP:D[JY=8
_f=%*p!vwI=%g 4\D9y0*77x 3) 23#3((e/2,#3stw[!t8z(36
eO6%JW+*7))7gW2b4I$.Z!29$Ow9sv7Uu2,_Xtm9i*3.;W+3a46j/[!=g(:9#!o) 2\9q+y
3$J$#<2Msx/$#<2M:xi/R*w2o.ujm43M9C*,.-wf)Ii57\o-D$J.DC z*6u$Rd(394uYX8
o2[x#$1# 9XUV$.z!29$oW9SV7uU2,_xT39I*3.3w+3A46=/[!=G(:9#!O)12\9QPY
3MZjX#::kxZ/R*w+B4i$#KV<X.FSJ#m-D[)$,Q=+uxZ'_x Mc_78o<5<94 Y=#!<)10
'#-W893289$t:=0M67\90b7d'j;Wi)cz57%(F=%28)qM+'D\H#2);bXMV_3WRba:L
)\P:<x;$#z!29[u\.# Um0'W);3:DA48=#=-R[H$#4(I= g 4\D9y02\yQP:00*p[
+!+]6dJ[
.ends iob_tnor3_33xxx
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_tnand2_33xxx
** View name: schematic
************************************
.subckt xi_tnand2_33xxx A B Y psup nsup
.prot FREELIB
H]=3g\#M2'a:$,*U-/X46b/[!=g(:9qp:d$hyx#=2[a:$U*pqj8za0'K-[X48bq+:r[jyx8
_I=%g 4\D9y0*77x 3)123#3((9CZ76:#+N23/_3q
7]%2e70W2b4I$.Z!29$Ow9sv7Uu2,_Xtc9i*3.-W+3a46b/[!=g(:9#!o) 2\9q+y
3$H$2#$:]0m67*kr]xi>mz203U)$uQm2[xLY,*P:=E*,.3stw[!t8zwr%AH$Rz((6
ez57\) UH2X7\KR]Xz/r*W+O.UJM43m9c*,#-WF)iz57\O-d[j.dc Z*6U$rD(394Uyx8
o+[x#$1# 9XUV$#z!29[oW9SV7uU2,_x 39I*3#3w+3A48=/[!=G(:9#!O)12\9QPY
e4Z68t2Y
.ends xi_tnand2_33xxx
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_tnor2_33xxx
** View name: schematic
************************************
.subckt xi_tnor2_33xxx A B Y psup nsup
.prot FREELIB
H]=3g\#M+[a:$,\p-/X48=/[!=g(:9qp:d[jyx#=+'a:$U\Uqj8za0'K-[X46=q+:r$hyx8
_I] g 4\D9y0*77xTC)123.-((9Ci56:#+N23/_3q
7= 2e7[W+b4I$#Z!29[Ow9sv7Uu2,_X 39i*3#3W+3a48=/[!=g(:9#!o) 2\9q+y
3[J$2#F:=0m67\kr]xZ>mz203U)$uQm+'xLY,\u:=E*,#-stw[!t8zwr%AH$Rz((6
eI77PW'9[(Jj]W2b4I$.kv<x.fsj#M-d$h$,q=2[Xz'_Xt3C_78O<5<94 yx#!<) 0
'.-W+*7);70W2b4I$.Z!29$Ow9sv7Uu2,_Xtc9i*3.-W+3a46b/[!=g(:9#!o) 2\9q+y
e4Z68t2Y
.ends xi_tnor2_33xxx
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_ldtmux33
** View name: schematic
************************************
.subckt iob_lvds_ldtmux33 n_ctrl_ldtn n_ctrl_ldtp nbias nbias_ldt
+p_ctrl_ldtn p_ctrl_ldtp pbias pbias_ldtb vcco
.prot FREELIB
7]D'a6*f!50G3YsW2-8;/6%; -XI.Ss5FCi J.#t[W=U$+g/09$Ow9sv7Uu2,_RWF)1-5>#!o)12\9q+y
3$o\)G$2/xP[stw2-8;/6%; -xP[stw6k>D$.KV<X.FSJ#m-'bJ$,Qih[f28)Qu(94 Y33wrBAHl
)*s NdZx4[kQRp'$#0#'BdLv%#TQk7336%; =xZx4[k:\>aW7*90B7D'J;wI)v23_jXCsxmv_jwrBA:l
)*s20dix4[kQRp'$.0#'BdLv%0w+c>':,/=OX$2<sGV:\>aW7*90B7D'J;wI) 23_jXCsxmv_jwrBA:l
)\s Ndix4[kQRp'$.0#'BdLv%0w+c>':,/=OX$26-C$<9-u/7\90B7D'J;wI)v23_jX>94 YX#!<)10
'#k!7K=IP79K<9[/H1ZSF%72<9ZW6b028\TK Me)s7X(cE Y$,qIH'V28)qU(94 y33WRbahL
)\TOc[/h1zsf%728-C$<cI j7*s%X6L.,d2+9-u/79k<9[oW9SV7uU2,_3wf)1-)7$;-/xm/_jq
7=D'a6\f!50G3YsW+-8;/6%; 9[G[%'=qrP'87\f!502<9ZW+O.UJM43m9c*07%((E/2\Yq+:00*P[
+!+]6dJ[
.ends iob_lvds_ldtmux33
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_extmux33
** View name: schematic
************************************
.subckt iob_lvds_extmux33 enable enable_b ext extb nbias nbias_ext pbias
+pbias_gen vcco
.prot FREELIB
7]$M..0#'bD!T##t[W=U.O< :*[;X,<W6K>d$+g/09$Ow9sv7Uu2,_3WF)1-5>#!o)12\9q+y
3$o\)G$2/xP[stw2-8;/62)+9-a[m#y%k.26\tk mE)S7x(Ce%23_vX3(xZ'_-+:0p*==#!<) 0
'./2ZC$/H1ZSZ*[26-c$<Cg(87< '-i(.-#t[W=U$+g/09$Ow9sv7Uu2,_RWF)1-5>#!o)12\9q+y
3$gjo/ [w=u.042:=37G9/)7Xx('%0w+-8;/79/%mxi>mz203U)$uQ4:RA:zBYwr%A:$Rz((6
ez6Y/ [W=U.042:=37g9/)7xX('%0W6b02<9ZW+O.UJM43m9c*77%((E/2\Yq+:00*P[
4 u0eAg.JW6b028-c$<C2fJ79K<9-U/7\90b7d'j;Wi)%-7$#=-:Bj07\O-'12\Yq6394Uy=8
o+c7!..0#'Bd!t##T[w=u.o< :*[;x,<w2-8;/79k<9[oW9SV7uU2,_rwf)1-)7$;-/xm/_jq
7=D'a6\f!50GT)sW+-8;/6<O 92fJ7\f!502<9ZW+O.UJM43m9c*07%((E/2\Yq+:00*P[
+!+]6dJ[
.ends iob_lvds_extmux33
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_nmux33
** View name: schematic
************************************
.subckt iob_lvds_nmux33 enable enable_b nbias nbias_gen vcco
.prot FREELIB
7=mM'S[t(9-U/7\f!50Ga0\W6b02<9ZW+O.UJM43m9c*5!3h:raSZbRW+3ajP7$;-! 2\9qpy
3[g6y/ [w=u.o< :=37G9/D9=x(810=9c32<9zw6B028\tk mE)S7x(39I*p!vwr%A:$Rz((6
ez.%2S+-8;/62)+9[/H1ZSZ*[2T#[fF*XzX4[K:\0U$#kv<x.fsj#M-IB:$,q+H:XMV_JWRba:L
)*s NdZx4[kQN2Z$#0#'Bd!t##)+53Lt60w+-8;/79/%mxi>mz203U)$uQ4h/xLYX+uE94 YX#!<)10
Zr\t;M70
.ends iob_lvds_nmux33
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_bias_mux
** View name: schematic
************************************
.subckt iob_lvds_bias_mux cbit_diff15_vcco cbit_diff18_vcco cbit_ext_vcco
+cbit_ldt_vcco enable_vcco enableb_vcco nbias nbias_ext nbias_gen
+nbias_ldt1 nbias_ldt2 pbias pbias_gen pbias_ldt1b_gen
+pbias_ldt2b_gen vcco
.prot FREELIB
7W[d:j/=oxDh063l:K37J6D#Tj +.+g/09>/H%/;!j_h*69/%MXAX4sSF%7G<Sgvy
8[D:6%; c +.=Yw6B02<sGV:w./.%\V;ud)S)4o:D$)Y=+i(/xL6JQ+h'h:l
TxTMc_78o<5<) 2,.-(3e/:p7%TC)1-5>jwI]%g 4\D9y0*77xT3) -)Xjq
$r$hyx+Ue/X46=/[!=g(:9qp:d[)y=#=+Ua:ZhJ+:d[).dc Z*6Uy=#M+'ahL
T% C)1-)XjwI=%g 4\D9y0*77x 3) 23#3((e/:p7x 3c_78o<5<) 0
'4\$+%DlV%0S9=X(810=9C-A[M#/[W7G3Ysfq\>Aw7< 2Ci J=0S[9-A[M#Y<bZ
$'4/2+5[ 56;373E2,.-(3e/:p7%TC)1-5>jwI]%g 4\D9y0*77xT3) -)Xjq
$r$hyx+Ue/X46=/[!=g(:9qp:d[jy=+I(/Xl8bq+H:1:$U\Uqj8za0'K-[Z
$,#3(3e/:p7% 3)1-)XjwI= g 4\D9y0*7[
4#+5[ .,D2q*e'$0\$[r2G<Sgv:K37J6%; C2fJ69/%MX(8#/)7xDlV%/f:\>Aw79K<6
:fH6s '=Pj.j;O73X46bqpH:1:$,*U-/Bj*x#M2'D\H#2);bah$U*p-[BSPx8
_f] *p!-L(9Ci76:#+N23/_3wI=%*7!v+(9IZ5_jX>/12,#-stw[!t8z(36
:48=qpH:1:$,\p-/BSPx#M+[D\H#2);bahL
)C '=pJ.,d2Cc2Z67< '-I(.+G/09[D:6%; c +.=Yw9=$g3ySu[c32<sGV:\0ul
T4#QX[;8y-sMuEF'7xTC) -)Xjwf]%*p!-L(9Ci56:#+N23/_3wI] *7!v+(6
:l6=q+H'H:$U*pqj8za0'K-[X48bqpH:1:$,\U-/BSPx#M+'D\H#2);bahL
Tx 3) -)Xjwf= *p!v+(9CZ76:#+N23/_3q
7W[;8Y-SF%7j.0\ :*[;X,<S6K>d$M'SF%7G7</pe92z86%; 'D/$+g/09-U/[
aO!C7zg#DUqUuf')#M2'ahZhJ+:r$jyx+Ue/X46b/[!=g(:9qp:d$hy=+I(/Z
$3.3((e%Vp7xT3c_78o<5<) 2,#-(3e/:p7% C)1-)XjwI=%g 4\D9y0*7[
aM+[ahZhJ+:r[hyx+I(/X48=/[!=g(:9qpy
38Lv%/)+92ZG-%)Q\>aW7GF!XdLv%/y%k.2t#\sf%7H.-#y%k.2<9zw7wd'81\;CcU)')4q
$d$jy=+I(/Xl6bq+H'H:$U*Uqj8za0'K-[X46=qpH:1:$,*p-/Bj*x8
_I] g 4\D9y0*77x C) -)Xjwf=%*p!v+(9CZ56:#+N23/_3wI= *7!v+(6
:l8=q+H:1:$U\pqj8za0'K-[Z
Fh,d2[9>/h%/=OXdP[stw%-8'.,d2[c-a[m#y%k.2<9zw7wd'h#9sMuEF'7x -[z
$3#Q+h:1:$#:#+N23/_3wI]AHzHj+:R$*p!-L(9$\h#2);BAHl
)C=OX%gt#*w9=$g3ySu[c32t#*sf%7Jx79/%mxP/9#o!c778+/3M3EF$u\(39IZYX+i(/z
$8DC z*6uY=#m2) -)Xjwf]A:zBY+:]_78o<5<) 0
'4%; 'D(8##)+=DlV%-S[92z86%; 'Xp[STW6b02'4/2!=-Gsj4O79czy=#=+)1-)xJQ
$=_78O<5<) 2,.qpH:1:$,*((E%vP7*[!=g(:9qpy
38TSJ#/[w7g3ySs937gx69/%mxax4Ssf%7gt)Ss6k>D$+G/09-u/74#QX8Z<6;373E2,#QPY
8IZYX+i(/xZ 4\D9y0*77xT-[bspX#=2)1-5>jw2J8ZA0'k-[z
Fh,d2Q*E'.-#)+=d('%/=OXd/$0\ Q*E'.,d2:\>aW79k<9E7.%C 6cU)')4wI=AHl
T% -/bspX# tw[!t8z(39CiY=+i(/xL6_jXCs126DC z*6uY=8
o!=-g3ySs3idH*7\V;cI j634Q[h2W8/=OXdH063L:\>aW79k<9E7.%C 6cU)')4wI=AHl
T% -/bspX# tw[!t8z(39CiY=+i(/xL6_jXCs126DC z*6uY=8
o!Rp'x6< Q-x(8./=OX /.-#)+]dLv%0w6k>D$+zk:38gj4\yQuUF')#m+) 23#Q+h:1:l
T\[!=G(:9QP:D$*7!v+(9IiYX+uE/xi 4\D9y0*7[
4#F%7GT#/f:*[z.,D23C32T#\SF%7h$+g/09-U/74#qx8z<6;373e2,#qp:r[*P!V+(6
:z 4\d9Y0*77Xt-[BSPx#=2)1-5>JW2j8za0'K-[Z
Fh#t5QRp'.042:k37j6%; c-a[m#/[w7gt)Ss6k>D$s0# cI j6<o c3g<sGV:\>aW79k<6
:fH6s 0Y%Gsj4O79cz7_3WF= *P!V+(9cz76:#+n23/_3Wi=%*77% c)1-)xJQ
$d[j.dc Z*6Uy=#M2[ahZhJ+:r$hyx+Ue/X46=/[!=g(:9qp:d$jy=+I(/Z
$3.-((e%Vp7xTCc_78o<5<) 0
'4%; CipV93lq[VG>r4W9=[G3YsU:*[I.,D2c-XzX4[K:=37g9/=ox%2T#\SF%7j.-8
_9=$g3ySu[c326-C$<9$/h1zsf%7Hx62)+9-a[m##0-dL<yzsf%7o\);3Y
3I j\$o:*[Z.,d2392Z66%; -xZx4[k:=37G9/=OX 2t#\sf%7H.-#)+]dLv%3FQ-z
$6-C$<9$/h1zsf%7Jx62)+9-a[m##0-dL<yzsf%7o\);3Y
32Fj\$o:*[;x,<s6k>D$0\$[R2/.+G/092Z86<o cI j7< +c2Fj6%; c328-C$<6
:zX4[Kq*e'$.0#'bXIX4[Kqn2z$+g/098dX6%YobD('%k!7Uu0
'#k!792zg-%)q\>Aw7< '-i(X69/%MXzX4[K:=37g9/d9=Xp[STW!M3G3+DKq=mM'j;Q
H0[I:MsQ
.ends iob_lvds_bias_mux
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_drv_ext5
** View name: schematic
************************************
.subckt iob_lvds_drv_ext5 a_bn1_ext b_an1_ext nbias_ext ncom out pbias_gen
+pcom vcco
.prot FREELIB
7=$MT)sp:M4'$-/$+[D('%#t%Mm2<9ZW+O.UJM4UP9c*9!uWF)1-s7\O-[H2\Yqp:00*774;-/B))<#O<)1-0>RW7n> yx+3>IXfaSZ((Euj0[
4 2% 2wrsW'C3z76<O 9[Aw\#Y<bXz>MZ203%+$UqhH$J23_Jxm9[fy=JWR%ah$rZ(39e yx+3>IXf/_JxPSV2'Og;-/B))<#OZK0*P!;UP6
eI/8gU:]>d>7*f!50Ga0\W6K>d$+g/09$Ow9sv7'V2,_3+HSXlyx+I:=e*07$;-/XM/_JQ
7]03[=#t%Mm26-c$<Cg(879/%MXp[STW2O.UJM4UP9c*7x+l:ra:Zh# 7)V2\Yq+:00*P[
4t0]7U:S3W2K.O$+g/09-A[M#Y%K.26\TK Mej07X(3/Bv$,q+H:Xz'_3U:0P*==#!<) 0
'#Z .M$'77\/0OXp/9#Y<bXp/9# uM0'w)-4:daSZ>VWF)1-)b# 7)F2\Yq+:00*P[
4 <=,h$#gvu9[/H1ZS9372<9ZW6b028\TK Mej07X(>EHS$,q+H:%28)q4:0P*P7$K-/Z
-\#*50Xz
.ends iob_lvds_drv_ext5
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_drvr5
** View name: schematic
************************************
.subckt iob_lvds_drvr5 a_bn1 a_bn1_b a_bn2 a_bn3 b_an1 b_an2 b_an3
+nbias_gen nbias_ldt1 nbias_ldt2 ncom out pbias_gen pbias_ldt1
+pbias_ldt2 pcom vcco
.prot FREELIB
7]$M77T! 9=GX#3S[9$Aw\#Y%K.26\TK Mej07X(PEFE$,q+HUV28)qI:0P*77$K-[XfV_Jxm:V2'9q+HIH+$)2/o)1-shRW7n>Uyx+3cIZ
F6.$V2X 26st9:]>D>7*/0oxP[stw2o.ujm4up9C*0!],:RA:zJrw+3Ay$Rd(394uY=#oO)1-SHrw7BA:z<Y4:3Gav_jXM:v2'oGk-/b)5<8
o+]p)$m$2:5d/8J# %mM2<9zw+o.ujm4up9C*9!UH:RA:zJ# 7)/2\yQP:00*774;-/b))<#o<)1-0>rw7N> YX+3>ixFAsz((eUJ0[
4 2%%2wrsW'C3z57\/0OXp/9# uM0'w)-4:daYZI5WF)1-s7\O-:XMV_3WRbah$)D((EuS074K-/B+*<#OZKP*P!;IP9e![9q+HU%+L
)\TOm$'779k<9-u/7\/0oxP/9# Um0'W)-4:DAyzi5wf)1-S7\o-:xmv_3wrBAH$)d((eUs074k-/b+*<#ozkp*p!;ip9E![9Q+hu%+l
)\TruxD\%#FQ5[)$.GVU9-u/7\90B7D'BrwI)j-(7%((eU28)QH:0p*77$k-[xFv_jXM:v2'9Q+hih+$)2/O)1-SHrw7N>uYX+3Ciz
F8.$V2X 2<9zw6B026st9:\0u$#KV<X.F5<#m-2bT$,Q+huxZ'_vwr%AH$Rz(39E YX+3>ixF/_jXpsv2'oG;-/b))<#ozk0*p!;up6
ez6Y3W0072g60 39[Aw\#Y<bXz>MZ203%+$UqhH$J23_Jxm9[fy$#!o) 2\9qp:3P*P!;IP9eUyx+4eIXfaSD((EuS074d%ba:Zj-4y
3[i\B#VrXx/.1\u:]>D>79k<9[oW9SV7'v2,_5XW9I*p!;w+3Ay$Rd(394uY=#oO)1-SHrw7BA:z<Y4:3Gav_jXM:v2'oGk-/b)5<8
o+]4H$m$2:-d;8=#T%mM2<9zw+o.ujm4up9C*9!Uwf)1-S7\o-[12\yQP:00*774;-/b))<#o<)1-0>rw7N> YX+3>ixFAsz((eUJ0[
4t<Y>j$.gvu9$/H1ZSF%7j$+g/09-A[M#tuM0'w)-4:dahP!yWF)1-)7\O-:XMV_.p:00*7[
4t<Y>)$.gvu9$/H1ZSF%7h$+g/09-A[M#tuM0'w)-4:dahP!yWF)1-)7\O-[%2\Yq6394Uy=8
o2k.o[1*+:\>aW7*/0oxP[stw6k>D$.KV<X.F5<#m-'b)07%(3/xZ'_;wr%A:$Rz((6
eI/8gp:]>d>7*f!50Ga0\W6K>d$+g/09$Ow9sv7'V2,_3+HSXlyx+I:=e*)7$;-! 2\9qpy
3[aW\G$2/xP/9# %mM2<9zw6B028\tk mEJ07x(3efs07%(Eefs$#4(>94 Y33wrBAHl
)\k+4 28st9:=37G9/D9=xP/9#y<BxZ>mz203%+$uQihs/23_jX>'xZ'_-,:0p*p7$k-/z
F89\\M9[aW\# [w=u.,d2C9-u/79k<9[oW9SV7'v2,_vXE:xLYX+iC9[FYB-wr%A577$k-[z
F89\\C9[aW\# [w=u.,d239-u/79k<9[oW9SV7'v2,_vXE:xLYX+iC9[FY=;wr%A:$Rz((6
BM8.'v 6
.ends iob_lvds_drvr5
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_dt2
** View name: schematic
************************************
.subckt iob_lvds_dt2 enableN_0 enableN_1 enableN_2 enableN_F0 enableP_0
+enableP_1 enableP_2 enableP_F0 out_pn1 out_pn2 vcco vos_pn1
+vos_pn2
.prot FREELIB
7O$'P-#Y0bDI8b#)+53lT./+:M4'..\U:\>Aw7*90b7d'bRWi)F-)<RWF)1-5># 7)%2\Yqp:00*774;-/B))<#O<)1-0>RW7n> yx+3>IXfaSZ((Euj0[
492x1;$M$2q][h$0\$[r2I.x#Y0bDI8=#Y%K.26\TK Mej07X(#E/+07%((E%v$#4(c94 y=#!<) 2'Yq+HU/+$)Z((EVv074d%%a:ZjV4:3gA/_Jxm'V0
'\*2c5Xd\%/t+[X(810=9]Dj$+TKq][h$+g/09$Ow9sv7'V2,_]x>IV23_JxcSXz'_yWR%ah$rZ(39e yx+3>IXf/_JxPSV2'Og;-/B))<#OZK0*P!;UP6
eO6%-f:\.U..\U:*[;X,<tq'Xd\%/t+'Xp[STW2O.UJM4UP9c*;!V4P9i*P!-l:=e**7$;-[XM/_3W7%a:ZjV4:30*P!RlP9e![Yq+HU/+$)2/<)1-sbRQ
7O$'7-/v2xXpw9/t+'Xpw9/t+'Xpw9/t+'Xp[STW2O.UJM4UP9c*;!V4P9i*P!-l:=e*57$;-[XM/_3W7%a:ZjV4:30*P!RlP9e![Yq+HU/+$)2/<)1-sbRQ
7O$'7-#Y0bDI8b#)+53lT./p:M4'..\U:\>Aw7*90b7d'bRWi)F-)<RWF)1-5># 7)/2\Yqp:00*774;-/B))<#O<)1-0>RW7n> yx+3>IXfaSZ((Euj0[
492x ;$M$2q][h$0\$[r2I.=#Y0bDI8=#Y%K.26\TK Mej07X(#E/+07%((E%v$#4(>94 y=#!<) 2'Yq+HU/+$)Z((EVv074d%%a:ZjV4:3gA/_Jxm'V0
'\*2(-D\$+TKq][j$0\$[r2I.dJW007G6#-W6K>d$.kv<x.f5<#M-:B:*7%((E%v$#4(c94 y=#!<) 2'Yq+HU/+$)Z((EVv074d%%a:ZjV4:3gA/_Jxm'V0
'\*235Dd6%#Y0bDI8=#Y0bDI8=#Y0bDI8=#Y%K.26\TK Mej07X(#E/+07%((E%v$#4(c94 y=#!<) 2'Yq+HU/+$)Z((EVv074d%%a:ZjV4:3gA/_Jxm'V0
'\*2(5D\$M$2q][h$0\$[r2I.dJW6M0G6#3W6K>d$.kv<x.f5<#M-:B:*7%((E%v$#4(c94 y=#!<) 2'Yq+HU/+$)Z((EVv074d%%a:ZjV4:3gA/_Jxm'V0
'\\2(-Xpw9/t+'X(810=9=D:$M$2q][j$+ZK:=md/%TOcIX4yI+h#IXlyx+I:=e*57$;-[XM/_3W7%a:ZjV4:30*P!RlP9e![Yq+HU/+$)2/<)1-sbRQ
7O['P1#vRxDI8=#)+53lT#/+:\.U..\p:\0U$#kv<x.f5<#M-$BY;<#=-/BS$#4(c94 y=#!<) 2'Yq+HU/+$)Z((EVv074d%%a:ZjV4:3gA/_Jxm'V0
'\\235Dd6%#Y0bDI8=#Y0bDI8=#Y0bDI8=#Y<bXz>MZ203%+$UqjH2F+$,q+H:Xz'_-WR%ah$rZ(39e yx+3>IXf/_JxPSV2'Og;-/B))<#OZK0*P!;UP6
eO8%JfqjXpw9/t+'X(810=9=D\P7T! C$z579K<9[Ow9sv7'V2,_;xeUXlyx+I:=e*57$;-[XM/_3W7%a:ZjV4:30*P!RlP9e![Yq+HU/+$)2/<)1-sbRQ
7O['P1/[:M4'..\p:*[;X,< qj12<MZS2= 2<9ZW+O.UJM4UP9c*s!y3:ra:Zh# 7)%2\Yqp:00*774;-/B))<#O<)1-0>RW7n> yx+3>IXfaSZ((Euj0[
49+x /.M*2:\.U..\U:\.U..\U:\.U..\U:\0U$#kv<x.f5<#M-$BY;<#=-/BS$#4(c94 y=#!<) 2'Yq+HU/+$)Z((EVv074d%%a:ZjV4:3gA/_Jxm'V0
'\\2c-Xpw9/t+'X(810=9=Dj$M$2q][j$+ZK:=md/%TOcIX4yI+h#IXlyx+I:=e**7$;-[XM/_3W7%a:ZjV4:30*P!RlP9e![Yq+HU/+$)2/<)1-sbRQ
7O['51#vRxDI8=#)+53lT#/U:\.U..\p:\0U$#kv<x.f5<#M-$BY;<#=-/BS$#4(e94 y=#!<) 2'Yq+HU/+$)Z((EVv074d%%a:ZjV4:3gA/_Jxm'V0
'\\235Xd\%/t+[X(810=9=Dh$+TKq][h$+ZK:=md/%TOcIX4yI+h#IXlyx+I:=e*)7$;-[XM/_3W7%a:ZjV4:30*P!RlP9e![Yq+HU/+$)2/<)1-sbRQ
7O['7-#Y0bDI8b#)+53lT#/p:M4'..\U:\0U$#kv<x.f5<#M-$BY;<#=-/BS$#4(>94 y=#!<) 2'Yq+HU/+$)Z((EVv074d%%a:ZjV4:3gA/_Jxm'V0
Zr\t;M70
.ends iob_lvds_dt2
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_tg_ldt_pudisable
** View name: schematic
************************************
.subckt iob_tg_ldt_pudisable cbit_ldt_vccaux cbit_ldt_vccaux_b
+ldt_disable_in ldt_disable_out vccaux
.prot FREELIB
7=D'a6*!93723YsSoW0;X,<S0072[-c2qrP'.+g/'0eGX7%; CP7/10=9C8z$+ZKy
8[oW9SV7'v2,_UX(9I*p!-i:oE*77\o-[x4:yQ;tD6 8%#m;BA  u'k+Xz
$,#x(OJCZ,#Swr%A:$Rz((9E Yy:oO=72'9Q;t30Zj7x57%A  u'oO=70
oU'O<)P\,84K+xXfaSD(oje![Y\2:3gA/_D[7n>U8%#K!n3*P7Z#Z\7*P7Z#Zra:L
T\D%m[*7[
4 2%DI\042:rP'.YcK'-i(.M$2:K37J6%; C-A[1$O:\0U$+ZK:=md/%TOcIX4yx+j:ra:Zb5WR%a:$rZ((6
eI.%2S202fJ7%; CP7/10=9C.MJ7gf!xDlV%/Y%K=M'7%; CP7/10=9C8z$+g/'0e0
o.kv<x.f5<#M-$B:$,q+H'/2>)qp:=e*77X5o)P\,8Dt 9c3/_D[iY0IJ[
aM+da  U\M2xXMV_JWRba:$)D(oje 6%#O<)P\'9*2:d6fV_D[iYe 6%8
_IyEuYy:m;30ij74D%%A  )2/O]72'oGk-%_FAszT 907A-Q+:B8!<%Q+:B8!3_jq
$=gAw#qpy
e4Z68t2Y
.ends iob_tg_ldt_pudisable
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_predrvr_tg
** View name: schematic
************************************
.subckt iob_lvds_predrvr_tg in out sel_n sel_p vcc
.prot FREELIB
7=D'a7T! 90(36\W!=Xp/9# uM0'w)-4:dahP7%((E%S$rD((94Uyx8
o2c7!$m$2:B2L..##+9-a[7*90B7D'BrwI) :$,Q+h'/2\yQ+:00*p[
+!+]6dJ[
.ends iob_lvds_predrvr_tg
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_tnand2
** View name: schematic
************************************
.subckt xi_tnand2 A B Y psup
.prot FREELIB
H]=3g\#M2'a:$,*U-/X46b/[!=g(:9qp:d$hyx#=2[a:$U*pqj8za0'K-[X48bq+:r[jyx8
_I=%g 4\D9y0*77x 3)123#3((9CZ76:#+N23/_3q
7]%2e70W2b4I$.Z!29$Ow9sv7'V2,_Xtc9i*3.-W+3a46b/[!=g(:9#!o) 2\9q+y
3$H$2#$:]0m67*kr]xi>mz203%+$uQm2[xLY,*P:=E*,.3stw[!t8zwr%AH$Rz((6
ez57\) U*2X79K<9-U/7\90b7d'bRWi)cz57%(F=%28)qM+'D\H#2);bXMV_3WRba:L
)\P:<x;$#<2M$xP/9# Um0'W)-4:DA48=#=-R[H$#4(I= g 4\D9y02\yQ+:00*7[
+!+]6dJ[
.ends xi_tnand2
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_tnor2
** View name: schematic
************************************
.subckt xi_tnor2 A B Y psup
.prot FREELIB
H]=3g\#M+[a:$,\p-/X48=/[!=g(:9qp:d[jyx#=+'a:$U\Uqj8za0'K-[X46=q+:r$hyx8
_I] g 4\D9y0*77xTC)123.-((9Ci56:#+N23/_3q
7= 2e7[W6b02<9ZW+O.UJM4UP9c*,#3WF)iz77\O-d[h.dc Z*6U$rD(394Uyx8
o+'x#$-#y<BxP/9# Um0'W)-4:DA48B#=-R[J$#4(I=%g 4\D9y02\yQP:00*p[
4t39o2g7\) UJ269$t:]md/%TOcIX4yU*p:ral6=# 7)cI76:#+n23/7$;-/XM/_3Q
7]%280s3)93269$t:]0M67*90b7d'bRWi)cI57%(F]%28)qM2'D\H#2);bXMV_3WRba:L
!$ 2y.'l
.ends xi_tnor2
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_tinv
** View name: schematic
************************************
.subckt xi_tinv A psup Y
.prot FREELIB
H]=3g\#M+)123#q+:=_78O<5<) 2,.q+:r$*P7*[!=g(:9qpy
3[2E7[w6B02<9zw+o.ujm4up9C*,##=-R[28)Q tw[!t8zwr%A:$Rz((6
eI$2#$:]0M67*KR]XI>MZ203%+$UqM29i*3.# 7)$\H#2);bXMV_JWRba:L
!$ 2y.'l
.ends xi_tinv
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_predrv
** View name: schematic
************************************
.subckt iob_lvds_predrv an1 an1_b an1_ext an2 an3 bn1 bn1_b bn1_ext bn2 bn3
+cbit_ldt din en_ext en_extb enable enableb por vccaux vcco
.prot FREELIB
7W js70 :-[:$+g/'0e2<9ZW6K>;\)##0-Dl<YZS2Y2 :+'S nZ
Fh#[ OcI j6[ Q*[280Su>/x(810=99=Z760w6k>D$)Cs ==ZvB#m2'Ay$,*u-/bJ*X8
_I]%g 4\D9y0*57xT3)j23.3((e%Vp7xT3c_78o<5<)%2,#-()9IZ5_jXM/10
oU\Uqj8za0'K-'X48=qh:r[hyx+3(/X48=/[!=g(:9qUy
38ZG#dsf%7gt#/F+9[(jB;H:*[;x,<w[= gx79/%mxFh6S '=pJ$u*u-2xL6BQ+h'h:l
TxTCc_78o<5<)%2,.3()9Ii7_jXCs12,.3stw[!t8z(C9CZ5_5wf=%*p!;+(6
:48b/[!=g(:9qU:d[hy$#=+[a:ZjJ+:d[h.dc Z*6Uyb8
o+c7!..$)7Xd/87\) '1T$0\s9372x#jw6B028\tk mEJ07x(Mev23_jXC:xmv_jwrBA:l
)\s Ndi\042Q5[/$#<23( 2t#/)7Xx;8X#y<BxZ>mz203%+$uQ3hixLYX+u>94 YX#!<)10
'\\2392zg-%):].3$+ZK:\0U$#kv<x.f5<#M-/B)*7%((EV2\Yq+:00*P[
4 9=D/87\) [*S$0\$[r22<9ZW6b028\TK Mej07X(3/Xlyx+U>94 yx#!<)10
'#D#+C3z$-\WoW[280spw:Xp/9# uM0'w)-4:dahP7%((E%S$rD((94Uyx8
o+]pgG##$+92ZG-%)[9-u/79k<9[oW9SV7'v2,_jXW9I*p!-H:0p*p7$k-/z
F8yC Q5[2G##;!=xZt%3LW9-u/7\90B7D'BrwI) :$,Q+h'/2\yQ+:00*p[
4 9=D H## 9x v(7< '-i($+ZK:\0U$#kv<x.f5<#M-[123_Jxc:XMV_JWRba:L
)*s Ndi\042Q5[/$#<23( 2t#/)7X32G#jw6k>;\)#TUm0'W)-4:DA)z<#=-/bJ)7$;-/xm/_jq
7]$M.-\)7xD/$#<2c/*2T#/)7xXp[S[!79-A[1$O:]md/%TOcIX4yx+j:ra:Zb5WR%a:$rZ((6
eI6r/$+*e'X7\) [Fh$0\S9372<Sg$R3Xp[S[!79$Ow9sv7'V2,_Jxw9i*P!-h:0P*P7$K-/Z
F6.$s[=x/87< '-I($+G/'0E2<sG$r3xi>mz203%+$uQ+h$xLYX+u)94 YX#!<)10
'./2ZC$MT)sS[=XzT%-+w92z.042[93zP79/%54f$.kv<x.f5<#M-UB+$,q+H'/2\Yq+:00*P[
4toW[Gg##$+9P787\) '%)$+g/'0e26\TK Mej07X(3/Xlyx+U>9[fyb#!o)\h$rZ(36
eIV4\S[=X/87D#+9[(Jb3,:\>Agr4W2O.UJM4UP9c*7b+4:ra:ZbVW+3aj$rD(*[XM/_3Q
7]2zX60 :=2'5=]W9==/300W6K>;\)#Y%K=M'7*90b7d'bRWi) jZ<#=-/Bj)7\O-'XMV_.p:00*7[
4t9=3Gg## 9x%js7< '-i(X79/%54f$+g/'0e26\TK Mej07X(3/Xlyx+U>9[fyb#!o)\h$rZ(36
e78M'S937GX## 9x%:(7< q*e'X7\) /%j*79/%54f$)cS =.357X 3)V23#3((E%SP[
aM+[D\H#2);bah$U\U-IXl8bq+H'/:$U\Uqj8za0'K-[X46=qjHI1:$,*p-/Bj)x8
_I] g 4\D9y0*57xTC)*-0Xjwf]%*p!-i(9Ci56:#+N23/_-q
7W[d:6<O C=z$#<23( 2T#/)7x3280s+cU/2<Sg$R3XfH6s 0Y%2,#3(P9iz7_Jxc:10
oU\pqj8za0'K-[X48bq4:r[jyx+U>/X48b/[!=g(:9qp:d$hyI+4(/Xl6=q+H'/:L
TxT3c_78o<5<)%2,.-(Wev:p7%TC)1-5HjwI]%g 4\D9y0*5[
4#+M6G3YsS[=X/87gf!xDlV%# 9x%)979/%54f$)cS =.357X 3)%-0xJWF= *P!-I(6
:48=/[!=g(:9qp:d[jyb+4(/Xl8bq+H'/:$U\Uqj8za0'K-[X46=qh:r$hyx+U>/Z
$,.3stw[!t8z(39Ci5_]wf]%*p!-i(9Ci56:#+N23/_3q
7W[d:6%; C=z$1\+:K37J6%; 9[(JbV+:\>Agr4W7WD'8M'U:d[hyb+4(/Xl8=q+H'/:L
Tx 3c_78o<5<) 2,#-(Cev:p7% C)1-5HjwI=%g 4\D9y0*77xT3)j23.3((e%sp[
aM2[D\H#2);bah$U*U-(Xl6bq+H'/:$U*Uqj8za0'K-[Z
Fh=-4:\0u$+G/'0E280S+Ci*2'4/2!=-2,#Q3hi1:$,\((e%sp7\[!=G(:9QP:D$*([
a=2)1-5hJW2j8za0'K-[Z
Fh=-P:=2'pB;i:\>aGR4w+*7:5HUw7wd'h#9wI=AHp7% -/bJ)X# tw[!t8z(39CiYBjq
$r$*P!-I(9$\H#2);bahL
)CP3(xZt%juCsxP[s[!79[(jX-ip9E7.%C 69CZY=jwf=A:zBv+:=_78o<5<) 2,.Qu(6
:l6_Jxc:126dc Z*6Uy=8
o![%J$#<2('/T$+G/'0E2G#3s9372'4/2!=-2,#QJhi1:$,\((e%sp7\[!=G(:9QuY
8CiYi+4(/xL6_jXC:126DC z*6uYH8
o![%:$#<2('/+$+G/'0E2x#3s9372'4/2!=-2,#QJhi1:$,\((e%sp7\[!=G(:9QuY
8CiYi+4(/xL6_jXC:126DC z*6uYH8
o!=-gG#3s0]7J$+zk:\>aGR4w+*7J)B#o!c778+#m+)U-0Xjwf=A:zBv+:=_78o<5<) 0
oU*(w9iIyx+U>/XI 4\d9Y0*7[
4#+\ GX#;W+*7j9x#Y%K=M'70 m9e7.%c 69czyh+4(/Xl8_Jxc:128dc Z*6Uyb8
_I]AHp7%T-/bJ)X#Ttw[!t8z(C6
e78+3S'=%280sU)2Xp[S[!79=z574#qx8z<7X -:B+Px#=+)1-5hJW+j8za0'K-'Z
$,.QP(9IiYX+u>/xi 4\D9y0*5[
4#+\ GX#-W+*7j(>#Y%K=M'70 c9e7.%c 69czyh+4(/Xl8_Jxc:128dc Z*6Uyb8
_I]AHp7%T-/bJ)X#Ttw[!t8z(C6
e78+/f+'Dd6%#Y<bXp[S[!79[(JbRI:38GJ4\Y:d[*s!R+(9izyx+U>/Xz 4\d9Y0*7[
aM2)*23.q+H'/:$.:#+n23/_3Q
7W[p76[ m9[(Jb5,:\>Agr4W'=u2'4/2!=-2,#qIHI1:$,\((E%SP7\[!=g(:9qUy
8CiY=jwf]A:zBv+:]_78o<5<)%0
'4\Y(C3zs70 c9-A[1$O:=2'5$JW7WD'H#9Wi=a)Z<J+:r[*P!-I(9[\H#2);bah$U*(w6
:l6_Jxc:126dc Z*6Uy=8
o!=-gG#;s0]72<9zw6k>;\)# 9X%yS74#QX8Z<7x -ub+pX#=+)1-5Hjw+J8ZA0'k-[z
$,.QJ:R$*p!-i(9$\h#2);BAHl
)C 6/d;8B#$+[xP[s[!79[(jB5H:38gj4\y:D[*S!r+(9IZYX+u>/xZ 4\D9y0*77xT-$z
$3.Q+h'/:$.:#+N23/_3q
7W[pP6[ m9=z579/%54f$#<2c2F2'4/2!=-2,#q3HI1:$,\((E%SP7\[!=g(:9qp:d$*([
a=2)1-5hJW2j8za0'K-[Z
Fh#9s'=x;879/%54F$1\+:38gj4\y:D[*)!r+(9IZYX+u>/xZ 4\D9y0*77xT-[%0
o,*((E%SP7*[!=g(:9qpy
38Z<6[ Cc.ij79k<9-a[1$o:=2'5irw7wd'h#9wI=A)z<j+:R[*p!-i(9[\h#2);BAHl
TxT-$xL6_jXC:126DC z*6uY=8
o!=-:.-\u:-[H$+G/'0E280SuWsxFh6S#+\x48_;Xp/123#Q+h'/:$#:#+N23/_3wI]ATl
T%T-/bJ)X#Ttw[!t8z(36
e78+/f+UDd6%#Y<bXp[S[!79[(Jbyp:38GJ4\Y:d[*s!R+(9izyx+U>/Xz 4\d9Y0*7[
aM2)*23.q+H'/:$.:#+n23/_3Q
7W j979K<9-A[1$O:=2'5>VW7WD'H#9Wi=a)Z<J+:r[*P!-I(9[\H#2);bah$U*(w6
:l6_Jxc:126dc Z*6Uy=8
o!=-gG#3w'=12<sG$r3x;8=#o!c778+#m+) Tz<j+:R[*p!-i(9[\h#2);BAHl
TxT-[*-0Xjwf]A:zBv+:]_78o<5<)%0
'4\Yq5[h.M*239-U/79/%54f$#<2c(12'4/2!=-2,#q3HI1:$,\((E%SP7\[!=g(:9qpy
8CiYi#=2)1-5Hjw2J8ZA0'k-[z
Fh#9s[= 2x#jw6k>;\)#F+[xFh6S#+\x48_3Jhi1:$,\((e%sp7\[!=G(:9QPY
8CiY=UXp/123.Q+h'/:$.:#+N23/_-q
H0[I:MsQ
.ends iob_lvds_predrv
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_drive
** View name: schematic
************************************
.subckt iob_lvds_drive Term_EnableN_0 Term_EnableN_1 Term_EnableN_2
+Term_EnableN_F0 Term_EnableP_0 Term_EnableP_1 Term_EnableP_2
+Term_EnableP_F0 a_out b_out cbit_diff15_vccaux cbit_diff15_vcco
+cbit_diff18_vccaux cbit_diff18_vcco cbit_ext_vccaux cbit_ext_vcco
+cbit_ldt_vccaux cbit_ldt_vcco enable_vccaux enable_vcco
+enableb_vccaux enableb_vcco in nbias pbias por term_a_out
+term_b_out vccaux vcco
.prot FREELIB
7W7(:\/t0ro3$1/vRxX/.M$2:\.U..\p:\.U..\U:W./.,9;<C7(:\/tF<60
'4\v;UDlV%/peC +.1$O:K37J6%; C-A[1$O:K37J6D#Tj +.+g/'0e0
oS0# CP7 d3lq\>Agr4W%-8'.,D2q[VG7>/Y%K=M'60W6K>;\)#O!C7zw8;Q
$d[)yx+h(/Xl8jq+H'/:$U\3qj8za0'K-[X48bq+H21:$,\U-/Bj)x8
_I=%g 4\D9y0*77x 3)1-9Xjwf= *p!-i(9CZ76:#+N23/_3wI]%*7!Y+(6
:l6bq+H'/:$U*Uqj8za0'K-[X46=qpHS1:$,*p-/Bj)x#M2[D\H#2);bahL
TxTM) -*Xjwf]U*p!-i(9CiS6:#+N23/_3q
7W37g9/9R32U$S0# CP7 d34q\>Aw7gf!xD Hd:peC-A[M#/[W7GT)sS6K>dL
TGF!XdLv%/y%k.2t#[Ff*dP[stw9==/300s6k>D$#0#'BxZx4[kQ*E'$#0#'Bd!t#8
_+-8;/6%; [xZx4[kQRp'57*F!5026-C$<cG(87*F!50g3y32[cG(8[
at[W=U.,D2c-D!T##Y%K.2HM0SF\PU.-c$<CmM'[
4=6%0Gg6<O 9=z76<O 93z76<O C.z32# [W=U.042:=>d>7[S00726-c$<Cg(87*/0OZ
$<sGV:w./.,9;<cp3<6<o iz
F3+dkQ-d('%#F+[d('%#$+[d('%/V+RO28-C$<c2Fj7\/0ox/.m$2:]37G9/D9=xi[mKq
$\>Aw7cv[CipV9/;;\D('%RQ
7WipV9/$:5[h$-\pq-X;8=#$+'X/8=#f+[X/8b# [W=U.O< :=37g9/=ox 28-c$<Ci Jb8
_+k.o$1/VrXxix4[kQN2Z$.0#'BdLv=SFQN2Z$.0#'BdLv%-FQN2Z$.GVU9-a[m8
_!m3g3+dkQ%6P:<8
o!R- /60w[= 2G#3s[93Z770 C9=Z77[ 39=Z57\F!50gA0\w+-8;/6%; [xZx4[kQRp'5[
a %Mm2X6T! 9$/H1ZSZ*[26-c$<Ci 7%0SZ*[26-c$<Ci Jb0SZ*[26ST9:\>Aw[
a#0-Dl<YZSoY-30[
4#oW_\.%<5u97(:\/)+53lT#/+:x23>6< '-i(863W *6O.0\$[r2z.b8
_ *6o.0\$[R2Z.Djw *6o.0\$[R2i.X#29yMgt#[Ff*$g77S);od(810=9]dJl
TS);od(810=9]d\p7[s0072x6t! 9-a[m#y0Bdi8=#y0Bdi8B##0-dL<yzsOX%0
'4uI(9>/H%/=oxDh063lq\>Agr4W%-8'.,D2q[VG7>/Y%K=M'60W[= GT)sQ
$-[h.042qM[le79/%54f$4TfqxgG3YsS20P7/10=96
e7(h3W%-8'.,D2q[VG7>/Y%K=M'7gf!xDlV%/pPC v.+g/'0eGX7[ 3C2fJ[
a$+[D('%/v+ro2<Sg$R3X7w-/2ZCi J6*!oW0;X,<Q
7W$3TY'Y:5[h$1\pq-X;8=/)7xX;8b#$+UX/8=#f+[D/$-\pq*e'$-\U:-[)L
TGF!XdLv%/y%k=m'7C :=2'5Xrw+*7Jpe#)+53Lt69/%54F$0\$[R2/.+G/'0E26m'q
$\>Agr4W6K>d$4Tfqr- /6*59%6pL
)C 6cI j63LQ[v2[-C2QRp'.=rs3sdP[s[!7c32<sG$r3xax4Ssf%7g7</PEc-a[1$oY
8E7.%C 69CZYX+Jp/xL8_jXC:128DC z*6uY=#m2) -0Xjwf]A:zBv+:]_78o<5<) 0
'4\Yq*e'8M'=oxD;\)# 9x%:;79/%54f$#<2c/V2'4/2!=-2,#q+H$1:$,\((E%SP[
a TW[!T8Z(39cIy=+I3/Xl6_Jxc:126dc Z*6Uy=8
o!=.356<o cI j6[!79>/h%/)7XdP[s[!79>/h%/=OXdH063LQ\>aGR4w+*7Jpe8
_6k>;\)#o!c7ZW8-wI= *p!U+(9IZ7_jXC:12,#3stw[!t8z(39CZ5_jXW/10
o,\U-/Bj)x#M+'D\H#2);bah$U*p-[BS7x#=2[a:ZbV+:d$h.dc Z*6Uy=8
_I]%*7!vP(9Ii5_jXC:12,.-stw[!t8z(36
BM8.'v 6
.ends iob_lvds_drive
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_lvds_obuf
** View name: schematic
************************************
.subckt iob_lvds_obuf aout bout lvds_m<8> lvds_m<7> lvds_m<6> lvds_m<5>
+lvds_m<4> lvds_m<3> lvds_m<2> lvds_m<1> lvds_m<0> lvds_s<8>
+lvds_s<7> lvds_s<6> lvds_s<5> lvds_s<4> lvds_s<3> lvds_s<2>
+lvds_s<1> lvds_s<0> nbias o_b pbias por_b por_b_vccaux por_b_vcco
+term_aout term_bout tstateb vccaux vcco
.prot FREELIB
7x23>6< '-i(87%YFb;G3+DKqbRj%7%YFb;G3+DKqbR)%7%YFb;G3+DKqbRS%[
a=6%0G>WJE:r- /6Z1c+Xl<YZS<huQ$,9;<C0C)p#=6%0G/WJE:].3.-/Y%K=M'[
a2<x='T-#Y%K=M'7%YFb;G3+DKqbRh%7%YobDU#=1W!M3G3+DKqx23>6< '-i(.1$Oy
38L<yzs<Xpu.,9=<Fxax4SsOw_\7</y%k=m'7GF!Xd hD:Ppc-a[m8
_%-8'.yC[t[hg<sG$r3xax4SsOw_\7>/y%k.2[-C2Q*E'.+G/'0E2[-C2Q*E'.+G/06
:AX4sSF%7G<Sg$R3XAX4sSF%7G<Sgv:r- /6k1)+Xl<YZSuhVQ$,9;<CmC)p8
_f\pu.\M3v9IPv9/9_')23+dkQorH%7*V;c3g<sG$r3xiW8/FQ\>aW79/%54F$+G/06
:7w-/=6%0G/%DKqr-l//8
o!=-gj0'9Q]dJ$,9=<FdL<yzs<Hhq$%<5Uc2ZG-%)2c%2<sGV:\0u$)Cs w[P.J;o73z
$,#QP:R[*p!v+(9[\h#2);BAH$u*(3ev:p7%T-/bJ*X#Ttw[!t8z(36
e78+/29YmG663WF\iUD6%YobDU#I1W *6O.0\$[r2I.=#Y%K.2<9ZW7WD'H#9SmUef'[
aM+) 23#q+H:1:$#:#+n23/_3Wi]ahZ<J+:r$*P!-l(9$\H#2);bahL
)C 6c7(:\/TQ/xL<,z*QR- /6z1)+x't8Ks9==/30*s(9-a[m#y<BxFh6S#+\d)S)4oY
8CZY=#=+)1-)Xjw+J8ZA0'k-[x46_3Xp/123.Q+h'h:$.:#+N23/_3q
7W[p.0\S6K>d$0\$[r2G<Sgv:*[;X,<fq\>Aw79/%MXp/9#O!C778+/3m3ef$U\(mEu:P[
a=+)1-)xJW+j8za0'K-[X46_5x)I123.q+H'H:$.:#+n23/_3Q
7W[p.%<5uC$G x#=6r0>.,9;<C0C0p#29YmGT#[fF*$G x#Y%K.2<9ZW7WD'H#9SmUef'[
aM+) 23#q+H:1:$#:#+n23/_3Wi]ahZ<J+:r$*P!-l(9$\H#2);bahL
)C=6R0>.0\s6k>D$0\$[R2g3+%s!=xP[stw+*7H)<# 9X s97< '-I(.+G/06
:Iw8/fq\>Aw7cv[C7l<9H23Cu)L
)C=6R0> 6< Q54F$0\$[R2g3+%s!=xP/9#y%k=m'79;O92ZG-%)Q\>aGR4q
$].3.-/Y%K=M'7cv[CipV9/=6r0> [
4#F\iUDd/;'x=Ggr4WoC8z$+ZK:\>Agr4W6%P2V6T! 9$d:60S6K>;\)8
_!m3g3+dkQR-L//:sO57;l
)S);od(810=9]xL<,z*QR- /6z1)+xL<,z*QR- /6z1W+xL<,z*QR- /6z1E+z
$3+dkQor:%7%yOBdu#$1wf\pu.9MJv9IPv9/k_s)23+dkQBr:%7*V;c3g<sGVY
87uj1S)[9-a[m#=6R0>.,9;<c0c0P#=6%0g/wre:w./.,9;<c7(:\/)+53Lt[
4#F\PU.Y'#6*62J0'9q*[;X,< q/X'T8kS9==/30\S397(:\/)+53lT#/Uy
87(:\/)+53Lt#/[(97(:\/)+53Lt./+:X23>6< '-I(663w *6o.0\$[R2i.B8
_ *6o.0\$[R2i.Djw'm4'$-t! 9>/h%/;!J_H069/%54F$s0# cp7 D34Q\>aW[
a/[W7GV4:[3SDp[S[!79>/H%/;!j_h*69/%MXAX4sS937G<Sg$R3XAX4sS937G<Sgvy
8>/h%/=OXdP[s[!79>/h%/=OXdP[stw9==/30/y%k=m'7< '-I(.+G/06
:(810=9-Dp[S[!792zg-%)[C-A[M#;qM4'$#0#'bXIX4[K:].3$%<5uC=d\%8
_ *6o.-t! 9-a[1$o:\>aW7CV[cIPv9/;;w-(l
)C '=pgv1S$:md/$,9;<cMcpP#;Qw[2'4/ '=pJ$u\(Ce*:p7% -/b:(X# tw[!t8z(p6
:46_;WF]a:Zxu+:]_78O<5<)H0
'4\$+%D(810=997UJ1s)[9ipV9/9_/)280sU3SXfH6\$+%%2,#qpH2123#q+H/*0
o#:#+n23/_3Wi]ahZ$JWF]a:ZxuW2j8za0'K-[Z
Fh#9s2m626m's[9$D:74#Qw[P$u\((ev:p7% -/b:(X# tw[!t8z(39CiY=#=2)1-pijq
$]_78O<5<) 0
'4\Yq*[;X,<W+*7j7>#)+53lT6%YFC8z$)cS!=-2,#qpH2123#q+H/*28dc Z*6Uy=8
_I]A)zBjwf]A:zXUw2J8ZA0'k-[z
Fh#9+QX23>6\st/xL<,z*QR- /6z13+xP[s[!79[(jB;+:38gj4\y:D[*p!U4(6
:l8_Jxc:128dc Z*6Uy=#M2) -0xJWF]a:ZbV+:]_78O<5<) 0
'4\Yq*[Ggr4W9==/30/Y%K=M'79/%54f$0\$[r2/.+g/'0e2'4/2!=-2,#q3HU%:L
T% -/bJ)X# tw[!t8z(39CiY$+Hp/xL6_jXC:126DC z*6uY=8
o!=-:.%<5Uc[g57%yfB;g3+dkQBrs%79/%54F$#<2Cuj2'4/2!=-2,#Q+h$v:l
T% -/bJ)X# tw[!t8z(39CiY=+4(/xL6_jXC:126DC z*6uY=8
o!=-:.%<5Uc[g77%yfB;g3+dkQBr)%79/%54F$#<2Cuf2'4/2!=-2,#Q+h$v:l
T% -/bJ)X# tw[!t8z(39CiY=+4(/xL6_jXC:126DC z*6uY=8
o!=-H.%<5Uc[g57\) 'Uy$+G/'0E2j0'9Q*[;x,< Q'xFh6S#+\x48_jXWi123#Q+h'/:l
T\[!=G(:9QP:D$*7!r+(9IiYX+u>/xi 4\D9y0*7[
4#+\ GJ0'9q=D\P7\) 'u:$+g/'0e2J0'9q*[;X,< qj12'4/2!=-2,#q+H$V:L
T% -/bJ)X# tw[!t8z(39CiY=+4(/xL6_jXC:126DC z*6uY=8
o!=-H.%<5Uc[gp7\) 'vH$+G/'0E2j0'9Q*[;x,< Q/xFh6S#+\x48_jXWi123#Q+h'/:l
T\[!=G(:9QP:D$*7!r+(9IiYX+u>/xi 4\D9y0*7[
4#+\1GJ0'9q=D:$,9=<fDl<YZS<h%Q$+g/'0e280sUP[XfH6s#+\X48_JxwI10
o,\((E%SP7\[!=g(:9qp:d$*7!R+(9iIyx+U>/XI 4\d9Y0*7[
4#+\ GJ0'9q=Dh$#<2cUF2<Sg$R3X'T8kS9==/30\S39e7.%c 69czyx+jP/Xl8_Jxc:10
o#:#+n23/_3Wi]ahZ<J+:r$*P!-I(9$\H#2);bahL
!$ 2y.'l
.ends iob_lvds_obuf
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_cntlz_mux_s
** View name: schematic
************************************
.subckt iob_cntlz_mux_s cntlz<2> cntlz<1> cntlz<0> cntlz_b<2> cntlz_b<1>
+cntlz_b<0> term term_b
.prot FREELIB
7W v(7s);OX'T8kS[9e7.4\Y:d[*P!V+(9izyx++w/Xz 4\d9Y0*77Xt-/BSPx8
_f]A:zXU+:]_78o<5<) 0
'43,(9>zJ,BS[h%Q$S\2F_Rj%74#qW[p$U\((E%:P7% -/B:(x# TW[!T8Z(36
:46_Jxc/123.q+H/*:$.:#+n23/_3Q
7W E)7g  rkGXW3E:K['3nmpV9e7.4\Y:d[*P!-+(9izyx++w/Xz 4\d9Y0*7[
aM2)1-5xJWF]a:Zxu+:]_78O<5<) 0
'43,P9>zJ,BS[h1Q$S\2F_R:%74#qW[p$U\((E%:P7% -/B:(x# TW[!T8Z(36
:46_Jxc/123.q+H/*:$.:#+n23/_3Q
7W v;7g  rkCPp#/+xix#=1W%=7l+601c+XzT%V3:38G81\;m9cIyx+I(/Xl6_Jx($10
o.:#+n23/_3Wi=a:ZhJ+:r[*P!Jj(9[\H#2);bahL
)CP#uxa8%%>_/)2[#S=jH%q$s\2f_d/#=1w+*7s(74#Q==ZvJ#m2)1-)Xjwf]A:zXU+Y
8$\h#2);BAH$u\((e/:p7% -/b:(X# tw[!t8z(36
e70=# 9xV+$#<2>$XzT%V3:x23>74#q==zVj#M2)1-)xJWF]a:Zxu+:]_78O<5<) 0
oU\((EH:P7% -/B:(x# TW[!T8Z(36
e77b5W%=7l+601(+XA8%%>_')2[#s=JC3C7p# 9xV+$)cS+5[ s7Xt-/BSPx#=2)1-PIJQ
$]_78O<5<) 2,#q+H:1:$,\((E1tP7\[!=g(:9qpy
e4Z68t2Y
.ends iob_cntlz_mux_s
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normn_y
** View name: schematic
************************************
.subckt rcload_normn_y in out
.prot FREELIB
%/X7879K<9>*7x:Q
%[Xd\%#Y<bXAy=J[y
y12h##VrXx3YBvq
H0[I:MsQ
.ends rcload_normn_y
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normn_e
** View name: schematic
************************************
.subckt rcload_normn_e in out
.prot FREELIB
%/X7879K<9>*7x:Q
%[Xd\%#Y<bXAy=J[y
y12h##VrXx3YBvq
H0[I:MsQ
.ends rcload_normn_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normp_e
** View name: schematic
************************************
.subckt rcload_normp_e in out
.prot FREELIB
%/X7879K<9>*7!u[y
k 2WRSw6B02[_3XWJz
3p7C :m4'$8Qu(6
BM8.'v 6
.ends rcload_normp_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normn_d
** View name: schematic
************************************
.subckt rcload_normn_d in out
.prot FREELIB
%/X7879K<9>**d8
/39.mj79k<9>**D8
5(98Z$m$2:yAH([
+!+]6dJ[
.ends rcload_normn_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normp_d
** View name: schematic
************************************
.subckt rcload_normp_d in out
.prot FREELIB
%/X7879K<9>*5d8
/39.mj79k<9>*5D8
5(98Z$m$2:yAJ5[
+!+]6dJ[
.ends rcload_normp_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normn_c
** View name: schematic
************************************
.subckt rcload_normn_c in out
.prot FREELIB
%/X7879K<9>**!R[y
k 2WRSw6B02[_YXpJz
3p7C :m4'$8QP#6
BM8.'v 6
.ends rcload_normn_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normp_c
** View name: schematic
************************************
.subckt rcload_normp_c in out
.prot FREELIB
%/X7879K<9>*5d8
/39.mj79k<9>*5D8
5(98Z$m$2:yAJ)[
+!+]6dJ[
.ends rcload_normp_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normn_b
** View name: schematic
************************************
.subckt rcload_normn_b in out
.prot FREELIB
%/X7879K<9>*7x:Q
%[Xd\%#Y<bXAy=J[y
y12h##VrXx3YB3q
H0[I:MsQ
.ends rcload_normn_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normp_b
** View name: schematic
************************************
.subckt rcload_normp_b in out
.prot FREELIB
%/X7879K<9>*5!V[y
k 2WRSw6B02[_-X>Jz
3p7C :m4'$8Qup6
BM8.'v 6
.ends rcload_normp_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normn_a
** View name: schematic
************************************
.subckt rcload_normn_a in out
.prot FREELIB
%/X7879K<9>*7<:Q
%[Xd\%#Y<bXAy=R[y
y12h##VrXx3YBvq
H0[I:MsQ
.ends rcload_normn_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normp_a
** View name: schematic
************************************
.subckt rcload_normp_a in out
.prot FREELIB
%/X7879K<9>*sd8
/39.mj79k<9>*SD8
5(98Z$m$2:yA)5[
+!+]6dJ[
.ends rcload_normp_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutp_bs
** View name: schematic
************************************
.subckt rcload_loutp_bs in out
.prot FREELIB
%/X7879K<9>*sd8
/39.mj79k<9>*SD8
5(98Z$m$2:yAT0[
+!+]6dJ[
.ends rcload_loutp_bs
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutn_y
** View name: schematic
************************************
.subckt rcload_loutn_y in out
.prot FREELIB
%/X7879K<9>*)!y[y
k 2WRSw6B02[_vXEJz
3p7C :m4'$8Q3)6
BM8.'v 6
.ends rcload_loutn_y
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutp_y
** View name: schematic
************************************
.subckt rcload_loutp_y in out
.prot FREELIB
%/X7879K<9>*;d8
/39.mj79k<9>*;D8
5(98Z$m$2:yA)7[
+!+]6dJ[
.ends rcload_loutp_y
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutn_e
** View name: schematic
************************************
.subckt rcload_loutn_e in out
.prot FREELIB
%/X7879K<9>**d8
/39.mj79k<9>**D8
5(98Z$m$2:yAJ*[
+!+]6dJ[
.ends rcload_loutn_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutp_e
** View name: schematic
************************************
.subckt rcload_loutp_e in out
.prot FREELIB
%/X7879K<9>*5!R[y
k 2WRSw6B02[_-XpJz
3p7C :m4'$8QHE6
BM8.'v 6
.ends rcload_loutp_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutn_d
** View name: schematic
************************************
.subckt rcload_loutn_d in out
.prot FREELIB
%/X7879K<9>*(d8
/39.mj79k<9>*(D8
5(98Z$m$2:yAJ9[
+!+]6dJ[
.ends rcload_loutn_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutp_d
** View name: schematic
************************************
.subckt rcload_loutp_d in out
.prot FREELIB
%/X7879K<9>*5!R[y
k 2WRSw6B02[_-XpJz
3p7C :m4'$8QHp6
BM8.'v 6
.ends rcload_loutp_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutn_c
** View name: schematic
************************************
.subckt rcload_loutn_c in out
.prot FREELIB
%/X7879K<9>**d8
/39.mj79k<9>**D8
5(98Z$m$2:yAJ*[
+!+]6dJ[
.ends rcload_loutn_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutp_c
** View name: schematic
************************************
.subckt rcload_loutp_c in out
.prot FREELIB
%/X7879K<9>*5!u[y
k 2WRSw6B02[_-XWJz
3p7C :m4'$8QHW6
BM8.'v 6
.ends rcload_loutp_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutn_b
** View name: schematic
************************************
.subckt rcload_loutn_b in out
.prot FREELIB
%/X7879K<9>*7x:Q
%[Xd\%#Y<bXAy=J[y
y12h##VrXx3YJ5q
H0[I:MsQ
.ends rcload_loutn_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutp_b
** View name: schematic
************************************
.subckt rcload_loutp_b in out
.prot FREELIB
%/X7879K<9>*sd8
/39.mj79k<9>*SD8
5(98Z$m$2:yAy*[
+!+]6dJ[
.ends rcload_loutp_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutn_a
** View name: schematic
************************************
.subckt rcload_loutn_a in out
.prot FREELIB
%/X7879K<9>*7j:Q
%[Xd\%#Y<bXAy=;[y
y12h##VrXx3YJjq
H0[I:MsQ
.ends rcload_loutn_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutp_a
** View name: schematic
************************************
.subckt rcload_loutp_a in out
.prot FREELIB
%/X7879K<9>*s!R[y
k 2WRSw6B02[_;XpJz
3p7C :m4'$8QJ>6
BM8.'v 6
.ends rcload_loutp_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutn_x
** View name: schematic
************************************
.subckt rcload_loutn_x in out
.prot FREELIB
%/X7879K<9>*)!5[y
k 2WRSw6B02[_vX)Jz
3p7C :m4'$8Q3M6
BM8.'v 6
.ends rcload_loutn_x
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_loutp_x
** View name: schematic
************************************
.subckt rcload_loutp_x in out
.prot FREELIB
%/X7879K<9>*;d8
/39.mj79k<9>*;D8
5(98Z$m$2:yAJ*[
+!+]6dJ[
.ends rcload_loutp_x
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutp_es
** View name: schematic
************************************
.subckt rcload_deloutp_es in out
.prot FREELIB
%/X7879K<9>*;!R[y
k 2WRSw6B02[_]XpJz
3p7C :m4'$8QP(sz
-\#*50Xz
.ends rcload_deloutp_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutn_es
** View name: schematic
************************************
.subckt rcload_deloutn_es in out
.prot FREELIB
%/X7879K<9>*s!5[y
k 2WRSw6B02[_;X)Jz
3p7C :m4'$8QuM6
BM8.'v 6
.ends rcload_deloutn_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutp_bs
** View name: schematic
************************************
.subckt rcload_deloutp_bs in out
.prot FREELIB
%/X7879K<9>*;!R[y
k 2WRSw6B02[_]XpJz
3p7C :m4'$8Q,E6
BM8.'v 6
.ends rcload_deloutp_bs
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutn_e
** View name: schematic
************************************
.subckt rcload_deloutn_e in out
.prot FREELIB
%/X7879K<9>*s!5[y
k 2WRSw6B02[_;X)Jz
3p7C :m4'$8QuM6
BM8.'v 6
.ends rcload_deloutn_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutp_e
** View name: schematic
************************************
.subckt rcload_deloutp_e in out
.prot FREELIB
%/X7879K<9>**!V[y
k 2WRSw6B02[_YX>Jz
3p7C :m4'$8QP([z
-\#*50Xz
.ends rcload_deloutp_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutn_d
** View name: schematic
************************************
.subckt rcload_deloutn_d in out
.prot FREELIB
%/X7879K<9>*s!u[y
k 2WRSw6B02[_;XWJz
3p7C :m4'$8Qup6
BM8.'v 6
.ends rcload_deloutn_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutp_d
** View name: schematic
************************************
.subckt rcload_deloutp_d in out
.prot FREELIB
%/X7879K<9>*(!R[y
k 2WRSw6B02[_UXpJz
3p7C :m4'$8QP([z
-\#*50Xz
.ends rcload_deloutp_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutn_c
** View name: schematic
************************************
.subckt rcload_deloutn_c in out
.prot FREELIB
%/X7879K<9>*s!R[y
k 2WRSw6B02[_;XpJz
3p7C :m4'$8QuW6
BM8.'v 6
.ends rcload_deloutn_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutp_c
** View name: schematic
************************************
.subckt rcload_deloutp_c in out
.prot FREELIB
%/X7879K<9>**!R[y
k 2WRSw6B02[_YXpJz
3p7C :m4'$8QP([z
-\#*50Xz
.ends rcload_deloutp_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutn_b
** View name: schematic
************************************
.subckt rcload_deloutn_b in out
.prot FREELIB
%/X7879K<9>*)!V[y
k 2WRSw6B02[_vX>Jz
3p7C :m4'$8Q3(6
BM8.'v 6
.ends rcload_deloutn_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutp_b
** View name: schematic
************************************
.subckt rcload_deloutp_b in out
.prot FREELIB
%/X7879K<9>*;!R[y
k 2WRSw6B02[_]XpJz
3p7C :m4'$8QP3uz
-\#*50Xz
.ends rcload_deloutp_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutn_a
** View name: schematic
************************************
.subckt rcload_deloutn_a in out
.prot FREELIB
%/X7879K<9>*0d8
/39.mj79k<9>*0D8
5(98Z$m$2:yAJ0[
+!+]6dJ[
.ends rcload_deloutn_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_deloutp_a
** View name: schematic
************************************
.subckt rcload_deloutp_a in out
.prot FREELIB
%/X7879K<9>*7x:Q
%[Xd\%#Y<bXAy=J[y
y12h##VrXx3Y=3+Y
e4Z68t2Y
.ends rcload_deloutp_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predp_es
** View name: schematic
************************************
.subckt rcload_predp_es in out
.prot FREELIB
%/X7879K<9>*sE:Q
%[Xd\%#Y<bXAyj][y
y12h##VrXx3Y=UPY
e4Z68t2Y
.ends rcload_predp_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predp_y
** View name: schematic
************************************
.subckt rcload_predp_y in out
.prot FREELIB
%/X7879K<9>*0b:Q
%[Xd\%#Y<bXAy<-[y
y12h##VrXx3YB3+Y
e4Z68t2Y
.ends rcload_predp_y
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predn_es
** View name: schematic
************************************
.subckt rcload_predn_es in out
.prot FREELIB
%/X7879K<9>*9x:Q
%[Xd\%#Y<bXAy$J[y
y12h##VrXx3YBU3Y
e4Z68t2Y
.ends rcload_predn_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predp_bs
** View name: schematic
************************************
.subckt rcload_predp_bs in out
.prot FREELIB
%/X7879K<9>*)$:Q
%[Xd\%#Y<bXAyh5[y
y12h##VrXx3YBjHY
e4Z68t2Y
.ends rcload_predp_bs
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predn_y
** View name: schematic
************************************
.subckt rcload_predn_y in out
.prot FREELIB
%/X7879K<9>*0h:Q
%[Xd\%#Y<bXAy<V[y
y12h##VrXx3YBU+Y
e4Z68t2Y
.ends rcload_predn_y
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predn_e
** View name: schematic
************************************
.subckt rcload_predn_e in out
.prot FREELIB
%/X7879K<9>*0E:Q
%[Xd\%#Y<bXAy<][y
y12h##VrXx3YBUuY
e4Z68t2Y
.ends rcload_predn_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predp_e
** View name: schematic
************************************
.subckt rcload_predp_e in out
.prot FREELIB
%/X7879K<9>*)b:Q
%[Xd\%#Y<bXAyh-[y
y12h##VrXx3Y=Y3Y
e4Z68t2Y
.ends rcload_predp_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predn_d
** View name: schematic
************************************
.subckt rcload_predn_d in out
.prot FREELIB
%/X7879K<9>*9j:Q
%[Xd\%#Y<bXAy$;[y
y12h##VrXx3YJjPY
e4Z68t2Y
.ends rcload_predn_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predp_d
** View name: schematic
************************************
.subckt rcload_predp_d in out
.prot FREELIB
%/X7879K<9>*)b:Q
%[Xd\%#Y<bXAyh-[y
y12h##VrXx3Y=YLY
e4Z68t2Y
.ends rcload_predp_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predn_c
** View name: schematic
************************************
.subckt rcload_predn_c in out
.prot FREELIB
%/X7879K<9>*9b:Q
%[Xd\%#Y<bXAy$-[y
y12h##VrXx3YB]+Y
e4Z68t2Y
.ends rcload_predn_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predp_c
** View name: schematic
************************************
.subckt rcload_predp_c in out
.prot FREELIB
%/X7879K<9>*s>:Q
%[Xd\%#Y<bXAyjy[y
y12h##VrXx3Y=5+Y
e4Z68t2Y
.ends rcload_predp_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predn_b
** View name: schematic
************************************
.subckt rcload_predn_b in out
.prot FREELIB
%/X7879K<9>*9<:Q
%[Xd\%#Y<bXAy$R[y
y12h##VrXx3YJ3HY
e4Z68t2Y
.ends rcload_predn_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predp_b
** View name: schematic
************************************
.subckt rcload_predp_b in out
.prot FREELIB
%/X7879K<9>*0x:Q
%[Xd\%#Y<bXAy<J[y
y12h##VrXx3YBvuY
e4Z68t2Y
.ends rcload_predp_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predn_a
** View name: schematic
************************************
.subckt rcload_predn_a in out
.prot FREELIB
%/X7879K<9>*(<:Q
%[Xd\%#Y<bXAyIR[y
y12h##VrXx3YJ;+Y
e4Z68t2Y
.ends rcload_predn_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predp_a
** View name: schematic
************************************
.subckt rcload_predp_a in out
.prot FREELIB
%/X7879K<9>*9x:Q
%[Xd\%#Y<bXAy$J[y
y12h##VrXx3YBU+Y
e4Z68t2Y
.ends rcload_predp_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predn_x
** View name: schematic
************************************
.subckt rcload_predn_x in out
.prot FREELIB
%/X7879K<9>*9$:Q
%[Xd\%#Y<bXAy$5[y
y12h##VrXx3YBU+Y
e4Z68t2Y
.ends rcload_predn_x
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_predp_x
** View name: schematic
************************************
.subckt rcload_predp_x in out
.prot FREELIB
%/X7879K<9>*sx:Q
%[Xd\%#Y<bXAyjJ[y
y12h##VrXx3Y=;4Y
e4Z68t2Y
.ends rcload_predp_x
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normnx
** View name: schematic
************************************
.subckt rcload_normnx in out
.prot FREELIB
7d 280sp39.MJ7kUiW6($Uq+HUV23_;W<)1-s<#9%]a  \gtu'XO,8q;TOc3>b#9;) 0
o\g(36
e4P7c :=2'7=#9md83T7X((E v$,qU(90*P!3l:O>IyY:9%]m)$\X5-%_O,8k3:O6*7[
a9%) 0
Zr\t;M70
.ends rcload_normnx
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: rcload_normpx
** View name: schematic
************************************
.subckt rcload_normpx in out
.prot FREELIB
7d 280sp39.MJ7kUiW6($Uq+HUV23_]W<)1-s<#9%]a  \gtu'XO,8q;TOc3>b#9;) 0
o\g(36
e4P7c :=2'7=#9md83T7X((E v$,qhc90*P!3l:O>IyY:9%]m)$\X5-%_O,8k3:O6*7[
a9%) 0
Zr\t;M70
.ends rcload_normpx
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_drv_cz
** View name: schematic
************************************
.subckt iob_obc_drv_cz_schematic loc_gnd_drv loc_vcco_drv opn_a opn_a_del
+opn_b opn_b_del opn_c opn_c_del opn_d opn_d_del opn_e opn_e_del
+opn_es opn_es_del opn_x<8> opn_x<7> opn_x<6> opn_x<5> opn_x<4>
+opn_x<3> opn_x<2> opn_x<1> opn_x<0> opn_y opp_a opp_a_del opp_b
+opp_b_del opp_bs opp_bs_del opp_c opp_c_del opp_d opp_d_del opp_e
+opp_e_del opp_es opp_es_del opp_x<13> opp_x<12> opp_x<11>
+opp_x<10> opp_x<9> opp_x<8> opp_x<7> opp_x<6> opp_x<5> opp_x<4>
+opp_x<3> opp_x<2> opp_x<1> opp_x<0> opp_y pad
.prot FREELIB
7WP3<d\W25P23MgSZ=PGV89WFM>G<Sgvq%6p$M* q<Xd6./::W./.M0/q%6p.28
o!%6P'wYe:]= $,t/QN[ .y'y:m$Z.)MLv98Dx6tF%cp3<64 Y
38 :+41W+xiGy#=0kd!8y/;;\xD6#/o_$)2hm0s0->gv89s7=z
Fhy'y7Hjq$.[;:R.a.o\;Q%6P$m* Q3ry%7CV[c./[6d56cEZl
)C;;\Ec0P#T'%xLWs/D+%d :+#V2=dF#<1w!m3gW-GsOy-g'#8
o!%6P'wve:]= $,t/QN[ .y'y:m$Z.)Miv98Dx6tF%cp3<64 Y
38 :+41M+xiGy#=0kd!8y/;;\xD6#/o_u)2hm0s0->gv89s7=z
Fhy'y7H%q$.[;:R.a.o\;Q%6P$m* Q3rJ%7CV[c./[6d56cEZl
)C;;\Ec7P#T'%xLWs/D+%d :+#V2=dF#=1w!m3gW-GsOy-g'#8
o!%6P'wje:]= $,t/QN[ .y'y:m$Z.)M+v98Dx6tF%cp3<64 Y
38 :+*[3Hfq$.[;:R.a.+G/0cp3<7tT2cEc7X1w!m3gW-GsOy-g'.3q
7WP3<.:p_S)261DWFM>G<Sgvq%6p$M*tq3RE%7cv[C./[6D56CeI7[
4#oY-I =mjV9$;V7%v%C-A[M/;;\Xd6./O_S)2HM0S0->GV89S7] 0
'4D56]_h#$1W25P23MgS6K>d.Y'Y:M$I.)mjV98dX6Tf%CP3<64t36
e7V89tT[R+%7*$o9id[69/%MD :+#v2]Df#$1W!M3Gw-gSoY-G'.3Q
7WP3<.:p_:)261DWFM>G<Sgvq%6p$M*tq3R+%7cv[C./[6D56CeI7[
4#oY-I =m3V9$;V7%v%C-A[M/;;\Xd6./O_:)2HM0S0->GV89S7] 0
'4D56]_h#b1W25P23MgS6K>d.Y'Y:M$I.)mUV98dX6Tf%CP3<64t36
e7V89tT[Rh%7*$o9id[69/%MD :+#v2]Df#=1W!M3Gw-gSoY-G'.3Q
7WP3<.:p_/)261DWFM>G<Sgvq%6p$M*tq3R:%7cv[C./[6D56CeI7[
4#oY-I W;E:]= $,T/q\>Aw6D569.I66413U)2HM0S0->GV89S7]Z
Fhy'y2JrJ%7*$O9ID[69/%md :+#V2]dF#=-e:w./.m0/Q%6P.)*q
7WP3<.:13+XIgY#=0KDp[STSoY-2w.*S7h h%7cv[C./[6D56CeIL
)C;;\$\#X1w25p23mGs6k>D.y'y:m$i.)M3v98Dx6tF%cp3<64TY
38 :+xw25p23mGs6k>D.y'y:m$i.0zsO*I2W.*s9Bx7W-/V[kd :+/mY
38 :+*+:]= $,t/QN[ .y'y:R.a.+G/0cp3<7tT+c2u$m* Q*0gv0%w0]$gx98
_0]$gx9/;9Rx7W-/V[kd :+/kY
38 :+<+:]= $,t/QN[ .y'y:R.a.+G/0cp3<7tT+c22W.\s9cp(37tT2c22W.*s9cp(3[
a#0-DdXS/;;\D(L
)C;;\p:$.[;:R.a.o\;Q%6P$,t/Q\>aW6d569.i86dw0][gv6d)f9.i66dw0]$gv6d)f6
:7w-/v[KD :+/;y
38 :+G+:]= $,t/QN[ .y'y:R.a.+G/0cp3<7tT+c>2W.\s%cp(37tT2c>2W.*s%cp(3[
a#0-DdXS/;;\DAL
)C;;\3:$m* Q-xD6#/FQ%2L$m*TQ-xD6./FQ%2L$.[;:R.a.o\;Q%6P$,t/Q\>aW6d566
:7w-/v[KD :+/fy
38 :+[+:m$Z.1#V2=d;.y<=:m$i.1#V2]d;.y<=:]= $,t/QN[ .y'y:R.a.+G/0cp3<[
a#0-DdXS/;;\D;L
!$ 2y.'l
.ends iob_obc_drv_cz_schematic
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_n_e
** View name: schematic
************************************
.subckt iob_obc_pred_n_e gtl0 gtl1 gtl2 loc_gnd loc_vccaux nslew0 nslew1
+nslew2 nslew3 nslew4 nslew5 opn opn_del opni opni_del
.prot FREELIB
7O$'9x# 9x/E57%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H'/2\Yq+:00*P[
492xJh$#<2P'123MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+U>94 yx#!<)10
'\*2>'XzT%RU(9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:ZbVWR%a:$rZ((6
eO6%V3:=2')E-WFM>G<Sg$R3XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=#=-/Bj)7$;-/XM/_JQ
7O$')h# 9x/E57%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H2%2\Yq+:00*P[
492x/+$#<2>(%23MgS6K>;\)# 9x/t97%v%C-A[1$O:]md/%TOcIX4y=#=-/BY57$;-/XM/_JQ
7O$')$# 9xVjP7%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H2%2\Yq+:00*P[
492x/t$#<2>(*23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+hc94 yx#!<)10
'\*2>SXzT%V,c9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:ZbVWR%a:$rZ((6
eO6%V,:=2')E-WFM>G<Sg$R3XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=+Ue9i*P!-I:0P*P7$K-/Z
F>.S4(9[(j<-+:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-)>#!O)12\9Q+Y
3Mij<3w+*7s;B#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((e/V$Rd((94uYX8
oU]7+57\) i%:$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jXC:xmv_jwrBA:l
)KT iU280S4C/xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(3e%V$,Q+h'/2\yQ+:00*p[
492xVS$#<2>$J23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+hc94 yx#!<)10
'\*2PIXzT%RU(9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:ZbVWR%a:$rZ((6
eO6%Rh:=2'0bJWFM>G<Sg$R3XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=#=-/BY57$;-/XM/_JQ
7O$'0I# 9x/E57%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H'/2\Yq+:00*P[
492xVv$#<2>(%23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+hc94 yx#!<)10
'\*2P(XzT%RU(9id[69/%54f$#<2>(*23MgS6K>;\)#tuM0'w)-4:dah$,q+H2%2\Yq+:00*P[
492x v$#<2P'1289%)iUXlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=+4m9i*P!-I:0P*P7$K-/Z
F6=UH:=2')e-wfm>gA#dwfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) -7J#=-/bJ)7$;-/xm/_jq
7O$'*7Tt+CP(37Tt+WD T,# 9xVjP7%v%C-A[1$O:]md/%TOcIX4y=+,c9i*P!-I:=e*07$;-/XM/_JQ
7O$'7j# 9x/E57\KF*ch$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:Z$-WR%a:$rZ((6
eO6%JW+*7S;b# <r24P7\) IVj$,T/q\>Agr4W2O.UJM4UP9c*77%((EJj$rD((94Uyx8
oU]7J77\) i%:$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jX)'xmv_jwrBA:l
)KT [v280S4W$xZ/,<m(9ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((ejJ$Rd((94uYX8
o2[*J$#<2>(%289%)I:xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4Y=+4M9I*p!-i:=E*57$;-! 2\9QPY
3$e$#<2>(%289%)IixLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4YJ+LM9I*p!-i:0p*p7$k-/z
F>.SPW9[(j<-+:=0Ltu-wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) -0J#=-/bs*7$;-/xm/_jq
7O$'7h# 9x/E57\KF*cj$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpHIu23_Jx>SXMV_JWRba:L
)KT (xZt%ru(9ID[62 O9ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*7!jL:RA:zBvwr%A:$Rz((6
eO6%-+:=2'0bJW+bi(,<#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-UBvs7%((E%S$rD((94Uyx8
o2' y$#<2pi%289%)I/xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4Y=#=-/by57$;-/xm/_jq
7O$'7E# 9xVjP7\KF*cS$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpHIu23_Jxc:Xz'_-WR%a577$K-[Z
F>.SP)9[(j<-+:=0Ltu3wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jX)'xmv_jwrBA:l
)KT [12W.\w0][7$#<2>(%23mGs6k>;\)#TUm0'W)-4:DAHze-wf)1-5H# 7)v2\yQ+:00*p[
492x j$#<2>(%289%)iUXlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=+4m9i*P!-I:0P*P7$K-/Z
F>.SP39[(jH]u:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-9B#!O)12\9Q+Y
3Mij=# 9XvJp7\kf*C:$#<2p$*23mGs6k>;\)#TUm0'W)-4:DAH$,Q+h2%2\yQ+:00*p[
4 (9[(J<]j:n7l77%v%CgzV7%v%CgzV7\90b7d'bRWi) -0j#=-/Bj)7$;-/XM/_JQ
7O['s7\) 21E$Os=39id[62 o9id[62 o9[Ow9sv7'V2,_3x#[Xlyx+U>94 yx#!<)10
'#3hc9[(J<]j:r.A.+g/'0e23MgSZ=P23MgSZ=P28\TK Mej07X(3E Y$,q+H:H2\Yq+:00*P[
4 3U%2w.\W0][7$#<2P(*23MgSZ=P28\TK Mej07X(cEV+$,q+H'/28)qU:0P*==#!<) 0
'\\2(9[(J<]j:n7l57%v%CgzV7%v%CgzV7\90b7d'bRWi)%-*7%((E%S$rD((94Uyx8
oU=7y$#<2)/f23mGsz=p23mGsz=p23mGsz=p28\tk mEJ07x((eh23_jXW'xmv_jwrBA:l
)K  ixZt%5+#9ID[69/%54F$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[b:(7%((e/V$Rd((94uYX8
o+'1V$#<2p(*23mGsz=p23mGsz=p23mGsz=p28\tk mEJ07x((eh23_jX)2xmv_jwrBA:l
)K  'xZt%5+#9G'3X#=0kd!8y#=0kd!8y# Um0'W)-4:DAHze3wf)1-)>#!O)12\9Q+Y
3[H(<# 9Xve(722f/xLWs/D+%xLWs/D+%xZ>mz203%+$uQPhiU23_jX>sxmv_jwrBA:l
)K  [xD6#/;9RxD6#Cw+*7ype#=0kd!8y# Um0'W)-4:DA)z=]wf)1-5H# 7)%2\yQ6394uY=8
oU=7s$#<2)/f2A%%u:R.a.o\;:R.a.o\;:=MD/%toCix4YJ+439I*p!-i:0p*p7$k-/z
-\#*50Xz
.ends iob_obc_pred_n_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_p_e
** View name: schematic
************************************
.subckt iob_obc_pred_p_e loc_gnd loc_vccaux loc_vcco opp opp_del oppi
+oppi_del pslew0 pslew1 pslew2 pslew3 pslew4 pslew5 pslew_lowvcc
.prot FREELIB
7O$'P7Tt2CP(37Tt2WXlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-'BS07%((E%v$#4()94 y33WRbahL
)*P([xD6.#V2]823mGs6k>D$,t/Q\>aW7*90B7D'J;wI)%-)<#=-/bJ*7\o-2xmv_.P:00*7[
49+x j$#<2c'H269%)iCid,+g/:r.A.O\;:r.A.O\;:=md/%TOcIX4y=+j:ra:ZbVW+3aj$rD(*[XM/_3Q
7O['7<# 9x%S)7%v%CgzV7\) 'JS$,T/qn[ $#kv<x.f5<#M-[Bh)7%((EV2\Yq+:00*P[
49+x%h$#<23IJ23MgSZ=P23MgSZ=P23MgSZ=P28\TK Mej07X(3E S$,q+HIXMV_JWRba:L
)K  [h280SuE/xi/,<m(9[(jBUH:R.a.o\;:=MD/%toCix4Y=++:RA:zH#!O)12\9Q+Y
3MZjH#V2]d t,#V2]8gv0%w+*7J5X#=0kd!8y# Um0'W);3:DAJzBrwf)1-)7\o-uxmv_jwrBA:l
)K  'xZt%-u(9$u30x4:R.a.o\;:R.a.o\;:=MD/%toCix4YB+J:RA:zBvwr%A:$Rz((6
ez7>5W+*7j5x#t<r2457%v%CgzV7%v%CgzV7\90b7d'bRWi) -P>#=-/BS*7$;-/XM/_JQ
7O['7E# 9x%t97*KF*c:$,T/qn[ $,T/qn[ $#kv<x.f5<#M-[B:$,q+H:XMV_JWRba:L
)K  '1280SuW'xi/,<m39ID[62 O9ID[62 O9[oW9SV7'v2,_3X39I*p!vwr%A:$Rz((6
ez7IVW+*7j)h#t<r2457%v%CgzV7%v%CgzV7\90b7d'bRWi) -P>#=-/BS*7$;-/XM/_JQ
7O['7I# 9x%Y*7%v%C-A[1$O:r.A.O\;:r.A.O\;:=md/%TOcIX4y=+UP9i*P!-j:0P*P7$K-/Z
F8=Yi:=2'5Bjw2BI(,X# 9X%Vp7%V%cGZv7\90B7D'BrwI) -p7%((e/2\yQ+:00*p[
4 w9[(Jb-+:]0lTU;WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!Jl:ra:ZbVWR%a:$rZ((6
eO8%3W+*7j)h#t<r2407%v%CgzV7%v%CgzV7\90b7d'bRWi)%-(7%((E%S$rD((94Uyx8
oU=7y$#<2C2/23mGsz=p23mGsz=p23mGsz=p28\tk mEJ07x(3e s$,Q+hixmv_jwrBA:l
)K  sxZt%-H(9ID[69/%54F$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[bJ07%((e%T$Rd((94uYX8
o+[*)$#<2C:/269%)I[xZt%-iE9ID[62 O9[oW9SV7'v2,_3X39I*p!vwr%A:$Rz((6
eO8%]W+*7j0$#t<r24P7\) 'Vj$,T/qn[ $#kv<x.f5<#M-[B:$,q+H:XMV_JWRba:L
)K  [ 280Su(:xi/,<mQR.4<sGwfm>gA#dwfm>gA#dw+o.ujm4up9C*7!Uwf)1-5H# 7)%2\yQ6394uY=8
o+'xZt%-u(9ID[69/%54F$#<2C2h23mGsz=p28\tk mEJ07x(3e%+$,Q+h'*2\yQ+:00*p[
49+xu2w.*W0]$7$#<2c:/23MgSZ=P28\TK Me)s7X(cE%+$,q+H:Xz'_;WR%a:$rZ((6
eO8%3I:=2'5<-W2bi(,x#=0KD!8Y#=0KD!8Y# uM0'w)-4:dahZx#=-/BS$rD((94Uyx8
o+2xZt%-i>9$u30x3:R.a.o\;:R.a.o\;:=MD/%toCix4Y=++E9I*p!-i:0p*p7$k-/z
F>#S+:=2'5Hvw2BI(,H#=0kd!8y#=0kd!8y# Um0'W)-4:DAHzXYwf)1-5H# 7)%2\yQ6394uY=8
oU=7+$#<2C'1269%)I:xLWs/D+%xLWs/D+%xZ>mz203%+$uQPh/h23_jXC:xZ'_-wr%A577$k-[z
F8=Y4:=2'5Bjw2BI(,=# 9X%T57%V%cGZv7\90B7D'BrwI) -77%((e/2\yQ+:00*p[
49+x :$M*t:M$IH7\) '1S$,T/qn[ $#kv<x.fsj#M-[Bt$,q+H:Xz'_-WR%a577$K-[Z
F>#SP)9[(jBvL:]0Ltu3wfm>gA#dwfm>gA#dw+o.ujm4up9C*7!3wf)1-)7$;-/xm/_jq
7=u280sU>:XlwS/Y%K=M'7\) 'J:$,T/qn[ $#kv<x.f5<#M-[Bj07%((E%t$rD((94Uyx8
o+[*J$#<2C:/269%)I/xZt%-4)9ID[62 O9[oW9SV7'v2,_3X(9I*p!vwr%A:$Rz((6
eO8%uW+*7j5x#=0KD!8Y# 9x +97%v%CgzV7\90b7d'bRWi) -7h#=-/B+$rD((94Uyx8
oU=7HS7tT2cp(37tT2wd t,# 9X%J*7%V%cGZv7\90B7D'J;wI) -(7%((e/28)Qu:0p*==#!<) 0
Zr\t;M70
.ends iob_obc_pred_p_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_n_b
** View name: schematic
************************************
.subckt iob_obc_pred_n_b gtl0 gtl1 gtl2 loc_gnd loc_vccaux nslew0 nslew1
+nslew2 nslew3 nslew4 nslew5 opn opn_del opni opni_del
.prot FREELIB
7O['07\) [uY$,T/q\>Agr4WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!5WF)1-)>#!o)12\9q+y
3[Jp># 9X yp7%V%cGZv7%V%cGZv7%V%cGZv7\90B7D'BrwI)1-;<#=-/b+$Rd((94uYX8
oU=7H$#<23uj2A%%+:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+4:RA:zBvwr%A:$Rz((6
ez7IRW+*7h9x#d r123MgSZ=P23MgSZ=P28\TK Mej07X(3E%23_Jxc:XMV_JWRba:L
)K  $xD6#/;9RxD6#Cw+*7HS$#=0kd!8y# Um0'W)-4:DA+$,Q+h'/28)Qu:0p*==#!<) 0
'\\2c9[(J=;h:n7l77%v%CgzV7%v%CgzV7\90b7d'bRWi) -07%((E%S$#4(c94 y33WRbahL
)K  /xZt%3H(9G'3B#=0kd!8y#=0kd!8y# Um0'W)-4:DAHz=#=-/bJ)7\o-:xmv_.P:00*7[
49+xJ280spm2XlwS/d+%XlwS/d+%XlwS/d+%Xz>MZ203%+$Uq+H(V23_JxP94 yx#!<)10
'#33c9.I87Tt+WXzT%3h(9id[62 o9[Ow9sv7'V2,_VWF)1-5h# 7)%2\Yq6394Uy=8
oU=7)$#<23uj2A%%u:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+LM9I*p!-i:=E*S7$;-/xm/_jq
7= Y57\) [J:$,T/q\>Agr4WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!yWF)1-)>#!o)12\9q+y
3[:$#<23212A%%P:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+u:RA:zBvw+3AJ$Rd(*[xm/_3q
7O$'7=# 9xu:;7\KF*c)$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpH'Xlyx+U>9[fyb#!o)\h$rZ(36
eO6%;j:=2'5>3WFM>G<Sg$R3XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=#=-/BS*7$;-/XM/_JQ
7O$'sh# 9x%+(7%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H'/2\Yq+:00*P[
492x :$M* :M$zH7\) 'Vt$,T/q\>Agr4W2O.UJM4UP9c*07%((E%S$#4(m94 yx#!<)10
'\*23'XzT%-4w9[U30X3:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dahZb#=-/Bj)7\O-'XMV_.p:00*7[
492xuE$#<2m/F23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+U>94 yx#!<)10
'\*2(9[(JbRj:r.A.+g/'0e23MgS6K>;\)#=0KDp[S[!79$Ow9sv7'V2,_3xc9i*P!Vl:0P*P7$K-/Z
F>.Sip9[(jBrJ:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3XC9I*p!-i:0p*p7$k-/z
F>.Si)9[(jJj,:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3XC9I*p!-i:0p*p7$k-/z
F>.SiE9[(jBrJ:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3MijJYw+*7)pe#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((e%s$Rd((94uYX8
oU]7sp7\) 'f:$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jX>sxmv_jwrBA:l
)KT : 280S3((xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F>.SiC9[(jBrJ:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3MijJrw+*7J0i#=0kdP[s[!79[(jB]+:R.a.+G/'0E26\tk mEJ07x(39I*p!vL:0p*p7$k-/z
F>.SiM9[(jBrJ:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-)>#!O)12\9Q+Y
3$J7$# 9X%H)7\kf*C:$,t/Q\>aGR4wfm>g<sG$r3xi>mz203%+$uQPh'xLYX+iE94 YX#!<)10
'\*2P/XzT%;+#9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:ZbVWR%a:$rZ((6
eI7I5W+*7j0I#=0KD!8Y#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[BY07%((E%S$rD((94Uyx8
oU]7H97tT+cp(37tT+wd t,# 9XU:;7%V%c-a[1$o:]MD/%toCix4Y<#=-/bJ)7\o-uxmv_jwrBA:l
)KT [*280S3((xZ/,<mp9ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*7!-wf)1-5H# 7)v2\yQ+:00*p[
492xu)$#<2m/F23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+Ie94 yx#!<)10
'\*23UXzT%-4w9[U30Xp:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dahZb#=-/BS*7$;-/XM/_JQ
7O$')E# 9x%+(7%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H'/2\Yq+:00*P[
492xVh$#<2m/F23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+U>94 yx#!<)10
'\*239[(JjJ,:r.A.+g/'0e23MgS6K>;\)#=0KDp[S[!79$Ow9sv7'V2,_3xc9i*P!Vl:0P*P7$K-/Z
F>.S4C9[(jJj,:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3$H(B# 9X%+(7\kf*Cs$,t/Q\>aGR4wfm>g<sG$r3xi>mz203%+$uQPh'xLYX+u>9[FYH#!O)\H$Rz(36
eI;7\) 'Vt$#Z=9dV23MgS6K>;\)#=0KDp[S[!79$Ow9sv7'V2,_3xc9i*P!-I:=e*07$;-/XM/_JQ
7O$'5I# 9x%+(7%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H'/2\Yq+:00*P[
492x*280s3((Xz/,<M39id[69/%54f$,T/q\>Agr4W2O.UJM4UP9c*7!-WF)1-)>#!o)12\9q+y
3MijBYw+*7)pe#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*7!-wf)1-5H#!O)12\9Q+Y
3MijHUw+*7J0i#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((e%s$Rd((94uYX8
oU]7)$#<2Ci*289%)I/xZt%-P>9ID[69/%54F$.KV<X.F5<#m-[bJ$,Q+h:h2\yQ+:00*p[
492xuY$#<2m/F23MgS6K>;\)# 9x%v77%v%C-A[1$O:]md/%TOcIX4y=#=-/BS*7$;-/XM/_JQ
7O$'*7\) U1E$#Z=9d%23MgS6K>;\)#=0KDp[S[!79$Ow9sv7'V2,_3xc9i*P!-I:0P*P7$K-/Z
F>.Si:=2'SX]w+BI(,X# 9X%:07%V%c-a[1$o:]MD/%toCix4Y=+u:RA:zHYwr%A:$Rz((6
eO6%]W+*7)PE#=0KD!8Y#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[B+07%((E%S$rD((94Uyx8
oU]7H)7\) 'vT$#z=9D%23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3XC9I*p!-i:0p*p7$k-/z
F>.Su#9[(jBrJ:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-)>#!O)12\9Q+Y
3Mij=rw+*7)pe# <R24)7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(3e%23_jXC:xZ'_vwr%A577$k-[z
F>.S4:=2'5Xrw+BI(,X#=0kdP[s[!79ID[69/%54F$.KV<X.F5<#m-[bJ$,Q+h:h2\yQ+:00*p[
492xu:$#<2m/F23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+Ie94 yx#!<)10
'\*2>:XzT%;+#9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:ZbVWR%a:$rZ((6
eO6%;p:=2'5<uWFM>G<Sg$R3XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=#=-/Bj)7$;-/XM/_JQ
7O$'sb# 9x%+(7%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dahZb#=-/Bj)7$;-/XM/_JQ
H0[I:MsQ
.ends iob_obc_pred_n_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_p_b
** View name: schematic
************************************
.subckt iob_obc_pred_p_b loc_gnd loc_vccaux loc_vcco opp opp_del oppi
+oppi_del pslew0 pslew1 pslew2 pslew3 pslew4 pslew5 pslew_lowvcc
.prot FREELIB
7O['7$# 9x ))7%v%CgzV7%v%CgzV7%v%CgzV7\90b7d'bRWi) -9h#=-/B+$rD((94Uyx8
oU=7H(7\) [U:$,t/QN[ $,t/QN[ $,t/QN[ $#KV<X.F5<#m-[by)7%((ev2\yQ+:00*p[
49+xH280spmSXI/,<M(9id[62 o9id[62 o9[Ow9sv7'V2,_3x(9i*P!RWR%a:$rZ((6
eO8%34:=2'7h-W2bi(,=#=0KD!8Y#=0KD!8Y# uM0'w)-4:dahZI5WF)1-07$;-/XM/_JQ
7=*280sUc2XI/,<Mm9id[62 o9id[62 o9[Ow9sv7'V2,_3x)SXlyx+U>94 yx#!<)10
'#5W+*7h*b#t<r24s7%v%CgzV7%v%CgzV7\90b7d'bRWi) -0>#=-/Bj)7$;-/XM/_JQ
7=u280spe'XlwS/Y%K=M'7%v%CgzV7%v%CgzV7\90b7d'bRWi) -(7%((E/v$rD((94Uyx8
o+[hs$#<2C'j269%)I/xZt%-3>9ID[62 O9[oW9SV7'v2,_3wf)1-0i#!O)12\9Q+Y
3[J$#<2C'j23mGs6k>;\)#=0kd!8y#=0kd!8y# Um0'W)-4:DAHzi#=-/bs*7$;-/xm/_jq
7O['s7Tt29.I64# 9x v57%v%CgzV7\90b7d'j;Wi)u-s7%((E/28)q3:0P*P7$K-/Z
F>#S+:=2'7>-w2BI(,H#=0kd!8y#=0kd!8y# Um0'W)-4:DAHz<Ywf)1-5H# 7)%2\yQ6394uY=8
oU=7Hp7tT29.i64# 9X e)7%V%cGZv7\90B7D'J;wI)%-07%((e/28)Qu:0p*==#!<) 0
'#3l)9[(Jb-h:]0lTU-WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!5l:ra:ZhyWR%a:$rZ((6
eO8%5W+*7h*b#=0KD!8Y# 9x ))7%v%CgzV7\90b7d'bRWi) -9h#=-/B+$rD((94Uyx8
oU=7H$#<23s%269%)IixLWs/D+%xLWs/D+%xZ>mz203%+$uQPh(h23_jXC:xZ'_-wr%A577$k-[z
F>#Si:m$i.y<=:m$ih6d)f9[(jB-H:R.a.o\;:=MD/%toMux4YJ+4:RA:zH# 7)U2\yQ+:00*p[
49+x h$#<23(/269%)iCid,+g/:r.A.O\;:r.A.O\;:=md/%TOcIX4yb+4:ra:ZbVW+3aj$rD(*[XM/_3Q
7= t57\) [Hj$.Z=9d1280spmSXlwS/d+%Xz>MZ203%+$UqpH/Xlyx+4:0P*P7$K-/Z
F8=Y4:=2'5B5w2BI(,=# 9X s57%V%cGZv7\90B7D'BrwI) -($#=-/b+$Rd((94uYX8
oU=7H57\) '1y$.z=9DdLWu9/%9ID[62 O9ID[62 O9[oW9SV7'v2,_-Xp9I*p!-i:=E*57$;-! 2\9QPY
3[H(H# 9X V57*kf*CJ$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[b+*7%((e/V$Rd((94uYX8
oU=7HS7tT2cp(37tT2wd t,# 9X%:97%V%cGZv7\90B7D'J;wI)%-07%((e/28)Qu:0p*==#!<) 0
'\\2P9[(Jb-h:]0lTUVWFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!5l:ra:ZbVW+3aj$rD(*[XM/_3Q
7O['57\) '%Y$.Z=9dV23MgSZ=P23MgSZ=P28\TK Mej07X(cE 23_Jxc:Xz'_-WR%a577$K-[Z
F>#SJ:=2'5B5wfm>gA#dw+*7HSX#=0kd!8y# Um0'W)-4:DAHz$vwf)1-07$;-/xm/_jq
7= ts7\) [Hj$.Z=9d 280sUmSXlwS/d+%Xz>MZ203%+$UqpH2/23_JxP94 yx#!<)10
'\\23:XzT%-3>9$U30X+:r.A.O\;:r.A.O\;:=md/%TOcIX4y=#=-/B+(7$;-/XM/_JQ
7O[';7\) 'uv$.Z=9d 23MgSZ=P23MgSZ=P28\TK Mej07X(3EJS$,q+HIXMV_JWRba:L
)KT /xD6./;9RxD6.Cwfm>g<sGV:R.a.+G/09$oW9SV7uU2,_;X)ixLYX+uE9[FY$#!O)\H$Rz(36
eI7x3W0]$2w.*#:r.A.+g/09id[69/%MXI>MZ203u)$Uq3H2V23_JxcSXz'_5WR%a577$K-[Z
-\#*50Xz
.ends iob_obc_pred_p_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_nf2
** View name: schematic
************************************
.subckt iob_obc_pred_nf2 loc_gnd loc_vccaux opn opni
.prot FREELIB
7O['P7Tt+9.I84#=0KD!8Y#=0KD!8Y# uM0'w)-4:dajZI#=-/Bj)7$;-/XM/_JQ
7O$'P7Tt+9.I84#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-'Bt$,q+H'/28)qU:0P*==#!<) 0
Zr\t;M70
.ends iob_obc_pred_nf2
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_n_a
** View name: schematic
************************************
.subckt iob_obc_pred_n_a gtl0 gtl1 gtl2 loc_gnd loc_vccaux nslew0 nslew1
+nslew2 nslew3 nslew4 nslew5 opn opn_del opni opni_del
.prot FREELIB
7O$')$# 9x t57%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H'/2\Yq+:00*P[
492x/280sU)/Xz/,<M>9id[69/%54f$,T/q\>Agr4W2O.UJM4UP9c*7!uh:ra:ZbVW+3aS$rD(*[XM/_3Q
7O$'(7\) 'J:$#Z=9d 23MgS6K>;\)#=0KDp[S[!79$Ow9sv7'V2,_3xw2Xlyx+Ie94 yx#!<)10
'\*2c9[(J=uU:r.A.+g/'0e23MgS6K>;\)#=0KDp[S[!79$Ow9sv7'V2,_3x(UXlyx+Ue94 yx#!<)10
'\*2cSXzT%-h(9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpH[Xlyx+U>94 yx#!<)10
'\*2>IXzT%3jc9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpH[Xlyx+U>94 yx#!<)10
'\*2>$XzT%3jc9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:ZbVWR%a:$rZ((6
eO6%yW+*7j9x# <r24P7%v%C-A[1$O:r.A.+g/'0e26\TK Mej07X(39i*P!R4:0P*P7$K-/Z
F>.SuW9[(j=Uu:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-0<#!O)12\9Q+Y
3MijBvw+*7J9X#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((e%s$Rd((94uYX8
oU]7J97\) [*J$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jXC:xmv_jwrBA:l
)KT 'v280SPW'xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F>.SuC9[(jB5+:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-0<#!O)12\9Q+Y
3MijJUw+*7H(B#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((e%V$Rd((94uYX8
oU]7J;7\) [*J$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jXC:xmv_jwrBA:l
)KT uj280Su)/xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!vL:0p*p7$k-/z
F>.S3p9[(jB5+:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3MijJvw+*7H(B#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*7!3wf)1-5H#!O)12\9Q+Y
3Mije# 9X%yp7%V%cGZv7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(CeU23_jXC:xmv_jwrBA:l
)KT uU280SPW'xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F>.SuM9[(jB5+:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3MijJ-w+*7J9X#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((e%V$Rd((94uYX8
oU]7)77\) [*J$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jX>sxmv_jwrBA:l
)KT u1280Su)/xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F>.S4:=2'5$jw+BI(,J#=0kdP[s[!79ID[69/%54F$.KV<X.F5<#m-[bT97%((e%s$#4(C94 Y33wrBAHl
)KT [%280SPW'xZ/,<mM9ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*7!UH:RA:zBvw+3AJ$Rd(*[xm/_3q
7O$'7h# 9x t57\KF*cj$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpH$J23_Jxc:XMV_JWRba:L
)KT i 280Su)/xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F6B3H:=2'7i-w+BI(,X#=0kdP[s[!79ID[69/%54F$.KV<X.F5<#m-[xLYX+4p94 YX#!<)10
'\*23/Xd6##v2=8280spw'XlwS/Y%K=M'7*90b7d'bRWi)V23_Jxc:Xz'_RWR%a:$rZ((6
eO6%;W+*7j9x# <r2407%v%C-A[1$O:r.A.+g/'0e26\TK Mej07X(3E*Y$,q+H'/28)q4:0P*P7$K-/Z
F6=UH:=2'7i-wfm>gA#dwfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI)%-S7%((e%s$Rd((94uYX8
oU]7y$#<2C21289%)I'xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4Y=+J)9I*p!-i:0p*p7$k-/z
F>.SP)9.i86d)f9.i84/;9RxZt%-H(9ID[69/%54F$.KV<X.F5<#m-ixLYX+u>9[FY<#!O)12\9Q+Y
3Mij=;w+*7H(B# <R2477%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(3e*y$,Q+h:h2\yQ+:00*p[
492x +$#<2c2123MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[B:s7%((E%v$rD((94Uyx8
o2[*J$#<23$%289%)I:xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4Y=+J)9I*p!-i:=E*)7$;-! 2\9QPY
3Mij<jw+*7H(B#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((e%s$Rd((94uYX8
oU]7s;7\) [*J$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jXC:xmv_jwrBA:l
)KT :h280SPW'xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F>.S3E9[(jB5+:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3X39I*p!-i:0p*p7$k-/z
F>.S3#9[(jB5+:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3X39I*p!-i:0p*p7$k-/z
F>.Si>9[(j=Uu:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3X39I*p!-i:0p*p7$k-/z
F>.Si(9[(jB5+:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3MijH3w+*7J9X#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((e%s$Rd((94uYX8
oU]7s57\) 'j:$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jXC:xmv_jwrBA:l
)KT :U280Su)/xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F6e# 9X T57\kf*C+$,t/Q\>aGR4wfm>g<sG$r3xi>mz203%+$uQPh$j23_jXC:xZ'_rwr%A:$Rz((6
eO8%;W+*7)sj#d r 23MgSZ=P23MgSZ=P28\TK Mej07X(3E%23_Jxc:Xz'_VWR%a577$K-[Z
F>#S4:=2'SJ;wfm>g<sG$r3xLWs/D+%xLWs/D+%xZ>mz203%+$uQPh'j23_jXC:xmv_jwrBA:l
)\u(sxZt%;u39ID[62 O9ID[62 O9ID[62 O9[oW9SV7'v2,_3XC2xLYX+iE94 YX#!<)10
'\\2c9[(Jj;3:n7l57%v%CgzV7%v%CgzV7\90b7d'bRWi)%-57%((E%S$#4(>94 y33WRbahL
)K  /xZt%;u39G'3B#=0kd!8y#=0kd!8y# Um0'W)-4:DAHzi5wf)1-5H# 7)/2\yQ6394uY=8
oU=7y$#<2MuU23mGsz=p23mGsz=p23mGsz=p28\tk mEJ07x(3e%y$,Q+h:h2\yQ+:00*p[
4 3U%2w.\W0][7$#<2m' 23MgSZ=P28\TK Mej07X(mE%23_Jxc:Xz'_VWR%a577$K-[Z
F>#Si:=2'SJ;wzXI:$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[bJ$,Q+h'/28)Qu:0p*==#!<) 0
'#3hc9[(Jj-p:r.A.+g/'0e23MgSZ=P23MgSZ=P28\TK Mej07X(3E%Y$,q+H'/2\Yq+:00*P[
4 (9[(Jj-p:n7l77%v%CgzV7%v%CgzV7\90b7d'bRWi) -;b#=-/Bj)7\O-'XMV_.p:00*7[
4 3$V280s3c[X!J,JWFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!]U:ra:ZbVWR%a:$rZ((6
eO8%uW0][GV0%W0][7$#<2mUu23MgSZ=P28\TK Mej07X(>9i*P!-I:=e*)7$;-! 2\9qpy
e4Z68t2Y
.ends iob_obc_pred_n_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_n_d
** View name: schematic
************************************
.subckt iob_obc_pred_n_d gtl0 gtl1 gtl2 loc_gnd loc_vccaux nslew0 nslew1
+nslew2 nslew3 nslew4 nslew5 opn opn_del opni opni_del
.prot FREELIB
7O['97\) [uY$,T/qn[ $,T/qn[ $,T/qn[ $#kv<x.f5<#M-/Bv$,q+H$%2\Yq+:00*P[
4 3U%2w.\W0][7$#<23:H23MgSZ=P28\TK Mej07X(cEV+$,q+H'/28)qU:0P*==#!<) 0
'\\2m9[(J=;h:n7l77%v%CgzV7%v%CgzV7\90b7d'bRWi) -;=#=-/Bj)7$;-/XM/_JQ
7= Y57\) [/v$,T/q\>Agr4WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!3h:ra:ZhyWR%a:$rZ((6
ezP7\) [/v$Os=39id[62 o9id[62 o9[Ow9sv7'V2,_3xPUXlyx+U>94 yx#!<)10
'#3jP9[(J=Vl:n7lP7%v%CgzV7%v%CgzV7\90b7d'bRWi) -0j#=-/BS*7$;-/XM/_JQ
7O['77Tt+CP(37Tt+WXzT%33)9id[62 o9[Ow9sv7'V2,_;x3(Xlyx+U>9[fyb#!o)\h$rZ(36
eO8%VW+*7hs$#d r%23MgSZ=P23MgSZ=P28\TK Mej07X(mEVh$,q+H'/2\Yq+:00*P[
49+xV280spm2XlwS/Y%K=M'7%v%CgzV7%v%CgzV7\90b7d'bRWi) -PI#=-/BS*7$;-/XM/_JQ
7=%:*7\) [/v$,T/qn[ $,T/qn[ $,T/qn[ $#kv<x.f5<#M-/Bv$,q+H2J2\Yq+:00*P[
49+x%280spm2X!J,JWFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!]p:ra:ZhyWR%a:$rZ((6
eO8%JW+*7h)>#d r%23MgSZ=P23MgSZ=P28\TK Mej07X(cEH23_Jxc:XMV_JWRba:L
)KT 2 280SuCixLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F>.SiC9[(jB-4:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3Mij<]w+*7J5<#=0kdP[s[!79[(jB]J:R.a.+G/'0E26\tk mEJ07x(39I*p!5u:0p*p7$k-/z
F>.SH(9[(jBr3:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3Mij<Uw+*7J0J#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((e%s$Rd((94uYX8
oU]7+97\) '%+$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jX)'xmv_jwrBA:l
)KT :U280SupuxLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F>.Si>9[(jBr3:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-9B#!O)12\9Q+Y
3MijHrw+*7J0J#=0kdP[s[!79[(jJjH:R.a.+G/'0E26\tk mEJ07x(39I*p!5u:0p*p7$k-/z
F>.Si)9[(jB-4:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-9B#!O)12\9Q+Y
3MijHUw+*7J;i#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((ejJ$Rd((94uYX8
oU]7s*7\) 'v)$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jXC:xmv_jwrBA:l
)KT :f280SupuxLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(3e%V$,Q+h'/2\yQ+:00*p[
492xV:$#<2c'V23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+Ie94 yx#!<)10
'\*2P[XzT%-4m9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:ZhyWR%a:$rZ((6
eO6%RU:=2'5bRWFM>G<Sg$R3XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=#=-/Bj)7$;-/XM/_JQ
7O$'0j# 9x%j07%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dahZbyWF)1-5h#!o)12\9q+y
3Mij<vw+*7)p$#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((ejJ$Rd((94uYX8
oU]7+07\) '%+$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jXC:xmv_jwrBA:l
)KT ih280SupuxLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!5u:0p*p7$k-/z
F>.SP:=2'5Brw+BI(,X# 9X Tp7%V%c-a[1$o:]MD/%toCix4Y=#=-/by57$;-/xm/_jq
7O$'7># 9x%j07\KF*c)$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpHIu23_Jxc:XMV_JWRba:L
)*PW2xZt%-4M9ID[62 O9ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*7!33:RA:zBvwr%A:$Rz((6
eO6%33:=2'5<;W+bi(,=#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+hc94 yx#!<)10
'\*2c[XzT%-UP9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:Z$-WR%a:$rZ((6
eO6%3I:=2'5<;W+bi(,b#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[B+s7%((E/v$rD((94Uyx8
oU]7H07\) [*:$#z=9D123mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-9B#!O)12\9Q+Y
3$H(B# 9X%+S7\kf*Cs$,t/Q\>aGR4wfm>g<sG$r3xi>mz203%+$uQPhiU23_jXC:xZ'_-wr%A577$k-[z
F>.SPC9[(jBr3:=0Ltu;wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) -0J#=-/bJ)7$;-/xm/_jq
7O$'7I# 9x%j07\KF*cj$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpHIu23_Jx>SXMV_JWRba:L
)KT (xZt%-up9ID[62 O9ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*7!jL:RA:zBvwr%A:$Rz((6
eO6%-+:=2'5bRW+bi(,<#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-UBvs7%((E%S$rD((94Uyx8
oU]7:$#<2CiU289%)I/xZt%-3(9ID[69/%54F$.KV<X.F5<#m-[xLYX+HC94 YX#!<)10
'.-p)9[(Jb;+:=0lTUJWFM>G<Sg$R3XlwS/Y%K=M'7*90b7d'bRWi) 23_Jx)'XMV_JWRba:L
)KT [f280SuCixZ/,<m>9ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*7!r3:RA:zBvw+3AJ$Rd(*[xm/_3q
7O$'7$# 9x%j07\KF*ch$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:Z$-WR%a:$rZ((6
eO6%3+:M$z$M* !9[(JbR3:r.A.+g/'0e26\TK Mej07X(3EFj$,q+H'/28)q4:0P*P7$K-/Z
F>.SP39[(jBr3:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-9B#!O)12\9Q+Y
3$e$#<2CiU289%)IixLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4YJ+LM9I*p!-i:0p*p7$k-/z
F>.SL:m$Z.y<=:m$Zh6d)f9[(jB-4:R.a.+G/'0E26\tk mEJ07x(3efJ$,Q+h'/28)Q4:0p*p7$k-/z
-\#*50Xz
.ends iob_obc_pred_n_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_p_a
** View name: schematic
************************************
.subckt iob_obc_pred_p_a loc_gnd loc_vccaux loc_vcco opp opp_del oppi
+oppi_del pslew0 pslew1 pslew2 pslew3 pslew4 pslew5 pslew_lowvcc
.prot FREELIB
7O['*7\) '%S$.Z=9d123MgSZ=P23MgSZ=P28\TK Mej07X(3E%+$,q+HIXMV_JWRba:L
)K  (xZt%-uE9$u30x+:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+PM9I*p!rwr%A:$Rz((6
ez7I;W+*7j)>#t<r2477%v%CgzV7%v%CgzV7\90b7d'bRWi) -57%((E/v$rD((94Uyx8
o+[hy$#<2C$j269%)I'xLWs/D+%xLWs/D+%xZ>mz203%+$uQPh/h23_jXC:xmv_jwrBA:l
)K  :xD6./;9RxD6.CsO*I280SuW2xLWs/D+%xZ>mz203U)$uQuh$xLYX+i:=E*07$;-/xm/_jq
7= v07\) '*Y$.Z=9d 23MgSZ=P23MgSZ=P28\TK Mej07X(3E1v$,q+H:H2\Yq+:00*P[
49+xJ280sU>SXlwS/d+%XlwS/d+%XlwS/d+%Xz>MZ203%+$UqpH'Xlyx+Ie94 yx#!<)10
'\\2(9[(JbVl:]0lTUVWFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!-WF)1-5h# 7)/2\Yq6394Uy=8
oU=7+$#<2C$j269%)I:xLWs/D+%xLWs/D+%xZ>mz203%+$uQPh/h23_jXC:xZ'_vwr%A577$k-[z
F8=Uu:=2'5HYw2BI(,X# 9X%J)7%V%cGZv7\90B7D'BrwI) -5<#=-/b+$Rd((94uYX8
oU=7J$#<2C$j269%)IixLWs/D+%xLWs/D+%xZ>mz203%+$uQuhij23_jXC:xZ'_-wr%A577$k-[z
F8B# 9X%T97%V%c-a[1$o:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+P:RA:zBvwr%A:$Rz((6
ez7IVW+*7j)>#t<r2457%v%CgzV7%v%CgzV7\90b7d'bRWi) -57%((E%S$rD((94Uyx8
oU=7T$#<2C$j23mGsz=p23mGsz=p23mGsz=p28\tk mEJ07x(3e%23_jX>sxmv_jwrBA:l
)\3:=2'5HYwfm>g<sG$r3xLWs/D+%xLWs/D+%xZ>mz203%+$uQPh[xLYX+u>94 YX#!<)10
'#uW+*7j($#t<r24s7%v%CgzV7%v%CgzV7\90b7d'bRWi) -P>#=-/Bj)7\O-'XMV_.p:00*7[
49+x :$M*t:M$IH7\) 'FY$,T/qn[ $#kv<x.fsj#M-'B+$,q+H:Xz'_;WR%a:$rZ((6
eO8%3W+*7j)>#t<r2407%v%CgzV7%v%CgzV7\90b7d'bRWi)%-*<#=-/Bj)7\O-'XMV_.p:00*7[
49+x h$#<2c(J269%)iCid,+g/:r.A.O\;:r.A.O\;:=md/%TOcIX4yb+4:ra:ZbVW+3a)$rD((94Uyx8
oU=7H57\) u1:$.z=9DdLWu9/%9ID[62 O9ID[62 O9[oW9SV7'v2,_-Xp9I*p!-i:=E*S7$;-/xm/_jq
7=J280sU>SXI/,<Mm9id[62 o9id[62 o9[Ow9sv7'V2,_3xc9i*P!-I:=e*57$;-! 2\9qpy
3MZj=;w0]$gv0%w0]$7.y<=:=2'SXjwfm>gA#dw+o.ujm43M9C*5!rwf)1-)7\o-uxmv_jwrBA:l
)K  uxD6.#V2]8280Su>sxLWs/D+%xZ>mz203U)$uQ3:RA:zH# 7)v2\yQ+:00*p[
4 3S/280sUw2XI/,<M(9[(Jb-l:r.A.O\;:=md/%TOcIX4y=+pm9i*P!RWR%a:$rZ((6
eO6%JW0]$GV0%W0]$7$,T/q\>Aw7%v%C-A[M#tuM0'w);3:dajZIRWF)1-5># 7) j$rD(*[XM/_3Q
7] :77Tt29.I64#=0KDp[STWFM>G<Sgv:]md/%TOmUX4yb+jP9i*P!-l:=e*7b#!o)\h$rZ(36
BM8.'v 6
.ends iob_obc_pred_p_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_p_d
** View name: schematic
************************************
.subckt iob_obc_pred_p_d loc_gnd loc_vccaux loc_vcco opp opp_del oppi
+oppi_del pslew0 pslew1 pslew2 pslew3 pslew4 pslew5 pslew_lowvcc
.prot FREELIB
7O['7># 9x S(7*KF*c:$#<23I 23MgSZ=P28\TK Mej07X(3E123_Jx>94 yx#!<)10
'\\23(XzT%3439$U30X+:r.A.O\;:r.A.O\;:=md/%TOcIX4y=++:ra:Zh#!o)12\9q+y
3MZjBjw+*7H0<#T<R2477%V%cGZv7%V%cGZv7\90B7D'BrwI) -77%((e/2\yQ+:00*p[
49+x t$#<23IF23MgS6K>;\)#=0KD!8Y#=0KD!8Y# uM0'w)-4:dahZbRWF)1-5I#!o)12\9q+y
3MZj$# 9X yS7%V%cGZv7%V%cGZv7%V%cGZv7\90B7D'BrwI) -7H#=-/b+$Rd((94uYX8
oU=7V$#<232*23mGs6k>;\)#=0kd!8y#=0kd!8y# Um0'W)-4:DAHzBrwf)1-5i#!O)12\9Q+Y
3MZje# 9X T77*kf*C:$#<23$v23mGsz=p28\tk mEJ07x(3e123_jX>94 YX#!<)10
'\\23:XzT%3jP9$U30X+:r.A.O\;:r.A.O\;:=md/%TOcIX4y=++:ra:Zh#!o)12\9q+y
3MZj=5w+*7H(e#T<R2477%V%cGZv7%V%cGZv7\90B7D'BrwI) -77%((e/2\yQ+:00*p[
49+x +$#<23Su23MgSZ=P280sp)UXlwS/d+%Xz>MZ203%+$UqpH[/23_JxP94 yx#!<)10
'#3j>9[(J=y3:]0lTU-WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!Jl:ra:ZhyWR%a:$rZ((6
eO8%33:M$I.Y<=:M$IH6D)F9[(J=],:r.A.O\;:=md/%TOmUX4y=+j:ra:Zh# 7)%2\Yq6394Uy=8
oU=7+$#<2C/*269%)I:xLWs/D+%xLWs/D+%xZ>mz203%+$uQPh/h23_jXC:xZ'_-wr%A577$k-[z
F>#SPC9[(j=],:]0Ltu/=0D-a[7%V%cGZv7%V%cGZv7\90B7D'BrwI) -(7%((e%s$#4(C94 Y33wrBAHl
)K  'xZt%-+W9$u30x4:R.a.o\;:R.a.o\;:=MD/%toCix4YB+J:RA:zBvwr%A:$Rz((6
eO8%uW+*7jPI#=0KD!8Y# 9x%t77%v%CgzV7\90b7d'bRWi) -7h#=-/B+$rD((94Uyx8
o+$xZt%-+W9$u30x3:R.a.o\;:R.a.o\;:=MD/%toCix4Y=++E9I*p!-i:0p*p7$k-/z
F8=Yi:=2'5XUw2BI(,X# 9X s(7%V%cGZv7\90B7D'BrwI) -p7%((e/2\yQ+:00*p[
4 c9[(JbJj:r.A.+g/'0e280spP(XlwS/d+%Xz>MZ203%+$UqpH'V23_Jxc$XMV_JWRba:L
)K  [ 280SuCuxi/,<mQR.4<sGwfm>gA#dwfm>gA#dw+o.ujm4up9C*7!Uwf)1-5H# 7)%2\yQ6394uY=8
o+[hy$#<2C/*269%)I'xLWs/D+%xLWs/D+%xZ>mz203%+$uQPh/h23_jX>sxmv_jwrBA:l
)\H:=2'7>;w2BI(,J#=0kd!8y#=0kd!8y# Um0'W)-4:DAHzXYwf)1-5H#!O)12\9Q+Y
3MZjH#V2]d t,#V2]8gv0%w+*7Jpi#=0kd!8y# Um0'W);3:DAJzBrwf)1-)7\o-uxmv_jwrBA:l
)K  /xZt%3LM9$u30xi:R.a.o\;:R.a.o\;:=MD/%toCix4Y=++E9I*p!-i:=E*57$;-! 2\9QPY
3MZjJ#V2]xD6.Cw+*7H*J#=0kd!8y# Um0'W);3:DAJzBrwf)1-)7\o-uxmv_jwrBA:l
)\PEixZt%-+W9$u30xP:=2'7<rwfm>gA#dw+o.ujm4up9C*7!3wf)1-)7$;-/xm/_jq
7O['77\) [H)$.Z=9dV23MgSZ=P23MgSZ=P28\TK Mej07X(cE*23_Jxc:XMV_JWRba:L
)K  [12W.*w0]$7$#<2C'U23mGsz=p28\tk mE)S7x(3e*23_jX>9[FYB#!O)\H$Rz(36
ez7I;W+*7h*j#t<r2477\) [*E$,T/qn[ $#kv<x.f5<#M-[Bh$,q+H:XMV_JWRba:L
)\PW'xZt%3LM9$u30x+:=2'7i3wfm>gA#dw+o.ujm4up9C*7!jwf)1-)7$;-/xm/_jq
7=u280speUXlwS/Y%K=M'7\) [Jt$,T/qn[ $#kv<x.f5<#M-[Bj07%((E%t$rD((94Uyx8
oU=7J77\) '*H$,t/QN[ $,t/QN[ $,t/QN[ $#KV<X.F5<#m-[bH)7%((ev2\yQ+:00*p[
492x12w.*So*i2w.*#:r.A.+g/09id[69/%MXI>MZ203u)$UqUH:V23_JxcSXz'_5WR%a577$K-[Z
F6=jP:m$i$m*T!9ID[69/%mxLWs/y%k.26\tk mE)S7x(Ce/+$,Q+h'h28)QH:0p*==#!<) 0
Zr\t;M70
.ends iob_obc_pred_p_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_pf
** View name: schematic
************************************
.subckt iob_obc_pred_pf loc_gnd loc_vcco opp oppi pslew_lowvcc
.prot FREELIB
7O['P7Tt29.I64#=0KD!8Y#=0KD!8Y# uM0'w);3:da)$,q+H:XMV_JWRba:L
)K  'xD6.#V2]8280S3M9ID[62 O9[oW9SV7uU2,_3Xp9I*p!vwr%A:$Rz((6
eO8%3W+*7)s7*KF*cG3MXY%KXlwS/d+%XlwS/d+%Xz>MZ203u)$UqpHIXlyx+I:0P*P7$K-/Z
F>.S+:m$i$m*T!9ID[69/%mxLWs/y%k.26\tk mE)S7x(Mev23_jXCsxZ'_-wr%A577$k-[z
-\#*50Xz
.ends iob_obc_pred_pf
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_p_es
** View name: schematic
************************************
.subckt iob_obc_pred_p_es loc_gnd loc_vccaux loc_vcco opp opp_del oppi
+oppi_del pslew0 pslew1 pslew2 pslew3 pslew4 pslew5 pslew_lowvcc
.prot FREELIB
7O['(7\) ' :$,T/qn[ $#<2m'%23MgSZ=P28\TK Mej07X(3E S$,q+HIXMV_JWRba:L
)K  [U2W.*sO*I2W.*#Q%2L$#<2Mu123mGsz=p28\tk mE)S7x(3e*23_jX>9[FYB#!O)\H$Rz(36
ez7>VW+*7j7x#t<r24P7\) U v$,T/qn[ $#kv<x.f5<#M-[B:$,q+H:XMV_JWRba:L
)\J:=2'5=jw2BI(,J#=0kd!8y#=0kd!8y# Um0'W)-4:DAHzXYwf)1-5H#!O)12\9Q+Y
3MZj=# 9XUJ97*kf*C+$,t/QN[ $,t/QN[ $#KV<X.F5<#m-'bT$,Q+h'/2\yQ+:00*p[
49+xJ280sUw:XlwS/d+%XlwS/d+%XlwS/d+%Xz>MZ203%+$UqpH[/23_JxP94 yx#!<)10
'\\2e9[(Jbu+:r.A.+g/'0e23MgSZ=P23MgSZ=P28\TK Mej07X(3E%+$,q+H'*2\Yq+:00*P[
4 3$u280s3c2XI/,<M39[(Jb-U:r.A.O\;:=md/%TOcIX4y=+p:ra:Zh#!o)12\9q+y
3MZj=Uw+*7J;X#=0kdP[s[!79ID[62 O9ID[62 O9[oW9SV7'v2,_3XCixLYX+uW94 YX#!<)10
'\\2#9[(Jb5U:]0lTUJW+*7j)$#=0KD!8Y# uM0'w)-4:dahZx#=-/BS$rD((94Uyx8
oU=7H77\) 'vV$.z=9DdLWu9/%9ID[62 O9ID[62 O9[oW9SV7'v2,_3XW9I*p!-i:=E*57$;-! 2\9QPY
3[J$#<2C[123mGs6k>;\)# 9X%ep7%V%cGZv7\90B7D'BrwI) -5<#=-/bJ(7$;-/xm/_jq
7O['s7Tt29.I64# 9xuj97%v%CgzV7\90b7d'j;Wi)%-5<#=-/BS$#4(m94 yx#!<)10
'\\23:XzT%-I)9$U30X+:r.A.O\;:r.A.O\;:=md/%TOcIX4y=++:ra:Zh#!o)12\9q+y
3[y$#<2M'j269%)IuxLWs/D+%xLWs/D+%xZ>mz203%+$uQPh/h23_jXC:xmv_jwrBA:l
)K  /xZt%;u)9$u30xi:R.a.o\;:R.a.o\;:=MD/%toCix4Y=++E9I*p!-i:=E*57$;-! 2\9QPY
3MZj<# 9X%Hp7*kf*Cs$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[b:*7%((e%s$#4(C94 Y33wrBAHl
)\PEixZt%-P(9$u30xP:=2'5eYwfm>gA#dw+o.ujm4up9C*7!3wf)1-)7$;-/xm/_jq
7O['7x#v2]Xd6.cW+*7j0>#=0KD!8Y# uM0'w);3:dahZI#=-/BS$#4(c94 y33WRbahL
)K  [j280SuC'xi/,<m39ID[62 O9ID[62 O9[oW9SV7'v2,_3X39I*p!vwr%A:$Rz((6
ez7IVW+*7)5$#t<r2457%v%CgzV7%v%CgzV7\90b7d'bRWi) -P>#=-/BS*7$;-/XM/_JQ
7O['57\) ' :$.Z=9dV23MgSZ=P23MgSZ=P28\TK Mej07X(cE*23_Jxc:XMV_JWRba:L
)\3:=2'SB5wfm>g<sG$r3xZt%-J(9ID[62 O9[oW9SV7'v2,_3XCixLYX+uW94 YX#!<)10
'#3l)9[(Jb3+:]0lTU-WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!Jl:ra:ZhyWR%a:$rZ((6
eO8%3,:=2'sx-W2bi(,x#=0KD!8Y#=0KD!8Y# uM0'w)-4:dahZx#=-/BS$rD((94Uyx8
oU=7Jp7\) 'fV$.z=9D 23mGsz=p23mGsz=p28\tk mEJ07x(3e 23_jX>94 YX#!<)10
'\\2>9.I66D)F9.I64/;9rXzT%-p(9id[62 o9[Ow9sv7Uu2,_-xcIXlyx+I:=e*s7$;-/XM/_JQ
7O['7b# 9xu)P7*KF*cG3MXY%KXlwS/d+%XlwS/d+%Xz>MZ203%+$UqpH$Xlyx+U>9[fyb#!o)\h$rZ(36
eO8%34:=2'sb5WFM>Ga#DW+*7j(h#=0KD!8Y# uM0'w)-4:dahZ=VWF)1-07$;-/XM/_JQ
7O['7># 9xuh*7*KF*c:$#<2m/%23MgSZ=P28\TK Mej07X(3E123_Jx>94 yx#!<)10
'#3jc9[(Jj-h:]0lTUJW+*7j9b#=0KD!8Y# uM0'w)-4:dahZx#=-/BS$rD((94Uyx8
oU=7J77\) u%J$,t/QN[ $,t/QN[ $,t/QN[ $#KV<X.F5<#m-[bH)7%((ev2\yQ+:00*p[
492x12w.*So*i2w.*#:r.A.+g/09id[69/%MXI>MZ203u)$UqUH:V23_JxcSXz'_5WR%a577$K-[Z
F6=jP:m$i$m*T!9ID[69/%mxLWs/y%k.26\tk mE)S7x(Ce/+$,Q+h'h28)QH:0p*==#!<) 0
Zr\t;M70
.ends iob_obc_pred_p_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_pfx
** View name: schematic
************************************
.subckt iob_obc_pred_pfx loc_gnd loc_vcco opp oppi pslew_lowvcc
.prot FREELIB
7O$'P7Tt29.I64#=0KDp[STWFM>G<Sgv:]md/%TOmUX4yj+4:ra:ZbyW+3aj$rD(*[XM/_3Q
7O['P7Tt29.I64#=0KD!8Y#=0KD!8Y# uM0'w);3:da)$,q+H:XMV_JWRba:L
)K  'xD6.#V2]8280S3W9ID[62 O9[oW9SV7uU2,_3Xp9I*p!vwr%A:$Rz((6
eO8%3W+*7)(7*KF*cG3MXY%KXlwS/d+%XlwS/d+%Xz>MZ203u)$UqpHIXlyx+I:0P*P7$K-/Z
-\#*50Xz
.ends iob_obc_pred_pfx
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_n_es
** View name: schematic
************************************
.subckt iob_obc_pred_n_es gtl0 gtl1 gtl2 loc_gnd loc_vccaux nslew0 nslew1
+nslew2 nslew3 nslew4 nslew5 opn opn_del opni opni_del
.prot FREELIB
7O$'9x# 9x E57%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H'/2\Yq+:00*P[
492xJh$#<2c'123MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+U>94 yx#!<)10
'\*2>'XzT%-U(9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:ZbVWR%a:$rZ((6
eO6%V3:=2'7E-WFM>G<Sg$R3XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=#=-/Bj)7$;-/XM/_JQ
7O$')h# 9x E57%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H2%2\Yq+:00*P[
492x/+$#<23(%23MgS6K>;\)# 9x S77%v%C-A[1$O:]md/%TOcIX4y=#=-/BY57$;-/XM/_JQ
7O$')$# 9x%jP7%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H2%2\Yq+:00*P[
492x/t$#<23:H23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+hc94 yx#!<)10
'\*2>SXzT%3,c9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:ZbVWR%a:$rZ((6
eO6%V,:=2'7E-WFM>G<Sg$R3XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=+Ue9i*P!-I:0P*P7$K-/Z
F>.S4(9[(jB-+:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-)>#!O)12\9Q+Y
3Mij<3w+*7H;B#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((e/V$Rd((94uYX8
oU]7+57\) '%:$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jXC:xmv_jwrBA:l
)KT iU280SuC/xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(3e%V$,Q+h'/2\yQ+:00*p[
492xVS$#<23: 23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+hc94 yx#!<)10
'\*2PIXzT%-U(9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:ZbVWR%a:$rZ((6
eO6%Rh:=2'5bJWFM>G<Sg$R3XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=#=-/BY57$;-/XM/_JQ
7O$'0I# 9x E57%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H'/2\Yq+:00*P[
492xVv$#<23(%23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+hc94 yx#!<)10
'\*2P(XzT%-U(9id[69/%54f$#<23:H23MgS6K>;\)#tuM0'w)-4:dah$,q+H2%2\Yq+:00*P[
492x v$#<2c'1289%)iUXlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=+4m9i*P!-I:0P*P7$K-/Z
F6=UH:=2'7e-wfm>gA#dwfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) -7J#=-/bJ)7$;-/xm/_jq
7O$'*7Tt+CP(37Tt+WD T,# 9x%jP7%v%C-A[1$O:]md/%TOcIX4y=+,c9i*P!-I:=e*07$;-/XM/_JQ
7O$'7j# 9x E57\KF*ch$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:Z$-WR%a:$rZ((6
eO6%JW+*7h;b# <r24P7\) 'Vj$,T/q\>Agr4W2O.UJM4UP9c*77%((EJj$rD((94Uyx8
oU]7J77\) '%:$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jX)'xmv_jwrBA:l
)KT [v280SuW$xZ/,<m(9ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((ejJ$Rd((94uYX8
o2[*J$#<23(%289%)I:xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4Y=+4M9I*p!-i:=E*57$;-! 2\9QPY
3$e$#<23(%289%)IixLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4YJ+LM9I*p!-i:0p*p7$k-/z
F>.SPW9[(jB-+:=0Ltu-wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) -0J#=-/bs*7$;-/xm/_jq
7O$'7h# 9x E57\KF*cj$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpHIu23_Jx>SXMV_JWRba:L
)KT (xZt%-u(9ID[62 O9ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*7!jL:RA:zBvwr%A:$Rz((6
eO6%-+:=2'5bJW+bi(,<#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-UBvs7%((E%S$rD((94Uyx8
o2' y$#<2Ci%289%)I/xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4Y=#=-/by57$;-/xm/_jq
7O$'7E# 9x%jP7\KF*cS$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpHIu23_Jxc:Xz'_-WR%a577$K-[Z
F>.SP)9[(jB-+:=0Ltu3wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jX)'xmv_jwrBA:l
)KT [12W.\w0][7$#<23(%23mGs6k>;\)#TUm0'W)-4:DAHze-wf)1-5H# 7)v2\yQ+:00*p[
492x j$#<23(%289%)iUXlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=+4m9i*P!-I:0P*P7$K-/Z
F>.SP39[(j=]u:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-9B#!O)12\9Q+Y
3Mij=# 9X%Jp7\kf*C:$#<2C$*23mGs6k>;\)#TUm0'W)-4:DAH$,Q+h2%2\yQ+:00*p[
4 (9[(Jb]j:n7l77%v%CgzV7%v%CgzV7\90b7d'bRWi) -0j#=-/Bj)7$;-/XM/_JQ
7= Y57\) 'Ft$,T/q\>Agr4WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!3h:ra:ZhyWR%a:$rZ((6
ez7j-W0][2w.\#:=2'5EuWFM>Ga#DW+O.UJM4UP9c*5!R4:ra:ZbVW+3aj$rD(*[XM/_3Q
7O['s7\) U1E$Os=39id[62 o9id[62 o9[Ow9sv7'V2,_3x#[Xlyx+U>94 yx#!<)10
'\\2)9[(JjJ,:r.A.O\;:r.A.O\;:r.A.O\;:=md/%TOcIX4yx+l:ra:ZI-WR%a:$rZ((6
ez5xyW+*7j;I#=0KD!8Y#=0KD!8Y#=0KD!8Y# uM0'w)-4:da:Z>#=-/BY97$;-/XM/_JQ
7O['57\) U1E$Os=(9id[62 o9id[62 o9[Ow9sv7'V2,_3x#[Xlyx+Ie94 yx#!<)10
'\\2(9[(Jb]j:n7l57%v%CgzV7%v%CgzV7\90b7d'bRWi)%-*7%((E%S$rD((94Uyx8
o+[*+$#<2C(*2A%%+:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+4M9I*p!vL:0p*p7$k-/z
F>#SP:m$Z.y<=:m$Zh7\) u1e$,t/QN[ $#KV<X.F5<#m-ubH;7%((e%s$#4(C94 Y33wrBAHl
)K  :xZt%;+#9G'3B#=0kd!8y#=0kd!8y# Um0'W)-4:DA)z<3wf)1-5H#!O)12\9Q+Y
3MZj<# 9XU:;7%V%c-a[1$o:R.a.o\;:R.a.o\;:=MD/%toCix4Y=++W9I*p!vL:0p*p7$k-/z
-\#*50Xz
.ends iob_obc_pred_n_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_n_c
** View name: schematic
************************************
.subckt iob_obc_pred_n_c gtl0 gtl1 gtl2 loc_gnd loc_vccaux nslew0 nslew1
+nslew2 nslew3 nslew4 nslew5 opn opn_del opni opni_del
.prot FREELIB
7O$'7j# 9x%j)7\KF*ch$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpH/u23_JxPIXMV_JWRba:L
)KT 'h280Su)sxZ/,<m(9[(j=;H:R.a.+G/'0E26\tk mEJ07x(3e1)$,Q+hiv2\yQ+:00*p[
492x%t$#<2c'/289%)i/XzT%3he9id[69/%54f$.kv<x.f5<#M-[B:s7%((EV+$rD((94Uyx8
oU]7y77\) '1+$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jXpixmv_jwrBA:l
)KT 2%280SuC:xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!r4:0p*p7$k-/z
F>.SHM9[(jB5L:R.a.+G/'0E280Su(ixLWs/y%k=m'7*90B7D'BrwI) 23_jXpixmv_jwrBA:l
)KT 2/280SuC:xLWs/y%k=m'7\) '1H$,t/Q\>aGR4w2o.ujm4up9C*77%((ev+$Rd((94uYX8
oU]7H$#<2C2h23mGs6k>;\)#=0kdP[s[!79ID[69/%54F$.KV<X.F5<#m-[b:)7%((ev+$Rd((94uYX8
o2[*J$#<2C'/289%)I:xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4Y=+L:RA:zBvw+3AJ$Rd(*[xm/_3q
7]F280sUc:Xz/,<MP9id[69/%54f$,T/q\>Agr4W2O.UJM4UP9c*7!RWF)1-5h# 7)u2\Yq+:00*P[
492xJ280sU)SXz/,<M>9id[69/%54f$,T/q\>Agr4W2O.UJM4UP9c*7!yWF)1-5h# 7)%2\Yq6394Uy=8
oU]7H)7\) '%s$#z=9D%23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3X([xLYX+uW94 YX#!<)10
'\*2#9[(Jb5l:r.A.O\;:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dahZbRWF)1-5h#!o)12\9q+y
3MijJ# 9X%y*7\kf*CH$,t/Q\>aGR4wfm>g<sG$r3xi>mz203%+$uQPh/U23_jXpixmv_jwrBA:l
)*u32xZt%3HE9[u30x+:R.a.+G/'0E23mGs6k>;\)#TUm0'W)-4:DAHzX;wf)1-0<#!O)12\9Q+Y
3MijH# 9X%y*7\kf*CJ$,t/Q\>aGR4wfm>g<sG$r3xi>mz203%+$uQPh/ 23_jXC$xmv_jwrBA:l
)KT $xZt%-HE9[u30x4:R.a.+G/'0E23mGs6k>;\)#TUm0'W)-4:DAHz<#=-/bJ)7\o-uxmv_jwrBA:l
)KT 2v280Su)sxLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F>.SH)9[(jB-i:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3MijHUw+*7J9>#=0kdP[s[!79ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*77%((ev+$Rd((94uYX8
oU]7s*7\) '%s$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jXC:xmv_jwrBA:l
)KT :f280SuC:xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(3e J07%((e%s$Rd((94uYX8
oU]7+p7\) 'jV$,t/Q\>aGR4wfm>g<sG$r3xLWs/y%k=m'7*90B7D'BrwI) 23_jXC:xmv_jwrBA:l
)KT i 280SuC:xLWs/y%k=m'7%V%c-a[1$o:R.a.+G/'0E26\tk mEJ07x(39I*p!-J:0p*p7$k-/z
F>.S4C9[(jB5L:R.a.+G/'0E23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3Mij=jw0][2W.\#:=2'5Bvwfm>g<sG$r3xi>mz203%+$uQuh'v23_jXC:xZ'_rwr%A:$Rz((6
eO6%R3:=2'5$yWFM>G<Sg$R3XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=#=-/B+07$;-/XM/_JQ
7O$'0h# 9x%:77%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+HIV2\Yq+:00*P[
492xV+$#<2c2H23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+Uw94 yx#!<)10
'\*2P2XzT%-he9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$UqpH[%+$,q+H'/2\Yq+:00*P[
492xVt$#<2c'/23MgS6K>;\)#=0KDp[S[!79id[69/%54f$.kv<x.f5<#M-[Xlyx+U>94 yx#!<)10
'\*2PSXzT%-U>9id[69/%54f$,T/q\>Agr4WFM>G<Sg$R3XI>MZ203%+$Uqp:ra:Z<RWR%a:$rZ((6
eO6%R,:=2'5$yWFM>G<Sg$R3XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=#=-/Bj)7$;-/XM/_JQ
7O$'9x# 9x%j)7%v%C-A[1$O:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dah$,q+H'/2\Yq+:00*P[
492x j$#<2c'/289%)iUXlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=+l:ra:ZbVWR%a:$rZ((6
eO6%JW+*7j5h#=0KDp[S[!79id[69/%54f$,T/q\>Agr4W2O.UJM4UP9c*7!JI:ra:Z<RWR%a:$rZ((6
eO6%RW+*7j9># <r24s7%v%C-A[1$O:r.A.+g/'0e26\TK Mej07X(3EH23_Jxc:XMV_JWRba:L
)*PW2xZt%-u>9ID[62 O9ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*7!;u:RA:zBvwr%A:$Rz((6
eO6%-W+*7hs$# <r24P7%v%C-A[1$O:r.A.+g/'0e26\TK Mej07X(3E1)$,q+HIV2\Yq+:00*P[
492xH2w.\So*i2w.\#q%2l$#<2c2H23MgS6K>;\)#tuM0'w)-4:dajZbRWF)1-5h# 7)V2\Yq+:00*P[
49+x/2w.\So*i2w.\#:=2'5EuWFM>Ga#DW+O.UJM4UP9c*5!RWF)1-5h# 7)u2\Yq+:00*P[
49+xF280sU#$X!J,-WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*5!Jh:ra:ZbVW+3aj$rD(*[XM/_3Q
7O['07\) 'Ft$,T/q\>Agr4WFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!-4:ra:ZhyWR%a:$rZ((6
ez5xyW+*7)PE#=0KD!8Y#=0KD!8Y#=0KD!8Y# uM0'w)-4:da:ZE#=-/BY)7$;-/XM/_JQ
7O['*7\) 'Ft$Os=39id[62 o9id[62 o9[Ow9sv7'V2,_3x3UXlyx+U>9[fyb#!o)\h$rZ(36
eO8%JW+*7)PE#d r%23MgSZ=P23MgSZ=P28\TK Mej07X(3E 23_Jxc:Xz'_;WR%a:$rZ((6
eO8%5W+*7j;I#=0KD!8Y#=0KD!8Y#=0KD!8Y# uM0'w)-4:da:Z>RWF)1-9<#!o)12\9q+y
3[HSB#V2=xD6#Cw+*7)pe#=0kd!8y# Um0'W)-4:DAJ$,Q+h'/28)Q3:0p*p7$k-/z
F>#SJ:=2'5eUwzXI:$,t/QN[ $,t/QN[ $#KV<X.F5<#m-[bHS7%((e%s$Rd((94uYX8
o+[jJ$#<2M/f23mGs6k>;\)#=0kd!8y#=0kd!8y# Um0'W)-4:DAHzJrwf)1-)>#!O)12\9Q+Y
3[:$#<2M/f2A%%P:R.a.o\;:R.a.o\;:=MD/%toCix4Y=#=-/bJ)7\o-'xmv_.P:00*7[
4 3$V280s3((X!J,JWFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*77%((E%S$rD((94Uyx8
Xr=$3W%8
.ends iob_obc_pred_n_c
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
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_pred_cz
** View name: schematic
************************************
.subckt iob_obc_pred_cz opn_a opn_b opn_c opn_d opn_del_a opn_del_b
+opn_del_c opn_del_d opn_del_e opn_e opp_a opp_b opp_c opp_d
+opp_del_a opp_del_b opp_del_c opp_del_d nslew3 gtl0 gtl1 opni_a
+opni_b opni_c opni_d opni_del_a opni_del_b opni_del_c opni_del_d
+opni_del_e opni_e oppi_a oppi_b oppi_c oppi_d oppi_del_a
+oppi_del_b oppi_del_c oppi_del_d pslew1 pslew2 nslew0 nslew1
+loc_gnd_pred vccaux opn_x<8> opn_x<7> opn_x<6> opn_x<5> opn_x<4>
+opn_x<3> opn_x<2> opn_x<1> opn_x<0> opp_x<13> opp_x<12> opp_x<11>
+opp_x<10> opp_x<9> opp_x<8> opp_x<7> opp_x<6> opp_x<5> opp_x<4>
+opp_x<3> opp_x<2> opp_x<1> opp_x<0> oppi_x<13> oppi_x<12>
+oppi_x<11> oppi_x<10> oppi_x<9> oppi_x<8> oppi_x<7> oppi_x<6>
+oppi_x<5> oppi_x<4> oppi_x<3> oppi_x<2> oppi_x<1> oppi_x<0>
+opni_x<8> opni_x<7> opni_x<6> opni_x<5> opni_x<4> opni_x<3>
+opni_x<2> opni_x<1> opni_x<0> opn_y opni_y opni_es opni_del_es
+opn_del_es opn_es opp_bs opp_del_bs oppi_del_bs oppi_bs opp_y
+oppi_y opp_e opp_del_e oppi_e oppi_del_e pslew3 nslew2 pslew0
+opp_es opp_del_es oppi_es oppi_del_es vcco gtl2 nslew4 nslew5
+pslew4 pslew5 pslew_lowvcc
.prot FREELIB
7W$3TY/ q*X!J,JWZxih$Os=c9id[62 oC$3TY#Y%K=M'7\KF*c:$#Z=9d 289%)i'Z
$89%)IuxZ/,<m>9[u30x4:m$Z.0#V2=d t,/):m$Zh6<w0][7.y<=Q*z
$hm0s0->g68<;Q=d(l
)CT;*pg66<wfm>gA#ds2y2 $+G/'0E2<sGV:m$i.0#V2]d t,/):m$ih6<w0]$7.y<=Q*z
$69%)I/xi/,<m39$u30xu:]0Ltu;w2BI(,H#T<R2407*kf*Cg3mxy%kz
$hm0s0->g68<;Q]d(l
)CT;*pg860wzXI:$oS=39G'3B#=0kd!8y/T;*p2<sG$r3xZ/,<m(9[u30xP:=0Ltu-q
$=0lTU;W+bi(,h# <r2407Tt+C32w.\So*iGX7Tt+WD/$M* !CP(360Q
$W./.M0/q]6(V6\S[6
e768<;q]D/$,T/qn[ ..')o9-A[1$O:\>Aw7Tt2C32w.*So*iGX7Tt2WD/$M*t!CP(360Q
$]0lTUJW2bi(,=#t<r2457*KF*c)$.Z=9d/269%)iIXI/,<Mqr.4<SgQ
$W./.M0/q]6(V6*S[6
e768<;q=Df#>1WFM>Ga#DS2Y2 $+g/'0e2w.\S7hHQ$M* !CeC*p##0-DdXS/t;*PG8d-Q
7W$3TY/ q3Rt%7%v%CgzV6*59%Xp[S[!79.I8641w+Xd6#cS7h*Q$4TfqM3A..')oC[\5[
4#2Y2 .#/O_2)23MgSZ=PG68<;:\>Agr4W0][G'W5E:M$zH641)+X7w-/v[KDI:0DS+j%0
'4*59%Dz.)m4V9id[62 oC$3TY#Y%K=M'7Tt+CeC0p#v2=8G'WRE:W./.M0/q]6(V6\[c6
e768<;q=Df#h1WFM>Ga#DS2Y2 $+g/'0e2w.\S7h/Q$M* !CeC)p##0-DdXS/t;*PG8d-Q
7W$3TY/ q3R)%7%v%CgzV6*59%Xp[S[!79.I8641m+Xd6#cS7huQ$4TfqM3A..')oC[\5[
4#2Y2 .#/O_')23MgSZ=PG68<;:\>Agr4W0][G'W-E:M$zH641c+X7w-/v[KDI:0DS+j%0
'4*59%Dz.)mpV9id[62 oC$3TY#Y%K=M'7Tt+CeC7p#v2=8G'W3E:W./.M0/q]6(V6\[c6
e768<;q=Df#x1WFM>Ga#DS2Y2 $+g/'0e2w.\S7h1Q$M* !CeCPp##0-DdXS/t;*PG8d-Q
7W$3TY/ q<XlwS/d+%DI:0DW6K>;\)#v2=D#$M* !Co2HM0S0->G68<;q=_jL
)CT;*pg86[wzXI:$oS=39G'3B#=0kd!8y/T;*p2<sG$r3xZ/,<m(9[u30xP:=0Ltu-q
$=0lTU;W+bi(,h# <r2407Tt+C=2w.\So*iGg7Tt+WD;$M* !CP(36[Q
$W./.M0/q]6(V6\S'6
e768<;q=D $Os=(9g'3=#d r%23MgSZ=PG68<;:\>Agr4W+bi(,x# <r2477\KF*cjL
T\kf*C)$#z=9D/289%)IixD6#/;:m$Z.y<=Q%xD6#CsO9.i84/;9Rd l
TCV[c./[6*59%dZ.y8
o!]6(v6*s'9ID[62 Oc$3ty#y%k=m'79/%mxD6./$:m$i.y<=Q5xD6.Cs'9.i64/;9Rd;l
T*kf*C:$.z=9D 269%)I'xi/,<mM9$u30xi:]0Lturw2BI(,6%VI\>al
TCV[c./[6*59%di.18
o!]6(v6*sO9ID[62 Oc$3ty#y%k=m'79/%mxD6./;:m$i.y<=Q%xD6.CsO9.i64/;9Rd l
T*kf*C:$.z=9D 269%)I'xi/,<mM9$u30xi:]0Lturw2BI(,6%VI\>al
TCV[c./[6*59%di.y8
o!]6(v6*[3Hfq$,t/QN[ ..')O9-a[m#V2]dF#=je:m$ih6413/)269%)IcID,+G/Y
88Dx6tF%c$3ty/Tt6
e768<;q]_h#>1WFM>Ga#DS2Y2 $+g/09.I6641#+Xd6.cS7hFQ$.Z=9dDlwU9/%6
:7w-/v[KDI:0DS2jZ
Fh.')Oc$\7wUe:R.a.o\;Q]6(v79/%mxD6./o_s)2W.*#Q3rV%7*kf*Cg3mxy%kz
$hm0s0->g68<;Q]_0
'4*59%DI =mhV9id[62 oC$3TY#Y%K.2w.*S7h*Q$M*t!CeC(p#t<r24.,TM6K>0
o4TfqM3A..')oC$\L
)CT;*pg6D31p+xLWs/D+%di:0dw6k>D$m*TQ3ry%7tT2wdF#$1w2BI(,6%VI\>al
TCV[c./[6*59%di [
4#2Y2 ..:p_:)23MgSZ=PG68<;:\>Aw7Tt2CeC0p#v2]8G'WRE:]0lTU/=0d-A[[
a#0-DdXS/t;*PG6d8
o!]6(v6*[3HUq$,t/QN[ ..')O9-a[m#V2]dF#H1w0]$7.)Miv9$u30xsfmCP[s8
_!m3gW-Gs2y2 ..:q
7W$3TY/tT[Rj%7%v%CgzV6*59%Xp[STW0]$G'W-E:M$IH641c+XI/,<Mqr.4<SgQ
$W./.M0/q]6(V6*[y
38i:0ds2J c7P#=0kd!8y/T;*p2<sGV:m$i.)MPv9.i64/o_[)269%)IcID,+G/Y
88Dx6tF%c$3ty/Tt6
e768<;q]_h#x1WFM>Ga#DS2Y2 $+g/09.I6641(+Xd6.cS7h1Q$.Z=9dDlwU9/%6
:7w-/v[KDI:0DS2jZ
Fh.')Oc$gE7%V%cGZv6*59%xP[stw0]$gE7tT2wd#$.z=9DdLWu9/%6
:7w-/v[KDI:0DS2jZ
Fh.')Oc$gt9#=0kd!8y/T;*p2<sG$r3xP[stw0]$gt9#V2]d t,/)<9.i64/)<6
:d6.cSo*iGT9#t<r24P7*KF*ch$.Z=9d%269%)iUXI/,<M>9$U30X4y
8$u30xsfmCP[s##0-dDxs/T;*pg66<kY
38i:0ds2Jr)%7%V%cGZv6*59%xP[stw0]$g'w33v9.i64/o_[Uq$.z=9DdLWu9/%6
:7w-/v[KDI:0DS2je0
'4*59%DI W-E:r.A.O\;q]6(V79/%MXd6./O_[%Q$M*t!CeC7b1W2bi(,6%vi\>AL
TCV[c./[6*59%di )8
o!]6(v6*[_[)23mGsz=pg68<;:\>aW7tT2cEc7=1w0]$7.)MP3+xi/,<mQR.4<sGq
$W./.M0/q]6(V6*[76
e768<;q]_CPp#=0KD!8Y/t;*P2<Sgv:M$I.)m3V9.I64/O_U)269%)iCid,+g/y
88Dx6tF%c$3ty/Tt3z
Fh.')Oc[gt9#D R12A%%P:N7L57%V%cGZv6*59%xP[s[!79[u30x+:=0Ltu3w+BI(,B8
_+BI(,J# <R24)7\kf*C+$m* Q*02W.\sO*Igt9#V2=8gt9#V2=8gv0%s9Bz
$hm0s0->g68<;Q=d(/[
4#2Y2 .#//:n7lP722F[X!J,-WFM>Ga#DS2Y2 $+g/'0e289%)i/Xz/,<M39[U30XUy
8[u30x3:=0Ltuvw+BI(,<#V2=da$m* Q%2L.s#V2=8g[7tT+wd t,//Y
88Dx6tF%c$3ty/ Qkz
Fh.')Oc$gx9#=0kd!8y/T;*p2<sG$r3xP[stw0]$gx9#V2]d t,/F<9.i64/F<6
:d6.cSo*iGX9#t<r24P7*KF*ch$.Z=9d%269%)iUXI/,<M>9$U30X4y
8$u30xsfmCP[s##0-dDxs/T;*pg660kY
38i:0ds2c>23mGsz=pg68<;:\>aGR4w6k>D$m*TQkxD6./;9Rda$m*T!c>2W.*#Q%2L.s8
_2BI(,X#T<R2477*kf*CJ$.z=9DU269%)I:xi/,<mp9$u30xsfmCP[s8
_!m3gW-Gs2y2 ..//Y
e4Z68t2Y
.ends iob_obc_pred_cz
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_n_es
** View name: schematic
************************************
.subckt iob_obc_del_n_es in loc_gnd loc_vccaux out
.prot FREELIB
7O[:$nBW!=XlwS/d+%XlwS/d+%Xz>MZ203%+$Uqp:ra:ZbVWR%a:$rZ((6
eO8=#vRxXx+7%v%CgzV7%v%CgzV7\90b7d'bRWi) -Pj#=-/B)$rD((94Uyx8
oU]12WRSwj_xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4YB#=-/bJ)7\o-'xmv_.P:00*7[
492[Xx+7c :r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dahZx-WF)1-sI#!o)12\9q+y
e4Z68t2Y
.ends iob_obc_del_n_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_p_es
** View name: schematic
************************************
.subckt iob_obc_del_p_es in loc_gnd loc_vcco out pdelsel_vccaux
+pdelsel_vcco pdelselb_vccaux pdelselb_vcco
.prot FREELIB
%/X T,/#+xXp/9#/-2Bj [
49+x%2wrsW2%2l/0%fq\>Agr4W!=XlwS/d+%Xz>MZ203u)$UqpH(Xlyx+I:=e*57$;-! 2\9qpy
3[H;B#VrXxiv0%k9RdP[s[!79p(36C  9ID[62 O9[oW9SV7uU2,_3X#9I*p!vw+3AJ$Rd(*[xm/_3q
7O['P7D)FC8zJ7*;9r0(369/%54f$4\WFM>Ga#DW+O.UJM43m9c*7!]WF)1-)7\O-'XMV_.p:00*7[
49+x 23MgSZ=P2V0%S!=723MgSZ=P23MgSZ=P28\TK Me)s7X(mEV23_;xP94 yx#!<)10
'\*239.MJ7*;9r0(369/%MX787%v%C-A[M#tuM0'w);3:dahZE#=-/Bj*7\O-'XMV_.p:00*7[
492x12V0%S!=726Y<=<*i/.+g/098z$,T/q\>Aw7*90b7d'j;Wi) -;7%((E%v$#4(c94 y33WRbahL
)*23(f2WRSw2%2L/0%FQ\>aW7d)fc8Zj7%V%c-a[m#TUm0'W);3:DAHze#=-/bJ*7\o-'xmv_.P:00*7[
+!+]6dJ[
.ends iob_obc_del_p_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_n_c
** View name: schematic
************************************
.subckt iob_obc_del_n_c in loc_gnd loc_vccaux out
.prot FREELIB
7O$h$nBW!=XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=++c9i*P!;j:0P*P7$K-/Z
F>.jw0072+N#=0kdP[s[!79ID[69/%54F$.KV<X.F5<#m-'xLYX+u>9[FYB#!O)\H$Rz(36
eO8x#>J98z$,T/qn[ $,T/qn[ $#kv<x.f5<#M-[Xlyx+U>94 yx#!<)10
'\\p:M4'$nBWFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!J3:ra:Zj#!o)12\9q+y
e4Z68t2Y
.ends iob_obc_del_n_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_p_bs
** View name: schematic
************************************
.subckt iob_obc_del_p_bs in loc_gnd loc_vcco out pdelsel_vccaux
+pdelsel_vcco pdelselb_vccaux pdelselb_vcco
.prot FREELIB
%/X T,/#+xXp/9#/-$Bj [
49+x%2wrsW2%2l/0%fq\>Agr4W!=XlwS/d+%Xz>MZ203u)$UqUHSXlyx+I:=e*57$;-! 2\9qpy
3[H;B#VrXxiv0%k9RdP[s[!79p(36C  9ID[62 O9[oW9SV7uU2,_-XE9I*p!vw+3AJ$Rd(*[xm/_3q
7O['P7D)FC8zJ7*;9r0(369/%54f$4\WFM>Ga#DW+O.UJM43m9c*5!yWF)1-)7\O-'XMV_.p:00*7[
49+x 23MgSZ=P2V0%S!=723MgSZ=P23MgSZ=P28\TK Me)s7X(mEV23_;xP94 yx#!<)10
'\*239.MJ7*;9r0(369/%MX787%v%C-A[M#tuM0'w);3:dajZ>#=-/Bj*7\O-'XMV_.p:00*7[
492x12V0%S!=726Y<=<*i/.+g/098z$,T/q\>Aw7*90b7d'j;Wi)%-*7%((E%v$#4(c94 y33WRbahL
)*23(f2WRSw2%2L/0%FQ\>aW7d)fc8Zj7%V%c-a[m#TUm0'W);3:DAJz>#=-/bJ*7\o-'xmv_.P:00*7[
+!+]6dJ[
.ends iob_obc_del_p_bs
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_p_c
** View name: schematic
************************************
.subckt iob_obc_del_p_c in loc_gnd loc_vcco out pdelsel_vccaux pdelsel_vcco
+pdelselb_vccaux pdelselb_vcco
.prot FREELIB
%/X T,/#+xXp/9#/-IBY [
49+x%2wrsW2%2l/0%fq\>Agr4W!=XlwS/d+%Xz>MZ203u)$UqUH[Xlyx+I:=e*57$;-! 2\9qpy
3[H;B#VrXxiv0%k9RdP[s[!79p(36C  9ID[62 O9[oW9SV7uU2,_-X39I*p!vw+3AJ$Rd(*[xm/_3q
7O['P7D)FC8zJ7*;9r0(369/%54f$4\WFM>Ga#DW+O.UJM43m9c*5!3WF)1-)7\O-'XMV_.p:00*7[
49+x 23MgSZ=P2V0%S!=723MgSZ=P23MgSZ=P28\TK Me)s7X(mEV23_;xP94 yx#!<)10
'\*239.MJ7*;9r0(369/%MX787%v%C-A[M#tuM0'w);3:dajZ=#=-/Bj*7\O-'XMV_.p:00*7[
492x12V0%S!=726Y<=<*i/.+g/098z$,T/q\>Aw7*90b7d'j;Wi)%-77%((E%v$#4(c94 y33WRbahL
)*23(f2WRSw2%2L/0%FQ\>aW7d)fc8Zj7%V%c-a[m#TUm0'W);3:DAJz=#=-/bJ*7\o-'xmv_.P:00*7[
+!+]6dJ[
.ends iob_obc_del_p_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_n_e
** View name: schematic
************************************
.subckt iob_obc_del_n_e in loc_gnd loc_vccaux out
.prot FREELIB
7O[h$M$2:_k23MgSZ=P23MgSZ=P28\TK Mej07X(3E1)$,q+HUXMV_JWRba:L
)K (9KX$4\wfm>gA#dwfm>gA#dw+o.ujm4up9C*77%((e%s$Rd((94uYX8
oU] 2+N##+9ID[69/%54F$,t/Q\>aGR4w2o.ujm4up9C*7!ju:RA:zJUwr%A:$Rz((6
eO6x#vRxXx+7%v%C-A[1$O:r.A.+g/'0e26\TK Mej07X(c9i*P!-I:=e*57$;-! 2\9qpy
e4Z68t2Y
.ends iob_obc_del_n_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_n_b
** View name: schematic
************************************
.subckt iob_obc_del_n_b in loc_gnd loc_vccaux out
.prot FREELIB
7O[:$nBW!=XlwS/d+%XlwS/d+%Xz>MZ203%+$UqpH'Xlyx+U>94 yx#!<)10
'\\p:M4'$nBWFM>Ga#DWFM>Ga#DW+O.UJM4UP9c*7!JWF)1-5h#!o)12\9q+y
3Mi77b>:w[23mGs6k>;\)#=0kdP[s[!79$oW9SV7'v2,_3wf)1-S7$;-/xm/_jq
7O$:$M$2:_k23MgS6K>;\)#=0KDp[S[!79$Ow9sv7'V2,_-x>9i*P!-I:=e*57$;-! 2\9qpy
e4Z68t2Y
.ends iob_obc_del_n_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_p_b
** View name: schematic
************************************
.subckt iob_obc_del_p_b in loc_gnd loc_vcco out pdelsel_vccaux pdelsel_vcco
+pdelselb_vccaux pdelselb_vcco
.prot FREELIB
%/X T,/#+xXp/9#/-2_0
'\\2c9.MJ7*;9r0(3-/Y%K=M'7c :r.A.O\;:=md/%TOmUX4yb+l:ra:Zh# 7)%2\Yq6394Uy=8
o+[fJ$m$2:]p(39<=Q\>aGR4wO*Igh#Swfm>gA#dw+o.ujm43M9C*5!Ywf)1-)7\o-'xmv_.P:00*7[
49+x12V0%S!=726Y<=<*iG<Sg$R3X787%v%CgzV7\90b7d'j;Wi)%-*7%((E/28)qU:0P*==#!<) 0
'\\239id[62 o9P(36c  9id[62 o9id[62 o9[Ow9sv7Uu2,_;xP9i*s!RWR%a:$rZ((6
eIJ=],:M4'$.D)Fb2lX69/%MX T,/#+xXlwS/Y%K.26\TK Me)s7X(cEH23_JxcSXz'_-WR%a577$K-[Z
F>.SP:m4'$.d)fB2L.+G/098Z$,t/Q\>aW7*90B7D'J;wI)%-*7%((e%V$#4(C94 Y33wrBAHl
)KT /x t,/#+Xxiv0%k9R3g<sGV:w[23mGs6k>D$.KV<X.FSJ#m-'bV$,Q+h'h28)Qu:0p*==#!<) 0
Zr\t;M70
.ends iob_obc_del_p_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_p_e
** View name: schematic
************************************
.subckt iob_obc_del_p_e in loc_gnd loc_vcco out pdelsel_vccaux pdelsel_vcco
+pdelselb_vccaux pdelselb_vcco
.prot FREELIB
%/X T,/#+xXp/9#/-IB+ [
49+x%2wrsW2%2l/0%fq\>Agr4W!=XlwS/d+%Xz>MZ203u)$UqpH(Xlyx+I:=e*57$;-! 2\9qpy
3[H;B#VrXxiv0%k9RdP[s[!79p(36C  9ID[62 O9[oW9SV7uU2,_3X#9I*p!vw+3AJ$Rd(*[xm/_3q
7O['P7D)FC8zJ7*;9r0(369/%54f$4\WFM>Ga#DW+O.UJM43m9c*7!]WF)1-)7\O-'XMV_.p:00*7[
49+x 23MgSZ=P2V0%S!=723MgSZ=P23MgSZ=P28\TK Me)s7X(mEV23_;xP94 yx#!<)10
'\*239.MJ7*;9r0(369/%MX787%v%C-A[M#tuM0'w);3:dahZE#=-/Bj*7\O-'XMV_.p:00*7[
492x12V0%S!=726Y<=<*i/.+g/098z$,T/q\>Aw7*90b7d'j;Wi) -;7%((E%v$#4(c94 y33WRbahL
)*23(f2WRSw2%2L/0%FQ\>aW7d)fc8Zj7%V%c-a[m#TUm0'W);3:DAHze#=-/bJ*7\o-'xmv_.P:00*7[
+!+]6dJ[
.ends iob_obc_del_p_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_n_d
** View name: schematic
************************************
.subckt iob_obc_del_n_d in loc_gnd loc_vccaux out
.prot FREELIB
7O[h$M$2:_k23MgSZ=P23MgSZ=P28\TK Mej07X(3E1)$,q+HUXMV_JWRba:L
)K (9KX$4\wfm>gA#dwfm>gA#dw+o.ujm4up9C*77%((e%s$Rd((94uYX8
oU]12WRSwj_xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4YB#=-/bJ)7\o-'xmv_.P:00*7[
492[Xx+7c :r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:dahZx-WF)1-sI#!o)12\9q+y
e4Z68t2Y
.ends iob_obc_del_n_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_n_a
** View name: schematic
************************************
.subckt iob_obc_del_n_a in loc_gnd loc_vccaux out
.prot FREELIB
7O$h$nBW!=XlwS/Y%K=M'7%v%C-A[1$O:]md/%TOcIX4y=+I:ra:ZbVWR%a:$rZ((6
eO6x#vRxXx+7%v%C-A[1$O:r.A.+g/'0e26\TK Mej07X(cE1v$,q+H'/28)qI:0P*==#!<) 0
'\\+:_k2H##=0KD!8Y#=0KD!8Y# uM0'w)-4:dajZ=#=-/Bj)7$;-/XM/_JQ
7O[h$M$2:_k23MgSZ=P23MgSZ=P28\TK Mej07X(3E*S$,q+H'/2\Yq+:00*P[
+!+]6dJ[
.ends iob_obc_del_n_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_p_d
** View name: schematic
************************************
.subckt iob_obc_del_p_d in loc_gnd loc_vcco out pdelsel_vccaux pdelsel_vcco
+pdelselb_vccaux pdelselb_vcco
.prot FREELIB
%/X T,/#+xXp/9#/-IBj [
49+x%2wrsW2%2l/0%fq\>Agr4W!=XlwS/d+%Xz>MZ203u)$UqpH(Xlyx+I:=e*57$;-! 2\9qpy
3[H;B#VrXxiv0%k9RdP[s[!79p(36C  9ID[62 O9[oW9SV7uU2,_3X#9I*p!vw+3AJ$Rd(*[xm/_3q
7O['P7D)FC8zJ7*;9r0(369/%54f$4\WFM>Ga#DW+O.UJM43m9c*7!]WF)1-)7\O-'XMV_.p:00*7[
49+x 23MgSZ=P2V0%S!=723MgSZ=P23MgSZ=P28\TK Me)s7X(mEV23_;xP94 yx#!<)10
'\*239.MJ7*;9r0(369/%MX787%v%C-A[M#tuM0'w);3:dahZE#=-/Bj*7\O-'XMV_.p:00*7[
492x12V0%S!=726Y<=<*i/.+g/098z$,T/q\>Aw7*90b7d'j;Wi) -;7%((E%v$#4(c94 y33WRbahL
)*23(f2WRSw2%2L/0%FQ\>aW7d)fc8Zj7%V%c-a[m#TUm0'W);3:DAHze#=-/bJ*7\o-'xmv_.P:00*7[
+!+]6dJ[
.ends iob_obc_del_p_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_p_a
** View name: schematic
************************************
.subckt iob_obc_del_p_a in loc_gnd loc_vcco out pdelsel_vccaux pdelsel_vcco
+pdelselb_vccaux pdelselb_vcco
.prot FREELIB
%/X T,/#+xXp/9#/-SBY [
49+x%2wrsW2%2l/0%fq\>Agr4W!=XlwS/d+%Xz>MZ203u)$UqUHIXlyx+I:=e*s7$;-/XM/_JQ
7= E57D)FC8zJ7*;9r0(369/%54f$4\WFM>Ga#DW+O.UJM43m9c*5!RWF)1-)7\O-UXMV_JWRba:L
)K  /xD\%#TO*Iut,/y%k=m'7d)fc8Zj7%V%cGZv7\90B7D'J;wI)%-07%((e/28)Q3:0p*p7$k-/z
F>#SP:R.a.o\;:%2L.4\2:R.a.o\;:R.a.o\;:=MD/%toMux4YJ+4:RA)z<#!O)12\9Q+Y
3Mij=#VrXxiv0%k9RdP[stw!=xLWs/y%k.26\tk mE)S7x(Cev23_jXCsxZ'_;wr%A:$Rz((6
eO6%JW00726Y<=<*i/.+g/09P(36c  9id[69/%MXI>MZ203u)$UqUHIXlyx+Ue9[fyj#!o)12\9q+y
3$'7e]wO*Igh#Sw2%2L/0%FQ\>aW7C :R.a.+G/09$oW9SV7uU2,_-Xp9I*p!-L:=E*S7$;-/xm/_jq
H0[I:MsQ
.ends iob_obc_del_p_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_del_cz
** View name: schematic
************************************
.subckt iob_obc_del_cz delout_n_a delout_n_b delout_n_c delout_n_d
+delout_p_a delout_p_b delout_p_c delout_p_d delin_n_a delin_n_b
+delin_n_c delin_n_d delin_p_a delin_p_b delin_p_c delin_p_d
+loc_gnd_del vccaux vcco delin_n_es delin_p_bs delout_n_es
+delout_p_bs delout_p_e delout_n_e delin_p_e delin_n_e delout_p_es
+delin_p_es pdelsel_vccaux pdelselb_vcco pdelsel_vcco
+pdelselb_vccaux
.prot FREELIB
7WP(36\S9bX T,c q=D(/7%v%CgzV6D)F9-A[1$O:%2lwrsS+C2U$4TfqM3A.Y<=q=D(/[
4#o*iG66<K:%2lH#/tq*023MgSZ=PGV0%W6K>d$Y<=007G66<K:]P(39<=q\>Agr4Q
$]P(39<=q\>Aw7*;9r0(3-/Y%K=M'7*;9r0(3-/Y%K.2HM0S0->GV0%S2C2UL
)C;9RdZ.s#;9R8Z.#//:R.a.o\;Q%2L$+G/'0E2v0%VrXdZ.s##0-dDxs/;9RdZ.s8
o!%2L../F<9p(34\s2c3u$,t/QN[ .y<=:\>aW7d)fm4'../F<9$ t,z)fc-a[1$oY
8$ t,z)fc-a[m#TO*Iut,0s6k>;\)#TO*Iut,0s6k>D$4tFQm3a.y<=Q]d//[
4#o*iG66gWo*i786*S%9id[62 oCP(379/%MX T,T! C$G[7*;9r0(369/%54fL
T*;9R0(369/%mxiv0%k9R3g<sG$r3xiv0%k9R3g<sGV:w./.m0/Q%2L..//Y
38 t,/ Q*x t,C Q=d($,t/QN[ .y<=:\>aGR4wO*ID\%/ Q*x7W-/V[kd t,/ Q*z
Fhy<=Q=d/$y<=!=dZ.-#=0kd!8y/;9RxP[s[!79p(3m$2Q=d/$4tFQm3a.y<=Q=d/l
)C;9Rdi.-#;9R8Z../F:R.a.o\;Q%2L$+G/09p(3m$2Q]d/$.d)fB2L.+G/'0E0
o.D)Fb2l.+g/09$ T,Z)F-Dp[S[!79$ T,Z)F-Dp[STW!M3Gw-gSo*iG660Q
7WP(36*S99P(34\S2C223MgSZ=PGV0%W6K>d$Y<=007G66<W2%2l/0%S6K>;\)8
_2%2L/0%s6k>D$.d)fB2Lx69/%54F$.d)fB2Lx69/%mx7W-/V[kd t,/TQ*z
Fhy<=Q=d $y<=!=dZ.y#=0kd!8y/;9RxP[s[!79p(3m$2Q=d $4tFQm3a.y<=Q=d l
)C;9RdZ.1#;9R8Z.#/$:R.a.o\;Q%2L$+G/'0E2v0%VrXdZ.1##0-dDxs/;9RdZ.18
o!%2L../;:%2Lh#/TQ%xLWs/D+%d t,#y%k.2v0%VrXdi.y#TO*Iut,/y%k=m'[
ato*iUT,/Y%K.26Y<=<*i/.+g/'0e26Y<=<*i/.+g/098dX6Tf%CP(36*So6
e7V0%S2C=2V0%#+C$Gg7%v%CgzV6D)F9-A[M#;9r.MJ6*S'9$ T,Z)FC-A[1$Oy
8$ t,z)fc-a[m#TO*Iut,0s6k>;\)#TO*Iut,0s6k>D$4tFQm3a.y<=Q]d;l
!$ 2y.'l
.ends iob_obc_del_cz
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_n_e
** View name: schematic
************************************
.subckt iob_obc_lvlsh_n_e in init_vccaux_lvlsh_b loc_gnd loc_vccaux loc_vdd
+out
.prot FREELIB
%'X\V-wWFM>Ga#DW%)/-9d8
/M9[(j1#=0kd!8y#/-sbV [
g+:W[/$,T/qn[ $Sqp>E*\L
)KTM98Zx7C :R.a.+d;:R.a.+d;:]MD/7x((efT$,Q+h/*28)QP(94 Y33wrBAHl
)K  [x\v-Ww!=323mGsz=p23mGsz=p28\tk mEJ07x(3e/y$,Q+h'/28)QP(94 Y33wrBAHl
)K  (xD\%# 9X=23mGsz=p23mGsz=p28\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F>#SP(9[(j1##+9ID[62 O9ID[62 O9[oW9SV7'v2,_3X>2xLYX+u>9[FY=jwr%A577$k-[z
F>#SL:m4'$4\F:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+i)9I*p!-i:=E**7$;-! 2\9QP:=GaW#QuY
3Mij=Uw+*7e;7:;[4xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4YJ+3>9I*p!-i:0p*p7$k-/z
F>.SPp9[(j1##+w7g<sG$r3dL<,z*Q-xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4Y=+u:RA:zBvwr%A:$Rz((6
eO6%3U:=2';=# 9x=23MgS6K>;\)#=0KDp[S[!79$Ow9sv7'V2,_;xm:Xlyx+U>94 yx#!<)10
'\*23[Xd\%##+-XzT%]4:r.A.+g/'0e26\TK Mej07X(3EHE$,q+H'/28)qI:0P*==#!<) 28Ogv+)%0
'\*23UX\V-wW!=3280s,39id[69/%54f$.kv<x.f5<#M-UB))7%((E%S$rD((94Uyx8
oU]7H*7\) 5x787\) (f23mGs6k>;\)#TUm0'W)-4:DA)zJvwf)1-5H#!O)12\9Q+Y
3Mij=vw+*7e07\) 5xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4Y=+L#9I*p!-i:=E*)7$;-! 2\9QP:=GaW#QuY
3MZS7C [98Z$,t/QN[ $,t/QN[ $#KV<9C*7!5wf)1-pi# 7)U2\yQ+:00*p[
+!+]6dJ[
.ends iob_obc_lvlsh_n_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_n_b
** View name: schematic
************************************
.subckt iob_obc_lvlsh_n_b in init_vccaux_lvlsh_b loc_gnd loc_vccaux loc_vdd
+out
.prot FREELIB
%'X\V-wWFM>Ga#DW%)V-*d8
/M9[(j1#=0kd!8y#/-[ \l
sjw!=323mGsz=p2[_3Lh:_0
'\*3:W[/$4\WFM>G<YDWFM>G<YDW2O.U$UqpHUXlyx++w9[fy=JWR%a577$K-[Z
F>#SP:Jp/M7C [9ID[62 O9ID[62 O9[oW9SV7'v2,_3X#ixLYX+u>9[FY=jwr%A577$k-[z
F>#SP(9[(j1##+9ID[62 O9ID[62 O9[oW9SV7'v2,_3X#ixLYX+u>9[FY=jwr%A577$k-[z
F>#S,:m4'$#<2'9ID[62 O9ID[62 O9[oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3MZj>#VrXx78-#=0kd!8y#=0kd!8y# Um0'W)-4:DAHzerwf)1-5H# 7)h2\yQ6394uY=# zk.ZYB8
oU]7H07\) 5x784Ss6k>;\)/=6R0>.-#=0kdP[s[!79ID[69/%54F$.KV<X.F5<#m-[bJ$,Q+h'/2\yQ+:00*p[
492x j$#<2#(XzT%[WFM>G<Sg$R3XlwS/Y%K=M'7*90b7d'bRWi)%-5j#=-/Bj)7\O-'XMV_.p:00*7[
492x S$#<23/u280s$:r.A.+g/'0e23MgS6K>;\)#tuM0'w)-4:daj$,q+H'/28)q4:0P*P7$K-/XzaST -'Z
F>.SP39.mj7C [9[(j=j3:R.a.+G/'0E26\tk mEJ07x(C9I*p!-i:=E*07$;-/xm/_jw+N>D8_-q
7O$'7I# 9xF+$dDf.9id[69/%54f$,T/q\>Agr4W2O.UJM4UP9c*5!-3:ra:ZbVW+3aj$rD(*[XM/_3Q
7O$'7j#[o-,2H#0W+*7E;7%v%C-A[1$O:]md/%TOcIX4yb+Um9i*P!-I:=e*57$;-! 2\9qpy
3Mij=Yw+*7;$4\w+*7e07%V%c-a[1$o:]MD/%toCix4YB+uM9I*p!-i:=E*57$;-! 2\9QPY
3MZS7C [98Z$,t/QN[ $,t/QN[ $#KV<9C*7!jL:RA:zXUw+3Ay$Rd(*[xm/_3q
H0[I:MsQ
.ends iob_obc_lvlsh_n_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_n_y
** View name: schematic
************************************
.subckt iob_obc_lvlsh_n_y in init_vccaux_lvlsh_b loc_gnd loc_vccaux loc_vdd
+out
.prot FREELIB
7O$'7I# 9xFj$dDf.9id[69/%54f$,T/q\>Agr4W2O.UJM4UP9c*77%((E%v$rD((94Uyx8
oU]7H77t! 98Zx7\) s123mGs6k>;\)#TUm0'W)-4:DAJz<Uwf)1-5H#!O)12\9Q+:=GaW#QuY
3Mij=;wt%3]$4\F:=2'($#=0kdP[s[!79$oW9SV7'v2,_3wf)1-5>#!O)12\9Q+Y
3Mij=rw+*7;$4\# c-a[1$oQR-L///F:R.a.+G/'0E23mGs6k>;\)#TUm0'W)-4:DAHzB#=-/bJ)7$;-/xm/_jq
7O$'7b# 9x*Y$#<2'9id[69/%54f$,T/q\>Agr4W2O.UJM4UP9c*77%((E%v$rD((94Uyx8
oU]7H)7\) s1280S$:R.a.+G/'0E23mGs6k>;\)#TUm0'W)-4:DAJz<Uwf)1-5H#!O)12\9Q+:=GaW#QuY
3Mij=Yw+*7;$4\w+*7e57%V%c-a[1$o:]MD/%toCix4Y=#=-/bJ*7$;-/xm/_jq
7O['77:;[4X78-#=0KD!8Y#=0KD!8Y# uM0'w)-4:da)Z$5WF)1-5h#!o)12\9q+y
3MZj>#VrXx78-#=0kd!8y#=0kd!8y# Um0'W)-4:DA)zeYwf)1-5H#!O)12\9Q+:=GaW#QuY
3MZj=jw+*7;$4\wfm>gA#dwfm>gA#dw+o.ujm4up9C*S!5H:RA:zBvwr%A:$Rz((6
eO8%]W007280s$:r.A.O\;:r.A.O\;:=md/%TOcIX4y=#=-/Bj)7$;-/XM/_JQ
7O$)$4\f:W[23MgS6%P23MgS6%P26\TK:dahZI#=-/B:(7\O-'XMV_.p:00*7[
g+:W[/$,T/qn[ $Sqp3jZ
F>#;w!=32h##=0kd!8y#=0kd!8y# Um02,_3XW9I*p!jJ:0p*p7$k-/z
-\#*50Xz
.ends iob_obc_lvlsh_n_y
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_p_b
** View name: schematic
************************************
.subckt iob_obc_lvlsh_p_b in loc_gnd loc_vcco loc_vdd out plvlsel_vccaux
+plvlsel_vcco plvlselb_vcco por_b_vcco
.prot FREELIB
%'X\V-wWFM>Ga#DW%)%+Z=:Q
%[XzT%[WFM>Ga#DW%)u+Z<:Q
%:XzT%[S!=723MgSZ=P2[_3IH'_0
[x##+-XlwS/d+%XAyIRxwjZ
aS7:;[4d78%#=0kd!8y#/-ibH [
49+UX78-##+9id[62 o9id[62 o9[Ow9#M-[BY$,q+H/*28)qp(94 y33WRbahL
)KT [ 2WRSw!=3280SPC2xLWs/y%k.26\tk mE)S7x(Mej23_jXCsxZ'_Ywr%A577$k-[xZAst -'z
F>.SP#9_ xg# 9X=gh#Swfm>g<sGV:R.a.+G/09$oW9SV7uU2,_-X32xLYX+uE9[FYB#!O)\H$Rz(36
eO6%33:jP/m7c [9[(J=;I:r.A.+g/09$Ow9sv7Uu2,_-x3UXlyx+Ue9[fy$#!o)\h$rZ(36
eO6%3l:=2'g7c :=2'7jyWFM>G<Sgv:]md/%TOmUX4yb+pm9i*P!-l:=e*97$;-! 2\9qpy
3Mij=5w+*7;$DdF.c8Zj7%V%c-a[m#=0kdP[stw2o.ujm43M9C*5!3H:RA:zBYw+3AJ$Rd(*[xm/_3q
7O$'7x#vRxXzT%[S!=723MgS6K>d$,T/q\>Aw7*90b7d'j;Wi)u-97%((E%v$#4()94 y33WRbah$#2/0=ajL
)KT [/280SPC2xZt%[wfm>g<sGV:R.a.+G/09$oW9SV7uU2,_;X)9I*p!-L:=E**7$;-! 2\9QP:=GaW#QuY
3Mije# 9X=gh#Sw2R-L/0%s6k>D$,t/Q\>aW7%V%c-a[m#TUm0'W);3:DAH$,Q+h'h2\yQ+:00*p[
492x t$#<23UH2 Y0\:r.A.+g/09id[69/%MXI>MZ203u)$UqUH[u23_JxcSXz'_5WR%a577$K-[Z
F>.S4:Jp/M6C  9$L<,z)f-dP[stwt%3]$,t/Q\>aW7*90B7D'J;wI) -97%((e%V$Rd((94uYX8
oU]7V$DdF.c8Zj7*=6R0(369/%mxLWs/y%k.23mGs6k>D$.KV<X.FSJ#m-[xLYX+uE94 YX#!<)10
'\*23IXzT%[W2M6GX69/%MXlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-[Bj$,q+H'H2\Yq+:00*P[
492x/280s$qW['$.%YFb2lX69/%MXzT%[WFM>G<Sgv:]md/%TOmUX4yj+U:ra:ZbyW+3aj$rD(*[XM/_3Q
7O$'7b# 9x ))7\) 5XlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-'Bhs7%((E%v$#4()94 y33WRbahL
)K  (xD\%# 9X=23mGsz=p23mGsz=p28\tk mE)S7x(39I*p!vwr%A:$Rz((6
eO8%;WT%3]$.%YFb2l.+g/'0e2 Y0\qW['$,T/qn[ $#kv<x.fsj#M-[BY$,q+H:XMV_JWRba:L
)K  sxD\%##+-xLWs/D+%xLWs/D+%xZ>mz203U)$uQi:RA:zH# 7) +$Rd((94uYX# zk.ZYB8
oU=7Hp7\) 5x787%V%cGZv7%V%cGZv7\90B7D'J;wI)U-*7%((e/28)Qu(94 Y33wrBAHl
)K  'xZt%[w2R-L/0%s6k>;\)# 9X=gh#Swfm>gA#dw+o.ujm43M9C*S!-wf)1-)7\o-'xmv_.P:00*7[
49+x 2 Y0\:W[/$,T/qn[ $,T/qn[ $#kv<x.fsj#M-UBv$,q+H:Xz'_-+:0P*==#!<) 0
'\*3:W[/$4\WFM>G<YDWFM>G<YDW2O.U$Uq3H'Xlyx++w9[fy=JWR%a577$K-[Z
-\#*50Xz
.ends iob_obc_lvlsh_p_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_p_e
** View name: schematic
************************************
.subckt iob_obc_lvlsh_p_e in loc_gnd loc_vcco loc_vdd out plvlsel_vccaux
+plvlsel_vcco plvlselb_vcco por_b_vcco
.prot FREELIB
%/X78-#=0KD!8Y#/-IJ-7d8
/C9_ xg#=0kd!8y#/-[f-*D8
/39[(j1#=0kd!8y#/-'h\l
svw!=323mGsz=p2[_3uhu_0
[j#[o-,GH#sWFM>Ga#DW%)V-sd8
oU=U2h#0w!=xLWs/D+%xLWs/D+%xZ>mzwI) -7<#=-/b:(7\o-[12\yQ6394uY=8
oU]7H77t! 98Zx7\) [%y$,t/Q\>aW7*90B7D'J;wI)/-77%((e%V$#4(p94 YX#!<)128oGV+)%0
'\*23(X\V-wW+*7;.4\2:r.A.+g/09id[69/%MXI>MZ203u)$Uq3H[Xlyx+Ue94 yx#!<)10
'\*23UX\V-wW!=3280spm:XlwS/Y%K.26\TK Me)s7X(cEu23_JxcSXz'_VWR%a577$K-[Z
F>.SPE9[(j1##+9[(j=;L:R.a.+G/09$oW9SV7uU2,_-XM9I*p!-L:=E*)7$;-! 2\9QPY
3Mij=5w+*7;$DdF.c8Zj7%V%c-a[m#=0kdP[stw2o.ujm43M9C*S!3wf)1-5>#!O)12\9Q+Y
3Mij=jw007280S$Qw['$,t/Q\>aW7%V%c-a[m#TUm0'W);3:DAJzB-wf)1-5># 7)*2\yQ+:00*p7\D%m[*5[
492x S$#<23'J280s$:r.A.+g/09id[69/%MXI>MZ203u)$UqIH[Xlyx+Ue9[fy<#!o)12\9q+:=gAw#qUy
3Mije# 9X=gh#Sw2R-L/0%s6k>D$,t/Q\>aW7%V%c-a[m#TUm0'W);3:DAH$,Q+h'h2\yQ+:00*p[
492x t$#<23UH2 Y0\:r.A.+g/09id[69/%MXI>MZ203u)$UqUHUXlyx+Ue9[fyh#!o)\h$rZ(36
eO6%RWT%3].4\2:]ip39<=[C-A[M#[o-,23MgS6K>d$.kv<x.fsj#M-[Bh07%((E%v$rD((94Uyx8
oU]7V$DdF.c8Zj7*=6R0(369/%mxLWs/y%k.23mGs6k>D$.KV<X.FSJ#m-[xLYX+uE94 YX#!<)10
'\*23IXzT%[W2M6GX69/%MXlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-[Bj$,q+H'H2\Yq+:00*P[
492x/280s$qW['$.%YFb2lX69/%MXzT%[WFM>G<Sgv:]md/%TOmUX4yb+3:ra:ZbyW+3aj$rD(*[XM/_3Q
7O$'7b# 9x ))7\) 5XlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-'B)$,q+H'H28)qI:0P*==#!<) 0
'\\2m9_ XG#tF\iUT,/Y%K=M'7:;[4D78%#=0KD!8Y# uM0'w);3:dahZ=RWF)1-)7$;-/XM/_JQ
7O['*7T! 98zX7%v%CgzV7%v%CgzV7\90b7d'j;Wi)/-s7%((E/28)qp(94 y33WRbah$#2/0=ajL
)K  [1280S$:w[23mGsz=p23mGsz=p28\tk mE)S7x(Ce*s$,Q+h:xZ'_-+:0p*==#!<) 0
'\\2c9[(J1#tF\iUT,/Y%K=M'7\) 5D78%#=0KD!8Y# uM0'w);3:dajZj#=-/BS$#4(c94 y33WRbahL
)K  [x\v-Ww!=323mGsz=p23mGsz=p28\tk mE)S7x(Ce*s$,Q+h:xZ'_-+:0p*==#!<) 0
'\\2#9.MJ7\) 5XlwS/d+%XlwS/d+%Xz>MZ203u)$Uqp:ra:Zh#!o)12\9q+y
3MiS7C [98Z$,t/Q\p $,t/Q\p $.KV<9C*5!;wf)1-pi# 7) :$Rd(*[xm/_3q
H0[I:MsQ
.ends iob_obc_lvlsh_p_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_n_a
** View name: schematic
************************************
.subckt iob_obc_lvlsh_n_a in init_vccaux_lvlsh_b loc_gnd loc_vccaux loc_vdd
+out
.prot FREELIB
%'X\V-wWFM>Ga#DW%)*-0d8
/(98Zx7%V%cGZv7G(C$b) [
g3:=2'g7%v%CgzV7g(3:Bv [
49+UX78-##+9id[62 o9id[62 o9[Ow9#M-'Xlyx++w9[fy<#!o)12\9q+y
3Mij=Yw+*7;$4\w+*7T57%V%c-a[1$o:]MD/%toCix4YJ+iM9I*p!-i:=E*57$;-! 2\9QPY
3Mij=vw+*7e57\) 5xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4YB+4W9I*p!-i:=E*97$;-! 2\9QP:=GaW#QuY
3Mij=Uw+*7T57:;[4xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4YJ+iM9I*p!-i:=E*57$;-! 2\9QPY
3Mij=rw+*7;$4\# c-a[1$oQR-L///F:R.a.+G/'0E23mGs6k>;\)#TUm0'W)-4:DAHzB#=-/bJ)7$;-/xm/_jq
7O$'7b# 9xFY$#<2'9id[69/%54f$,T/q\>Agr4W2O.UJM4UP9c*s!V3:ra:ZbVW+3aj$rD(*[XM/_3Q
7O$'7=#vRxX78-# 9xFj$,T/q\>Agr4W2O.UJM4UP9c*5!Rj:ra:ZbVW+3aY$rD(*[XM/_3W+n>d8_-Q
7O$'7j#[o-,2H#0W+*7E97%v%C-A[1$O:]md/%TOcIX4yj+Im9i*P!-I:=e*57$;-! 2\9qpy
3MZje#VrXxZt%[wfm>gA#dwfm>gA#dw+o.ujm4up9C*77%((e%s$Rd((94uYX8
oU=7Hp7\) 5x787%V%cGZv7%V%cGZv7\90B7D'BrwI)U23_jXC:xZ'_3+:0p*==#!<) 0
'\\2e9.MJ7c [9id[62 o9id[62 o9[Ow9sv7'V2,_;WF)1-5h# 7)H2\Yq6394Uy=# ZK.zyb8
oU=7H$DdF.98Zx7%V%cGZv7%V%cGZv7\90B7D'BrwI)U23_jXC:xZ'_3+:0p*==#!<) 0
'\*3:W[/$4\WFM>G<YDWFM>G<YDW2O.U$UqU:ra:ZxuW+3ahP7$;-! 2\9qpy
e4Z68t2Y
.ends iob_obc_lvlsh_n_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_p_y
** View name: schematic
************************************
.subckt iob_obc_lvlsh_p_y in loc_gnd loc_vcco loc_vdd out plvlsel_vccaux
+plvlsel_vcco plvlselb_vcco por_b_vcco
.prot FREELIB
7O$)$4\f:W[23MgS6%P23MgS6%P26\TK:daj$,q+H/*28)q3:0P*P7$K-/Z
F>#SP(9[(j1##+9ID[62 O9ID[62 O9[oW9SV7uU2,_3XM$xLYX+i:=E*7X#!O)\H$Rz(36
eO8%;WT%3]$.%YFb2l.+g/'0e2 Y0\qW['$,T/qn[ $#kv<x.fsj#M-[Xlyx+I:0P*P7$K-/Z
F>#Su:=2'G7*=6R0(369/%54F$#<2'c8Zj7%V%cGZv7\90B7D'J;wI) -7<#=-/bs$Rd((94uYX8
oU=7e$m$2:=2'G7%V%cGZv7%V%cGZv7\90B7D'J;wI) 23_jX>94 YX#!<)10
'\\2e9.MJ7c [9id[62 o9id[62 o9[Ow9sv7Uu2,_-x3IXlyx+I:=e*07$;-/XM/_JW+n>d8_-Q
7O['77:;[4X78-#=0KD!8Y#=0KD!8Y# uM0'w);3:dahZjuWF)1-)7\O-[12\Yq6394Uy=8
oU]7H77t! 98Zx7\) [*H$,t/Q\>aW7*90B7D'J;wI)%-0<#=-/bJ*7\o-'xmv_.P:00*77\D%m[*5[
492x v$#<2'98z$#<23Su23MgS6K>d$.kv<x.fsj#M-'B)$,q+H'H2\Yq+:00*P[
492xH2 Y0\qW['$.%YFb2l.+g/09id[69/%MXlwS/Y%K.26\TK Me)s7X((E*+$,q+H'H2\Yq+:00*P[
492x S$#<23$ 280s$:r.A.+g/09id[69/%MXI>MZ203u)$UqUHIV23_JxcSXz'_-WR%a577$K-[XzaST -'Z
F>.SP#9_ xg# 9X=gh#Swfm>g<sGV:R.a.+G/09$oW9SV7uU2,_jXWixLYX+uE94 YX#!<)10
'\*23IXzT%[W2M6GX69/%MXlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-/Bt07%((E%v$rD((94Uyx8
oU]7+$DdF.c8Zj7*=6R0(3-/y%k.2 y0\:R.a.+G/09$oW9SV7uU2,_3wf)1-5>#!O)12\9Q+Y
3Mij=Uw+*7H*J#[O-,23mGs6k>D$,t/Q\>aW7*90B7D'J;wI)%-S7%((e%V$Rd((94uYX8
oU]7s$#<2'c8Zj7*=6R0(3-/y%k.280S$:R.a.+G/09$oW9SV7uU2,_3X3ixLYX+uE94 YX#!<)10
'\*23/Xd\%# 9x=GH#sWFM>G<Sgv:r.A.+g/09$Ow9sv7Uu2,_;xm$V23_JxcSXMV_JWRba:$#2/0=ajL
)KT [U2 y0\:w[/$#<23(v23mGs6k>D$.KV<X.FSJ#m-'b)$,Q+h'h2\yQ+:00*p[
492x Y$#<2'9_ XG/#+xXlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-/Bt07%((E%v$rD((94Uyx8
oU]7e$#<2'c8Zj7*=6R0(369/%mxLWs/y%k.23mGs6k>D$.KV<X.FSJ#m-/bT07%((e%V$Rd((94uYX8
oU]7H57\) [f+$#<2'9ID[69/%mxLWs/y%k.26\tk mE)S7x(CeU23_jXCsxmv_jwrBA:l
)K M98Zx7C :R.a.o\;:R.a.o\;:=MD/7x(3ev23_jX($xZ'_-wr%A577$k-[z
ap7C [9ID[62 O9>*7=:q
H0[I:MsQ
.ends iob_obc_lvlsh_p_y
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_n_d
** View name: schematic
************************************
.subckt iob_obc_lvlsh_n_d in init_vccaux_lvlsh_b loc_gnd loc_vccaux loc_vdd
+out
.prot FREELIB
%'X\V-wWFM>Ga#DW%)/-5d8
/(98Zx7%V%cGZv7G(3ubV [
g3:=2'g7%v%CgzV7g(wEV\L
)KTM98Zx7C :R.a.+d;:R.a.+d;:]MD/7x((efT$,Q+h/*28)QP(94 Y33wrBAHl
)K  [1280S$:w[23mGsz=p23mGsz=p28\tk mEJ07x(3e/y$,Q+h'/28)QP(94 Y33wrBAHl
)K  (xD\%# 9X=23mGsz=p23mGsz=p28\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F>#SL:m4'$4\F:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+i)9I*p!-i:=E**7$;-! 2\9QP:=GaW#QuY
3MZj=#[O-,2h#0wfm>gA#dwfm>gA#dw+o.ujm4up9C*7!vH:RA:zBvw+3AHp7$;-! 2\9QPY
3Mij=rw+*7;$4\# c-a[1$oQR-L///F:R.a.+G/'0E23mGs6k>;\)#TUm0'W)-4:DAHzB#=-/bJ)7$;-/xm/_jq
7O$'7I# 9xFE$dDf.9id[69/%54f$,T/q\>Agr4W2O.UJM4UP9c*s!;I:ra:ZbVWR%a:$rZ((6
eO6%3l:=2'g7c :=2';E#=0KDp[S[!79$Ow9sv7'V2,_;xm:Xlyx+U>94 yx#!<)10
'\*23'XzT%]p:=2'g7%v%C-A[1$O:r.A.+g/'0e26\TK Mej07X(mEuS$,q+H'/2\Yq+:00*P[
492x h$M$2:W[/$#<2#IXlwS/Y%K=M'7*90b7d'bRWi) -*E#=-/Bj)7\O-:XMV_.p:00*77\d%M[*5[
492x )$dDf.98zX7\) ( 23MgS6K>;\)#tuM0'w)-4:da)ZjVWF)1-5h#!o)12\9q+y
3Mij=vw+*7e07\) 5xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4Y=+L#9I*p!-i:=E*)7$;-! 2\9QP:=GaW#QuY
3MZS7C [98Z$,t/QN[ $,t/QN[ $#KV<9C*7!5wf)1-pi# 7)U2\yQ+:00*p[
+!+]6dJ[
.ends iob_obc_lvlsh_n_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_p_a
** View name: schematic
************************************
.subckt iob_obc_lvlsh_p_a in loc_gnd loc_vcco loc_vdd out plvlsel_vccaux
+plvlsel_vcco plvlselb_vcco por_b_vcco
.prot FREELIB
%'X\V-wWFM>Ga#DW%)uh [
gp:=2'g7%v%CgzV7g(>UBj [
g3:jP/m6c  9id[62 o9>*)!][y
k/280S$Qw['$,t/QN[ $sQP)eU\l
sjw!=323mGsz=p2[_]+hu_0
'\\3:W[/$4\WFM>Ga#DWFM>Ga#DW+O.U$UqU:ra:ZxuW+3ahP7$;-! 2\9qpy
3Mij=3w0072h#0w+*7H5>#=0kdP[stw2o.ujm43M9C*)7%((e%V$#4(#94 YX#!<)128oGV+)%0
'\*23UX\V-wW!=3280spm'XlwS/Y%K.26\TK Me)s7X(>9i*P!-l:=e*)7$;-! 2\9qpy
3Mij=Yw+*7;$4\w+*7HS$#=0kdP[stw2o.ujm43M9C*)7%((e%V$#4(>94 Y33wrBAHl
)KT [j280S$:Jp/M6C  9ID[69/%mxLWs/y%k.26\tk mE)S7x(3eh23_jXCsxZ'_;wr%A:$Rz((6
eO6%3+:M4'$#<2'C8zJ7%v%C-A[M#=0KDp[STW2O.UJM43m9c*s7%((E%v$#4(#94 yx#!<)128Ogv+)%0
'\*23(X\V-wW+*7;.4\2:r.A.+g/09id[69/%MXI>MZ203u)$UqpHSXlyx+Ue9[fyj#!o)12\9q+y
3Mij=vw+*7H5># 9X=23mGs6k>D$,t/Q\>aW7*90B7D'J;wI)/23_jXCsxZ'_]wr%A:$Rz((9[![m\(C6
eO6%]W+*7;.4\2:]ip39<=q\>Aw7%v%C-A[M#=0KDp[STW2O.UJM43m9c*77%((E%v$rD((94Uyx8
oU]7H(7\) [Uy$DdF.9ID[69/%mxLWs/y%k.26\tk mE)S7x(>9I*p!-L:=E*)7$;-! 2\9QPY
3Mij<#[O-,gh#Sw2R-L/0%FQ\>aW7:;[4xLWs/y%k.26\tk mE)S7x(C9I*p!-L:0p*p7$k-/z
F>.SL:Jp/M6C  9$L<,z)fc-a[m#=0kdP[stwfm>g<sGV:]MD/%toMux4Y=#=-/bJ*7$;-/xm/_jq
7O$'7<# 9x=26M'S[C-A[M#=0KDp[STWFM>G<Sgv:]md/%TOmUX4y=+U:ra:ZbyWR%a:$rZ((6
eO6%VW+*7;.4\2:]ip39<=[C-A[M# 9x=23MgS6K>d$.kv<x.fsj#M-'Xlyx+Ue9[fyh#!o)\h$rZ(36
eO6%3U:=2'7j-W+*7;$,T/q\>Aw7%v%C-A[M#tuM0'w);3:daS$,q+H'H28)qI:0P*==#!<) 0
'\\2m9_ XG#tF\iUT,/Y%K=M'7:;[4D78%#=0KD!8Y# uM0'w);3:daj$,q+H:XMV_JWRba:L
)K  sxD\%##+-xLWs/D+%xLWs/D+%xZ>mz203U)$uQ4:RA:zH# 7) +$Rd((94uYX# zk.ZYB8
oU=7Hp7\) 5x787%V%cGZv7%V%cGZv7\90B7D'J;wI)v23_jX>9[FY=]wr%A:$Rz((6
eO8%-W+*7;$.%YFb2l.+g/'0e280s$qW['$,T/qn[ $#kv<x.fsj#M-'Xlyx+I:=e*)7$;-! 2\9qpy
3MZj=#[O-,2h#0wfm>gA#dwfm>gA#dw+o.ujm43M9C*07%((e/28)QP#94 YX#!<)10
'\\2#9.MJ7\) 5XlwS/d+%XlwS/d+%Xz>MZ203u)$Uqp:ra:Zh#!o)12\9q+y
3MiS7C [98Z$,t/Q\p $,t/Q\p $.KV<9C*57%((e1T$#4(C/xmv_.P:00*7[
+!+]6dJ[
.ends iob_obc_lvlsh_p_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_p_es
** View name: schematic
************************************
.subckt iob_obc_lvlsh_p_es in loc_gnd loc_vcco loc_vdd out plvlsel_vccaux
+plvlsel_vcco plvlselb_vcco por_b_vcco
.prot FREELIB
7O[)$4\f:W[23MgSZ=P23MgSZ=P28\TK:dahZ=RWF)1-PI# 7) :$rD(*[XM/_3Q
7O$'7=#vRxX78-# 9x j97%v%C-A[M#tuM0'w);3:daSZ=#=-/Bj*7\O-IXMV_JWRba:$#2/0=ajL
)KT [f2 y0\:=2'G6C  9ID[69/%mxLWs/y%k.26\tk mE)S7x(Me 23_jXCsxmv_jwrBA:l
)KT [U2 y0\:w[/$#<23u/23mGs6k>D$.KV<X.FSJ#m-'b)$,Q+h'h28)Qi:0p*==#!<) 0
'\*23SXzT%[W!=XzT%33e9id[69/%MXI>MZ203u)$UqUHUXlyx+Ue9[fyh#!o)\h$rZ(36
eO6%3h:=2'g7:;[4D78%#=0KDp[STWFM>G<Sgv:]md/%TOmUX4yj+p:ra:ZbyWR%a:$rZ((6
eO6%3+:M4'$#<2'C8zJ7%v%C-A[M#=0KDp[STW2O.UJM43m9c*5!-U:ra:ZbyW+3at$rD((94Uyx# ZK.zyb8
oU]7H)7\) [%y$#<2'9ID[69/%mxLWs/y%k.26\tk mE)S7x(>e 23_jXCsxZ'_rwr%A:$Rz((9[![m\(C6
eO6%]W+*7;.4\2:]ip39<=q\>Aw7%v%C-A[M#=0KDp[STW2O.UJM43m9c*77%((E%v$rD((94Uyx8
oU]7H(7\) [UV$DdF.9ID[69/%mxLWs/y%k.26\tk mE)S7x(CeU23_jXCsxZ'_vwr%A577$k-[z
F>.S4:Jp/M6C  9$L<,z)f-dP[stwt%3]$,t/Q\>aW7*90B7D'J;wI) -7<#=-/bJ*7$;-/xm/_jq
7O$'*7:;[4D78%#tF\iUT,/Y%K.23MgS6K>d$,T/q\>Aw7*90b7d'j;Wi) 23_JxcSXMV_JWRba:L
)KT [v280S$:].3.-/y%k.23mGs6k>D$,t/Q\>aW7*90B7D'J;wI) -57%((e%V$Rd((94uYX8
oU]7s$#<2'c8Zj7*=6R0(3-/y%k.280S$:R.a.+G/09$oW9SV7uU2,_-XM9I*p!-L:=E*57$;-! 2\9QPY
3Mij=-w+*7HSH# 9X=23mGs6k>D$,t/Q\>aW7*90B7D'J;wI)%-S7%((e%V$#4(>94 Y33wrBAHl
)K  ux\v-Ww2R-L/0%s6k>;\)#[O-,gh#Swfm>gA#dw+o.ujm43M9C*7!34:RA:zH#!O)12\9Q+Y
3MZj>#VrXx78-#=0kd!8y#=0kd!8y# Um0'W);3:DAszJ#=-/bs$#4(3/xmv_.P:00*77\D%m[*5[
49+x :$#<2'98z$,T/qn[ $,T/qn[ $#kv<x.fsj#M-'Bt)7%((E/28)qU(94 y33WRbahL
)K  'xZt%[w2R-L/0%s6k>;\)# 9X=gh#Swfm>gA#dw+o.ujm43M9C*5!;wf)1-)7\o-'xmv_.P:00*7[
49+x 2 Y0\:W[/$,T/qn[ $,T/qn[ $#kv<x.fsj#M-'Bt)7%((E/28)qU(94 y33WRbahL
)K  (xD\%# 9X=23mGsz=p23mGsz=p28\tk mE)S7x(39I*p!vwr%A:$Rz((6
>)$dDf.C8zJ7%v%CgzV7g(>EF\L
s3w+*7;$,t/QN[ $sQuEeh\l
s-wt%3]$,t/QN[ $sQu(Jz
a)7\) 5d78%#=0kd!8y#/-[%-)D8
/(98Zx7%V%cGZv7G(p:_0
'\*3:W[/$4\WFM>G<YDWFM>G<YDW2O.U$UqUHUXlyx++w9[fy=JWR%a577$K-[Z
-\#*50Xz
.ends iob_obc_lvlsh_p_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_n_x
** View name: schematic
************************************
.subckt iob_obc_lvlsh_n_x in init_vccaux_lvlsh_b loc_gnd loc_vccaux loc_vdd
+out
.prot FREELIB
%'X\V-wWFM>Ga#DW%) -0d8
/M9[(j1#=0kd!8y#/-ubV [
g+:W[/$,T/qn[ $Sq4HU_0
'\*23$XzT%]U:jP/m7%v%C-A[1$O:r.A.+g/'0e26\TK Mej07X(39i*P!-l:0P*P7$K-/Z
F>.SP39.mj7C [9[(j>jwfm>g<sG$r3xi>mz203%+$uQuhi*23_jXC:xmv_jwrBA:$#2/0=AJl
)KT [U2 y0\:w[/$#<2W2xLWs/y%k=m'7*90B7D'BrwI) 23_jXCsxmv_jwrBA:l
)KT [v280S$:w[7j69/%54F.,9=<Fd/$,t/Q\>aGR4wfm>g<sG$r3xi>mz203%+$uQPh'xLYX+u>94 YX#!<)10
'\*23'XzT%uh:=2'g7%v%C-A[1$O:r.A.+g/'0e26\TK Mej07X(39i*P!-l:0P*P7$K-/Z
F>.SP>9[(j>jw+*7;$,t/Q\>aGR4wfm>g<sG$r3xi>mz203%+$uQuhi*23_jXC:xmv_jwrBA:$#2/0=AJl
)KT [h280S$:w[280S,C9ID[69/%54F$.KV<X.F5<#m-[xLYX+uE94 YX#!<)10
'\\23/XzT%[W!=XlwS/d+%XlwS/d+%Xz>MZ203%+$Uq3H2J23_Jxc:XMV_JWRba:L
)K  [x\v-Ww!=323mGsz=p23mGsz=p28\tk mEJ07x(Mejy$,Q+h'/2\yQ+:00*p[
49+xF2wrsW+*7;$,T/qn[ $,T/qn[ $#kv<x.f5<#M-[Xlyx+U>94 yx#!<)10
'\\2e9.MJ7c [9id[62 o9id[62 o9[Ow9sv7'V2,_;x#SXlyx+U>94 yx#!<)128Ogv+)%0
'\*3:W[/$4\WFM>G<YDWFM>G<YDW2O.U$UqpH$Xlyx++w9[fyb#!o)\h$rZ(36
eO8j##+-X787%v%CgzV7%v%CgzV7\90bX4y=+j:ra:ZxuWR%a:$rZ((6
BM8.'v 6
.ends iob_obc_lvlsh_n_x
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_p_d
** View name: schematic
************************************
.subckt iob_obc_lvlsh_p_d in loc_gnd loc_vcco loc_vdd out plvlsel_vccaux
+plvlsel_vcco plvlselb_vcco por_b_vcco
.prot FREELIB
%/X78-#=0KD!8Y#/-I%-0d8
/C9_ xg#=0kd!8y#/-[f-SD8
/39[(j1#=0kd!8y#/-'h-)D8
/>9[(j1/#+XxLWs/D+%xaY=-X)Jz
aS7:;[4d78%#=0kd!8y#/-ib:)D8
oU=U2h#0w!=xLWs/D+%xLWs/D+%xZ>mzwI) -7<#=-/b:(7\o-[12\yQ6394uY=8
oU]7HS7:;[4x78-# 9X J97%V%c-a[m#TUm0'W);3:DAJzJ#=-/bJ*7\o-:xmv_.P:00*7[
492x j$#<23'J280s$:r.A.+g/09id[69/%MXI>MZ203u)$UqUHUXlyx+Ue9[fyh#!o)\h$rZ(36
eO6%3+:M4'$#<2'C8zJ7%v%C-A[M#=0KDp[STW2O.UJM43m9c*5!-U:ra:ZbyW+3at$rD((94Uyx# ZK.zyb8
oU]7V$DdF.c8Zj7*=6R0(369/%mxLWs/y%k.23mGs6k>D$.KV<X.FSJ#m-[xLYX+uE94 YX#!<)10
'\*23IXzT%[W2M6GX69/%MXlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-[Bj$,q+H'H2\Yq+:00*P[
492xF280s$qW['$.%YFb2l.+g/09id[69/%MXlwS/Y%K.26\TK Me)s7X(39i*P!-l:0P*P7$K-/Z
F>.SPE9[(j1##+9[(j=r+:R.a.+G/09$oW9SV7uU2,_-XM9I*p!-L:=E*)7$;-! 2\9QPY
3Mij=]wt%3]$#<2'c8Zj7%V%c-a[m#=0kdP[stw2o.ujm43M9C*S!3wf)1-5>#!O)12\9Q+Y
3Mij=Uw+*7H0X#[O-,23mGs6k>D$,t/Q\>aW7*90B7D'J;wI)%-S7%((e%V$#4(>94 Y33wrBAHl
)KT ix\v-Ws!=726,9=<*I/.+G/09_ xg#=0kdP[stw2o.ujm43M9C*7!34:RA:zBYwr%A:$Rz((6
eO6%VW+*7;.4\2:]ip39<=[C-A[M# 9x=23MgS6K>d$.kv<x.fsj#M-'B)$,q+H'H28)qU:0P*==#!<) 0
'\*23[Xd\%##+-XzT%3j(9id[69/%MXI>MZ203u)$UqIH[Xlyx+Ue9[fy<#!o)12\9q+:=gAw#qUy
3Mij=5w+*7;$DdF.c8Zj7%V%c-a[m#=0kdP[stw2o.ujm43M9C*S!3wf)1-5>#!O)12\9Q+Y
3Mij=vw+*7H(X# 9X=23mGs6k>D$,t/Q\>aW7*90B7D'J;wI)/-77%((e%V$#4(p94 YX#!<)128oGV+)%0
'\\239_ XG##+-XlwS/d+%XlwS/d+%Xz>MZ203u)$UqUH$/23_Jx>9[fybJWR%a577$K-[Z
F>#S,:m4'$#<2'9ID[62 O9ID[62 O9[oW9SV7uU2,_3wf)1-)7$;-/xm/_jq
7O['7x# 9x=2H##=0KD!8Y#=0KD!8Y# uM0'w);3:dajZIVWF)1-)7\O-'12\Yq6394Uy=8
oU=7J$#<2'9$L<,z)fc-a[1$o:=2'G6C  9ID[62 O9[oW9SV7uU2,_-XM9I*p!vw+3AJ$Rd(*[xm/_3q
7O['*7T! 98zX7%v%CgzV7%v%CgzV7\90b7d'j;Wi)/-s7%((E/28)qp(94 y33WRbah$#2/0=ajL
)K  ux\v-Ww2R-L/0%s6k>;\)#[O-,gh#Swfm>gA#dw+o.ujm43M9C*7!34:RA:zH#!O)12\9Q+Y
3MiS7C [98Z$,t/Q\p $,t/Q\p $.KV<9C*5!;wf)1-pi# 7) :$Rd(*[xm/_3q
H0[I:MsQ
.ends iob_obc_lvlsh_p_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_n_es
** View name: schematic
************************************
.subckt iob_obc_lvlsh_n_es in init_vccaux_lvlsh_b loc_gnd loc_vccaux
+loc_vdd out
.prot FREELIB
%UXzT%[WFM>Ga#DW%)F-*d8
/C9_ xg#=0kd!8y#/-:bH [
g+:W[/$,T/qn[ $Sqp>E/\L
)KTM98Zx7C :R.a.+d;:R.a.+d;:]MD/7x((efT$,Q+h/*28)QP(94 Y33wrBAHl
)K  sxD\%##+-xLWs/D+%xLWs/D+%xZ>mz203%+$uQPh:j23_jXC:xZ'_Ywr%A577$k-[xZAst -'z
F>#SP:Jp/M7C [9ID[62 O9ID[62 O9[oW9SV7'v2,_3X>2xLYX+u>9[FY=jwr%A577$k-[z
F>#SP(9[(j1##+9ID[62 O9ID[62 O9[oW9SV7'v2,_3X>2xLYX+u>9[FY=jwr%A577$k-[z
F>#S,:m4'$#<2'9ID[62 O9ID[62 O9[oW9SV7'v2,_3wf)1-5H#!O)12\9Q+Y
3Mij=-w+*7e77\) 5xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4YJ+3>9I*p!-i:0p*p7$k-/z
F>.SPM9_ xg##+-xZt%]P:R.a.+G/'0E26\tk mEJ07x(MeUs$,Q+h'/2\yQ+:00*p[
492x t$#<2#(X\V-wWFM>G<Sg$R3XlwS/Y%K=M'7*90b7d'bRWi)u-sh#=-/Bj)7$;-/XM/_JQ
7O$'7<# 9x=2H#c2q\>Agr4SF\iUD60WFM>G<Sg$R3XlwS/Y%K=M'7*90b7d'bRWi) -57%((E%S$rD((94Uyx8
oU]7H)7\) (v280S$:R.a.+G/'0E23mGs6k>;\)#TUm0'W)-4:DAHz>]wf)1-5H# 7)/2\yQ6394uY=# zk.ZYB8
oU]7H77t! 98Zx7\) (v23mGs6k>;\)#TUm0'W)-4:DAHz>]wf)1-5H# 7)/2\yQ6394uY=# zk.ZYB8
oU]7H*7\) 5x787\) (f23mGs6k>;\)#TUm0'W)-4:DA)zJvwf)1-5H#!O)12\9Q+Y
3MZS7C [98Z$,t/QN[ $,t/QN[ $#KV<9C*7!5wf)1-pi# 7)U2\yQ+:00*p[
+!+]6dJ[
.ends iob_obc_lvlsh_n_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_p_x1
** View name: schematic
************************************
.subckt iob_obc_lvlsh_p_x1 in loc_gnd loc_vcco loc_vdd out plvlsel_vccaux
+plvlsel_vcco plvlselb_vcco por_b_vcco
.prot FREELIB
%'X\V-wWFM>Ga#DW%)J-0d8
/398Zx7%V%cGZv7G(Wef\l
svw+*7;.4\2:R.a.o\;:kAJze:q
%/X78-#=0KD!8Y#/-[%-5d8
/M9_ xg/#+XxLWs/D+%xaYB+Lt6
eO6j##+-X787%v%C- V7%v%C- V7*90bX4yb#=-/B:(7\O-UXMV_JWRba:L
)K  (xD\%# 9X=23mGsz=p23mGsz=p28\tk mE)S7x(39I*p!vwr%A:$Rz((6
eO8%3+:=2'g7c :r.A.O\;:r.A.O\;:=md/%TOmUX4y=+3w9i*P!VW+3ahP7$;-! 2\9qpy
3MZj=#[O-,2h#0wfm>gA#dwfm>gA#dw+o.ujm43M9C*7!;J:RA:zH# 7) :$Rd(*[xm/_3q
7O['*7T! 98zX7%v%CgzV7%v%CgzV7\90b7d'j;Wi)%-7<#=-/BS$#4(P94 yx#!<)128Ogv+)%0
'\\2m9_ XG#tF\iUT,/Y%K=M'7:;[4D78%#=0KD!8Y# uM0'w);3:dah$,q+H:XMV_JWRba:L
)K  'xZt%[w2R-L/0%s6k>;\)# 9X=gh#Swfm>gA#dw+o.ujm43M9C*7!34:RA:zH#!O)12\9Q+Y
3Mij=vw+*7H(=# 9X=23mGs6k>D$,t/Q\>aW7*90B7D'J;wI)%-0<#=-/bJ*7\o-'xmv_.P:00*77\D%m[*5[
492x +$#<2'9$d:60S6K>d$,T/q\>Aw7%v%C-A[M#tuM0'w);3:da:ZIRWF)1-5>#!o)12\9q+y
3Mij=jw007280S$Qw['$,t/Q\>aW7%V%c-a[m#TUm0'W);3:DA)zJU4:RA:zBYwr%A:$Rz((9[![m\(C6
eO6%33:jP/m7c [9[(J=]4:r.A.+g/09$Ow9sv7Uu2,_-xm9i*P!-l:0P*P7$K-/Z
F>.SP39.mj7C [9[(j=UP:R.a.+G/09$oW9SV7uU2,_-XpixLYX+uE9[FYB#!O)\H$Rz(39[![m\(C6
eO6%3l:=2'g7c :=2'7>;WFM>G<Sgv:]md/%TOmUX4yb+3:ra:ZbyWR%a:$rZ((6
eO6%3,:jP/m7\) 5D78%#=0KDp[STWFM>G<Sgv:]md/%TOmUX4yx+jP9i*P!-l:0P*P7$K-/Z
F>.SPW9[(j=Y3:Jp/M7%V%c-a[m#=0kdP[stw2o.ujm43M9C*5!;wf)1-5>#!O)12\9Q+Y
3Mij<#[O-,gh#Sw2R-L/0%FQ\>aW7:;[4xLWs/y%k.26\tk mE)S7x(39I*p!-L:0p*p7$k-/z
F>.Si:=2'G6C  9$L<,z)f-dP[stw+*7;$,t/Q\>aW7*90B7D'J;wI) -7<#=-/bJ*7$;-/xm/_jq
7O$'7$# 9x=2 Y0\qW['$,T/q\>Aw7%v%C-A[M#tuM0'w);3:da:ZIRWF)1-5>#!o)12\9q+y
3Mij>#[O-,gh#Sw2R-L/0%s6k>D$,t/Q\>aW7%V%c-a[m#TUm0'W);3:DA:zirwf)1-5>#!O)12\9Q+Y
3Mije# 9X=gh#Sw2R-L/0%s6k>D$,t/Q\>aW7%V%c-a[m#TUm0'W);3:DA:zirwf)1-5>#!O)12\9Q+Y
3Mij=-w+*7H;<# 9X=23mGs6k>D$,t/Q\>aW7*90B7D'J;wI)%-S7%((e%V$Rd((94uYX8
oU=U2h#0w!=xLWs/D+%xLWs/D+%xZ>mzwI) -07%((e1T$#4(C94 Y33wrBAHl
!$ 2y.'l
.ends iob_obc_lvlsh_p_x1
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_n_c
** View name: schematic
************************************
.subckt iob_obc_lvlsh_n_c in init_vccaux_lvlsh_b loc_gnd loc_vccaux loc_vdd
+out
.prot FREELIB
7O$)$4\f:W[23MgS6%P23MgS6%P26\TK:da:ZEuWF)1-PI# 7) :$rD(*[XM/_3Q
%[X78-#=0KD!8Y#/-[/-)d8
/C9_ xg#=0kd!8y#/-:bH [
g3:=2'g7%v%CgzV7g(eE*\L
)K  [x\v-Ww!=323mGsz=p23mGsz=p28\tk mEJ07x(3e/y$,Q+h'/28)QP(94 Y33wrBAHl
)K  (xD\%# 9X=23mGsz=p23mGsz=p28\tk mEJ07x(39I*p!-i:0p*p7$k-/z
F>#SL:m4'$4\F:R.a.o\;:R.a.o\;:=MD/%toCix4Y=+i)9I*p!-i:=E**7$;-! 2\9QP:=GaW#QuY
3MZj=jw+*7;$4\wfm>gA#dwfm>gA#dw+o.ujm4up9C*7!vH:RA:zBvw+3AHp7$;-! 2\9QPY
3Mij=vw+*7e07\) 5xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4Y=+L#9I*p!-i:=E*)7$;-! 2\9QP:=GaW#QuY
3Mij=Uw+*7e;7:;[4xLWs/y%k=m'7%V%c-a[1$o:]MD/%toCix4YJ+3>9I*p!-i:0p*p7$k-/z
F>.SPE9[(j1##+9[(je]wfm>g<sG$r3xi>mz203%+$uQ3hu/23_jXC:xmv_jwrBA:l
)KT [ 2WRSw!=3280S,p9ID[69/%54F$.KV<X.F5<#m-[bV;7%((e%s$#4(>94 Y33wrBAH$#2/0=AJl
)KT [v280S$:w[7j69/%54F.,9=<Fd/$,t/Q\>aGR4wfm>g<sG$r3xi>mz203%+$uQPh'xLYX+u>94 YX#!<)10
'\*23UX\V-wW!=3280s,39id[69/%54f$.kv<x.f5<#M-UB))7%((E%S$rD((94Uyx8
oU]7H57\) ( 280S$:R.a.+G/'0E23mGs6k>;\)#TUm0'W)-4:DA)zJvwf)1-5H#!O)12\9Q+Y
3MZS7C [98Z$,t/QN[ $,t/QN[ $#KV<9C*7!5wf)1-pi# 7)U2\yQ+:00*p[
+!+]6dJ[
.ends iob_obc_lvlsh_n_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_p_x
** View name: schematic
************************************
.subckt iob_obc_lvlsh_p_x in loc_gnd loc_vcco loc_vdd out plvlsel_vccaux
+plvlsel_vcco plvlselb_vcco por_b_vcco
.prot FREELIB
7O[)$4\f:W[23MgSZ=P23MgSZ=P28\TK:dahZ<#=-/B:(7\O-'XMV_.p:00*7[
492x :$M$2:=2'g6c  9id[69/%MXlwS/Y%K.26\TK Me)s7X(mEut07%((E%v$rD((94Uyx# ZK.zyb8
oU]7H)7\) [vV$#<2'9ID[69/%mxLWs/y%k.26\tk mE)S7x(Cev+$,Q+h'h28)Qu:0p*==#!<) 28oGV+)%0
'\*23UX\V-wW!=3280spm:XlwS/Y%K.26\TK Me)s7X(cEu23_JxcSXMV_JWRba:L
)KT [j280S$:Jp/M6C  9ID[69/%mxLWs/y%k.26\tk mE)S7x((e*+$,Q+h'h2\yQ+:00*p[
492x +$#<2'9$d:60S6K>d$,T/q\>Aw7%v%C-A[M#tuM0'w);3:da:ZIRWF)1-5>#!o)12\9q+y
3Mij=Yw+*7;$4\w+*7H)$#=0kdP[stw2o.ujm43M9C*5!;wf)1-5>#!O)12\9Q+Y
3Mij=]wt%3]$#<2'c8Zj7%V%c-a[m#=0kdP[stw2o.ujm43M9C*p!U4:RA:zBYwr%A:$Rz((6
eO6%3j:=2'7h5WT%3]$,T/q\>Aw7%v%C-A[M#tuM0'w);3:dajZj#=-/Bj*7$;-/XM/_JQ
7O$'7=#vRxX78-# 9x +*7%v%C-A[M#tuM0'w);3:dajZ<RWF)1-5># 7)%2\Yq6394Uy=# ZK.zyb8
oU]7+$DdF.c8Zj7*=6R0(3-/y%k.2 y0\:R.a.+G/09$oW9SV7uU2,_3wf)1-5>#!O)12\9Q+Y
3Mij>#[O-,gh#Sw2R-L/0%s6k>D$,t/Q\>aW7%V%c-a[m#TUm0'W);3:DA:zirwf)1-5>#!O)12\9Q+Y
3MijH# 9X=gh#Sw2R-L/0%FQ\>aW7\) 5xLWs/y%k.26\tk mE)S7x(3e +$,Q+h'h2\yQ+:00*p[
492xF280s$qW['$.%YFb2l.+g/09id[69/%MXlwS/Y%K.26\TK Me)s7X((E*+$,q+H'H2\Yq+:00*P[
492x j$#<23U/280s$:r.A.+g/09id[69/%MXI>MZ203u)$UqUHUXlyx+Ue94 yx#!<)10
'\\2#9.MJ7\) 5XlwS/d+%XlwS/d+%Xz>MZ203u)$Uqp:ra:Zh#!o)12\9q+y
3MZj=#[O-,2h#0wfm>gA#dwfm>gA#dw+o.ujm43M9C*7!;J:RA:zH# 7) :$Rd(*[xm/_3q
7O['7x# 9x=2H##=0KD!8Y#=0KD!8Y# uM0'w);3:dahZjuWF)1-)7\O-[12\Yq6394Uy=8
oU=7V$m$2:w[/$,t/QN[ $,t/QN[ $#KV<X.FSJ#m-'bH07%((e/28)Q4:0p*p7$k-/xZAst -'z
F>#S3:Jp/M7*=6R0(369/%54F$DdF.c8Zj7%V%cGZv7\90B7D'J;wI) 23_jX>94 YX#!<)10
'\\2c9[(J1#tF\iUT,/Y%K=M'7\) 5D78%#=0KD!8Y# uM0'w);3:dahZ=RWF)1-)7$;-/XM/_JQ
7O$)$4\f:W[23MgS6%P23MgS6%P26\TK:daj$,q+H/*28)q3:0P*P7$K-/Z
a77\) 5xLWs/D+%xaYi+,t6
>j$dDf.9id[62 o9>*9!R[y
kU2 y0\Qw['$,t/QN[ $sQuhs_0
[h# 9x=GH#sWFM>Ga#DW%)%-;d8
/(98Zx7%V%cGZv7G(3'bJ [
+!+]6dJ[
.ends iob_obc_lvlsh_p_x
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_p_bs
** View name: schematic
************************************
.subckt iob_obc_lvlsh_p_bs in loc_gnd loc_vcco loc_vdd out plvlsel_vccaux
+plvlsel_vcco plvlselb_vcco por_b_vcco
.prot FREELIB
7O[)$4\f:W[23MgSZ=P23MgSZ=P28\TK:dahZ$#=-/B:(7\O-[12\Yq6394Uy=8
oU]7H77t! 98Zx7\) [%y$,t/Q\>aW7*90B7D'J;wI)U-97%((e%V$#4(E94 Y33wrBAH$#2/0=AJl
)KT [f2 y0\:=2'G6C  9ID[69/%mxLWs/y%k.26\tk mE)S7x(Ce y$,Q+h'h28)Qu:0p*==#!<) 0
'\*23UX\V-wW!=3280spm:XlwS/Y%K.26\TK Me)s7X(cE )$,q+H'H28)qh:0P*==#!<) 0
'\*23SXzT%[W!=XzT%33e9id[69/%MXI>MZ203u)$UqUH[u23_JxcSXz'_5WR%a577$K-[Z
F>.SP)9[(j1#[O-,gh#Swfm>g<sGV:R.a.+G/09$oW9SV7uU2,_-X32xLYX+uE9[FYB#!O)\H$Rz(36
eO6%3+:M4'$#<2'C8zJ7%v%C-A[M#=0KDp[STW2O.UJM43m9c*s!5WF)1-5># 7)J2\Yq6394Uy=# ZK.zyb8
oU]7H)7\) [%y$#<2'9ID[69/%mxLWs/y%k.26\tk mE)S7x(Mej23_jXCsxZ'_Ywr%A577$k-[xZAst -'z
F>.S,:=2'G6C  9$L<,z)fc-a[m#=0kdP[stwfm>g<sGV:]MD/%toMux4Y=#=-/bJ*7$;-/xm/_jq
7O$'7I# 9x )*7:;[4XlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-'Bhs7%((E%v$#4()94 y33WRbahL
)KT ix\v-Ws!=726,9=<*I/.+G/09_ xg#=0kdP[stw2o.ujm43M9C*7!5wf)1-5>#!O)12\9Q+Y
3Mij>#[O-,gh#Sw2R-L/0%s6k>D$,t/Q\>aW7%V%c-a[m#TUm0'W);3:DAH$,Q+h'h2\yQ+:00*p[
492x +$#<2'9$d:60S6K>d$,T/q\>Aw7%v%C-A[M#tuM0'w);3:dahZb#=-/Bj*7$;-/XM/_JQ
7O$')7\) 5D78%#tF\iUT,0S6K>d$#<2'9id[69/%MXI>MZ203u)$Uq3H'Xlyx+Ue9[fyb#!o)\h$rZ(36
eO6%3U:=2'7jVW+*7;$,T/q\>Aw7%v%C-A[M#tuM0'w);3:dajZ=;WF)1-5># 7)J2\Yq6394Uy=8
oU=7)$DdF.9$L<,z)fc-a[1$o:Jp/M6C  9ID[62 O9[oW9SV7uU2,_3X)9I*p!vwr%A:$Rz((6
eO8%yW0072H#0WFM>Ga#DWFM>Ga#DW+O.UJM43m9c*)7%((E/28)qpP94 yx#!<)128Ogv+)%0
'\\23/XzT%[W!=XlwS/d+%XlwS/d+%Xz>MZ203u)$Uq3HSXlyx+I:=e*5x#!o)\h$rZ(36
eO8%-W+*7;$.%YFb2l.+g/'0e280s$qW['$,T/qn[ $#kv<x.fsj#M-UBj$,q+H:Xz'_-WR%a577$K-[Z
F>#SP:Jp/M7C [9ID[62 O9ID[62 O9[oW9SV7uU2,_;XE9I*p!vw+3AJp7$;-! 2\9QPY
3MZje#VrXxZt%[wfm>gA#dwfm>gA#dw+o.ujm43M9C*77%((e/2\yQ+:00*p[
g3:jP/m6c  9id[62 o9>*0!-[y
k 280S$:R.a.o\;:kA)*D8
/C9_ xg#=0kd!8y#/-'*-5D8
/>9[(j1/#+XxLWs/D+%xaY=v[Y
k12h#0wfm>gA#dw%)*Jzi:q
7O$)$4\f:W[23MgS6%P23MgS6%P26\TK:da)Zb#=-/B:(7\O-[12\Yq6394Uy=8
Xr=$3W%8
.ends iob_obc_lvlsh_p_bs
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_p_c
** View name: schematic
************************************
.subckt iob_obc_lvlsh_p_c in loc_gnd loc_vcco loc_vdd out plvlsel_vccaux
+plvlsel_vcco plvlselb_vcco por_b_vcco
.prot FREELIB
%[XzT%[WFM>Ga#DW%)u:ZI:Q
%'X\V-wWFM>Ga#DW%)%hZ$:Q
%/X78-#=0KD!8Y#/-IH\L
svw+*7;.4\2:R.a.o\;:kAH5!U[Y
kU2 y0\Qw['$,t/QN[ $sQ4hu_0
'\\3:W[/$4\WFM>Ga#DWFM>Ga#DW+O.U$UqpH'H23_Jx($Xz'_3+:0P*==#!<) 0
'\*23[Xd\%##+-XzT%3U)9id[69/%MXI>MZ203u)$UqUHIJ23_JxcSXz'_]WR%a:$rZ((9[![M\(c6
eO6%3,:jP/m7\) 5D78%#=0KDp[STWFM>G<Sgv:]md/%TOmUX4yj+I)9i*P!-l:0P*P7$K-/Z
F>.SPM9_ xg##+-xZt%33>9ID[69/%mxi>mz203U)$uQuhij23_jXCsxZ'_vwr%A577$k-[z
F>.SPE9[(j1##+9[(j=;L:R.a.+G/09$oW9SV7uU2,_-Xp2xLYX+uE9[FYH#!O)\H$Rz(36
eO6%3h:=2'g7:;[4D78%#=0KDp[STWFM>G<Sgv:]md/%TOmUX4yj+I)9i*P!-l:0P*P7$K-/Z
F>.SP(9.mj7\) 5d78%#=0kdP[stwfm>g<sGV:]MD/%toMux4YB+iW9I*p!-L:=E*(7$;-/xm/_jw+N>D8_-q
7O$'7h# 9x j97\) 5XlwS/Y%K.23MgS6K>d$.kv<x.fsj#M-'B+97%((E%v$#4(#94 yx#!<)128Ogv+)%0
'\*2#9[(J1/#+xXI3+%K9rDp[STWFM>G<Sgv:r.A.+g/09$Ow9sv7Uu2,_3WF)1-5>#!o)12\9q+y
3Mij=Uw+*7HS>#[O-,23mGs6k>D$,t/Q\>aW7*90B7D'J;wI)%-0$#=-/bJ*7\o-:xmv_.P:00*7[
492xV2 Y0\qW['$.%YFb2lX69/%MX\V-wWFM>G<Sgv:]md/%TOmUX4y=+Ue9i*P!-l:0P*P7$K-/Z
F>.SL:Jp/M6C  9$L<,z)fc-a[m#=0kdP[stwfm>g<sGV:]MD/%toMux4Y=#=-/bJ*7$;-/xm/_jq
7O$'7<# 9x=26M'S[C-A[M#=0KDp[STWFM>G<Sgv:]md/%TOmUX4y=+U:ra:ZbyWR%a:$rZ((6
eO6%VW+*7;.4\2:]ip39<=[C-A[M# 9x=23MgS6K>d$.kv<x.fsj#M-'B+97%((E%v$#4(c94 y33WRbahL
)KT [%280SPM:xZt%[wfm>g<sGV:R.a.+G/09$oW9SV7uU2,_-Xp2xLYX+uE9[FYH#!O)\H$Rz(36
eO8%;WT%3]$.%YFb2l.+g/'0e2 Y0\qW['$,T/qn[ $#kv<x.fsj#M-[Bj*7%((E/2\Yq+:00*P[
49+xH2wrsW!=323MgSZ=P23MgSZ=P28\TK Me)s7X(>9i*P!VW+3ah57$;-! 2\9qp:=gAw#qUy
3MZj=jw+*7;$4\wfm>gA#dwfm>gA#dw+o.ujm43M9C*S!ji:RA:zH# 7)%:$Rd(*[xm/_3q
7O['57\) 5XI3+%K9rDp[S[!79[(J1/#+xXlwS/d+%Xz>MZ203u)$UqUHIJ23_Jx>9[fyb#!o)\h$rZ(36
eO8%3WT%3]$4\f:r.A.O\;:r.A.O\;:=md/%TOmUX4yj++>9i*P!VW+3ajP7$;-! 2\9qpy
3MZje#VrXxZt%[wfm>gA#dwfm>gA#dw+o.ujm43M9C*77%((e/2\yQ+:00*p[
492UX78-##+9id[69;o9id[69;o9$Ow9#M-'B+97%((E1t$#4(3/XMV_.p:00*7[
+!+]6dJ[
.ends iob_obc_lvlsh_p_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_lvlsh_cz
** View name: schematic
************************************
.subckt iob_obc_lvlsh_cz lshout_n_a lshout_n_b lshout_n_c lshout_n_d
+lshout_n_e lshout_p_a lshout_p_b lshout_p_c lshout_p_d lshin_n_a
+lshin_n_b lshin_n_c lshin_n_d lshin_n_e lshin_p_a lshin_p_b
+lshin_p_c lshin_p_d loc_gnd_lev vccaux loc_vdd_lev vcco
+lout_n_x<8> lout_n_x<7> lout_n_x<6> lout_n_x<5> lout_n_x<4>
+lout_n_x<3> lout_n_x<2> lout_n_x<1> lout_n_x<0> lshin_p_x<13>
+lshin_p_x<12> lshin_p_x<11> lshin_p_x<10> lshin_p_x<9>
+lshin_p_x<8> lshin_p_x<7> lshin_p_x<6> lshin_p_x<5> lshin_p_x<4>
+lshin_p_x<3> lshin_p_x<2> lshin_p_x<1> lshin_p_x<0> lshin_n_x<8>
+lshin_n_x<7> lshin_n_x<6> lshin_n_x<5> lshin_n_x<4> lshin_n_x<3>
+lshin_n_x<2> lshin_n_x<1> lshin_n_x<0> lshin_n_y lshout_n_y
+lshin_p_bs lshin_n_es lshout_p_bs lshout_n_es init_vccaux_lvlsh_b
+por_b_vcco lshout_p_y lshin_p_e lshout_p_e lshout_p_es lshin_p_es
+lout_p_x<13> lout_p_x<12> lout_p_x<11> lout_p_x<10> lout_p_x<9>
+lout_p_x<8> lout_p_x<7> lout_p_x<6> lout_p_x<5> lout_p_x<4>
+lout_p_x<3> lout_p_x<2> lout_p_x<1> lout_p_x<0> plvlsel_vccaux
+plvlselb_vcco
.prot FREELIB
7WuY97*=6r0(3-/Y%K.280sUc:Xp[STWFM>Ga#DSF*-2'4/2!=-Gsj4O79czyb8
_f=A:zHj+:=_78o<5<) 2,.Qu:R$*p!-L(9$\h#2);BAJl
)C=6R0>.#/):R0>h#/ Q*x784Ss6k>;\)/=6R0>.-#=0kd!8y/=9\xP[s[!76
:lwS/Yo%DlT+#=<f.MJ6\S998dX6Tf%Cip39HS+C20
'4%YFb;G860WFb;786\S[98zH%/Y%K=M'6%YFb;GX7%v%CgzV6%)69-A[1$Oy
8ID[69;OcI(<7%kAm4'.#/F:w./.m0/QR-L/// Q-z
Fh,9=<FdZ.2#=<F8Z.#/::w[7j69/%54F.,9=<Fd/$,t/QN[ .,<y:\>aGR4q
$r.A.+D;qr2p$,Z*007G86PW!M3Gw-gSF\iUD6\S86
e73+%KaC$GX7%KaW[G660WFM>Ga#DSF*-2<Sgv:r.A.+D;qr2p$,Z*007G660Q
$]ip39<=q\>Agr4W+*7j5h#tF\iUT,0S6K>d$.T5q-Dp[STW!M3Gw-gSF\iUD6*S[6
e73+%KaC$GT7%KaW[G66<WFM>Ga#DSF*-2<Sgv:r.A.+D;qr2p$,Z*007G66<Q
$]ip39<=q\>Agr4W+*7j5h#tF\iUT,0S6K>d$.T5q-Dp[STW!M3Gw-gSF\iUD6*S96
e73+%KaC[Gg7%KaW[G86[W!=8'.+g/'0eG3+%KaC323MgSZ=PG309W6K>;\)8
_fm>g<ydsf*-239hVrXdZ.1##0-dDxs/=6R0>.#/$Y
38)Si# 9XUy07%V%cGZv6%)69-a[m#=0kdPvy/=9\xL//t! c$gE7*=6R0(369/%54Fl
T\) '%s$.%yfB2Lx69/%mxiW8/FQ\>aW7CV[c./[6%yfB;g66pq
7Wip39HS+CP239H#+C[GV7c !xDp[S[!7Cip39HS[9id[62 oCi(<79/%54fL
T%V%c- v6%)69Iudm$2Q=d $4tFQm3a.,9=<FdZ.y8
o!R-L///TQ5xL//C Q]d;$,t/QN[ .,<y:\>aW7%V%c- v6%)69Iudm$2Q]d;l
T*=6R0(369/%54F$#<2C'/26,9=<*I/.+G/09$D:60s6k>D$4tFQm3a.,9=<Fdi.18
o!R-L///TQ*0239h#+c$gt9#=0kd!8y/=9\xP[stwfm>g<ydsf*-239hVrXdi.0zq
$]ip39<=q\>Agr4W+*7j5h#tF\iUT,0S6K>d$.T5q-Dp[STW!M3Gw-gSF\iUD6*S9bZ
Fh,9=<FdZ.)MLv9Iud4\s+cEc*P##+w7g<sG$r3dL<,z*Q-xLWs/D+%dLt+#y%k=m'[
a=0KDpVY/=9\XlwrsS+CeC*p##0-DdXS/=6r0>.#/Oy
38L<,z*Q=dF#i1wfB;786\s7H*q$4\# c-a[1$oQR-L///F:R.a.o\;QR2P$+G/'0E0
o,T/q\P .,<Y:r.MJ6\S7h*Q$4TfqM3A.,9=<fDz.)8
o!R-L/// Q3ry%7%kAw[g8641)+x784Ss6k>;\)/=6R0>.-#=0kd!8y/=9\xP[s[!76
:lwS/Yo%DlT+#=007G8641)+X7w-/v[KDl<,Z*q=DfL
)C=6R0>.#/o_i)239h#+c[g'wre:w[7j69/%54F.,9=<Fd/$,t/QN[ .,<y:\>aGR4q
$r.A.+D;qr2p$,T! C[G'WRE:W./.M0/qr-l/// q3Z
Fh,9=<FdZ.)Miv9Iud4\s+cEc)P##+w7g<sG$r3dL<,z*Q-xLWs/D+%dLt+#y%k=m'[
a=0KDpVY/=9\XlwrsS+CeC)p##0-DdXS/=6r0>.#/Oy
38L<,z*Q=dF#J1wfB;786\s7HUq$4\# c-a[1$oQR-L///F:R.a.o\;QR2P$+G/'0E0
o,T/q\P .,<Y:r.MJ6\S7huQ$4TfqM3A.,9=<fDz.)8
o!R-L/// Q3rJ%7%kAw[g8641C+x784Ss6k>;\)/=6R0>.-#=0kd!8y/=9\xP[s[!76
:lwS/Yo%DlT+#=007G8641c+X7w-/v[KDl<,Z*q=DfL
)C=6R0>.#/o_[)239h#+c[g'w3e:w[7j69/%54F.,9=<Fd/$,t/QN[ .,<y:\>aGR4q
$r.A.+D;qr2p$,T! C[G'W3E:W./.M0/qr-l/// q3Z
Fh,9=<FdZ.)M+v9Iud4\s+cEcpP##+w7g<sG$r3dL<,z*Q-xLWs/D+%dLt+#y%k=m'[
a=0KDpVY/=9\XlwrsS+CeCPp##0-DdXS/=6r0>.#/Oy
38L<,z*Q]d $,z*!=di.y#=0kd!8y/=9\xP[stwfm>g<ydsf*-239hVrXdi.y8
_2R-L/0%s6k>;\)# 9X%J)7*=6R0(3-/y%k.26m's[c-a[m##0-dDxs/=6R0>../;Y
38L<,z*Q=d(/7%kAw[g86<k:w[7j69/%54F.,9=<Fd/$,t/QN[ .,<y:\>aGR4q
$r.A.+D;qr2p$,Z*007G86<K:W./.M0/qr-l/// q*00
'4%YFb;G6d31#+Xl//c q]Df#=JE:r.A.O\;qr2p$+g/09id[69;oCi(<7%vRxDI.)mp(+Z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dF7[
4#F\iUD6*[3hHQ$,Z*!=DI.)m,V9id[62 oCi(<79/%MXlwS/Yo%DlT+#=007G6641#+Z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dF7[
4#F\iUD6*[3h*Q$,Z*!=DI.)mlV9id[62 oCi(<79/%MXlwS/Yo%DlT+#=007G6641e+Z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dF7[
4#F\iUD6*[3hJQ$,Z*!=DI.)mjV9id[62 oCi(<79/%MXlwS/Yo%DlT+#=007G6641w+Z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dF7[
4#F\iUD6*[3hVQ$,Z*!=DI.)mhV9id[62 oCi(<79/%MXlwS/Yo%DlT+#=007G6641)+Z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dF7[
4#F\iUD6*[3h/Q$,Z*!=DI.)m4V9id[62 oCi(<79/%MXlwS/Yo%DlT+#=007G6641P+Z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dF7[
4#F\iUD6*[3huQ$,Z*!=DI.)mIV9id[62 oCi(<79/%MXlwS/Yo%DlT+#=007G6641>+Z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dF7[
4#F\iUD6*[3h%Q$,Z*!=DI.)mUV9id[62 oCi(<79/%MXlwS/Yo%DlT+#=007G6641c+Z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dF7[
4#F\iUD6*[3h Q$,Z*!=DI.)mpV9id[62 oCi(<79/%MXlwS/Yo%DlT+#=007G66413+Z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dF7[
4#F\iUD6*[3h1Q$,Z*!=DI.)m+V9id[62 oCi(<79/%MXlwS/Yo%DlT+#=007G6641(+Z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dF7[
4#F\iUD6\S%9iUD4\S+C>2H#c2q\>Agr4SF\iUD60WFM>Ga#DSF*-2<Sg$R3Z
$3mGs6%pg309wfB;D\%/ Qkx7W-/V[kdL<,z*Q=dal
)C=6R0>..:1M+xL//C Q]dF#=;e:R.a.o\;QR2P$+G/09ID[69;OcI(<7%VrXdi.)MPM+z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dFl
)C=6R0>..:1C+xL//C Q]dF#=-e:R.a.o\;QR2P$+G/09ID[69;OcI(<7%VrXdi.)MPC+z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dFl
)C=6R0>..:13+xL//C Q]dF#=3e:R.a.o\;QR2P$+G/09ID[69;OcI(<7%VrXdi.)MP3+z
$6,9=<*Ig<sG$r3xZt%-u>9$L<,z)f-dP[stw2m6gx69/%mx7W-/V[kdL<,z*Q]dFl
)C=6R0>..:1(+xL//C Q]dF#J1wfm>gA#dsf*-2<sGV:R.a.+d;QR2P$,t! c$g'w;eY
8$L<,z)fc-a[1$o:=2'5Bvw2R-L/0%FQ\>aW7*V;c3g<sGV:w./.m0/QR-L///TQ3z
Fh,9=<Fdi.-zwfB;786*s[BxLWs/D+%dLt+#y%k.23mGs6%pg309wfB;D\%/TQ-00
o.%YFb2l.+g/'0e280sUc:XI3+%K9r3G<Sgv:].3.-/Y%K.2HM0S0->G3+%KaC$GX98
o!R-L///TQkxL//C Q]da$,t/QN[ .,<y:\>aW7%V%c- v6%)69Iudm$2Q]dal
T*=6R0(369/%54F$#<2C'/26,9=<*I/.+G/09$D:60s6k>D$4tFQm3a.,9=<Fdi.s8
o!u/:$,z*!=dZ.2# 9XUy074#Qw[P$u\(39IZYX++W/xZ 4\D9y0*77xT-'xL6_jX($10
o.:#+n23/_3Q
H0[I:MsQ
.ends iob_obc_lvlsh_cz
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_tsb_mux21c
** View name: schematic
************************************
.subckt iob_tsb_mux21c i0 i1 s x
.prot FREELIB
7W%Y(7ZW+*7t574#qW[p$U\((E%:P7% -/B:(x# TW[!T8Z(39cIyx+U(/Xl6_Jx($10
o.:#+n23/_3Q
7O$S$)# 9xJh$+D;:\P $.kv<9c*57%((E1t$#4(P94 yx#!<)10
'\*3:=2'9=# 9xJE$+D;:\P $.kv<9c*7!u4:ra:ZxuW+3aj$rD(*[XM/_3Q
7O$:$#<2)(XU$4JW6%P26\TK:dah$,q+H/*2\Yq+:00*P[
492[XzT%5,:=2'(b##39- V7*90bX4y=#=-/B:(7$;-/XM/_JQ
7O[S$#<2)[XzT%5,:\0U$+ZK:=md/7X(3EJ+$,q+H/*2\Yq+:00*P[
49+'XzT%5,:bX7779K<9[Ow9#M-[Xlyx++w94 yx#!<)10
'\\+:=2'9E# 9x*j$4JW6b028\TK:dah$,q+H/*2\Yq+:00*P[
49+UXf$#<2)[Xp/9#Y<bXz>MZWi)%23_Jx($Xz'_-WR%a577$K-[Z
-\#*50Xz
.ends iob_tsb_mux21c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_nc_es
** View name: schematic
************************************
.subckt iob_obc_ctrl_nc_es cnnd ctsb ff_b loc_gnd loc_vdd normal_n term
+term_b ts_b
.prot FREELIB
%/X\ 79K<9>*7!-[y
k 2 D/F29-u/7G(Meh\l
s-w%=>Zj8%P:\0u$sQP(e \l
)KTW9[D:\[=Q=x't8Kw%=>Zj8%P:\p $.KV<9C*7!-J:RA:zXUw+3Ay$Rd(*[xm/_3q
7O$Y$#<2e$XAJ90WFM>G<YDWFM>G<YDW2O.U$UqpH/ 23_Jx($XMV_JWRba:L
)KT39>Z[#S5f[x\ 60T:R.a.+d;:R.a.+d;:]MD/7x(3e%T$,Q+h/*28)QH:0p*==#!<) 0
'\*I:=2'7=3W+*7v(7%v%C- V7%v%C- V7*90bX4yb+p#9i*P!Jj:0P*P7$K-/Z
F>.;w+m6oG,/ :=2'7=3w+*7V)7%V%c- v7*90Bx4Y=+uW9I*p!jJ:=E*07$;-/xm/_jq
7O$+$#<2e$XzT%33P9id[69;o9id[69;o9$Ow9#M-[B:77%((E1t$rD((94Uyx8
oU]12[#G  yIH$#<23uf23mGs6%p23mGs6%p26\tk:DAHzBUwf)1-pi# 7)j2\yQ6394uY=8
o2[1280SL>97(:\/F:R.a.+d;:R.a.+d;:]MD/7x(3e%T$,Q+h/*28)Q4:0p*p7$k-/z
F>.-w%=>Zj8%P:X0gx7%V%c- v7%V%c- v7*90Bx4Y=+uW9I*p!jJ:=E*97$;-! 2\9QPY
3MZ57G %=733=#2<c3280SPCuxLWs/D+%xZ>mzwI) -7<#=-/b:(7\o-$xmv_jwrBA:l
)K p9[(j=jJ:=2'7Jrwfm>gA#dwfm>gA#dw+o.u$uQ+h2xLYX++W94 YX#!<)10
'\\I:=2'7=3W+*7v(7%v%CgzV7%v%CgzV7\90bX4y=#=-/B:(7$;-/XM/_JQ
7O[)$#<23[V2J0'9:r.A.O\;:r.A.O\;:=md/7X(3E1+$,q+H/*28)q3:0P*P7$K-/Z
F>#5w+*7V(7G2<-xZt%3+W9ID[62 O9[oW9#m-/by$,Q+h/*2\yQ+:00*p[
49+[XzT%3Um9_\.-*W+*7h5I#=0KD!8Y# uM02,_3x3IXlyx++w9[fyI#!o)12\9q+y
3MZp7\) [%T$#<23uf23mGsz=p23mGsz=p28\tk:DAHz=rwf)1-pi# 7)*2\yQ+:00*p[
4 3/Xzw8k$FC[280sp3[XzT%3pP9id[62 o9[Ow9#M-[B:07%((E1t$#4(m94 yx#!<)10
'4-h>9>z8Y# 9x )074#qW[p$U\((E%jP7% -/B:(x# TW[!T8Z(39cIyx+Uc/Z
$3.Q+h/*:$.:#+N23/_3q
7W%Y*7:[:j_GX.#O!C8z<7X -[B:sx#=+)1-PIJW+j8za0'K-[X46_-xcI123.q+H/*:L
T*[!=G(:9QPY
38J(X#/+=p280SPM(xFh6C 69CZYX+uC/xL8_jX($128DC z*6uY=#m2)1-5Bjq
$r$*P!Jj(9$\H#2);bahL
)Cu)(x\ 60wtJxFh6C 69CZYX+33/xL8_jX($128DC z*6uY=#m2)1-9<jwf]A:zXU+Y
8$\h#2);BAHl
)K W9[D:\[=Q=x't8Ks[9>Z[#S5f[xP/9# Um0L<%#m-[bH07%((e1V$#4(E94 Y33wrBAHl
!$ 2y.'l
.ends iob_obc_ctrl_nc_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_pc_es
** View name: schematic
************************************
.subckt iob_obc_ctrl_pc_es cnpd ctsb ff_b loc_gnd loc_vdd normal_p term
+term_b ts_b
.prot FREELIB
%/Xd66T! 9-U/7g(mEH\L
s3w%]>Zj8%P:\0u$sQHhu_0
'4-h>9>z6Y# 9x*)$)cS!=-2,#q+H'%:$,\((E1tP7\[!=g(:9qp:d$*P!-U(6
:l6_Jx($126dc Z*6Uy=8
o!'*+$s\TO9[(jirw7wd78+#m+)1-5Bjwf=A:zXU+:=_78o<5<) 2,.Q+h'%:l
T%T-/b:(X#Ttw[!t8z(36
eO6h# 0Ym;36*W%]>zJ8%p:=2'(>#=0KDpVY#tuM02,_-xm2Xlyx++w9[fyh#!o)\h$rZ(36
eO6I# 0Ym;36*W+*7v;7\) [1+$,T/q\P $.kv<9c*5!;h:ra:ZxuW+3aS$rD(*[XM/_3Q
7O$j$S*/+x6l77sKq-XlwS/Yo%XlwS/Yo%XI>MZWi)%-s$#=-/B:(7\O-'XMV_.p:00*7[
492(XzT%y,:=2'(j#=0KDpVY#=0KDpVY#tuM02,_-xm2Xlyx++w9[fyb#!o)\h$rZ(36
eO6x#/2K[':,3W+*7t07%v%C- V7%v%C- V7*90bX4yb+3)9i*P!Jj:=e*57$;-! 2\9qpy
3Mi*7\) sf2[%zF:R.a.+d;:R.a.+d;:]MD/7x(CeUy$,Q+h/*28)Qu:0p*==#!<) 0
'\*p:K$A8%'=39.I.M$2:r.A.+D;:r.A.+D;:]md/7X(cEuY$,q+H/*28)qU:0P*==#!<) 0
'\*h:=2'7xRW *6O.-#=0KDpVY#=0KDpVY#tuM02,_-xm2Xlyx++w9[fyh#!o)\h$rZ(36
eO6j# 9x*v$%<5u9id[69;o9id[69;o9$Ow9#M-'B)97%((E1t$#4(>94 y33WRbahL
)K E9[(j=33:=2'(J#=0kd!8y#=0kd!8y# Um02,_jXE2xLYX++W9[FYH#!O)\H$Rz(36
eO8E# 9xHE$SsK[9[(J=33:r.A.O\;:=md/7X((EHY$,q+H/*28)qI:0P*==#!<) 0
'\\I:=2'7b3W *6O.-#=0KD!8Y#=0KD!8Y# uM02,_-xm2Xlyx++w9[fyb#!o)\h$rZ(36
eO8$# 0Ym;36*W+*7v;7\) [%E$,T/qn[ $#kv<9c*5!;h:ra:ZxuW+3aj$rD(*[XM/_3Q
7O[t$#<23'F2J0'9:r.A.O\;:r.A.O\;:=md/7X(cEuY$,q+H/*28)qU:0P*==#!<) 0
'\\+:=2'7j;W+*7t07%v%CgzV7%v%CgzV7\90bX4yb+3)9i*P!Jj:=e*57$;-! 2\9qpy
3MZ57GT%=733=#2<c3280SP>[xLWs/D+%xZ>mzwI)%-S$#=-/b:(7\o-'xmv_.P:00*7[
49+[XzT%3I39.I.M$2:=2'7j;WFM>Ga#DW+O.U$UqUHUJ23_Jx($Xz'_-WR%a577$K-[Z
F>#;w+m6oG,/T:k$a8%'=39[(j=-P:R.a.o\;:=MD/7x(CeUy$,Q+h/*28)Qu:0p*==#!<) 0
'\*4:M$GwrsWTjD/$,T/q\P $+D;:]md/7X(cEuY$,q+H/*28)qU:0P*==#!<) 0
'\\4:M$GwrsWTjD/$,T/qn[ $+ZK:=md/7X(cEuY$,q+H/*2\Yq+:00*P[
+!+]6dJ[
.ends iob_obc_ctrl_pc_es
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_pc_bs
** View name: schematic
************************************
.subckt iob_obc_ctrl_pc_bs cnpd ctsb ff_b loc_gnd loc_vdd normal_p term
+term_b ts_b
.prot FREELIB
%/Xd66T! 9-U/7g(PjZ
a77GT%=733=#y<BxaY>+Ht6
eO8$# 0Ym;36*W+*7h)x# 9x*)$,T/qn[ $#kv<9c*5!3l:ra:ZxuW+3a)$rD((94Uyx8
oU= 280SJ)9.i.m$2:=2';$#=0kd!8y# Um02,_-X3sxLYX++W9[FYJ#!O)12\9Q+Y
3MZ)7\) sf2j0'9Q-xLWs/D+%xLWs/D+%xZ>mzwI)%-7>#=-/b:(7\o-uxmv_jwrBA:l
)K C9>i[#S5f[x'/60w+*7T97%V%cGZv7\90Bx4YB+PE9I*p!jJ:=E*S7$;-/xm/_jq
7O[)$#T5u5iG67gt%=733=# 9xHE$,T/qn[ $#kv<9c*5!3l:ra:ZxuW+3a)$rD((94Uyx8
oU=*280SJM97(:\#=0kd!8y#=0kd!8y# Um02,_-X3sxLYX++W9[FYJ#!O)12\9Q+Y
3MZp7\) (j280SP>2xLWs/D+%xLWs/D+%xZ>mzwI)%-7>#=-/b:(7\o-uxmv_jwrBA:l
)K E9[(j=j+:=2'7Hvwfm>gA#dwfm>gA#dw+o.u$uQPh'xLYX++W9[FYH#!O)\H$Rz(36
eO8E# 9x SP7g2<-XzT%3+(9id[62 o9[Ow9#M-[Bj$,q+H/*28)qI:0P*==#!<) 0
'\*U:K$A8%'=397U.-#=0KDpVY#=0KDpVY#tuM02,_-x3SXlyx++w9[fyj#!o)12\9q+y
3Mip7GT%=733=# 9X s97%V%c- v7%V%c- v7*90Bx4YB+PE9I*p!jJ:=E*S7$;-/xm/_jq
7O$h$S*/+x6l77TtqM4'$,T/q\P $,T/q\P $.kv<9c*5!3l:ra:ZxuW+3a)$rD((94Uyx8
oU]/28m'9'Rdi$s*/+X6L77\) [%H$,t/Q\p $.KV<9C*5!3L:RA:zXUw+3Ay$Rd(*[xm/_3q
7O$)$#<23' 2J0'9:r.A.+D;:r.A.+D;:]md/7X(cE v$,q+H/*28)qh:0P*==#!<) 0
'\*j:=.3>1%S29[(J=V+:=2'7j-WFM>G<YDW2O.U$UqUH[H23_Jx($Xz'_5WR%a577$K-[Z
F>.5w+*7HSB#29yMgx7%V%c- v7%V%c- v7*90Bx4YB+PE9I*p!jJ:=E*97$;-! 2\9QPY
3Mi*7\) [/:$sSk[9ID[69;O9ID[69;O9$oW9#m-'bH*7%((e1T$#4(M94 YX#!<)10
'\*,:=2'7hJW+*7h)h#=0KDpVY#=0KDpVY#tuM02,_-x3SXlyx++w9[fyj#!o)12\9q+y
38J9H#/+]p280SP>:xFh6C 69CZYX+uC/xL8_jX($128DC z*6uY=#m2)1-5Bjq
$r$*P!Jj(9$\H#2);bahL
)CuW[xa8.dw+*7H)$#o!c8Z<7x -/bJ5X#=+)1-pijw+J8ZA0'k-[x46_jXC'10
o,*((E1tP7*[!=g(:9qpy
3Mi07tTQm4'$D:s[9ID[69;O9- v7*90Bx4YB+PE9I*p!jJ:=E*S7$;-/xm/_jq
7O[+$M*S0072 d/f:r.A.O\;:\0U$#kv<9c*7!5I:ra:ZxuW+3aj$rD(*[XM/_3Q
H0[I:MsQ
.ends iob_obc_ctrl_pc_bs
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_nc_e
** View name: schematic
************************************
.subckt iob_obc_ctrl_nc_e ff_b loc_gnd loc_vdd mcnd normal_n ts_b
.prot FREELIB
%/X\ 79K<9>*7!-[y
k 2 D/F29-u/7G(Mej\l
)Cu>sxo[#dw+*7J974#Qw[P$u\((e%Jp7% -/b:(X# tw[!t8z(39CiYX+uC/z
$3.Q+h/*:$.:#+N23/_3q
7W%Y*7:[:j_GX.#O!C8z<7X -[B:sx#=+)1-PIJW+j8za0'K-[X46_-xcI123.q+H/*:L
T*[!=G(:9QPY
38J9e#[tc32 D#o!c8Z<7x -/b)7X#=+)1-pijw+J8ZA0'k-[x46_jX)i123.Q+h/*:l
T*[!=G(:9QPY
3Mi77\V;o=L.##[tc3i$,t/Q\p $,t/Q\p $.KV<9C*7!-J:RA:zXUw+3A+$Rd((94uYX8
oU]%28m'9'RdZ$%zs[9ID[69;O9ID[69;O9$oW9#m-[bJ(7%((e1T$#4(p94 YX#!<)10
'\*+:=.3>1%S+9[(Jb5WFM>G<YDWFM>G<YDW2O.U$UqpH'*23_Jx($Xz'_RWR%a:$rZ((6
eO8b# 0Ym;36\W bD/$#<2>SXlwS/d+%Xz>MZWi) -s7%((E1t$#4(w94 yx#!<)10
'\\p:=2')>#[TC3I$#<2P'XlwS/d+%Xz>MZWi) -s7%((E1t$#4(w94 yx#!<)10
'\\+:=2'0b# 9x%Y$,T/qn[ $,T/qn[ $#kv<9c*7!;WF)1-PI# 7)*2\Yq+:00*P[
+!+]6dJ[
.ends iob_obc_ctrl_nc_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_nc_b
** View name: schematic
************************************
.subckt iob_obc_ctrl_nc_b cnnd ctsb ff_b loc_gnd loc_vdd mcnd normal_n term
+ts_b
.prot FREELIB
%/X\ 79K<9>*7!5[y
k 2 D/F29-u/7G(pe \l
s-w%=>Zj8%P:\0u$sQP3e*\l
)KTW9[D:\[=Q=x(v89s[9>Z[#S5f[xPvy#TUm02,_3X)(xLYX++W9[FY<#!O)12\9Q+Y
3Mi)7\) [%:$#<2#2xLWs/yO%xLWs/yO%xi>mzwI) -)$#=-/b:(7\o-'xmv_.P:00*7[
492'XA8S\2;r 2J9/f:r.A.+D;:r.A.+D;:]md/7X(3EJE$,q+H/*28)q4:0P*P7$K-/Z
F>.jw%=>Zj8%P:=2'7HYwfm>g<ydwfm>g<ydw2o.u$uQPh2f23_jX($xZ'_rwr%A:$Rz((6
eI7x# 9xHS$0D569id[69;o9id[69;o9$Ow9#M-[BY;7%((E1t$#4(P94 yx#!<)10
'\*3:=.3>1%S+9[(J=-+:=2'*h#=0KDpVY#tuM02,_3x)(Xlyx++w9[fy<#!o)12\9q+y
3Mi97\) (j2[%zF:R.a.+d;:R.a.+d;:]MD/7x(3e/y$,Q+h/*2\yQ+:00*p[
492IXzT%]h:=2'7j5WFM>G<YDWFM>G<YDW2O.U$UqpH:J23_Jx($XMV_JWRba:L
)KT39>Z[#S5f[x\ 60T:R.a.+d;:R.a.+d;:]MD/7x(3eje$,Q+h/*28)Q4:0p*p7$k-/z
F>#-w%=>Zj8%P:X0gx7\) [1V$,t/QN[ $#KV<9C*7!UH:RA:zXUw+3AT$Rd((94uYX8
oU= 280SP(sx\ 60T:=2'7=5wfm>gA#dw+o.u$uQPh$j23_jX($xZ'_Uwr%A:$Rz((6
eO8<# 9x h57\) [uY$,T/qn[ $,T/qn[ $#kv<9c*7!JI:ra:ZxuWR%a:$rZ((6
eO8x# 9x h97\) [/v$,T/qn[ $,T/qn[ $#kv<9c*7!uh:ra:ZxuW+3at$rD((94Uyx8
oU=/280SPC/xZt%]H:R.a.o\;:R.a.o\;:=MD/7x(3e1s$,Q+h/*2\yQ+:00*p[
49+UXzT%3U#92 :+/f:r.A.O\;:r.A.O\;:=md/7X(3E/23_Jx($Xz'_;WR%a:$rZ((6
ez7x# 0Ym;36\W+*7h5x# 9x j;7%v%CgzV7\90bX4y=+I:ra:ZxuW+3a)$rD((94Uyx8
oU=j280S,)9>'/-# 9X H57%V%cGZv7\90Bx4Y=++>9I*p!jJ:0p*p7$k-/z
FhB5i:k[Zv7\) [Uy$)Cs!=-2,#Q+h'%:$,\((e1Tp7\[!=G(:9QP:D$*p!-u(6
:l6_Jx($126dc Z*6Uy=8
o!'je$D:s[9_\$)Cs!=-2,#Q+h: :$,\((e1Tp7\[!=G(:9QP:D$*p!YH(9IiYX++W/z
$6DC z*6uY=8
o!'jV$D:wtJd/674#Qw[P$u\(3eUTp7% -/b:(X# tw[!t8z(39CiY=+4(/xL6_jX($10
o.:#+n23/_-Q
7W%S*7<;;\X(V89S[9e7.4\Y:d[*P!-U(9izyx++w/Xz 4\d9Y0*77Xt-/Bj5x8
_f]A:zXU+:]_78o<5<) 0
'4-4>97(:\#9%=P2TY'Y:38G81\;c9czyx+Uc/Xl8_Jx($128dc Z*6Uy=#M2)1-5bJQ
$r$*P!Jj(9$\H#2);bahL
)Cup(xa8#dwUk[ $#<23:h2'4/ '=pJ$u\((e%Jp7% -/b:(X# tw[!t8z(39CiYX+uC/z
$3.Q+h/*:$.:#+N23/_3q
7O[t$#T5u5iG87<;;\XA8S\2;r 2<9ZW+O.U3+sWi) -($#=-/B:*7\O-SXMV_.p:00*7[
+!+]6dJ[
.ends iob_obc_ctrl_nc_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_pc_e
** View name: schematic
************************************
.subckt iob_obc_ctrl_pc_e ff_b loc_gnd loc_vdd mcpd normal_p ts_b
.prot FREELIB
%/Xd66T! 9-U/7g(cE \L
s3w%]>Zj8%P:\0u$sQ3h$_0
'43,c9_\.-#v2C.MJ7%v%C- V7%v%CgzV74#qW[p')4Wi]ajZj5+:r$*P!Jj(6
:I 4\d9Y0*77X -[Bh*x#=+)1-PIJW+j8za0'K-[Z
F>#3w+*7)07tTQm4'$#<2>$xLWs/D+%xZ>mzwI)%-S$#=-/b:(7$;-/xm/_jq
7O[j$S*/+x6l77sKq-XzT%;4:r.A.O\;:=md/7X(cEuY$,q+H/*2\Yq+:00*P[
49+UXzw8k$FC$2[.g  Yih$,T/qn[ $,T/qn[ $#kv<9c*5!;h:ra:ZxuWR%a:$rZ((6
eO8x# 9x/t$\gt99id[62 o9id[62 o9[Ow9#M-'B)97%((E1t$rD((94Uyx8
oU]%2[.G  yIH$%zs[9ID[69;O9ID[69;O9$oW9#m-'b)97%((e1T$Rd((94uYX8
oU]12[.G  yIH$\GT99ID[69;O9ID[69;O9$oW9#m-'b)97%((e1T$Rd((94uYX8
oU]U28m'9'Rdi$s*/+X6L77%V%c- v7%V%c- v7*90Bx4YB+3)9I*p!jJ:=E*57$;-! 2\9QPY
3Mi77GT%=733=#V2c.mj7%V%c- v7%V%c- v7*90Bx4YB+3)9I*p!jJ:0p*p7$k-/z
FhBU3:o>iv7K/2*xFh6C 69CZYX+uC/xL8_jX($128DC z*6uY=#m2)1-5Bjwf]A:zXU+Y
8$\h#2);BAHl
!$ 2y.'l
.ends iob_obc_ctrl_pc_e
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_pc_b
** View name: schematic
************************************
.subckt iob_obc_ctrl_pc_b cnpd ctsb ff_b loc_gnd loc_vdd mcpd normal_p term
+ts_b
.prot FREELIB
%/Xd66T! 9-U/7g(PjZ
a77GT%=733=#y<BxaY>+it6
eO6># 9xF+$SsK[9id[69;o9id[69;o9$Ow9#M-'Bh*7%((E1t$#4(m94 yx#!<)10
'\*j:=.3>1%S29[(JERW+*7t;7%v%C- V7*90bX4yb+pe9i*P!Jj:=e*97$;-! 2\9qpy
3Mi97\) $f2ty'y:R.a.+d;:R.a.+d;:]MD/7x(Ce V$,Q+h/*28)QH:0p*==#!<) 0
'\*U:K$A8%'=397U.-#=0KDpVY#=0KDpVY#tuM02,_-x3SXlyx++w9[fyj#!o)12\9q+y
3Mi)7\V;o=L..#/2k[':,3w+*7e77%V%c- v7*90Bx4YB+PE9I*p!jJ:=E*97$;-! 2\9QPY
3MiS7\) ( 2ty'yQ-xLWs/yO%xLWs/yO%xi>mzwI)%-7>#=-/b:(7\o-2xmv_.P:00*7[
492(XzT%]4:=2'7<]WFM>G<YDWFM>G<YDW2O.U$UqUH[H23_Jx($Xz'_;WR%a:$rZ((6
eO6=#/2K[':,3W0]Dd\%#=0KDpVY#=0KDpVY#tuM02,_-x3SXlyx++w9[fyj#!o)12\9q+y
3Mip7GT%=733=#9%]223mGs6%p23mGs6%p26\tk:DAJz=Ywf)1-pi# 7)U2\yQ+:00*p[
49+[XzT%3+w9.I.M$2:=2'7j3WFM>Ga#DW+O.U$UqUH[H23_Jx($Xz'_;WR%a:$rZ((6
eO8h# 9x h77<;;\XlwS/d+%XlwS/d+%Xz>MZWi)%-7>#=-/B:(7\O-UXMV_JWRba:L
)K M9[D:\[=Q]xa6s\2;R 280SP3[xLWs/D+%xZ>mzwI)%-7>#=-/b:(7\o-uxmv_jwrBA:l
)K )9[D:\[=Q]xZt%]4:=2'7Bjwfm>gA#dw+o.u$uQuh[h23_jX($xZ'_;wr%A:$Rz((6
eO8># 9x js7\) [VE$,T/qn[ $,T/qn[ $#kv<9c*7!-WF)1-PI# 7)/2\Yq6394Uy=8
oU=*280SPC/x(v89s[9ID[62 O9ID[62 O9[oW9#m-'bH*7%((e1T$#4(M94 YX#!<)10
'\\+:=2'7j3WuK$($,T/qn[ $,T/qn[ $#kv<9c*5!3l:ra:ZxuW+3a)$rD((94Uyx8
oU=%2[.G  yIH$%zs[9[(j=jJ:R.a.o\;:=MD/7x(Ce V$,Q+h/*28)Q3:0p*p7$k-/z
F>#]w+*7e07G2<-xZt%3uM9ID[62 O9[oW9#m-[bJ$,Q+h/*28)Qi:0p*==#!<) 0
'\*4:M$GwrsWTjD/$,T/q\P $+D;:]md/7X(cE v$,q+H/*28)q3:0P*P7$K-/Z
F>#rw0]dD\%#[tc323mGsz=p2<9zw+o.u$uQPh2/23_jX($xZ'_-wr%A577$k-[z
FhBU3:X23>7K/2%x(v89w7wdZG#du:D[*p!-u(9IZYX++W/xZ 4\D9y0*77xT-/bJ5X8
_f]A:zXU+:]_78o<5<) 0
'4-j39>z6Y#9%]P2>S*):38G81\;c9czyx+Uc/Xl8_Jx($128dc Z*6Uy=#M2)1-5bJQ
$r$*P!Jj(9$\H#2);bahL
)Cu>sx(v89w9%6P.-#o!c8Z<7x -/bJ5X#=+)1-pijw+J8ZA0'k-[x46_jXC'10
o,*((E1tP7*[!=g(:9qpy
38J9H#/+]p280SPp(xFh6C 69CZYX+uC/xL8_jX($128DC z*6uY=#m2)1-5Bjq
$r$*P!Jj(9$\H#2);bahL
!$ 2y.'l
.ends iob_obc_ctrl_pc_b
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_nc_d
** View name: schematic
************************************
.subckt iob_obc_ctrl_nc_d cnnd ctsb ff_b loc_gnd loc_vdd mcnd normal_n term
+ts_b
.prot FREELIB
%/X\ 79K<9>*7!3[y
k 2 D/F29-u/7G(Me*\l
s-w%=>Zj8%P:\0u$sQLhs_0
'\*j:=.3>1%S+92 :+/f:K[A8%'=39- V7*90bX4y=+Uw9i*P!Jj:=e*07$;-/XM/_JQ
7O$S$#<23'1280s,)9id[69;o9id[69;o9$Ow9#M-'Bh;7%((E1t$rD((94Uyx8
oU]%2[#G  yIH$%zs[9ID[69;O9ID[69;O9$oW9#m-[bJ(7%((e1T$#4(p94 YX#!<)10
'\*+:K[A8%'=39[(J=Vl:r.A.+D;:r.A.+D;:]md/7X(3E%t$,q+H/*28)q4:0P*P7$K-/Z
F6=jw+*7V;7<;;\xLWs/yO%xLWs/yO%xi>mzwI) -5i#=-/b:(7\o-ixmv_jwrBA:l
)KTM9[D:\[=Q=xZt%3u(9[(j>]wfm>g<ydw2o.u$uQPh'*23_jX($xZ'_rwr%A:$Rz((6
eO6$# 9xFY$SsK[9id[69;o9id[69;o9$Ow9#M-[B:77%((E1t$rD((94Uyx8
oU]v280S,)9[(j=;H:R.a.+d;:R.a.+d;:]MD/7x(3e1H$,Q+h/*2\yQ+:00*p[
492[XA8S\2;r 2 d/f29id[69;o9id[69;o9$Ow9#M-[Bj(7%((E1t$#4(P94 yx#!<)10
'\\U:K[A8%'=397U.-# 9x :*7%v%CgzV7\90bX4y=+3c9i*P!Jj:=e*(7$;-/XM/_JQ
7O[h$#<23/H2 d/f29[(J=3h:r.A.O\;:=md/7X(3Euj$,q+H/*28)qj:0P*P7$K-/Z
F>#rw+*7H7B# 9X )97%V%cGZv7%V%cGZv7\90Bx4YX+JE9I*p!jJ:0p*p7$k-/z
F>#jw+*7H7$# 9X s*7%V%cGZv7%V%cGZv7\90Bx4Y=+3C9I*p!jJ:=E*(7$;-/xm/_jq
7O[S$#<23'1280s,)9id[62 o9id[62 o9[Ow9#M-/Bt*7%((E1t$rD((94Uyx8
oU=U280SPC:x(v89s[9ID[62 O9ID[62 O9[oW9#m-[b:07%((e1T$#4(M94 YX#!<)10
'#3+:=.3>1%S+9[(J=-+:=2'7bVWFM>Ga#DW+O.U$UqpH/V23_Jx($Xz'_;WR%a:$rZ((6
eO8$# 9xFY$SsK[9[(J=3U:r.A.O\;:=md/7X((E*v$,q+H/*2\Yq+:00*P[
4#c2/2[#\;:=2'7j5W7WD78+#M+)1-5bJWF=a:Zxu+:=_78O<5<) 2,.q+H'%:L
T%T-/b:(X#Ttw[!t8z(36
e75$]WTjD/$d:W7WD78+#M+)1-s=JWF=a:Zxu+:=_78O<5<) 2,.q+H2V:$,*((E1tP[
atTW[!T8Z(36
e75$yWTjX\ 60t:38GH#9Wi=ahZx;+:r[*P!Jj(9[\H#2);bah$U*(cE%+P7%t-/B:(x8
_2J8ZA0'k-[z
FhBvL:*p3<7<;;\d/$)Cs!=-2,#Q+h'%:$,\((e1Tp7\[!=G(:9QP:D$*p!-u(6
:l6_Jx($126dc Z*6Uy=8
o!'vs$%<5U9Ma8y#)Oy-2'4/ '=pJ$u\((e%Jp7% -/b:(X# tw[!t8z(39CiYX+uC/z
$3.Q+h/*:$.:#+N23/_3q
7W%+;7g +%XO[#DW+*7h)>#O!C[;8Y-Wi=a:Zb-+:r[*P!Jj(9[\H#2);bah$U*((E%jP[
a=2)1-PIJW2j8za0'K-[Z
F>#Uw+m6oG,/ :*p3<7G %=733=#y<BxZ>mz=6Xx4Y=+3C9I*p!jL:=E**7$;-! 2\9QPY
e4Z68t2Y
.ends iob_obc_ctrl_nc_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_nc_a
** View name: schematic
************************************
.subckt iob_obc_ctrl_nc_a cnnd ctsb ff_b loc_gnd loc_vdd mcnd normal_n term
+ts_b
.prot FREELIB
%/X\ 79K<9>*5!V[y
k 2 D/F29-u/7G(We/\l
s-w%=>Zj8%P:\0u$sQPWe%\l
)KTW9[D:\[=Q=x(v89s[9>Z[#S5f[xPvy#TUm02,_-X)9I*p!jJ:=E*07$;-/xm/_jq
7O$Y$#<2#'XAJ90WFM>G<YDWFM>G<YDW2O.U$UqUH'V23_Jx($XMV_JWRba:L
)KT>9[(j=3u:=2';B#=0kdPvy#=0kdPvy#TUm02,_-XCixLYX++W9[FYB#!O)\H$Rz(36
eO6b#/+K[':,3W bD/$,T/q\P $,T/q\P $.kv<9c*5!5WF)1-PI# 7)V2\Yq+:00*P[
4t3/XzT%y,:*P3<7%v%C- V7%v%C- V7*90bX4yb+j:ra:ZxuW+3a+$rD((94Uyx8
oU]U28m'9'RdZ$#<23[%280SL#9ID[69;O9$oW9#m-'bT$,Q+h/*28)Q4:0p*p7$k-/z
F>.rw+*7e57\) [Uy$,t/Q\p $,t/Q\p $.KV<9C*5!-4:RA:zXUwr%A:$Rz((6
eO6=#/+K[':,3WTjD/67%v%C- V7%v%C- V7*90bX4yb+h:ra:ZxuW+3a+$rD((94Uyx8
oU]12[#G  yIH$#<23:h23mGs6%p23mGs6%p26\tk:DAJz$#=-/b:(7\o-ixmv_jwrBA:l
)K p9[(j=ji:=2'7J5wfm>gA#dwfm>gA#dw+o.u$uQPh2xLYX++W94 YX#!<)10
'\\3:=2'7xyW9%6p.-#=0KD!8Y#=0KD!8Y# uM02,_-x3IXlyx++w9[fyj#!o)12\9q+y
3MZ)7\) [ J$#<2#'xLWs/D+%xLWs/D+%xZ>mzwI) -97%((e1T$Rd((94uYX8
oU= 280SP32x\ 60T:=2'7BYwfm>gA#dw+o.u$uQuh$xLYX++W9[FYi#!O)12\9Q+Y
3MZ97\) (%2[%zF:=2'7Xvwfm>gA#dw+o.u$uQPh2xLYX++W94 YX#!<)10
'#3+:=.3>1%S+9[(J=3U:=2'7xyWFM>Ga#DW+O.U$UqUH[V23_Jx($Xz'_;WR%a:$rZ((6
eO8x# 9x j*7\) [/v$,T/qn[ $,T/qn[ $#kv<9c*5!uWF)1-PI# 7)*2\Yq+:00*P[
49+'XA8S\2;r 2J9/f:=2'7=5WFM>Ga#DW+O.U$UqUH$Xlyx++w9[fyI#!o)12\9q+y
38J9H#/+=p280SPM2xFh6C 69CZYX+uC/xL8_jX($128DC z*6uY=#m2)1-5Bjq
$r$*P!Jj(9$\H#2);bahL
)Cu)(x\ 60wtJxFh6C 69CZYX+HM/xL8_jX($128DC z*6uY=#m2) -SBjwf]A:zXU+Y
8$\h#2);BAHl
)Cu)sx\ 7:[Q-$2'4/#+\x48_-X3[123#Q+h/*:$#:#+N23/_3wI]AJzJ-+:R$*p!jJ(6
:I 4\d9Y0*5[
4#c:H2TY'Y:*P3<60W7WD78+#M+)1-5bJWF=a:Zxu+:=_78O<5<) 2,.q+H'%:L
T%T-/b:(X#Ttw[!t8z(36
e75<VW *6O$\g o92 :+#O!C[;8Y-Wi=a:Zb-+:r[*P!Jj(9[\H#2);bah$U*((E%jP[
a=2)1-PIJW2j8za0'K-[Z
FhBr,:k[Zv7K/+%xZt%3iE9E7.#[ O'x48_jXC'123#Q+h/*:$#:#+N23/_3wI]A:zB-+Y
8IiYX++W/xi 4\D9y0*7[
49+$Xzw8k$FC[2TY'Y:K[A8%'=39-U/7\90bipJ7X(cE*23_Jx(SXz'_yWR%a577$K-[Z
-\#*50Xz
.ends iob_obc_ctrl_nc_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_pc_d
** View name: schematic
************************************
.subckt iob_obc_ctrl_pc_d cnpd ctsb ff_b loc_gnd loc_vdd mcpd normal_p term
+ts_b
.prot FREELIB
%/Xd66T! 9-U/7g(>jZ
a77GT%=733=#y<BxaY$+ut6
e75I;W *6O$\gto92 :+#O!C[;8Y-Wi=a:Zb-+:r[*P!Jj(9[\H#2);bah$U*((E%jP[
a=2)1-PIJW2j8za0'K-[Z
FhBUP:k[iv7K/2%xo[.<w7wdZG#du:D[*p!-u(9IZYX++W/xZ 4\D9y0*77xT-/bJ5X8
_f]A:zXU+:]_78o<5<) 0
'4-h>9>z6Y# 9x*t$)cS!=-2,#q+H'%:$,\((E1tP7\[!=g(:9qp:d$*P!-U(6
:l6_Jx($126dc Z*6Uy=8
o!'/V$0d5692 :+/F:38gh#9wI=A:zB-+:R[*p!jJ(9[\h#2);BAH$u*((e%Jp[
a=2)1-PIJW2j8za0'K-[Z
F>.]w+*7V77\) $*23mGs6%p23mGs6%p26\tk:DAJzJ5wf)1-pi# 7)%2\yQ6394uY=8
oU]j280SP(2x(v89wfm>g<ydwfm>g<ydw2o.u$uQuhuj23_jX($xZ'_vwr%A577$k-[z
F>.-w%]>Zj8%P:X0gx7%V%c- v7%V%c- v7*90Bx4YB+3)9I*p!jJ:=E*57$;-! 2\9QPY
3Mi)7\V;o=L..#/2k[':,3w+*7H7J#=0kdPvy#TUm02,_-XM2xLYX++W9[FYH#!O)\H$Rz(36
eO6x#/2K[':,3WuK$($,T/q\P $,T/q\P $.kv<9c*5!;h:ra:ZxuW+3aj$rD(*[XM/_3Q
7O$h$S*/+x6l77TtqM4'$,T/q\P $,T/q\P $.kv<9c*5!;h:ra:ZxuW+3aj$rD(*[XM/_3Q
7O$t$#T5u5iG67\) S 280sp(2XlwS/Yo%XI>MZWi)%-s$#=-/B:(7\O-:XMV_.p:00*7[
492SXzT%yp:K7UX7%v%C- V7%v%C- V7*90bX4yb+3)9i*P!Jj:=e*57$;-! 2\9qpy
3MiS7\) [ )$0d56c323mGs6%p23mGs6%p26\tk:DAJzJ5wf)1-pi# 7)/2\yQ6394uY=8
oU=U28m'9'Rdi$s*/+X6L77\) [/e$,t/QN[ $#KV<9C*5!;H:RA:zXUw+3AJ$Rd(*[xm/_3q
7O[Y$#T5u5iG67\) S 280spc(XlwS/d+%Xz>MZWi)%-s$#=-/B:(7\O-'XMV_.p:00*7[
49+'XA6S\2;r 2J9/f:=2'7juWFM>Ga#DW+O.U$UqUHUJ23_Jx($Xz'_-WR%a577$K-[Z
F>#Uw+*7H5e#)Oy-gx7%V%cGZv7%V%cGZv7\90Bx4YB+3)9I*p!jJ:=E*57$;-! 2\9QPY
3MZ;7\) s 2[%zF:=2'7H3wfm>gA#dw+o.u$uQ+hsj23_jX($xZ'_vwr%A577$k-[z
F>#3w+*7HSi#V2c.mj7\) [/+$,t/QN[ $#KV<9C*5!;H:RA:zXUw+3AJ$Rd(*[xm/_3q
7O[v$#<23: 280sjw9id[62 o9id[62 o9[Ow9#M-/Bv97%((E1t$#4(>94 y33WRbahL
)K (9[(j=v4:o>it7%V%cGZv7%V%cGZv7\90Bx4YB+3)9I*p!jJ:=E*57$;-! 2\9QPY
3MZ)7\) [/e$0d569ID[62 O9ID[62 O9[oW9#m-'b)97%((e1T$#4(C94 Y33wrBAHl
)KTp9.i.m$2:J_gx7%V%c- v79;O9$oW9#m-'b)97%((e1T$#4(C94 Y33wrBAHl
)K p9.i.m$2:J_gx7%V%cGZv79k<9[oW9#m-'b)97%((e1T$Rd((94uYX8
Xr=$3W%8
.ends iob_obc_ctrl_pc_d
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_pc_a
** View name: schematic
************************************
.subckt iob_obc_ctrl_pc_a cnpd ctsb ff_b loc_gnd loc_vdd mcpd normal_p term
+ts_b
.prot FREELIB
%/Xd66T! 9-U/7g(PE%\L
s3w%]>Zj8%P:\0u$sQ,hi_0
'\\4:M$GwrsWTjD/$,T/qn[ $+ZK:=md/7X(cE1+$,q+H/*28)qU:0P*==#!<) 0
'\*4:M$GwrsWTjD/$,T/q\P $+D;:]md/7X(cE1+$,q+H/*28)qI:0P*==#!<) 0
'\\U:K$A8%'=397U.-# 9x h77%v%CgzV7\90bX4yb++P9i*P!Jj:=e*)7$;-! 2\9qpy
3MZ*7\) sU280SPp[xLWs/D+%xLWs/D+%xZ>mzwI)%23_jX($xZ'_;wr%A:$Rz((6
eO8j# 0Ym;36*W%]>zJ8%p:=2'*>#=0KD!8Y# uM02,_-x(IXlyx++w9[fyh#!o)\h$rZ(36
eO8I# 9xFh$0D56C323MgSZ=P23MgSZ=P28\TK:dajZxRWF)1-PI# 7)/2\Yq6394Uy=8
oU=1280S,p9Ma60#=0kd!8y#=0kd!8y# Um02,_-X(ixLYX++W9[FYH#!O)\H$Rz(36
eO8E# 9x h07g2<-XzT%y3:r.A.O\;:=md/7X(c9i*P!Jj:=e*s7$;-/XM/_JQ
7O[Y$#T5u5iG67\) [ +$#<2#[XlwS/d+%Xz>MZWi)%-P<#=-/B:(7\O-:XMV_.p:00*7[
49+:XzT%yl:*P3<7%v%CgzV7%v%CgzV7\90bX4yb++P9i*P!Jj:=e*)7$;-! 2\9qpy
3MZ77\) [ H$m*s007280S,p9ID[62 O9[oW9#m-'b:07%((e1T$#4(>94 Y33wrBAHl
)KT#9[(j=34:=2'7<3wfm>g<ydwfm>g<ydw2o.u$uQuh/v23_jX($xZ'_vwr%A577$k-[z
F>.5w+*7H7e#)Oy-23mGs6%p23mGs6%p26\tk:DAJzXrwf)1-pi# 7)h2\yQ6394uY=8
oU]%2[.G  yIH$%zs[9ID[69;O9ID[69;O9$oW9#m-'b:07%((e1T$#4(>94 Y33wrBAHl
)KT>9[D:\[=Q]xa6s\2;R 280SPM[xLWs/yO%xi>mzwI)%-p<#=-/b:(7\o-sxmv_.P:00*7[
492UXzT%33392 :+/f:r.A.+D;:r.A.+D;:]md/7X(cE1+$,q+H/*28)ql:0P*==#!<) 0
'\*+:K$A8%'=39mA60#=0KDpVY#=0KDpVY#tuM02,_-x(IXlyx++w9[fyh#!o)\h$rZ(36
eO6=#/2K[':,3W0]Dd\%#=0KDpVY#=0KDpVY#tuM02,_-x(IXlyx++w9[fyh#!o)\h$rZ(36
eO6I# 0Ym;36*W+*7h7<# 9x h;7%v%C- V7*90bX4yb++P9i*P!Jj:=e**7$;-! 2\9qpy
3Mi*7\) [ +$sSk[9ID[69;O9ID[69;O9$oW9#m-'b:07%((e1T$#4(>94 Y33wrBAHl
)Cu):xa8.dw+*7H0=#o!c8Z<7x -/bJ5X#=+)1-pijw+J8ZA0'k-[x46_jXC'10
o,*((E1tP7*[!=g(:9qpy
38J)>#)Oy-2ty'yQ-xFh6C 69CZYX+uC/xL8_jX($128DC z*6uY=#m2)1-5Bjq
$r$*P!Jj(9$\H#2);bahL
)CuW[xa8.dwUk$ $\GT99E7.#[ O'x48_jXC'123#Q+h/*:$#:#+N23/_3wI]A:zB-+Y
8IiYX++W/xi 4\D9y0*7[
4#c$u2J0'9:O>IV7<;;\XfH6\$+%%2,#q+H'%:$,\((E1tP7\[!=g(:9qp:d$*P!-U(6
:l6_Jx($126dc Z*6Uy=8
Xr=$3W%8
.ends iob_obc_ctrl_pc_a
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_nc_c
** View name: schematic
************************************
.subckt iob_obc_ctrl_nc_c cnnd ctsb ff_b loc_gnd loc_vdd mcnd normal_n term
+ts_b
.prot FREELIB
%/X\ 79K<9>*7!-[y
k 2 D/F29-u/7G(Me*\l
s-w%=>Zj8%P:\0u$sQ,h[_0
'\*j:=.3>1%S+92 :+/f:K[A8%'=39- V7*90bX4y=+Uw9i*P!Jj:=e*07$;-/XM/_JQ
7O$S$#<23'/280s,c9id[69;o9id[69;o9$Ow9#M-'Bh;7%((E1t$rD((94Uyx8
oU]%2[#G  yIH$%zs[9ID[69;O9ID[69;O9$oW9#m-[bJ(7%((e1T$#4(p94 YX#!<)10
'.3+:=2'*<#)oY-23MgS6%P23MgS6%P26\TK:dahZbuWF)1-PI# 7)V2\Yq+:00*P[
492UXzw8k$FC[280spc:XzT%y4:r.A.+D;:]md/7X(3E%t$,q+H/*28)q4:0P*P7$K-/Z
F>.5w+*7e57G2<-xLWs/yO%xLWs/yO%xi>mzwI) -p=#=-/b:(7$;-/xm/_jq
7O$+$#<2#'XzT%33e9id[69;o9id[69;o9$Ow9#M-[B:77%((E1t$rD((94Uyx8
oU] 2[#G  yIH$D:s[]xLWs/yO%xLWs/yO%xi>mzwI) -5i#=-/b:(7\o-ixmv_jwrBA:l
)KT(9>Z[#S5f[xZt%3iE9ID[69;O9ID[69;O9$oW9#m-[bJ(7%((e1T$#4(p94 YX#!<)10
'\\+:=2'7xVW+*7h)>#=0KD!8Y#=0KD!8Y# uM02,_3xm'Xlyx++w9[fyI#!o)12\9q+y
3MZ07\) [1V$#<23uh23mGsz=p23mGsz=p28\tk:DA:ziYwf)1-pi#!O)12\9Q+Y
3MZ77\) [ J$D:s[]xZt%3+>9ID[62 O9[oW9#m-[b)57%((e1T$#4(W94 YX#!<)10
'\\U:K[A8%'=397U.-# 9x h57%v%CgzV7\90bX4y=+3c9i*P!Jj:=e*(7$;-/XM/_JQ
7O[)$#<23'12TY'Yq-XlwS/d+%XlwS/d+%Xz>MZWi) -P<#=-/B:(7\O-UXMV_JWRba:L
)K >9[(j=-i:=2';B#=0kd!8y#=0kd!8y# Um02,_jXWsxLYX++W94 YX#!<)10
'\\h:=2';b#/ b3280sp(SXlwS/d+%Xz>MZWi)1-(>#=-/B:(7$;-/XM/_JQ
7= :$#T5u5iG87\) [%S$#<23'123MgSZ=P28\TK:dahZxRWF)1-PI# 7)u2\Yq+:00*P[
4#c2H2 d#[TC3I$)cS!=-2,#qpH/u:$,\((E1tP7\[!=g(:9qp:d$*5!-4(9iIyx++w/Z
$6DC z*6uY=8
o!'js$s\ O9[(j=;L:38gh#9wI=A:zB-+:R[*p!jJ(9[\h#2);BAH$u*((e%Jp[
a=2)1-PIJW2j8za0'K-[Z
FhB5,:J_gx7:[:38gh#9wI=A:zJ3+:R[*p!jJ(9[\h#2);BAH$u*((ej+p7%T-/b:(X8
_2J8ZA0'k-[z
FhBvL:*p3<7<;;\d/$)Cs!=-2,#Q+h'%:$,\((e1Tp7\[!=G(:9QP:D$*p!-u(6
:l6_Jx($126dc Z*6Uy=8
o!'vs$%<5U9Ma8y#)Oy-2'4/ '=pJ$u\((e%Jp7% -/b:(X# tw[!t8z(39CiYX+uC/z
$3.Q+h/*:$.:#+N23/_3q
7W%+;7g +%XO[#DW+*7h)>#O!C[;8Y-Wi=a:Zb-+:r[*P!Jj(9[\H#2);bah$U*((E%jP[
a=2)1-PIJW2j8za0'K-[Z
F>#Uw+m6oG,/ :*p3<7G %=733=#y<BxZ>mz=6Xx4Y=+3C9I*p!jL:=E**7$;-! 2\9QPY
e4Z68t2Y
.ends iob_obc_ctrl_nc_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_tsb_mux21
** View name: schematic
************************************
.subckt iob_tsb_mux21 i0 i1 s s_b x
.prot FREELIB
H]=3g\#M2)1-57X -/BjL
)KT(9E2/7C+:\p $.KV<9C*,.#=-/b:(7$;-/xm/_jq
7O$h$)#Kq-X7779;o9$Ow9#M-d$23_Jx($XMV_JWRba:L
)K C9E2/7CP:\0u$#KV<9C*,##=-/b:(7$;-/xm/_jq
7O[:$)#Kq-X7P79K<9[Ow9#M-d[23_Jx($XMV_JWRba:L
!$ 2y.'l
.ends iob_tsb_mux21
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_nc_x1
** View name: schematic
************************************
.subckt iob_obc_ctrl_nc_x1 cnnd ctsb loc_gnd loc_vdd normal_nf op_out term
+term_b
.prot FREELIB
7W%Ys7\) :*2[%Zf:=2')<#O!C[;8Y-Wi=a:Z$J+:r[*P!Jj(9[\H#2);bah$U*(36
:l6_Jx($126dc Z*6Uy=8
o!'js$s\ O9[(jHUw7wd78+#m+)1-5Bjwf=A:zXU+:=_78o<5<) 2,.Q+h'%:l
T%T-/b:(X#Ttw[!t8z(36
eO8x# 9xV)$M*S00723MgSZ=P23MgSZ=P28\TK:da:Z<#=-/B:(7$;-/XM/_JQ
7O[j$#T5u5iG8d# 9xV)$,T/qn[ $,T/qn[ $#kv<9c*7!5WF)1-PI#!o)12\9q+y
3MZ77\) iU280SJ)9ID[62 O9ID[62 O9[oW9#m-/b+$,Q+h/*2\yQ+:00*p[
492UXzw8k$FC[\$#<2PUXlwS/Yo%XlwS/Yo%XI>MZWi) -97%((E1t$#4(c94 y33WRbahL
)KT39[(j<;w0]dD\%# 9Xjy$,t/Q\p $.KV<9C*57%((e1T$Rd((94uYX8
oU]%280SH)9[(ji5wfm>g<ydwfm>g<ydw2o.u$uQu:RA:zXUwr%A:$Rz((6
e75I;W%=[ $#<2>IX'T8kW *6O.-# 9x*Y$4Tfqx0/.\$Oc[X46_JxP9czyx+4y
e4Z68t2Y
.ends iob_obc_ctrl_nc_x1
** End of subcircuit definition.
************************************
** Library name: XI_MacrosLib
** Cell name: xi_tgate
** View name: schematic
************************************
.subckt xi_tgate A C CB Y
.prot FREELIB
H]=3g\#M+)123#q+:=_78O<5<) 2,.q+:r$*P7*[!=g(:9qpy
3[H$2#/:5xP/9# Um02,_x :RAL87\o-=_78o<5<94 YX#!<)10
'.3W89>/$1#Yo%XI>MZWi)cI$,q=29[fy.:#+n23/7$;-/XM/_JQ
H0[I:MsQ
.ends xi_tgate
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_nc_x
** View name: schematic
************************************
.subckt iob_obc_ctrl_nc_x ff_b loc_gnd loc_vdd op_out term term_b ts_b
.prot FREELIB
%/XzT%R4:\0U$SqUHS_0
[=#v2C.MJ79K<9>*7<+jT6
eO8=#v2C.MJ7\) IF280s3P9id[62 o9[Ow9#M-[BY$,q+H/*28)qU:0P*==#!<) 0
'\\+:=2's<# 9xV+$,T/qn[ $,T/qn[ $#kv<9c*7!5WF)1-PI# 7)%2\Yq6394Uy=8
oU] 2W./VrXxZt%r,:R.a.+d;:R.a.+d;:]MD/7x(3e*+$,Q+h/*28)Qu:0p*==#!<) 0
'.3I:=2'0E#29YmGX7%v%C- V7%v%C- V7*90bX4yx+Uc9i*P!Jj:0P*P7$K-/Z
F>.jw0]dD\%# 9Xv+$,t/Q\p $,t/Q\p $.KV<9C*7!U4:RA:zXUw+3AJ$Rd(*[xm/_3q
7] )$#<2PIX'T8kS[9id[69;o9id[69;o9$Ow9#M-/Bj57%((E1t$rD((94Uyx8
o!'vs$D:s[97(:\/F:X23>7\) iv2'4/2z57($u\(3ev:p7% -/b:(X# tw[!t8z(36
:46_3xP/123.q+H/*:$.:#+n23/_3Q
7W%+07sKq-X'T8kS[97(:\# 9xVE$)cS n='T7X -[B+Px#=+)1-PIJW+j8za0'K-[Z
$,.QPhi1:$,*((e1Tp7*[!=G(:9QPY
e4Z68t2Y
.ends iob_obc_ctrl_nc_x
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_pc_c
** View name: schematic
************************************
.subckt iob_obc_ctrl_pc_c cnpd ctsb ff_b loc_gnd loc_vdd mcpd normal_p term
+ts_b
.prot FREELIB
%/Xd66T! 9-U/7g(>E%\L
s3w%]>Zj8%P:\0u$sQHhu_0
'\\4:M$GwrsWTjD/$,T/qn[ $+ZK:=md/7X(cEuY$,q+H/*2\Yq+:00*P[
492IXd66T! 9_\.-#=0KDpVY#Yo%XI>MZWi)%-s$#=-/B:(7\O-'XMV_.p:00*7[
49+$XzT%u,:*P3<60WFM>Ga#DWFM>Ga#DW+O.U$UqUHUJ23_Jx($Xz'_-WR%a577$K-[Z
F>#]w+*7H7<#/ B3280SP(uxLWs/D+%xZ>mzwI)1-*$#=-/b:(7\o-:xmv_.P:00*7[
49+UXzw8k$FC$2[.g  Yih$#<23/*23MgSZ=P28\TK:dajZj5WF)1-PI# 7)%2\Yq6394Uy=8
oU=1280S,39Ma60#=0kd!8y#=0kd!8y# Um02,_-XM2xLYX++W9[FYB#!O)\H$Rz(36
eO8=# 9xF+$M*S007280s,39id[62 o9[Ow9#M-'B)97%((E1t$#4(c94 y33WRbahL
)K )9[D:\[=Q]xZt%3Pp9[(ji]wfm>gA#dw+o.u$uQuhuj23_jX($xZ'_-wr%A577$k-[z
F>#Yw+*7HpJ# 9X +77%V%cGZv7%V%cGZv7\90Bx4YX+L)9I*p!jJ:=E*)7$;-! 2\9QPY
3MZ)7\) [1T$0d569ID[62 O9ID[62 O9[oW9#m-'b)97%((e1T$#4(C94 Y33wrBAHl
)K C9>i[#S5f[x'/60w+*7e07%V%cGZv7\90Bx4YB+3)9I*p!jJ:=E*57$;-! 2\9QPY
3Mi;7\) [ +$#<23i 23mGs6%p23mGs6%p26\tk:DAJzJ5wf)1-pi# 7)%2\yQ6394uY=8
oU] 2[.G  yIH$m*s00723mGs6%p23mGs6%p26\tk:DAJzJ5wf)1-pi# 7)%2\yQ6394uY=8
oU]j280SPCsx(v89wfm>g<ydwfm>g<ydw2o.u$uQuhuj23_jX($xZ'_vwr%A577$k-[z
F>.Uw+m6oG,/T:=2'7=rw+*7H5>#=0kdPvy#TUm02,_-XM2xLYX++W9[FYH#!O)\H$Rz(36
eO6b#/2K[':,3W bD/$,T/q\P $,T/q\P $.kv<9c*5!;h:ra:ZxuW+3aj$rD(*[XM/_3Q
7O$v$#<23[V2[%Zf:r.A.+D;:r.A.+D;:]md/7X(cEuY$,q+H/*28)qU:0P*==#!<) 0
'\*3:=2'7hVW9%6p.-#=0KDpVY#=0KDpVY#tuM02,_-xm2Xlyx++w9[fyh#!o)\h$rZ(36
eO6h# 0Ym;36*W%]>zJ8%p:=2'7hVWFM>G<YDW2O.U$UqUHUJ23_Jx($Xz'_VWR%a577$K-[Z
F>.jw%]>Zj8%P:o>it7%V%c- v7%V%c- v7*90Bx4YB+3)9I*p!jJ:=E*57$;-! 2\9QPY
38J9H#/+]p280SPp[xFh6C 69CZYX+uC/xL8_jX($128DC z*6uY=#m2)1-5Bjq
$r$*P!Jj(9$\H#2);bahL
)Cu>sx(v89w9%6P.-#o!c8Z<7x -/bJ5X#=+)1-pijw+J8ZA0'k-[x46_jXC'10
o,*((E1tP7*[!=g(:9qpy
38J(J#29yM2>s*;:*p3<74#Q==ZvB#m+)1-5Bjwf=A:zXU+:=_78o<5<) 2,.Q+h'%:l
T%T-/b:(X#Ttw[!t8z(36
e75I3W%=$ $\gto9mA60#O!C[;8Y-Wi=a:Zb-+:r[*P!Jj(9[\H#2);bah$U*((E%jP[
a=2)1-PIJW2j8za0'K-[Z
-\#*50Xz
.ends iob_obc_ctrl_pc_c
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_pc_x1
** View name: schematic
************************************
.subckt iob_obc_ctrl_pc_x1 cnpd ctsb loc_gnd loc_vdd normal_pf op_outb term
+term_b
.prot FREELIB
7W%Y)7g 2%XzT%;U:38GH#9Wi=a:Zb-+:r[*P!Jj(9[\H#2);bah$U*((E%jP[
a=2)1-PIJW2j8za0'K-[Z
FhB53:=2'SB#/ B3280S3p9E7.#[ O'x48_jX)/123#Q+h/*:$#:#+N23/_3wI]AHzBj+Y
8IiYX++W/xi 4\D9y0*7[
49+[Xzw8k$FC$\$#<2P2XlwS/d+%XlwS/d+%Xz>MZWi)1-(b#=-/B:(7$;-/XM/_JQ
7O[:$#T5u5iG6d#v2C.MJ-#=0KD!8Y#=0KD!8Y# uM02,_Jxw'Xlyx++w94 yx#!<)10
'\*+:=2')$# 9xVY$,T/q\P $,T/q\P $.kv<9c*5!;h:ra:ZxuWR%a:$rZ((6
eO6=# 0Ym;36*[:M$Gwrsf:=2')$#=0KDpVY#tuM02,_-xm2Xlyx++w94 yx#!<)10
'4-jm9>z6Y# 9xu+$%<5u97(:\/f:=2'0$##0-D'/-/9R3%h$U*((E%+$U\((E%+L
!$ 2y.'l
.ends iob_obc_ctrl_pc_x1
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_pc_x
** View name: schematic
************************************
.subckt iob_obc_ctrl_pc_x ff_b loc_gnd loc_vdd op_outb term term_b ts_b
.prot FREELIB
%/XzT%;p:\0U$Sq3HU_0
[=#v2C.MJ-#Y<bXAyb-x3jZ
FhB5H:J_gx7S);od/$#<2M[xFh6\$+%%2,#Q+hsv:$,\((e1Tp7\[!=G(:9QuY
8CiY=+i(/xL6_jX($126DC z*6uYB8
oU]12W./VrX3280S339ID[69;O9ID[69;O9$oW9#m-'b)97%((e1T$#4(C94 Y33wrBAHl
)*PM9[(j<;w *6o.-#=0kdPvy#=0kdPvy#TUm02,_jXC'xLYX++W94 YX#!<)10
'\*p:M$Gwrsf:=2'0j#=0KDpVY#=0KDpVY#tuM02,_-xm2Xlyx++w9[fyb#!o)\h$rZ(36
eO8=# 9x/+$#<2m[XlwS/d+%XlwS/d+%Xz>MZWi)%-77%((E1t$#4(c94 y33WRbahL
)K (9.i.m$2[9[(j<;w+*7s07%V%cGZv7\90Bx4YB+P:RA:zXUw+3AJ$Rd(*[xm/_3q
7W%Y(7sKq-X'T8kS[97(:\# 9xV)$)cS n='T7X -/B+Px#=+)1-PIJW+j8za0'K-'Z
$,.Q+hi1:$,*((e1Tp7*[!=G(:9QuY
e4Z68t2Y
.ends iob_obc_ctrl_pc_x
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_obc_ctrl_cz
** View name: schematic
************************************
.subckt iob_obc_ctrl_cz normal_n_a normal_n_b normal_n_c normal_n_d
+normal_n_e normal_p_a normal_p_b normal_p_c normal_p_d dis_n_a
+dis_n_b dis_n_c dis_n_d dis_n_e dis_p_a dis_p_b dis_p_c dis_p_d
+ff_b ts_b loc_gnd_ctrl loc_vdd_ctrl norm_n_x<8> norm_n_x<7>
+norm_n_x<6> norm_n_x<5> norm_n_x<4> norm_n_x<3> norm_n_x<2>
+norm_n_x<1> norm_n_x<0> norm_p_x<13> norm_p_x<12> norm_p_x<11>
+norm_p_x<10> norm_p_x<9> norm_p_x<8> norm_p_x<7> norm_p_x<6>
+norm_p_x<5> norm_p_x<4> norm_p_x<3> norm_p_x<2> norm_p_x<1>
+norm_p_x<0> cnnd<13> cnnd<12> cnnd<11> cnnd<10> cnnd<9> cnnd<8>
+cnnd<7> cnnd<6> cnnd<5> cnnd<4> cnnd<3> cnnd<2> cnnd<1> cnnd<0>
+cnpd<19> cnpd<18> cnpd<17> cnpd<16> cnpd<15> cnpd<14> cnpd<13>
+cnpd<12> cnpd<11> cnpd<10> cnpd<9> cnpd<8> cnpd<7> cnpd<6> cnpd<5>
+cnpd<4> cnpd<3> cnpd<2> cnpd<1> cnpd<0> normal_p_bs normal_n_es
+term term_b dis_p_e normal_p_e normal_p_es tsb_s<0> tsen_b
.prot FREELIB
7d12 d/f:=2'7>-WuIc7:0#M-/B)07%(c/XUyx+4:O>IyY:9%]m+$\X5-%_O,8k4:O6*7[
a9%) 0
'U-W+*7h(E# 9x vP7kUiW6($Uq+HUV23_Vl:ba:Z=5WuK$*Vdk/2O%2>U'(ojm4:\-Q
$O6*77k/-[Z
F,=# 9X V57:[Q-dZ$\-m!y22,_jX3[xLYJ5w<)1-7i#9%]A  \GTU'xo,8Q;toC3>B8
_UyAH$\G(36
e4)7:[q-XzT%3j#9mv,4'):da:Zb#=-2u2/_Jxc'XO[.q;TO>I>>#9iYa  \X5uSXO:_3Q
$O>*7[
4#c2V2J9< q-XzT%;3(97UX6Z1(+XzT%3le98dX6sK[CmM'b3/y
38aj8% Q*02[#\;_()280SPEsx\ 60s+9ID[62 Oc>':,#=0kdPvy// yI28m'9'RdZ.0zq
$x23>7s);OD/$%ZS[98dX6Tf%C>':,/ %C2UL
)C/ yIi.0zw%=$ #=ve:=2'7>Yw+*7H*X#=0kd!8y// yI23mGs6%pg[%'=Y
8[D:\[=Q]d(/7S);ox't8Ks[97u.-##0-dDxs// yIg6s/)<6
e7[%'=2C3U$S\toh t%7\) [Hv$#<23S123MgSZ=PG[%'=:r.A.+D;qK733[
a 0Ym;36*S[bX'T8kW *6O.-#2<C32HM0S0->G[%'=q]>GX98
o!k733#/):J_gx6\wfm>gA#ds%X6L$,t/Q\p .sS5f9p7/6\s99[D:\[=Q=d($%zs[6
:7w-/v[KDAJ8%S+KD(L
)C/ yIZ.-#/+=pc7B1w+*7H*>#[tc3g87%V%cGZv6G2;RxLWs/yO%daj8%wOw0g860q
$=.3>1%S+C32J0'9:x0GX7cv[C./[6g2;rDz[60Q
7W>':,*S99[(J=y+:r.A.O\;qK7337%v%C- V6g2;rX H9/tq*Xzw8k$FC$GT7sKq-Z
$hm0s0->g[%'=Q]>gt[
4#%x6l660W%=$ #=]E:=2'7>yW+*7h*x#=0KD!8Y// Yi23MgS6%PG[%'=:%8U../fy
8[D:\[=Q]d/$%<5U97u.-##0-dDxs// yIg6s/FY
38aj8% Q%xa8#d13/)280SPEsx\ 60s+9ID[62 Oc>':,#=0kdPvy// yI2v4zs+cp0
o#T5u5iG86DW *6O$%ZS[98dX6Tf%C>':,/ %CP0
'4g2;r[Gg7g +%Rhsp# 9x v*7:[q-Dz$,T/qn[ .Ss5F9id[69;oC>':,#;!bDz.18
_+m6oG,/ Q5x't8Kw Bd/$4tFQm3a.sS5fc[a.18
o!k733./;:k[ivw34v9[(j=YL:=2'7>jwfm>gA#ds%X6L$,t/Q\p .sS5f9p7/6*sO6
:zw8k$FC$GV7s);OX'/60W!M3Gw-gS%x6l..gSo6
e7[%'=2C=2[#*;_[HQ$#<23SH280spe/XlwS/d+%DAJ8%WFM>G<YDS%x6l$YcKq]D;L
T\V;o=L../$:X23>7SkQ-x7W-/V[kdaj8%s2kd;l
)C/ yIZ.s#/+=pc7=1w+*7H*>#[tc3g87%V%cGZv6G2;RxLWs/yO%daj8%wOw0g86Gq
$=.3>1%S+C>2J0'9:x0GX7cv[C./[6g2;rDz[6gQ
7W>':,\S7hHQ$S\ ohHQ$#<23SH23MgSZ=PG[%'=:r.A.+D;qK7337\v;ODz.)mlV6
:zT%-,#97(:\#29YmGX7cv[C./[6g2;rDz[64py
38aj8% Q3rT%7G +%rT%7\) [hV$,t/QN[ .sS5f9ID[69;Oc>':,# 0yMg8641W+z
$80Su#(x't8Kw *6o.-##0-dDxs// yIg8s/o36
e7[%'=+CeC9p#/+=PC9p# 9x v*7%v%CgzV6g2;rXlwS/Yo%DAJ8%W+M6O.#/O_2)0
o#<2c(F2J0'9:x23>60W!M3Gw-gS%x6l.#gS7[Z
FhsS5f=dF#<1w%=[ #<1w+*7H*>#=0kd!8y// yI23mGs6%pg[%'=:=.3>6\s7Hvql
T\) 'fe$%<5U97(:\/F:w./.m0/Qk7336\/Q3 0
'4g2;r[G'WVE:K[zVWVE:=2'7>yWFM>Ga#DS%x6l$,T/q\P .Ss5F9[d:\/ q3RS%[
a 9x%E;7s);OX'T8kS[98dX6Tf%C>':,/ %CehL
)C/ yIZ.)M3v9>Z8yM3v9[(j=YL:R.a.o\;Qk7337%V%c- v6G2;RxZW8Ks+cEcSP8
_+*7J;e#29yM2j0'9Q-x7W-/V[kdaj8%s+kdF7[
4#%x6l8641c+XA8#D1c+XzT%3le9id[62 oC>':,#=0KDpVY// Yi28M'9q=Df#b1Q
$=2'5E]W *6O$%<5uC32HM0S0->G[%'=q=>G'=8
o!k733#/o_[)2[#\;_[)280SPEsxLWs/D+%daj8%wfm>g<yds%X6L$#t5Uc[g'w3eY
8[(jB],:X23>7S);od/$4tFQm3a.sS5fc[a.)3q
7W>':,\S7h1Q$S\ oh1Q$#<23SH23MgSZ=PG[%'=:r.A.+D;qK7337\v;ODz.)m+V6
:zT%-,#97(:\#29YmGX7cv[C./[6g2;rDz[64py
38aj8% Q3 2 D/FQ=xLWs/D+%daj8%wfm>g<yds%X6L$#<2C(f2j0'9:X23>60w Bd/l
TCV[c./[6G2;RdZ[64q
7W>':,*S%9>z6Ymp)+XzT%3le9[(J=y+:r.A.O\;qK7337%v%C- V6g2;rX H9/tqKZ
$8m'9'Rdi.s#29yM2j9/F:w./.m0/Qk7336*/Qkz
FhsS5f]dF#=;e:k[ivw33v9[(j=YL:R.a.o\;Qk7337%V%c- v6G2;RxZW8Ks2cEc7J1q
$=2'sbRW *6O$%<5uC32HM0S0->G[%'=q]>G'=8
o!k733./o_[%q$s\TOH J%7\) [hV$,t/QN[ .sS5f9ID[69;Oc>':,# 0yMg66413')0
o#<2m'V2J0'9:x23>60W!M3Gw-gS%x6l..gS7[Z
FhsS5f]dF#=3e:k[ivw3Pv9[(j=YL:R.a.o\;Qk7337%V%c- v6G2;RxZW8Ks2cEc7=1q
$=2'sbRW *6O$%<5uC32HM0S0->G[%'=q]>G'=8
o!k733./o_[1q$s\TOH :%7\) [hV$,t/QN[ .sS5f9ID[69;Oc>':,# 0yMg66413/)0
o#<2m'V2J0'9:x23>60W!M3Gw-gS%x6l..gS7[Z
FhsS5f]dF#e1w%=$ #e1w+*7H*>#=0kd!8y// yI23mGs6%pg[%'=:=.3>6*s7Hfql
T\) u%+$%<5U97(:\/F:w./.m0/Qk7336*/Q3 0
'4g2;r$G'WyE:K[IVWyE:=2'7>yWFM>Ga#DS%x6l$,T/q\P .Ss5F9[d:\/tq3Rv%[
a 9xuj07s);OX'T8kS[98dX6Tf%C>':,/t%CehL
)C/ yIi.)MJv9>Z6yMJv9[(j=YL:R.a.o\;Qk7337%V%c- v6G2;RxZW8Ks2cEc(P8
_+*7)5<#29yM2j0'9Q-x7W-/V[kdaj8%s2kdF7[
4#%x6l6641)+XA8.D1)+XzT%3le9id[62 oC>':,#=0KDpVY// Yi28M'9q]Df#$1Q
$=2'sbRW *6O$%<5uC32HM0S0->G[%'=q]>G'=8
o!k733./o_i)2[#*;_i)280SPEsxLWs/D+%daj8%wfm>g<yds%X6L$#t5Uc$g'wreY
8[(jJ-4:X23>7S);od/$4tFQm3a.sS5fc$a.)3q
7W>':,*S7h/Q$S\toh/Q$#<23SH23MgSZ=PG[%'=:r.A.+D;qK7337\v;ODI.)mIV6
:zT%;UP97(:\#29YmGX7cv[C./[6g2;rDI[64py
38aj8%TQ3r)%7G 2%r)%7\) [hV$,t/QN[ .sS5f9ID[69;Oc>':,# 0yMg6641M+z
$80S3Cix't8Kw *6o.-##0-dDxs// yIg6s/o36
e7[%'=2CeC5p#/+]PC5p# 9x v*7%v%CgzV6g2;rXlwS/Yo%DAJ8%W+M6O../O_')0
o#<2m'V2J0'9:x23>60W!M3Gw-gS%x6l..gS7[Z
FhsS5f]dF#=1w%=$ #=1w+*7H*>#=0kd!8y// yI23mGs6%pg[%'=:=.3>6*s7H ql
T\) u%+$%<5U97(:\/F:w./.m0/Qk7336*/Q3 0
'4g2;r$G'WJE:K[IVWJE:=2'7>yWFM>Ga#DS%x6l$,T/q\P .Ss5F9[d:\/tq3R:%[
a 9xuj07s);OX'T8kS[98dX6Tf%C>':,/t%CehL
)C/ yIi.)3w+*7H*X#=0kd!8y// yI23mGs6%pg[%'=:=2'SBrw *6o$%<5Uc32j9/FY
88Dx6tF%c>':,/T%cE0
'4-hw97U.-# 9xu)P74#qW[p$U\((E/tP7% -/B:(x# TW[!T8Z(39cIy=+U(/Z
$3.Q+h/*:$.:#+N23/_3q
H0[I:MsQ
.ends iob_obc_ctrl_cz
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_outbuf_cz_sim_orig
** View name: schematic
************************************
.subckt iob_outbuf_cz_sim_orig cnnd<13> cnnd<12> cnnd<11> cnnd<10> cnnd<9>
+cnnd<8> cnnd<7> cnnd<6> cnnd<5> cnnd<4> cnnd<3> cnnd<2> cnnd<1>
+cnnd<0> cnpd<19> cnpd<18> cnpd<17> cnpd<16> cnpd<15> cnpd<14>
+cnpd<13> cnpd<12> cnpd<11> cnpd<10> cnpd<9> cnpd<8> cnpd<7>
+cnpd<6> cnpd<5> cnpd<4> cnpd<3> cnpd<2> cnpd<1> cnpd<0> dis_n_a
+dis_n_b dis_n_c dis_n_d dis_n_e dis_n_y dis_p_a dis_p_b dis_p_c
+dis_p_d dis_p_e ff_b gtl0 gtl1 gtl2 loc_gnd_ctrl loc_gnd_drv
+loc_gnd_lev loc_gnd_pred loc_vccaux loc_vcco loc_vdd_ctrl
+loc_vdd_lev nslew0 nslew1 nslew2 nslew3 nslew4 nslew5 pad
+pdelsel_vccaux pdelsel_vcco pdelselb_vccaux pdelselb_vcco
+plvlsel_vccaux plvlselb_vcco por_b_vccaux por_b_vcco pslew0 pslew1
+pslew2 pslew3 pslew4 pslew5 pslew_lowvcc term term_b ts_b tsb_s<0>
.prot FREELIB
7W/E57D#<C[Ge7%KaW[G86PW;KidgY/ 0Ymz.28
o!:fH$#<2p2 239h#+c[gt7'/fm= .#t5U=d(l
)Ci#uxZt%rLp9Iud4\s+c2u$8G=05pg8m'9+c20
'4VlP9[(J<y+:r0>H#/tq*X3[,T$oC[d:\*S96
e7)>uW+*7+*$#=<f8z../)<96A3M[;q=.3>./)y
38s;X# 9Xv+07%kAw[g86dw;kIDGy/ 0yMZ.y8
o!:hs$#<2piU239h#+c$gv7'/fm= .#t5U]d l
)CiE(xZt%rJ>9Iud4\s+c>2:s%V'%dZW8K Qkz
FhHY3:=2'0<-wfB;786*s%96a3m[;Q=.3>.//Y
38s*># 9Xv+;7%kAw[g860w;kIDGy/ 0yMZ.-8
o!:hJ$#<2p21239h#+c$gx7'/fm= .#t5U]d/l
)CiE2xZt%rJ#9Iud4\s2c3u$8G=05pg8m'92c30
'4;hc9[(J<Rl:r0>H#/ q5X3[,T$oC[d:\\S'6
e7shyW+*7+0h#=<f8z../$:Y>lw1DS+M6O66[Q
7W/E;7\) I )$M*t!C3U$8g=05PG3M$22C3UL
)C43$xZt%ri39.i84/::y>LW1dsfm4'86pq
7W/E*7\) I/j$M*t!Co2:S%v'%Dlwrstq<Z
Fh<ji:=2'0=-w0][7.0#5%R.;v6%VrX[gt[
4#P/V280s4>SXd6#cS9bX3[,T$oCid\%\S96
e70xJW+*7+0=#v2]8GT9#5%r.;V6%vRx$GT[
4#>(*280s4m$Xd6.cS996A3M[;qr.MJ./)y
38+pJ# 9XvH)7tT+wd $8G=05pg3m$2+cp0
'4V,)9[(J<34:M$IH6DW;KidgY/=007I.Y8
o!i1J$#<2p[j2W.\#Qkx3[,t$OcID\%\s%6
e7)ERW+*7+7I#v2]8G[7'/FM= .,T! ]DAL
)C4([xZt%rPE9.i84/F:y>LW1dsfm4'860q
7W/E)7\) I E$M*t!C32:S%v'%Dlwrstq-Z
FhJU4:=2'0Bjw0][7.1#5%R.;v6%VrX[gG[
4#>:V280s4c[Xd6.cS'96A3M[;qr.MJ./$y
38);XMLv9[(j<vH_/)2W.\#Q3rV%7'/fm= .,t! =dFl
)C3#/rT%7\) i/y#=1w0][7.)MJv96a3m[;QR.mj#/oY
38);XMHv9[(j<vH_')2W.\#Q3ry%7'/fm= .,t! =dFl
)C3#/r+%7\) i/y#J1w0][7.)M4v96a3m[;QR.mj#/oY
38);XMiv9[(j<vH_:)2W.\#Q3rs%7'/fm= .,t! =dFl
)C3#/r)%7\) i/y#<1w0][7.)M3v96a3m[;QR.mj#/oY
38);XMuv9[(j<vH_2)2W.\#Q3rJ%7'/fm= .,t! =dFl
)C3#/rH%7\) i/y#i1w0][7.)MPv96a3m[;QR.mj#/oY
38);XM+v9[(j<vH_s)2W.\#Q3r:%7'/fm= .,t! =dFl
)C3E(rHSP# 9Xvs;wje:m$ih6413u)2:s%V'%dLWRSTQ3z
FhJY,_[%q$#<2p:fc7P#V2]8g'w3uv96a3m[;QR.mj./oY
38)*eMP3+xZt%ri#H%q$m*T!cEc7=1w;kIDGy/=007i.)8
o!uhe#=je:=2'0H]1M+xD6.Cs7H :%7'/fm= .,t! ]dFl
)C3E(re%7\) i/e#H1w0]$7.)M,v96a3m[;QR.mj./oY
38)*eMLv9[(j<v,_i)2W.*#Q3rV%7'/fm= .,t! ]dFl
)C3E(rT%7\) i/e#$1w0]$7.)MJv96a3m[;QR.mj./oY
38)*eMHv9[(j<v,_$)2W.*#Q3ry%7'/fm= .,t! ]dFl
)C3E(r+%7\) i/e#>1w0]$7.)M4v96a3m[;QR.mj./oY
38)*eMiv9[(j<v,_()2W.*#Q3rs%7'/fm= .,t! ]dFl
)C3E(r)%7\) i/e#=je:m$ih641M+x3[,t$OcID\%*s76
e7s>]1c+XzT%RI#h h%7Tt2WDf#b1W;KidgY/=007I.)8
o!uhe#=1w+*7+)eMPC+xD6.Cs7H q$8G=05pg3m$22cE0
'4;l#h1Q$#<2P:FC7j1W0]$7.)m+V96A3M[;qr.MJ./Oy
38+7=# 9X/T;7tT2wd(/6d)f96a3m[;Q%2LWRSTQ*00
'4Rp)9[(Jhy+:M$zH6<Kq%2l$8g=05PGV0%vRx[GT98
o!i :$#<2p//2W.*#Q-0gv0%w;kIDGy/;9R.mj./F<6
e70=RW+*7S*b#v2=8GT6D)F96A3M[;q%2lwrs q*Z
Fh<j,:=2')>;w0]$7.0/;9Rx3[,t$Ocp(3m$22c20
'4Rp>9[(Jhyj:M$zH6DSo*i2:S%v'%D T,T! =D L
)C4(sxZt%vLE9.i64/;Q%2L$8G=05pgv0%VrX$gv[
4#P[u280sIe(Xd6#cS%CP(37'/FM= .Y<=007z.S8
o!i1T$#<2>sj2W.*#Qkd t,#5%R.;v6d)fm4'66Gq
7WVh57\) :F:$M* !C3GV0%W;KidgY/;9r.MJ#/fy
38+p$# 9X/e57tT2wd/.y<=:y>LW1dsO*ID\%*s[6
e7sE-W+*7S;j#v2=8Gg6D)F96A3M[;q%2lwrs q5Z
FhHvH:=2')evw0]$7.1/;9Rx3[,t$Ocp(3m$22c=0
'4Rjm9[(Jh;,:M$I.0ZSo*i2:S%v'%DI:0Dtq*00
'4Rjc9[(JhVI:M$I.0ZW;KidgY/t;*PI.0ZQ
7WVt77\) :*Y$M*tq<X3[,T$oC$3TY*S86
e70$yW+*7S0j#v2=D(/7'/FM= ..')o=D(/[
4#P2F280sI>2Xd6#/)<CP(37'/FM= ..')o=D(/[
4#P$1280sIP2Xd6./f<CP(37'/FM= ..')o]D//[
4#P2*280sIP(Xd6./f<96A3M[;q]6(V./f<6
e70$5W+*7S0>#v2=D#$8g=05PG68<;+Co0
'4Rh>9[(JhVp:M$z.0#5%r.;V6*59%[GT[
4#P2V280sI>UXd6#/)q%2l$8g=05PG68<;+C20
'4Rhc9[(JhuU:M$I.0#5%r.;V6*59%$GT[
4#P2u280sIw[Xd6./)q%2l$8g=05PG68<;2C20
'4R4#9[(JhJp:M$z.Y#5%r.;V6*59%[GV[
4#PIH280sIm:Xd6#/;q%2l$8g=05PG68<;+CP0
'4Rh(9[(Jh;3:M$I.Y/;9rX3[,T$oC$3TY*So6
e70$3W+*7SPb#v2]D $8g=05PG68<;2CP0
'4R4)9[(JhJ+:M$z.S#5%r.;V6*59%[G[[
4#PI*280sIm'Xd6#//q%2l$8g=05PG68<;+C>0
'4R4>9[(JhJ3:M$I.S#5%r.;V6*59%$G[[
4#PIV280sIm[Xd6.//q%2l$8g=05PG68<;2C>0
'4R439[(JhJ4:M$z.-#5%r.;V6*59%[GX[
4#PI1280sIm/Xd6#/fq%2l$8g=05PG68<;+C30
'4R4m9[(JhJh:M$I.-#5%r.;V6*59%$GX[
4#PI%280sIc(Xd6./fq%2l$8g=05PG68<;2C30
'4RIe9[(JhJj:M$z.1#5%r.;V6*59%[Gg[
4#P:F280sIcSXd6#/$q%2l$8g=05PG68<;+C=0
'4RI)9[(JhJl:M$I.1#5%r.;V6*59%$Gg[
4#P:*280sIc$Xd6./$q%2l$8g=05PG68<;2C=0
'4;pPhHQ$#<2>:HCPp#v2=Df#>1W;KidgY/t;*Pz.)8
o!u +#i1w+*7s)>MPv9.i8641W+x3[,t$Oc$3ty\s76
e7s=R1)+XzT%VIeh%Q$M* q3RY%7'/FM= ..')o=DfL
)C33ir+%7\) :/V#J1w0][g'wre:y>LW1ds2y2 864q
7Wuh0WVE:=2')hy1>+Xd6#/O_:)2:S%v'%DI:0D q3Z
FhJ34_u)280Si>sr+%7tT+cEcSP#5%R.;v6*59%[g'[
4#m[VC5p# 9x/S*W5E:M$z.)mUV96A3M[;q]6(V#/Oy
38)7<MPv9[(jHvL_$)2W.\s7H q$8G=05pg68<;+cE0
'4;pPh1Q$#<2>:HC*p#v2=Df#x1W;KidgY/t;*Pz.)8
o!:/J#=;e:=2')<j1(+xD6./o_[Uq$8G=05pg68<;2cE0
'4VIch j%7\) :V:#=1W0]$G'W3UV96A3M[;q]6(V./Oy
38s)BMP3+xZt%v4(H%q$m*TQ3rH7P#5%R.;v6*59%$g'[
4#>:%C7x1W+*7S0xm3V9.I66413/)2:S%v'%DI:0Dtq3Z
FhHvu_()280Sip/rs%7tT2cEc;P#5%R.;v6*59%$g'[
4#>:%C*p# 9x/+PWRE:M$I.)mlV96A3M[;q]6(V./Oy
38s)BMJv9[(jHr+_2)2W.*s7H*q$8G=05pg68<;2cE0
'4VIchJQ$#<2>I1C(p#v2]Df#$1W;KidgY/t;*PI.)8
o!:/J#<1w+*7s0XMLv9.i6641p+x3[,t$Oc$3ty*s76
e7)h-1>+XzT%V4(hFQ$M*tq3RS%7'/FM= ..')o]DfL
)Ci>'r)%7\) :v:#=je:m$i.)M3v96a3m[;Q]6(v./oY
38s)BMuv9[(jHr+_[ q$m*TQ3rJ%7'/fm= ..')O]dFl
)Ci>'rH%7\) :v:#=-e:m$i.)MPv96a3m[;Q]6(v./oY
38s)BM+v9[(jHr+_[Uq$m*TQ3r:%7'/fm= ..')O]dFl
)C3>$rV%7\) i*T#X1wfB;786\s7Hhq$8G=05pg8m'9+3z
FhJvJ_$)280S4W$rH%7%kAw[g8641W+x3[,t$Oc[D:\\oY
38))iMHv9[(j<UJ_')239h#+c[g'w5e:y>LW1ds+m6o8)8
o!u/T#<1w+*7+(iM3v9Iud4\s+cEc0P#5%R.;v6\V;o[Fl
)C3>$rs%7\) i*T#H1wfB;786\s7H/q$8G=05pg8m'9+3z
FhJvJ_u)280S4W$r+%7%kAw[g8641M+x3[,t$Oc[D:\\oY
38))iMuv9[(j<UJ_2)239h#+c[g'w-e:y>LW1ds+m6o8)8
o!u/T#=1w+*7+(iMJv9Iud4\s+cEc7P#5%R.;v6\V;o[Fl
)C3>$r:%7\) i*T#>1wfB;786\s7H1q$8G=05pg8m'9+3z
FhHv3_[Uq$#<2ps cpP#=<F8Z../o_[Uq$8G=05pg8m'923z
FhHv3_[%q$#<2ps c7P#=<F8Z../o_[%q$8G=05pg8m'923z
FhHv3_[ q$#<2ps c5P#=<F8Z../o_[ q$8G=05pg8m'923z
FhHv3_[1q$#<2ps cSP#=<F8Z../o_[1q$8G=05pg8m'923z
FhHv3_()280S4E[rs%7%kAw[g6641#+x3[,t$Oc[D:\*oY
38s)JMLv9[(j<YP_i)239h#+c$g'wYe:y>LW1ds+m6o6)8
o!:/)#i1w+*7+*=MHv9Iud4\s2cEc(P#5%R.;v6\V;o$Fl
)Ci>ury%7\) ihH#i1wfB;786*s7Hjq$8G=05pg8m'923z
FhHv3_i)280S4E[rV%7%kAw[g6641p+x3[,t$Oc[D:\*oY
38s)JMiv9[(j<YP_()239h#+c$g'wve:y>LW1ds+m6o6)8
o!:/)#J1w+*7+*=MP(+xL//C Q]dF#J1w;kIDGy/ 0yMi'[
4#>:uC5p# 9xVv7W3pV9iUD4\S2CeC5p#5%r.;V6\v;O$fL
)Ci>urH%7\) ihH#=-e:R0>h#/TQ3rH%7'/fm= .#t5U]E0
'4VImh1Q$#<2PS C7j1WFb;786*S7h1Q$8g=05PG8M'923Z
Fhm0/Q%6Pp7\) 21J$#<2M2j2W.\s'9.i86[sO*I2W.\s[9.i860sO*I2W.\s%6
:d6#//q%2l$M* q%Xd6#/;q%2l$M* q*Xd6#/)q%2l$M* q*02w.\S9bD T,8
_0][g'wYe:m$Z.)MJv9.i8641)+xD6#/o_i)2W.\s7H/q$m* Q3r)%7tT+cEc5P8
_0][g'w3e:m$Z.)M+v9.i86pw0]$gG7tT2c=gv0%w0]$gx7tT2c3gv0%w0]$gx98
_0]$gx9/;9RxD6.//:m$i.s/;9RxD6./;:m$i.y/;9RxD6./):m$i.0/;9RxD6./)<6
:d6./)<CP(37Tt2CeC7j1W0]$G'W3UV9.I66413[)2w.*S7h :%7Tt2CeC;p8
_0]$g'wYe:m$i.)MJv9.i6641)+xD6./o_i)2W.*s7H/q$m*TQ3r)%7tT2cEc5P8
_0]$g'w3e:m$i.)M+v9.i66pw25p2hm0s0->gv89s%_du[/<9'X8al
)CV[kdi:0d+:=2')XUw+*7sp<# 9X/:p7\) :1H$#<2>'h280SiM/xZt%v3C9[(jH;iY
8[(jHv3:=2')H3w+*7sp># 9X/:97\) :1)$#<2>/%280SiC$xZt%vu#9[(jH;PY
8[(jH;3:=0Ltu;wzXI:$oS=39.i84/$:m$Zh60w0][7.s#V2=8gv7tT+wd;.y<=Y
8.i84/FQ%2L$m* !c>gv0%w0][7.y/;9RxD6#Cs9cp(37tT+wd($m*T!c=2W.*#Q-z
$W.*#QkxD6.CsO9.i64/$Q%2L$m*T!c3gv0%w0]$7.s/;9RxD6.CsOcp(37*kf*CHl
T*kf*CJ$#z=9D1289%)I[xZt%5P(9[(jHri:=2')HY1(+xZt%viEH q$#<2>:hc5P8
_+*7s)>M3v9[(jHvL_:)280Si>sr+%7\) :/V#$1w+*7s)>MJv9[(jHvL_s)0
o#<2>I1CPp# 9x/+PW3E:=2')<J1c+XzT%V4(huQ$#<2>I1C)p# 9x/+PWREy
8[(jHr+_2)280Sip/rT%7\) :v:#>1w+*7s0XM,v9[(jHr+_[1q$#<2>i1c7=1q
$=2')<J13')280sIP/Rhsp#v2]8G'W33V9.I64/O_[%Q$M*t!CeC7=1W0]$7.)mp(+Z
$W.*#Q3re%7tT2wdF#>1w0]$7.)MJv9.i64/o_2)2W.*#Q3r+%7tT2wdF#H1q
$M$IH641m+Xd6.cS7h%Q$M*t!CeC7p#v2]8G'WJE:M$zH641e+Xd6#cS7h*QL
TtT+wdF#$1w0][7.)M4v9.i84/o_:)2W.\#Q3r)%7tT+wdF#B1w0][7.)MPv6
:d6#cS7h1Q$#<2>IH2w.\#q<Xd6#cS9bXd6#cS9bD T,# 9x/S97\) :V)$#<2>IF0
o#<2>IJ2w.*#q-0GV0%W0]$7.-ZW+*7S($#v2]8Ge7\) :*j$#<2>$ 2w.*#q*Z
$W.*#Q*d t,#T<R24S7\kf*CJ$.z=9D1280Si>:xZt%v3#9.i64/)<9.i64/)<cp(3[
a 9x/t(722F'Xz/,<M>9[U30X4:]0lTUVW2bi(,<#t<r24.,TM6K>0
o4TfqM3A..')oC>xL
)CV[kd t,jw+*7s;J# 9X/ep7\) :he$#<2>s*280Si#:xZt%v,C9[(jHYH:=2')>Yq
$M$zH6[W0][7.-#v2=8G[7Tt+WD $M*t!C=2w.*#q-Xd6.cS%9.I64/;y
8ID[62 Oc>':,# 9X/V)7\) i1y$m* !c2u$m*T!c3u$#<2>s1280S4(:xZt%vLM6
:zT%Vlc9.I64/):M$zH6<W+*7S(E#v2]8GT9#to*iUT,/Y%K=M'7*;9r0(3-/Y%K.0
o.D)Fb2l.+g/09$ T,Z)F-Dp[S[!798dX6Tf%CP(36g>y
38Dxs/=6R0>p7\) i%:$#<2p[h280S432xZt%rP>9[(j<3u:=2'0B3w+*7+7e# 9XvH([
a 9xVh07%KaW[G86[WFb;786\S[9iUD4\S+C>239H#+C[GV7%KaW[G86<WFb;786*S'6
:l//c q]D/$,Z*!=DI.S#=<f8z../;:=2'9xVW+*7+s<# 9xVj*7\) I/SL
T\) i/y#X1w+*7+)$MPv9[(j<vH_')280S4>2r)%7\) i/y#H1w+*7+)$M4v6
:zT%RI)hJQ$#<2P:JC(p# 9xVS9WyE:r0>H#/tq3Rhsp#=<f8z../O_[%QL
T%kAw[g66413[)239h#+c$g'w3+v9Iud4\s2cEc;P#=<F8Z../o_s)239h#+c$g'wUeY
8Iud4\s2cEc9P#=<F8Z../o_i)239h#+c$g'wve:R0>h#/TQ3r)%7%kAw[g6641C+z
$39h#+c$g'w3e:R0>h#/TQ3r:%7%kAw[g8641E+xL//C Q=dF#i1wfB;786\s7Hjql
T%kAw[g8641p+xL//C Q=dF#H1wfB;786\s7HUq$,z*!=dZ.)Muv9Iud4\s+cEc7P8
_fB;786\s7H1q$,z*!=dZ.2# 9Xvs77%kAw[g660k:R0>h#/ Q*0280S43uxZt%riE6
:Iw8/fq\>Agr4W2M6GX69/%MXzT%RIc9iUD4\S2C2280s4m$XzT%R439iUD4\S2C2UL
T\) i/e#X1w+*7+)eMPv9[(j<v,_')280S4>(r)%7\) i/e#H1w+*7+)eM4v6
:zT%RI#hJQ$#<2P:FC(p# 9xVS;WyE:=2'0h]1#+XzT%RI#h :%7\) I/E#=3Ey
8[(j<v,_[%q$#<2p:fc7J1w2R-L/0%s6k>;\)#Tf\Iut,0s6k>Dl
TCV[c./[6%yfB;g[N8
o!m3a.sS5f/xZt%r4E9[(j<r,:=2'0ivw+*7+0<# 9Xvy77\) ivs$#<2p21280S4p'z
$80S4pux h9/ Q5x h9/ Q-x h9/ Qkx h9/ Q%x h9/ Q*x h9/TQ5x h9/TQ-z
$v4zs2c>2v4zs2cp2 D/F:X0gx7\) 21y$#<2pi*280S4W$r:%7\) i*T#=1q
$=2'0Iu1c+XzT%RjwhuQ$#<2P$*C)p# 9xVt(WRE:=2'0Iu1)+XzT%Rjwh*QL
T\) i*T#>1w+*7+*=M+v9[(j<YP_[)280S4E[rJ%7\) ihH#J1w+*7+*=Miv6
:zT%Rl3hVQ$#<2PS C9p# 9xVv7WuE:=2'0>31e+XzT%Rl3hFQ$#<2PS C7x1Q
$=2'0>313[)280s4e[Rh5p# 9xVv7W33V9>z8Ympm+XA8#D13')2[#\;_[ QL
TG +%rHpP#/+=pc;P#/+=pc*P#/+=pc(P#/+=pc9P#/+=pc0P#/+=pc)P#/+=pcSP8
_%=[ #B1w%=[ #=1w%=[ #X1w%=$ #=]e:k[ivw3Lv9>Z6yMPW+xa8.d132)0
oS\toh +%7g 2%Rh)p#/+]PC7j1W%=$ #=-E:K[IVW3pV9>z6Ymp(+XA8.D1#+Z
$[#*;_s)2[#*;_$)2[#*;_2)2[#*;_i)2[#*;_:)2[#*;_u)2[#*;_')2[#*;_[)0
oS\toh1Q$#<2P$F280s4eIX'T8kW *6O.-#;!bDI.0# 9xVvP7\) IHY$%ZfqbR:%[
a 9xVv(7cv[C./[6g2;rDA+[
4#>//2<9ZW+*7+*I#O!C8z<7X -/BjPx#=+)1-PIJW+j8za0'K-[X46_Jxc/123.q+H/*:L
T*[!=G(:9QPY
\8Pvy// yI23mGs6%pg[%'=:=2'0<Uw(6
-7<Sgvqr-l//#=0KDp[STW+*7+)h#+y
\8Pvy/=6R0>$,t/Q\p .,<y:=2'0BYw(6
-7<Sgvq%i#$,T/q\>Aw7\) I1Y$x8
y!\>aW6*59%xLWs/y%k.280SiW$x:l
+Cy%k.gv89wfm>g<sGV:=2'S$5w(6
-7V89S6b0280sh('XlwS/d+%D :+#+y
\8L<,z*Q\0u$#<2)//23mGsz=pg309w(6
-7[%'=q\0U$#<2)/J23MgSZ=PG[%'=:/Z
Ph+G/'0Eg3+%kA9ID[69/%54F$#<2puv2p[
9#2Y2 .+ZK:=2'9=JWFM>Ga#DS2Y2 $x8
y!\>aGR4sORO23mGs6k>;\)# 9X/V)7jq
6W-A[1$Oq]6(V7%v%C-A[1$O:=2')<VW(6
BM8.'v 6
.ends iob_outbuf_cz_sim_orig
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_tlvsht2_25
** View name: schematic
************************************
.subckt iob_tlvsht2_25 A V Y1 Y1_vdd Y2 por_b
.prot FREELIB
7=X#769;o9=2<9ZW6b028\TK:da:ZbyWF)1-PI#!o)12\9q+y
3$2E=/yO%x;$+d;:\p $.KV<9C*p!rH:RA:zXUwr%A:$Rz((6
eIs7PU:].3.-#Y:\XI>MZ203%+$Uq+HI%23_Jxc:XMV_JWRba:L
)*u:<%2E=#y:\xi>mz203%+$uQ+hixLY=#!O)12\9Q+Y
3$H$23w8'xP$+#TUm0'W)-4:DA:z<#=-[xmv_jwrBA:l
)\3:\0u$2-w8[xP/9# Um0'W)-4:DA:z<-wf)1-5H#!O)12\9Q+Y
3[J$2-w8[dPvy#y<BxP/9# Um0'W)-4:DA)$,Q+h'/28)Qu:0p*==#!<) 0
'#3W8[X;$+ZK:\0U$#kv<x.f5<#M-UXlyx+U>9[fyb#!o)\h$rZ(36
BM8.'v 6
.ends iob_tlvsht2_25
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_cfgmux
** View name: schematic
************************************
.subckt iob_cfgmux in0 in1 out sel sel_b
.prot FREELIB
7W t(7c 390(37Z)FC32wrsW7WD'a1s):d[*P!-+(9izyx++w/Xz 4\d9Y0*7[
aM2)1-5xJWF]a:Zxu+:]_78O<5<) 0
'43j)98zP7Z)FC32/0%W0072'4/2Z57($U\((E%:P7% -/B:(x# TW[!T8Z(36
:46_Jxc/123.q+H/*:$.:#+n23/_3Q
H0[I:MsQ
.ends iob_cfgmux
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_cfg_spd
** View name: schematic
************************************
.subckt iob_cfg_spd pslew1 pslew2 nslew1 nslew2 cbnet<15> cbnet<14>
+cbnet<13> cbnet<12> cbnet<11> cbnet<10> cbnet<9> cbnet<8> cbnet<7>
+cbnet<6> cbnet<5> cbnet<4> cbnet<3> cbnet<2> cbnet<1> cbnet<0>
+cfg_spd extest fst_cfg_b vccaux init_vccaux_lvlsh_b nslew3 pslew3
+nslew0 pslew0 gtl0 gtl1 pslew4 nslew4 pslew5 nslew5 gtl2
+pslew_lowvcc force_ttl_io
.prot FREELIB
7WuE57\) :Vt$+g/'0e269%)i:XzT%-4m9[(JbRp:W[7J69/%54f.,9=<fD/L
TCV[c7L<9h2Cc%+l
)C3#uxZt%v4#9-a[1$o:=2'5<Yw+*7J0e# <R24)7C !XdP[s[!7cIP39hs[6
:7w-/2F\0>Jb/UP6
e7)x-W+*7S9<#Y%K=M'7*KF*c+$#<2c2V280sU)UX784sS6K>;\)/=6r0>.-8
_!m3gj,9kAX%g5<8
o!uhy$#<2>$f2<sG$r3xZt%-J39[(jBUu:=0Ltujw!=8'.+G/'0Eg3+%kAc30
o4Tfqxip//sUq'V0
'4;l#9[(Jh53:\>Agr4W+*7j(I# 9x%t*722F[X784sS6K>;\)/=6r0>.-8
_!m3gj,9kAX%g5<8
o!uhV$#<2>2 2<sG$r3xZt%-LM9[(jBYi:N7Lp7C !XdP[s[!7cIP39hs[6
:7w-/2F\0>Jb/UP6
e7s>uW+*7S(=#Y%K=M'7*KF*c:$#<2c(1280sUeSX784sS6K>;\)/=6r0>.-8
_!m3gj,9kAX%g5<8
o!uhJ$#<2p/ 2<sG$r3xZt%-,p9[(jB]H:=0Ltu-w!=8'.+G/'0Eg3+%kAc30
o4Tfqxip//sUq'V0
'4;lP9[(Jhy,:\>Agr4W2bi(,=# 9xu:57\) U1:$4\# C-A[1$Oqr-l///fy
88Dx6S=6B;'56-4Y
38)*H# 9Xv:S79/%54F$#<2C:*280Su>sxZ/,<m398Zh%/y%k=m'6%yfB;gx[
a#0-D'3+Z* 'Dj0[
4#mSu280sI#UXp[S[!79$U30XU:=2'sxyW+*7)P$##+W7G<Sg$R3Dl<,Z*q-Z
$hm0s R-ud%-sCiz
FhHj3:=2')$Uw6k>;\)# 9XUH57\) u )$#z=9Dv2h#C2Q\>aGR4sf\Iud60q
$W./.%%Y<f7j.bRQ
7Wuv77\) :JE$+g/'0e269%)iUXzT%;U(9[(Jj3l:W[7J69/%54f.,9=<fD/L
TCV[c7L<9h2Cc%+l
)Ci3'xZt%v,W9-a[1$o:=2'SBvw+*7)5<#D R%2h#C2Q\>aGR4sf\Iud60q
$W./.%%Y<f7j.bRQ
7WuvP7\) :FE$+g/'0e280s3m[XzT%;3c9[U30X3:W[7J69/%54f.,9=<fD/L
TCV[c7L<9h2Cc%+l
)Ci3sxZt%r+#9-a[1$o:]0Ltu/=0D-a[7\) uUT$#<2Muv2h#C2Q\>aGR4sf\Iud60q
$W./.%%Y<f7j.bRQ
7WuE)7gf+*7C;p#/TnDU6Y# 9xuS77Z)F90(360W!M3G[d29R3Z
FhJ]4:k3Zt%MLv9>\A6zTO9[(jJvH:B2L$9<=Q-x7W-//tNMm'[
4#mI 2[-\) h S%79K<9[(JjRp:b2l$9<=q-X7w-//TnmM'[
4#mI%2[-\) h )%79K<9[(JjRh:b2l$9<=q-X7w-//TnmM'[
4#>//2[-\) h h%7g[ZC0IV7\) UJh$9<=:b2l.-##0-DA Ok!76
e7)xRW%-[(JW3+V9>\a6Zto9[(Jj5h:b2l$9<=q-X7w-//TnmM'[
4#m2H2[-\) h1Q$S:dqb$ $#<2m$ 2/0%W<*iGX7cv[C>\a\$Oy
38)(J#/[=2'#=1w%JGg/.dw+*7)($#k9Rxut,/F:w./.s:DU0E0
'4;I(9>/80s1w+XA O/K2%XzT%;l390(37Z)FC32HM0S%jgO\)8
o!:h)$s0 9Xrs%7G[zc0iv7\) uhy$9<=:B2L.-##0-da oK!76
e77IRW%-[(JW5E:K_!.9*;:=2'sE;W<*i2/0%S[98dX6g[ZO4fL
)Cu#sxax#<2_')2[D2s<]p280S3#2xut,#k9Rd/$4tFQk_!>R4q
7W/hs7gf+*7C7<1W6b0280sI([XUT,#K9rD/$4TfqK_!>r4Q
7W v57gf+*7C0p#/TnDU6Y# 9x/:97Z)F90(360W!M3G[d29R3Z
Fh=Y4:k3Zt%M3v9>\A6zTO9[(jH3P:B2L$9<=Q-x7W-//tNMm'[
4#>[F2[-\) h j%7g[ZC0IV7\) : Y$9<=:b2l.-##0-DA Ok!76
e7sIuW+*7+7b#K9rD/$)cS!=-2,#q+H21:$,\((E1tP7\[!=g(:9qp:d$*7!-+(6
:l6_Jx($126dc Z*6Uy=8
o!:1:$#<2M:j280Sip$xFh6C 69CZYX+i(/xL8_jX($128DC z*6uY=#m2)1-*Xjq
$r$*P!Jj(9$\H#2);bahL
)Ci([xZt%;i39[(jHr,:38gh#9wI=A:zHj+:R[*p!jJ(9[\h#2);BAH$u*((eh:p[
a=2)1-PIJW2j8za0'K-[Z
FhJr,:=2'S<5w+*7s9=#o!c8Z<7x -/bspX#=+)1-pijw+J8ZA0'k-[x46_jXE/10
o,*((E1tP7*[!=g(:9qpy
38)9X# 9XU+77\) :j)$)Cs!=-2,#Q+h:1:$,\((e1Tp7\[!=G(:9QP:D$*p!Y+(6
:l6_Jx($126dc Z*6Uy=8
o!: :$#<2M2j280Si)ixFh6C 69CZYX+i(/xL8_jX($128DC z*6uY=#m2)1-*Xjq
$r$*P!Jj(9$\H#2);bahL
)Ci3[xZt%;H39[(jH5J:38gh#9wI=A:zHj+:R[*p!jJ(9[\h#2);BAH$u*((eh:p[
a=2)1-PIJW2j8za0'K-[Z
FhJUi:=2'Se;w+*7s9e#o!c8Z<7x -/bspX#=+)1-pijw+J8ZA0'k-[x46_jXE/10
o,*((E1tP7*[!=g(:9qpy
38)9$# 9XUT77\) :*H$)Cs!=-2,#Q+h:1:$,\((e1Tp7\[!=G(:9QP:D$*p!Y+(6
:l6_Jx($126dc Z*6Uy=8
o!'h:$#<2>$/280SiWuxFh6C 69CZYX+u(/xL8_jX($128DC z*6uY=#m2)1-5Xjq
$r$*P!uU(9$\H#2);bahL
)CuE[xZt%vJM9[(jHri:38gh#9wI=A:zBj+:R[*p!Uu(9[\h#2);BAH$u*((e%:p[
a=2)1-PIJW2j8za0'K-[Z
Fh=UL:=2'0=rw+*7s(i#o!c8Z<7x -/bJpX#=+)1-pijw+J8ZA0'k-[x46_jXC/10
o,*((E1tP7*[!=g(:9qpy
38)9i# 9XUT97\) :*e$)Cs!=-2,#Q+h:1:$,\((e1Tp7\[!=G(:9QP:D$*p!Y+(6
:l6_Jx($126dc Z*6Uy=8
o!'js$#<2>$*280SiE[xFh6C 69CZYX+u(/xL8_jX($128DC z*6uY=#m2)1-5Xjq
$r$*P!uU(9$\H#2);bahL
)Cu)ixZt%vL39[(jHUi:38gh#9wI=A:zBj+:R[*p!Uu(9[\h#2);BAH$u*((e%:p[
a=2)1-PIJW2j8za0'K-[Z
FhBY,:\p $#<2>sv2'4/#+\x48_jXC/123#Q+h/*:$#:#+N23/_3wI]A:zBj+Y
8IiYX+JC/xi 4\D9y0*7[
4#m(12[d2S<]P280sIe$XfH6c 69czyx+l>/Xl8_Jx($128dc Z*6Uy=#M2) -9EJQ
$r$*P!Jj(9$\H#2);bahL
)C3)(xZt%;,)9[(jHY,:38gh#9wI=A:zHj+:R[*p!jJ(9[\h#2);BAH$u*((eh:p[
a=2)1-PIJW2j8za0'K-[Z
FhB]+:=2')>rw+*7s;=#o!c8Z<7x -/bJpX#=+)1-(Bjw+J8ZA0'k-[x46_jXC/10
o,*((E1tP7*[!=g(:9qpy
38)(=# 9XUV97\) :f)$)Cs!=-2,#Q+h:1:$,\((e1Tp7\[!=G(:9QP:D$*p!Y+(6
:l6_Jx($126dc Z*6Uy=8
o!u*y$9<=Q-xut,#o!c8Z<7x -/bypX#=+)1-pijw+J8ZA0'k-[x46_3XC/123.Q+h/*:l
T*[!=G(:9QPY
38s7i# 9X/:77\) :fT$)Cs!=-2,#Q+h:1:$,\((e1Tp7\[!=G(:9QP:D$*p!Y+(6
:l6_Jx($126dc Z*6Uy=8
o!u*+$#<2Ms 280Si#(xFh6C 69CZYX+i(/xL8_jX($128DC z*6uY=#m2)1-*Xjq
$r$*P!Jj(9$\H#2);bahL
)C3W'xZt%v+)9[(j<jP:38gh#9wI=A:zHj+:R[*p!jJ(9[\h#2);BAH$u*((eh:p[
a=2)1-PIJW2j8za0'K-[Z
FhJU+:=2')=3w+*7+pJ#o!c8Z<7x -/bspX#=+)1-pijw+J8ZA0'k-[x46_jXE/10
o,*((E1tP7*[!=g(:9qpy
38s5<#[0y>(.%S=Qw.280S4(ixFh6C 69CZYX+u(/xL8_jX($128DC z*6uY=8
_I]A:zBj+:R$*p!jJ(9$\h#2);BAHl
)Cu)sx('%<k 9[(j<jJ:38gh#9wI=A:zBj+:R[*p!jJ(9[\h#2);BAH$u*((e%:p[
a=2)1-PIJW2j8za0'K-[Z
FhH-u:=2')=5w+*7+pe#o!c8Z<7x -/bspX#=+)1-pijw+J8ZA0'k-[x46_jXE/10
o,*((E1tP7*[!=g(:9qpy
38J9B# 9XvH*7\) i +$#<2p[%2'4/ '=pJ$u\((e%:p7% -/b:(X# tw[!t8z(36
:46_Jxc/123.q+H/*:$.:#+n23/_3Q
7W t;7\) I1t$#<2P' 280s43IXfH6\$+%%2,#q+H'1:$,\((E1tP7\[!=g(:9qpy
8CiYX+u(/xL6_jX($126DC z*6uY=8
o!'j)$+d;:=2')<vw+*7+7>#o!c[;8y-wI=A:zBj+:R[*p!jJ(9[\h#2);BAHl
TxT-/bJpX#=2)1-pijw2J8ZA0'k-[z
FhH-3:=2'0XrwtB7g[D2s[9[(j<-P:38g81\;C9CZYX+u(/xL8_jX($128DC z*6uY=8
_I]A:zBj+:R$*p!jJ(9$\h#2);BAHl
!$ 2y.'l
.ends iob_cfg_spd
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_tlvsht2_33
** View name: schematic
************************************
.subckt iob_tlvsht2_33 A V Y1 Y1_vdd Y2 por_b
.prot FREELIB
7=X#769;o9=2<9ZW6b028\TK:da:ZbyWF)1-PI#!o)12\9q+y
3$2E=/yO%x;$+d;:\p $.KV<9C*p!rH:RA:zXUwr%A:$Rz((6
eIs7PU:].3.-#Y:\XI>MZ203u)$Uq+HI%23_JxcSXMV_JWRba:L
)*u:<%2E=#y:\xi>mz203U)$uQ+h2xLY=#!O)12\9Q+Y
3$H$23w8'xP$+#TUm0'W);3:DA:z$#=-[xmv_jwrBA:l
)\3:\0u$2-w8[xP/9# Um0'W);3:DAH$,Q+h:xmv_jwrBA:l
)\u:<%2E=/yO%xP/9#y<BxZ>mz203U)$uQ4h(h23_jX>9[FYB#!O)\H$Rz(36
ez77Pp:5Xp/9#Y<bXz>MZ203u)$Uq4H(H23_Jx>9[fyb#!o)\h$rZ(36
BM8.'v 6
.ends iob_tlvsht2_33
** End of subcircuit definition.
************************************
** Library name: rnr_iob
** Cell name: iob_cfg_iostd_cz
** View name: schematic
************************************
.subckt iob_cfg_iostd_cz disa_n disa_p disb_n disb_p disc_n disc_p disd_n
+disd_p dise_n disy_n lvds<0> cbnet<18> cbnet<17> cbnet<16>
+cbnet<15> cbnet<14> cbnet<13> cbnet<12> cbnet<11> cbnet<10>
+cbnet<9> cbnet<8> cbnet<7> cbnet<6> cbnet<5> cbnet<4> cbnet<3>
+cbnet<2> cbnet<1> cbnet<0> fttlo cntlz_b<2> cntlz_b<1> cntlz_b<0>
+refio dise_p fst_cfg_b force_ttl_io vccaux init_vccaux_lvlsh_b
+plvlsel_vccaux plvlselb_vcco vcco por_b_vcco pdelsel_vccaux
+pdelselb_vccaux pdelsel_vcco pdelselb_vcco
.prot FREELIB
7WVt)7\) ' Y$.D)Fb2l.+g/09-A[M#Y<bXfH6s#+\D)s)4O:d[*7!R+(9izyx+I(/Z
$8DC z*6uY=#m2) -0Xjwf]A:zBY+:]_78o<5<)%0
'4R4c9[(JbV3:=2'5xVW6K>d$+ZK:38GJ4\YqUuf')#M+) 23#q+H:1:$#:#+n23/_3Q
$d$*77%t-/Bj*x#tTW[!T8Z(36
e70<3W+*7jPh#tF\iUT,0S6K>d$+g/09-U/74#qx8z<6;373e2,#qpHI1:$,\((E/:P[
a TW[!T8Z(39cIy=+4(/Xl6_JxcS126dc Z*6Uyb8
o!i*H$#<2Ci1280Su3'xP[stw6B02'4/2!=-gSJ4o79CZY=#=+)1-)Xjw+J8ZA0'k-[z
$,.QP:R$*p!-L(9$\h#2);BAHl
)C4WuxZt%-i#9[(jB3H:\>aW79k<9E7.%C 6cU)')4wI=AH$,\((e/:p7\[!=G(:9QPY
8CiY=#=2)1-5>jw2J8ZA0'k-[z
Fh<Uu:=2'5=-w2%2L/0%FQ\>aW79/%mxP/9#o!c778+/3M3EF$u\(3ev:p7% -/bspX8
_+J8ZA0'k-[x46_3Xp/123.Q+h'h:$.:#+N23/_-q
7WVS;7\) 'u:$+g/'0e26,9=<*iG<Sg$R3XfH6s#+\X48_3xP/123#q+H'/:L
T\[!=G(:9QP:D$*7!r+(9IiYX+u>/xi 4\D9y0*5[
4#P2F280sU)[Xp[S[!79[(Jb-j:38GJ4\Y:d[*P!R+(9izyx+U>/Xz 4\d9Y0*77Xt-[Z
$3.Q+h'/:$.:#+N23/_3q
7WV+P7\) 'VY$+g/'0e280sUm/XfH6s#+\X48_JxP/123#q+H'/:$#:#+n23/_3Wi]ahL
T%T-/bJ)X#Ttw[!t8z(36
e70$yW+*7jsE#Y%K=M'7*;9r0(3-/Y%K=M'74#qx8z<7X -[B+Px#=+)1-5hJQ
$=_78O<5<) 2,.qpHI1:$,*((E%SP7*[!=g(:9qUy
38+(X# 9X%J(79/%54F$.d)fB2L.+G/'0E2'4/2!=-2,#QPhi1:$,\((e%sp[
a TW[!T8Z(39cIy=+4(/Xl6_Jxc:126dc Z*6Uyb8
o!ijT$#<2C2%2<sG$r3xZt%-3#9E7.%C 69CZYX+4(/xL8_jXC:128DC z*6uY=#m2) 0
o,*((E%SP7*[!=g(:9qpy
38+SH# 9X/:979/%mxZt%-i>9[(jBv4:=2'5H;w2m6gx69/%mx7W-/2f\0>jB/3M6
e70j]W+*7SPh#Y%K.280sUP/XzT%-439[(JbV,:].3.-/Y%K.2HM0S r-UD%-SmUZ
Fh<;3:=2')X5w6k>;\)# 9X%+97\) ujH$#<2Civ2h#C2Q\>aGR4sf\Iud60q
$W./.%%Y<f7j.bRQ
7WVSP7\) :1S$+g/'0e280sU)'XzT%-hm9[(Jb5p:W[7J69/%54f.,9=<fD/L
TCV[c7L<9h2Cc%+l
)Ci#'xPvy#/[=2'#J1w+*7J9i#k9Rxut,/F:w./.s:DU0E0
'4Vhe9-U/7gf+*7C7<1W+*7j(b#K9rXUT,/f:W./.S:du0e0
'4V439-U/7gf+*7C7j1W+*7j(I#K9rXUT,/f:W./.S:du0e0
'4;3)9-U/7gf+*7C7=1W+*7j*b#K9rXUT,/f:W./.S:du0e0
'4V4c9-U/7gf+*7C7h1W+*7j*I#K9rXUT,/f:W./.S:du0e0
'4;,(9-U/7gf+*7C0p# 9x%E57Z)F90(360W!M3G[d29R3Z
FhJ;,:\0u$s0 9XrHpP# 9X%e(7z)f90(360w!m3g[D29r3z
FhJvu:\p $s0 9Xre%7\) u1J$9<=:B2L.-##0-da oK!76
e7)I-W6%P2[-\) h Y%7\) U1t$9<=:b2l.-##0-DA Ok!76
e7s<3W6%P2[-\) hJQ$#<2m[%2/0%W<*iGX7cv[C>\a\$Oy
38))H#y<Bxax#<2_s)280S33$xut,#k9Rd/$4tFQk_!>R4q
7WuS(79K<9>/80s1w+XzT%;Uc90(37Z)FC32HM0S%jgO\)8
o!uvV$+d;:k3Zt%M+v9[(jJ-J:B2L$9<=Q-x7W-//tNMm'[
4#3$V2<9ZW%-[(JW3UV9[(Jj;I:b2l$9<=q-X7w-//TnmM'[
4#mS/2<YDW%-[(JW-E:=2'sjuW<*i2/0%S[98dX6g[ZO4fL
)C3#sxPvy#/[=2'#H1w+*7))B#k9Rxut,/F:w./.s:DU0E0
'4;hw9-U/79K<9[(JjVj:b2l$9<=q-X7w-//TnmM'[
4#P: 2<9ZW%-[(JW3lV9[(JjRU:b2l$9<=q-X7w-//TnmM'[
4#P'F2<9ZW%-[(JW3jV9[(JjRj:b2l$9<=q-X7w-//TnmM'[
4#P'*2 M'/9C7'36cv:=2's$yW7WD78+#M+)1-5xJWF=a:Zxu+:=_78O<5<) 0
oU*((E%:P7%t-/B:(x#tTW[!T8Z(36
e70xRW+*7j9I#;!b2G674#qW[p$U\((E/:P7% -/B:(x# TW[!T8Z(39cIyx+l(/Z
$3.Q+h/*:$.:#+N23/_3q
7WVjP7\) U1t$8<[!MXfH6c 69czyx+I(/Xl8_Jx($128dc Z*6Uy=#M2)1-*xJQ
$r$*P!Jj(9$\H#2);bahL
)C43'xZt%;uW9IPv9M+v9E7.4\y:D[*p!v+(9IZYX++W/xZ 4\D9y0*77xT-/bVpX8
_f]A:zXU+:]_78o<5<) 0
'4V,w9[(JbyU:%8Ug6*W7WD78+#M+)1-)xJWF=a:Zxu+:=_78O<5<) 2,.q+HS1:L
T%T-/b:(X#Ttw[!t8z(36
e7)E]W+*7)Pb#;!b3G674#qW[p$U\((E/:P7% -/B:(x# TW[!T8Z(39cIyx+l(/Z
$3.Q+h/*:$.:#+N23/_3q
7WV:P7\) U t$YcK[C[2'4/#+\X48_Jx>/123#q+H/*:$#:#+n23/_3Wi]a:Z>J+y
8IiYX++W/xi 4\D9y0*7[
4#P/u280sU#'X H9DS29e7.4\Y:d[*P!V+(9izyx++w/Xz 4\d9Y0*77Xt-/BvPx8
_f]A:zXU+:]_78o<5<) 0
'4R+39[(Jj-U:%8U[6*W7WD78+#M+)1-)xJWF=a:Zxu+:=_78O<5<) 2,.q+HS1:L
T%T-/b:(X#Ttw[!t8z(36
e70xVW+*7))b#;!bPG874#qW[p$U\((E/:P7% -/B:(x# TW[!T8Z(39cIyx+l(/Z
$3.Q+h/*:$.:#+N23/_3q
7WV:57\) U j$YcK%C[2'4/#+\X48_Jx>/123#q+H/*:$#:#+n23/_3Wi]a:Z>J+y
8IiYX++W/xi 4\D9y0*7[
4#P[H280sUw'XA8%%>q-Rj%74#qW[p$U\((E/:P7% -/B:(x# TW[!T8Z(39cIyx+l(/Z
$3.Q+h/*:$.:#+N23/_3q
7W vP7Z)FC32/0%W7WD78+#M+)1-9xJWF=a:Zxu+:=_78O<5<) 2,.qpH'1:$,*((E1tP[
atTW[!T8Z(36
e77IyW+*7S7$#K9rD/$)cS!=-2,#q+H21:$,\((E1tP7\[!=g(:9qp:d$*7!-+(6
:l6_Jx($126dc Z*6Uy=8
o![/J$#<2Mu/2v4z:Q=xFh6C 69CZYX+i(/xL8_jX($128DC z*6uY=#m2)1-*Xjq
$r$*P!Jj(9$\H#2);bahL
)C4(2xZt%;3W9p7/0/ :38gh#9wI=A:zHj+:R[*p!jJ(9[\h#2);BAH$u*((eh:p[
a=2)1-PIJW2j8za0'K-[Z
Fh<3i:=2'SHUw+*7spX#o!c8Z<7x -/bspX#=+)1-pijw+J8ZA0'k-[x46_jXE/10
o,*((E1tP7*[!=g(:9qpy
38s;># 9X%e(7d#<5dZ$)Cs!=-2,#Q+h:1:$,\((e1Tp7\[!=G(:9QP:D$*p!Y+(6
:l6_Jx($126dc Z*6Uy=8
o!i/V$#<2Mi%280Si(:xFh6C 69CZYX+i(/xL8_jX($128DC z*6uY=#m2)1-*Xjq
$r$*P!Jj(9$\H#2);bahL
)C4M'xZt%;4W9[(jHjH:38gh#9wI=A:zHj+:R[*p!jJ(9[\h#2);BAH$u*((eh:p[
a=2)1-PIJW2j8za0'K-[Z
Fh<3H:=2'5>Uw%=7L+6013+xFh6C 69CZYX+i(/xL8_jX($128DC z*6uY=#m2)1-*Xjq
$r$*P!Jj(9$\H#2);bahL
)C43ixZt%-JW9>Zj,bs[H1q$)Cs!=-2,#Q+h:1:$,\((e1Tp7\[!=G(:9QP:D$*p!Y+(6
:l6_Jx($126dc Z*6Uy=8
o!i%+$#<2M2h2 9Ss%JGgx7\) : )$)Cs+5[ 57x -/bJpX#=+)1-pijw+J8ZA0'k-[z
$,.Q+h'1:$,*((e1Tp7*[!=G(:9QPY
38H(e#[ XID$#<2>[U280Si32xFh6\$+%%2,#Q+h'1:$,\((e1Tp7\[!=G(:9QPY
8CiYX+u(/xL6_jX($126DC z*6uY=8
Xr=$3W%8
.ends iob_cfg_iostd_cz
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_outblk_cz_sim_inp
** View name: schematic
************************************
.subckt iob_outblk_cz_sim_inp lvds<0> pad refio cbnet<35> cbnet<34>
+cbnet<33> cbnet<32> cbnet<31> cbnet<30> cbnet<29> cbnet<28>
+cbnet<27> cbnet<26> cbnet<25> cbnet<24> cbnet<23> cbnet<22>
+cbnet<21> cbnet<20> cbnet<19> cbnet<18> cbnet<17> cbnet<16>
+cbnet<15> cbnet<14> cbnet<13> cbnet<12> cbnet<11> cbnet<10>
+cbnet<9> cbnet<8> cbnet<7> cbnet<6> cbnet<5> cbnet<4> cbnet<3>
+cbnet<2> cbnet<1> cbnet<0> cfg_spd extest ff_b fst_cfg_b fttlo
+por_b_vcco ts_b vccaux_loc vcco_loc por_b_vccaux tsb_s<0> pte_rcfg
+cnnd<13> cnnd<12> cnnd<11> cnnd<10> cnnd<9> cnnd<8> cnnd<7>
+cnnd<6> cnnd<5> cnnd<4> cnnd<3> cnnd<2> cnnd<1> cnnd<0> cnpd<19>
+cnpd<18> cnpd<17> cnpd<16> cnpd<15> cnpd<14> cnpd<13> cnpd<12>
+cnpd<11> cnpd<10> cnpd<9> cnpd<8> cnpd<7> cnpd<6> cnpd<5> cnpd<4>
+cnpd<3> cnpd<2> cnpd<1> cnpd<0>
.prot FREELIB
7KkO\)JW+*7S(WJE:=2')ImpV9[(Jhu1c+XA8%%>q-Rj%7g  rkGXW3E:K['3n/f_/)0
o#<2P/XzT%V,:W./.S\2F_DO\)/Ky
38D\%0!tc>Xp7G +%rHSP#/+=pc7B1w%=[ #=3e:k[Zvw3+v9>Z8yM,v9>Z8yMLv6
:A8#D1w+XA8#D1)+XA8#D1P+XA8#D1>+XA8#D1m+XA8#D1c+XA8#D13+XA8#D1(+Z
$[#*;_[fq$s\TOH V%7G 2%rH(P#/+]pc7$1w%=$ #=re:k[ivw3iv9>Z6yMPM+z
$[#*;_[%q$s\TOH H%7G 2%rHpP#/+]pc;P#/+]pc*P#/+]pc(P#/+]pc9P#/+]pc0P8
_%=$ #H1w%=$ #J1w%=$ #B1w%=$ #=1w%=$ #X1wOw0;.##;!B3g87d#<kdZl
Td#<%dZ$yCk9c[2v4z:Q=x h9[s29p7/-/T:%8u[6*wOw0 ..#;!B2g67:[Q-x!j,jq
$n7l7722F'Xp/9#Y<bXp/9#Y<bXp[S[!7Cid[79/%MDlwS#Yo%XpVY# <r24P7\KF*chL
T\kf*CJ$#z=9DU289%)I:xZ/,<mp9$;v7*;9R0(369/%54F$.d)fB2L.+G/06
:IV0%K9r3G<Sg$R3XIV0%K9r3G<Sgv:]ip39<=q\>Agr4W2r-l/0%fq\>Aw[
at0YD/.+g/'0e26M'S[C-A[M#t<r24P7*KF*ch$.Z=9d%269%)iUXI/,<M>9$U30X4y
8$u30xsfmCP[s# 9Xv:$#<2>(x'/60w B3g/wje:w./.m$2[0_g[N/k!odD:42q
7K_!.9*;(9$U30Xp:]0lTU-W+bi(,=# <r2457gf+*7C7<1W%-[(JW3IV9>/80s13U)0
oS0 9xRh5p#/[=2'#=3E:K3zT%mp(+XAX#<2_()2[-\) hHQ$S0 9xRt%7gf+*7C9p8
_%-[(jwre:k3Zt%Miv9>/80S1M+xax#<2_')2[-\) H q$s0 9Xr:%7G[zc0iv[
a)7x2UJ7:K C>\a60W6K>;\)/=0KXIw8/fq\>Agr4W+bi(,j#t<r24s7\KF*c:L
T*kf*C:$oS=(9G'3=#T<R24)7\kf*Cs$.z=9Dv289%)Iix!j,-w2BI(,6%VI\>al
T*29c6a o##0-da o/k2%z
F[D2s!m0'vX#;!B=g87d#<5di$yCk[c[2v4zFQ]x h9Gs+9p7/s/T:%8uv6\wOw0 ..8
_Ow0(.##;!BOg87%yOBr:%7GF+*7cSH1w%-[(jw;3v9>/80S1M')2[-\) HUH%[
a/[=2'#jJE:K3zT%mU#+XAX#<2_'HQ$S0 9xRj(p#/[=2'#b5E:K3zT%mUP+Z
$[-\) H%s%7GF+*7c5J1w%-[(jw-uv9>/80S1C[)2[-\) H%:%7GF+*7c7e1q
$K3zT%mpe+XAX#<2_[*Q$S0 9xRh9p#[ xid$S\2F_D/#b1W%=7l+6013+Z
$[#S=jc3cpP#59J8D$yCk9c$2 9Ss%JGgx7*29c6a o#y%k=m'6%V%9$D:60s6k>;\)8
_2R-L/0%s6k>;\)#Tf\Iut,0s6k>D$+G/0cID[7*V;c3g<sGV:]p(39<=Q\>aGR4q
$]P(39<=[C-A[1$O:]P(39<=q\>Aw7*;9r0(3-/Y%K.2HM0S%jgGHMZ2oC>xL
!$ 2y.'l
.ends iob_outblk_cz_sim_inp
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: iob_outlogic_sim_inp
** View name: schematic
************************************
.subckt iob_outlogic_sim_inp cbnet<38> cbnet<37> cbnet<36> cbnet<35>
+cbnet<34> cbnet<33> cbnet<32> cbnet<31> cbnet<30> cbnet<29>
+cbnet<28> cbnet<27> cbnet<26> cbnet<25> cbnet<24> cbnet<23>
+cbnet<22> cbnet<21> cbnet<20> cbnet<19> cbnet<18> cbnet<17>
+cbnet<16> cbnet<15> cbnet<14> cbnet<13> cbnet<12> cbnet<11>
+cbnet<10> cbnet<9> cbnet<8> cbnet<7> cbnet<6> cbnet<5> cbnet<4>
+cbnet<3> cbnet<2> cbnet<1> cbnet<0> o_b por_b_vccaux por_b_vcco
+tstateb vccaux vcco io tsb_s<0> cnnd<13> cnnd<12> cnnd<11>
+cnnd<10> cnnd<9> cnnd<8> cnnd<7> cnnd<6> cnnd<5> cnnd<4> cnnd<3>
+cnnd<2> cnnd<1> cnnd<0> cnpd<19> cnpd<18> cnpd<17> cnpd<16>
+cnpd<15> cnpd<14> cnpd<13> cnpd<12> cnpd<11> cnpd<10> cnpd<9>
+cnpd<8> cnpd<7> cnpd<6> cnpd<5> cnpd<4> cnpd<3> cnpd<2> cnpd<1>
+cnpd<0>
.prot FREELIB
7W.MJ-%\(9[(JhVW!MXzT%V4:K3zT%m3P+XAX#<2_U/Q$S0 9xR)sp#/[=2'#j-Ey
8>/80S1M[)2[-\) HU:%7GF+*7c5e1w%-[(jw-Lv9>/80S1C$)2[-\) H%y%[
a/[=2'#bRE:K3zT%mU>+XAX#<2_'uQ$S0 9xRj5p#/[=2'#b3E:K3zT%mU(+Z
$[-\) H e%7GF+*7c7>1w%-[(jw3Jv9>/80S132)2[-\) H +%7GF+*7c7H1q
$K3zT%mpm+XAX#<2_[%Q$S0 9xRh7p#/[=2'#=JE:K3zT%m,V9>/80s1e+XAX#<2_$)0
oS0 9xRY%7gf+*7C0p#/[=2'#h1W%-[(JW;E:K3zT%mUV9>/80s13+XAX#<2_/)2<9ZW6b00
oM/f:\P $+ZK:].3.-/Y%K.2J9s$ *32<Sg$R3Xp[STW2M6GX69/%54f$%ZfqbR:%79K<6
:A8#D13U)2[#\;_[%Q$S\ oh h%7g +%RhPp#/+=PC;p#/+=PC*p#/+=PC(p8
_%=[ #$1w%=[ #<1w%=[ #H1w%=[ #J1w%=[ #B1w%=[ #=1w%=[ #X1w%=$ #=]eY
8>Z6yMPE+xa8.d13$)2[#*;_[jq$s\TOH +%7G 2%rH)P#/+]pc7J1w%=$ #=-eY
8>Z6yMP3+xa8.d13/)2[#*;_()2[#*;_s)2[#*;_$)2[#*;_2)2[#*;_i)2[#*;_:)0
oS\tohuQ$S\toh%Q$S\toh Q$S\toh1Q$4TfqM4'X,wS%_DUH\/#+]Z
FhR*sO=d]t0*+:\0u$+zk:\p $+d;:\p $+zk:\0u$+G/098D$s0 9Xr)(P#/[=2'#J5eY
8>/80S1Ms)26m's[c-a[m#yO%xP/9##0-dm66d Q42(6[
+!+]6dJ[
.ends iob_outlogic_sim_inp
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: out_load
** View name: schematic
************************************
.subckt out_load cbnet<38> cbnet<37> cbnet<36> cbnet<35> cbnet<34>
+cbnet<33> cbnet<32> cbnet<31> cbnet<30> cbnet<29> cbnet<28>
+cbnet<27> cbnet<26> cbnet<25> cbnet<24> cbnet<23> cbnet<22>
+cbnet<21> cbnet<20> cbnet<19> cbnet<18> cbnet<17> cbnet<16>
+cbnet<15> cbnet<14> cbnet<13> cbnet<12> cbnet<11> cbnet<10>
+cbnet<9> cbnet<8> cbnet<7> cbnet<6> cbnet<5> cbnet<4> cbnet<3>
+cbnet<2> cbnet<1> cbnet<0> cnnd<13> cnnd<12> cnnd<11> cnnd<10>
+cnnd<9> cnnd<8> cnnd<7> cnnd<6> cnnd<5> cnnd<4> cnnd<3> cnnd<2>
+cnnd<1> cnnd<0> cnpd<19> cnpd<18> cnpd<17> cnpd<16> cnpd<15>
+cnpd<14> cnpd<13> cnpd<12> cnpd<11> cnpd<10> cnpd<9> cnpd<8>
+cnpd<7> cnpd<6> cnpd<5> cnpd<4> cnpd<3> cnpd<2> cnpd<1> cnpd<0>
+pad tsb_s<0> vccaux vcco
.prot FREELIB
7WJ2[-\) huv%7gf+*7CsI1W%-[(JW;hV9>/80s1mI)2[-\) huS%7gf+*7Csj1Q
$K3zT%m3c+XAX#<2_U Q$S0 9xR)Pp#/[=2'#b]E:K3zT%mUe+XAX#<2_'*QL
TGF+*7c5$1w%-[(jw-4v9>/80S1C:)2[-\) H%)%7GF+*7c5B1w%-[(jw-Pv6
:AX#<2_'1Q$S0 9xRh;p#/[=2'#=yE:K3zT%mpw+XAX#<2_[JQ$S0 9xRh0p8
_%-[(jw3iv9>/80S13u)2[-\) H J%7GF+*7c7=1w%-[(jw3+v9>/80S1#+z
$[-\) Hhq$s0 9XrT%7GF+*7c9P#/[=2'#<1w%-[(jwve:k3Zt%M3v9>/80S1C+z
$[-\) H q$s0 9Xr:%79k<9-a[1$o:\>aW79k<9-a[1$o:\>aW7' ;c$;v6C  97ux6z1(+z
$[#\;_[Uq$s\ OH J%7G +%rH7P#/+=pc7X1w%=[ #e1w%=[ #>1w%=[ #i1q
$K[zVW5E:K[zVWRE:K[zVWVE:K[zVW;E:K[zVW-E:K[zVW3E:K[zVWJE:K[IVW3,V6
:A8.D13S)2[#*;_[*Q$S\toh Y%7g 2%Rh0p#/+]PC7h1W%=$ #=;E:K[IVW3UV6
:A8.D13[)2[#*;_[1Q$S\tohFQ$S\tohHQ$S\toh*Q$S\tohJQ$S\tohVQ$S\toh/QL
TG 2%r)%7G 2%rJ%7G 2%rH%7G 2%r:%7CV[c.mj,tD!kduh\/#+]z
3p7' ;c$;v6C  9$;v7'()u1ol
sjw;=6g61ds!=72<9zw%)U-9.8
o+:x388/T'%d78%#y<BxP/9#y<BxZ>mz203U)$uQJh'*23_jX>9[FY=5wr%A:$Rz(36
BM8.'v 6
.ends out_load
** End of subcircuit definition.
************************************
** Library name: rnr_spicemodel
** Cell name: iob_tlvsht1_33
** View name: schematic
************************************
.subckt iob_tlvsht1_33_schematic A V Y1 Y1_vdd Y2 por_b
.prot FREELIB
7=%2eb#:3C- V79K<9-U/7\90b7d'j;Wi)V-;>#=-/BS$#4(c94 y33WRbahL
)K  /xP/9#:39OJ$+zk:=MD/%toMux4Y=#=-/bs$Rd((94uYX8
o+[x#77[w6B02<9zw+o.ujm43M9C*0!]L:RA:zH# 7)%2\yQ6394uY=8
o2'x#57pP:\xP$.KV<X.FSJ#m-/by$,QP:0p*p7$k-/z
F6=#:39OJ$+#y:]MD/%toMux4YX+H:RAH$Rd((94uYX8
oU]7:$23w2m6gx79w69$oW9SV7uU2,_jXp'xLYX+uE94 YX#!<)10
'.#:3C- V7[W6%P2<YDW2O.U$Uq+HIJ23_Jx($XMV_JWRba:L
)\w8[dPvy#$:\0u$+zk:=MD/7x((e%V$,Q+h/*2\yQ+:00*p[
+!+]6dJ[
.ends iob_tlvsht1_33_schematic
** End of subcircuit definition.
************************************
** Library name: rnr_spicemodel
** Cell name: iob_diff2cmos
** View name: schematic
************************************
.subckt iob_diff2cmos enable in in_b out out_b
.prot FREELIB
H]=3g\#M2[ahZ<#M2UahZIRWi]%*P!RWi]/*7!5WiCP7 dqUH[X4.9T!;K2*)!JQ
$d[jy=+pc9cz7_Jxe6
>:$#<23'V2<9ZW%)%-)d8
/39$2<9zw%)%-5D8
/C9[2<9zw%) -;i:q
%2XzT%33c9-U/7g(3EV) [
g3:=2'7hJW6b02[_3xwI_0
[I# 9xJE$+ZK:KahZ<;[y
kh280SJ>9-u/7G(3ev) [
gI:=2'7huW6b02[_3xwI_0
[<# 9x*j$+ZK:KahZ<;[y
38J)7\) [UJ$#<2)(xFh6C 69CZYX+L>/xL8_jX($128DC z*6uY=#m2) -9ejq
$r$*P!Jj(9$\H#2);bahL
)Cup9[(ji-w+*7T)74#Qw[P$u\((ehsp7% -/b:(X# tw[!t8z(39CiY=+H#/z
$3.Q+h/*:$.:#+N23/_3q
7W h07\) $/2wrsW7WD78+#M+) -9EJWF=a:Zxu+:=_78O<5<) 2,.q3HU*:$,*((E1tP[
atTW[!T8Z(36
e77># 9xJE$M$2q-XfH6c 69czy=+h#/Xl8_Jx($128dc Z*6Uy=#M2)u-sIJQ
$r$*P!Jj(9$\H#2);bahL
)CP392ZG-%):\p $#<2WsxFh6S#+\x48_jXp/123#Q+h'/:$#:#+N23/_3wI]AHl
T%T-/bJ)X#Ttw[!t8z(36
eO6%;W29[2<YDW6%P26\TK:da46=#=-/B:;7$;-/XM/_JQ
7O$'97\) [uj$##Yo%XpVY#tuM02,_Xtm9i*P!J,:0P*P7$K-/Z
F>.S+:=xZ$+d;:\p $.KV<9C*,.-wf)1-pe#!O)12\9Q+Y
3MijB# :]xPvy#yO%xi>mzwI)Ci77%((e1e$Rd((94uYX8
oU]%280SP>/xi$+d;:\p $.KV<9C*,.vwf)1-pe#!O)12\9Q+Y
3Mi77\) $%2679;O9- v7*90Bx4Yu*3:RA:zX]wr%A:$Rz((6
eO6%uW+*7h)I# :\P $+D;:]md/7X(i]/23_Jx((XMV_JWRba:L
)KT(9$2679;O9- v7*90Bx4Yu*u:RA:zX]wr%A:$Rz((6
eO8%uW6b02<9ZW+*7h5<#Y<bXz>MZ203%+$UqpH/V23_Jxc2XMV_JWRba:L
)K  sxP/9#y<BxZt%3up9-u/7\90B7D'BrwI) -p<#=-/bJ97$;-/xm/_jq
7O[';7\W!=D/$#<23'V2<9ZW+O.UJM4UP9c*,6D#TjXlyx+U)94 yx#!<)10
'\\2c9$2H## 9x j079K<9[Ow9sv7'V2,_XSoW_\$,q+H'J2\Yq+:00*P[
49+'XzT%3UP9[(J=5+:\0U$+ZK:=md/7X(iC0d\8g):ra:Z=uWR%a:$rZ((6
eO8h# 9x )57\) [/:$+ZK:\0U$#kv<9c*,#-WF)1-PE#!o)12\9q+y
3MZ97\) [/T$#<23:*2<9zw6B028\tk:DA48=#=-/b:;7$;-/xm/_jq
7O[)$#<23:1280sp>/Xp/9#Y<bXz>MZWi)cz77%((E1E$rD((94Uyx8
oU=v280SJC9[(j=vJ:\0u$+zk:=MD/7x(I=%23_jX((xmv_jwrBA:l
)\3:=2'7$jw+*7T*79k<9-u/7\90Bx4YX+3>9I*p!j,:0p*p7$k-/z
F>#jw+*7HSB# 9X*V$+zk:\0u$#KV<9C*p!3J:RA:zXUwr%A:$Rz((6
eO8=# 9x*j$#<2wSXp/9#Y<bXz>MZWi)1-7I#=-/B:(7$;-/XM/_JQ
7=H280sp)/XzT%ul:\P $+D;:]md/7X(3EJv$,q+H/F2\Yq+:00*P[
+!+]6dJ[
.ends iob_diff2cmos
** End of subcircuit definition.
************************************
** Library name: rnr_spicemodel
** Cell name: iob_lvds_ibuf
** View name: schematic
************************************
.subckt iob_lvds_ibuf enable in1 in2 out vccaux
.prot FREELIB
%/X3Td3W6b02[_;IH:_0
[=#;39-U/7g(PEH\L
s-w%[xP/9#/-sb+ [
gj:=2'7hyW6b02[_5xeS_0
[$# 9x t979K<9>**!V[y
k/2t=#y<BxaY>+Lt6
>+$#<23[u2<9ZW%)F-sd8
/M93H$+zk:kAez<:q
7WVh77< '-i($+g/'0e280sp3/XfH6s#+\X48_JxP/123#q+H'/:$#:#+n23/_3Q
$d$*P!R+(9iIyx+U>/XI 4\d9Y0*7[
492x1280sp>SX3Td3W+*7h7j#Y%K=M'7*90b7d'bRWi)%-7=#=-/Bj97\O-SXMV_JWRbahL
)*43ix3tD3w9==/30#y%k=m'79/%54F$.KV<X.F5<#m-/b)*7%((e%s$Rd((94uYX8
oU]7H$03w;*_H$+G/'0E2<sG$r3xi>mz203%+$uQuh[ 23_jXCsxZ'_Ywr%A:$Rz(36
eO6%-W+*7h($##+'X(779/%54f$.kv<x.f5<#M-'Bh77%((E%Y$#4(e94 yx#!<) 0
'\*2>93h$8<[39-A[1$O:\>Agr4W2O.UJM4UP9c*5!3p:ra:Zb5W+3av$rD((94Uy=8
oU]7)$s3w!= 2t=#y%k=m'7*90B7D'BrwI)%-7=#=-/bJ97\o-sxmv_jwrBAHl
)KT ixD\%#59J 2x=#y%k=m'7*90B7D'BrwI)%-7=#=-/bJ97\o-sxmv_jwrBAHl
)KT(9[(j=33:y2\779/%54F$+G/'0E26\tk mEJ07x(Ce H$,Q+h'j28)QL:0p*p7$k-[z
F>.SJ:=2'7HYw+*7H7X#59J 2<sG$r3xi>mz203%+$uQuhi 23_jXC2xZ'_-wr%A:$Rz(36
ez0xJW+*7h)>#)+53lT7')T[Xp/9# uM0'w)-4:dajZ<3WF)1-5$# 7)%2\Yq+:00*7[
49+x%280sp3UX78b#;39-U/7\90b7d'bRWi) -P<#=-/Bj97\O-SXMV_JWRbahL
)K  [xZt%3iE96( =# 9X T979k<9[oW9SV7'v2,_3X(ixLYX+u)9[FY>#!O)12\9QPY
3MZjJ#F398Z77dP:\0u$#KV<X.F5<#m-[b:07%((e%y$#4(E94 YX#!<) 0
'\\2P9.MJ7')T[XA779K<9[Ow9sv7'V2,_3x(IXlyx+U)9[fy>#!o)12\9qpy
3MZj$#/396( =#y<BxP/9# Um0'W)-4:DAHzXrwf)1-5$# 7)h2\yQ+:00*7[
49+x/2V=#59j 2<9ZW6b028\TK Mej07X(3E1+$,q+H'H28)ql:0P*P7$K-[Z
F>#S+:=2'7i5w;*_H$+zk:\0u$#KV<X.F5<#m-[b:07%((e%y$#4(E94 YX#!<) 0
Zr\t;M70
.ends iob_lvds_ibuf
** End of subcircuit definition.
************************************
** Library name: rnr_spicemodel
** Cell name: iob_ibuf_mux
** View name: schematic
************************************
.subckt iob_ibuf_mux i0 i1 i2 out s0 s0b s1 s1b s2 s2b
.prot FREELIB
7O[h07T! 90:$4JW6b028\TK:dahZb5WF)1-PI#!o)12\9q+y
3MZ77t! 90H$43w6B028\tk:DAHzB5wf)1-pi#!O)12\9Q+Y
3MZ57t! 90J$4-w6B028\tk:DAHzB5wf)1-pi#!O)12\9Q+Y
3Mi7<#VrXxup-##(9- v7*90Bx4YB+4M9I*p!jJ:0p*p7$k-/z
F>.3w0072/=0w![xPvy#TUm02,_-XpuxLYX++W94 YX#!<)10
'\*U:M4'$9-f:W%2<YDW2O.U$UqUHIu23_Jx($XMV_JWRba:L
!$ 2y.'l
.ends iob_ibuf_mux
** End of subcircuit definition.
************************************
** Library name: rnr_spicemodel
** Cell name: iob_schmitt
** View name: schematic
************************************
.subckt iob_schmitt hysb in onb out_comp out_true vcco
.prot FREELIB
%/X7.S#Y<bXAyE+UwjZ
a77Cs[9-u/7G(32bV [
g3:=2'(h#Y<bXAy=JxPjZ
a)7\) [%+$+zk:kATzB:q
%'XzT%ul:\0U$SqpcE + [
4 3[XzT%uI:WD/$+ZK:\0U$#kv<x.fsj#M-[B:07%((E/28)q4:0P*P7$K-/Z
F8<Yw+*7T*7C :\0u$+zk:=MD/%toMux4YH+,:RA:zH# 7)j2\yQ+:00*7[
4 3'X7.-#v+-Xp/9#Y<bXz>MZ203u)$Uqp:ra:Zh#!o)12\9q+y
3[J$+zk:\0u$+zk:\0u$#KV<X.FSJ#m-:bJ$,Q+h:xZ'_-wr%A577$k-[z
F8$jw+*7ep7Cs[9[(jiYw6B028\tk mE)S7x(MevH$,Q+h:xZ'_;wr%AH$Rz(36
ez0I##q-X787\) $H2<9ZW+O.UJM43m9c*)!]WF)1-)7\O-2XMV_JWRbahL
)KT39.mj6S5r*xZt%3up9- v79;O9$oW9#m-[by;7%((e1T$#4(>94 Y=#!<) 0
'\*+:M4'.ST929-U/7\) [%+$+D;:]md/7X(3EJ23_Jx($Xz'_-WR%a:$rZ(36
eIP7\) [%+$#<2w:XpVY#Yo%XI>MZWi)1-9=#=-/B:(7\O-[12\Yqp:00*7[
4t>9- V79;o9- V79;o9$Ow9#M-[B)77%((E1t$rD((94Uyx8
oU= 2WRSs y4($#<23'v2<9zw6B028\tk:DA:z>rwf)1-pi# 7)/2\yQP:00*7[
49+/Xd\%//0O$2<YDW+*7h5<#Y<bXz>MZWi) -57%((E1t$rD(394Uyx8
o+/xZt%3up9[(jivw6B02<9zw+o.u$uQ+hs/+$,Q+h/*28)QP(94 YX#!<) 0
'.;W+*7EP7H:<-Xp[STW6K>d$.kv<x.fsj#M-:Bj$,q+H'H28)qU:0P*==#!<) 0
'.3U:=2'(h##q-XpVY#Yo%XI>MZ203u)$UqUH'V23_JxcSXz'_3+:0P*P7$K-[Z
F6$;w!c>2W#0w6k>D$+G/09$oW9SV7uU2,_;XEixLYX+uE9[FY=jwr%A:$Rz(36
eI0$##q-X787cS%9-A[M#tuM0'w);3:da)$,q+H'H28)qj:0P*77$K-[Z
-\#*50Xz
.ends iob_schmitt
** End of subcircuit definition.
************************************
** Library name: rnr_spicemodel
** Cell name: iob_diff_amp
** View name: schematic
************************************
.subckt iob_diff_amp enable in1 in2 out vccaux
.prot FREELIB
%UXA779K<9>*;!R[y
k%2t=#y<BxaY=3XM:_0
[=#59j 2<9ZW%)u)Zj:Q
%:X/779K<9>*7x+pwjZ
a07\) [*y$+zk:kAez<:q
%2XzT%3j)9-U/7g(3/BY [
gj:% 2<9ZW%)H-7d8
/E9[(j=vL:\0u$sQP3e \l
)C43[x(810=99-a[1$o:=2'7=jw7wd'h#9wI=A:z<j+:R[*p!-i(9[\h#2);BAHl
TxT-/b+pX#=2)1-5Hjw2J8ZA0'k-[z
F>.S+:=2'7HYw;*_H$#<23[U2<sG$r3xi>mz203%+$uQuh[ 23_jXC2xZ'_Ywr%A:$Rz(36
eI0=RW;*_h$0\$[r22<Sg$R3Xp[S[!79$Ow9sv7'V2,_JxmSXlyx+U>94 yx#!<)10
'\*2392h$8<[39-A[1$O:\>Agr4W2O.UJM4UP9c*5!3p:ra:ZbyW+3av$rD((94Uy=8
oU]7J$#<23$j2h#-w9[xP[s[!79$oW9SV7'v2,_-X3[xLYX+u)9[FY>#!O)12\9QPY
3MijH#F396( =#y%k=m'79/%54F$.KV<X.F5<#m-'bH77%((e%y$#4(E94 YX#!<) 0
'\*2m9>h$4\p:* 2<Sg$R3XI>MZ203%+$UqUH[ 23_Jxc2Xz'_yWR%a:$rZ(36
eO6%RW0072:0:p:- 2<Sg$R3XI>MZ203%+$UqUH[ 23_Jxc2Xz'_yWR%a:$rZ(36
eO6x# 9x hs7')T[Xp[S[!79-A[1$O:]md/%TOcIX4yb+p39i*P!-h:=e**7$;-/XM/_3Q
7O$'(7\) [/v$#<23[12:0:p:\>Agr4W2O.UJM4UP9c*5!Rp:ra:Zb5W+3aj$rD((94Uy=8
o+i1:$#<23:h2t#[Ff*x3tD3w6B028\tk mEJ07x(CevH$,Q+h'j28)Qu:0p*p7$k-[z
F>#Su:=2'7=;w!=%2v=#y<BxZ>mz203%+$uQPh/v23_jXC2xZ'_Ywr%A:$Rz(36
eO8%3W+*7h)>#59j 280spw2Xp/9# uM0'w)-4:dahZxRWF)1-5$# 7)H2\Yq+:00*7[
49+xu2X=##+[X 779K<9[Ow9sv7'V2,_3x(IXlyx+U)9[fy>#!o)12\9qpy
3MZj<#VrXx3tD3w%[xP/9# Um0'W)-4:DAHzXrwf)1-5$# 7)h2\yQ+:00*7[
49+xJ2[=#59j 2<9ZW6b028\TK Mej07X(3E1+$,q+H'J28)ql:0P*P7$K-[Z
F>#Si:% 2:0:P:\0u$+zk:=MD/%toCix4Y=++p9I*p!-L:=E**7$;-/xm/_3q
7O['P7\) [*Y$8<[39-U/79K<9[Ow9sv7'V2,_3x(IXlyx+U)9[fy>#!o)12\9qpy
e4Z68t2Y
.ends iob_diff_amp
** End of subcircuit definition.
************************************
** Library name: rnr_spicemodel
** Cell name: iob_sstl_hstl_buf
** View name: schematic
************************************
.subckt iob_sstl_hstl_buf data_in enable out_comp out_true vccaux vref
.prot FREELIB
%/XzT%;4:\0U$SqjHI_0
[=# 9xu:$+ZK:KatZ<:Q
7Wu2T#[fF*XzT%;4:=2'sx#vRxDAw\*W007GJ8$):W./.Yc[T'>Ow9#M2[ahZ<#M2UahZIRWi]%*P!RWi]/*7!5WiCP7 dqUH[X4.9T!;K2*)!JWi=%*7!3U:d[hyx+ly
38 hD:w9==/30#y;*_2v1S$Qw[280S3(9-a[1$o:w./.yC[tc=o6[
4#oW_\.-#)+53lT7D$ 5D787959jXzT%;4:\>Agr4W!M3GV4:[q5mIL
!$ 2y.'l
.ends iob_sstl_hstl_buf
** End of subcircuit definition.
************************************
** Library name: rnr_spicemodel
** Cell name: iob_tlvsht2_33
** View name: schematic
************************************
.subckt iob_tlvsht2_33_schematic A V Y1 Y1_vdd Y2 por_b
.prot FREELIB
7=X#769;o9=2<9ZW6b028\TK:da:ZbyWF)1-PI#!o)12\9q+y
3$2E=/yO%x;$+d;:\p $.KV<9C*p!rH:RA:zXUwr%A:$Rz((6
eIs7PU:].3.-#Y:\XI>MZ203u)$Uq+HI%23_JxcSXMV_JWRba:L
)*u:<%2E=#y:\xi>mz203U)$uQ+h2xLY=#!O)12\9Q+Y
3$H$23w8'xP$+#TUm0'W);3:DA:z$#=-[xmv_jwrBA:l
)\3:\0u$2-w8[xP/9# Um0'W);3:DAH$,Q+h:xmv_jwrBA:l
)\u:<%2E=/yO%xP/9#y<BxZ>mz203U)$uQ4h(h23_jX>9[FYB#!O)\H$Rz(36
ez77Pp:5Xp/9#Y<bXz>MZ203u)$Uq4H(H23_Jx>9[fyb#!o)\h$rZ(36
BM8.'v 6
.ends iob_tlvsht2_33_schematic
** End of subcircuit definition.
************************************
** Library name: rnr_spicemodel
** Cell name: iob_tlvsht2_25
** View name: schematic
************************************
.subckt iob_tlvsht2_25_schematic A V Y1 Y1_vdd Y2 por_b
.prot FREELIB
7=X#769;o9=2<9ZW6b028\TK:da:ZbyWF)1-PI#!o)12\9q+y
3$2E=/yO%x;$+d;:\p $.KV<9C*p!rH:RA:zXUwr%A:$Rz((6
eIs7PU:].3.-#Y:\XI>MZ203%+$Uq+HI%23_Jxc:XMV_JWRba:L
)*u:<%2E=#y:\xi>mz203%+$uQ+hixLY=#!O)12\9Q+Y
3$H$23w8'xP$+#TUm0'W)-4:DA:z<#=-[xmv_jwrBA:l
)\3:\0u$2-w8[xP/9# Um0'W)-4:DA:z<-wf)1-5H#!O)12\9Q+Y
3[J$2-w8[dPvy#y<BxP/9# Um0'W)-4:DA)$,Q+h'/28)Qu:0p*==#!<) 0
'#3W8[X;$+ZK:\0U$#kv<x.f5<#M-UXlyx+U>9[fyb#!o)\h$rZ(36
BM8.'v 6
.ends iob_tlvsht2_25_schematic
** End of subcircuit definition.
************************************
** Library name: rnr_spicemodel
** Cell name: iob_ibuf
** View name: schematic
************************************
.subckt iob_ibuf cbnet<2> cbnet<1> cbnet<0> diff_true in in2_lvds
+lvds_true out_comp out_true schmitt_true vccaux vcco vref
.prot FREELIB
%SXzT%JU>IXp/9#/-SBt7d8
/W9p7 D-/Um0gh##y<BxaYe++pJz
a77\) / T;79k<9>*5<j[Y
kf23+dkQk.o679k<9>*0!YLt6
>hP7%YobD':r<W6b02[_RxcjZ
a07z/Ao8'j6S5r*xP/9#/-:be)D8
/)90ad\C2 c>D>.#y<BxaYJ+,>Jz
a57959JxP/9#/-(*\l
svwOw_\.st929-u/7G(Mevs [
g3:%8\ 6s5R*Xp/9#/-:Bh)d8
/(9[(jX;+M9-u/7G(C:v\l
)K  ixP/9# 9X1H(e#y<BxP/9# Um0'W)-4:DAHzX3wf) -57\o-'xmv_.P:00*7[
4 m$*2<9ZW+*7:sx;W6b02<9ZW+O.UJM4UP9c*7!Jp:rahZb# 7)%2\Yq6394Uy=8
oU=7y$+zk:=2'p=U,:\0u$+zk:=MD/%toCix4Y=++p9I*p!-H:=E*7$#!O)12\9QPY
3[+(79k<9[(jX3J#9[(jX34W9-u/7\90B7D'J;wI)/-;7%((e/28)QH:0p*p7$k-[z
F8<Yw+*7:7<Uw+*7:7i]w6B02<9zw+o.ujm43M9C*)!]wf)1-)7\o-2xmv_jwrBAHl
)KT [xP[s[!79[(jX3J#9-a[1$o:\>aGR4w2o.ujm4up9C*5!jwf) -57\o-'xmv_.P:00*7[
492x%2<Sg$R3XzT%Jpw(Xp[S[!79-A[1$O:]md/%TOcIX4yb+p39i*P!-h:=e*7$#!o)12\9qpy
3$+979/%mxZt%jPW(xP[stw6k>D$.KV<X.FSJ#m-uxLYX+uE9[FYi#!O) 2\9QPY
3$)(H#y%k=m'7\) /U:S79/%54F$+G/'0E26\tk mEJ07x(Ce123_3XC9[FYB#!O)\H$Rz(36
eO8%;W+*7:7I]W6b02<9ZW6b028\TK Me)s7X(wE%t$,q+H:Xz'_-WR%ah$rZ(36
eO8%VW+*7:7I]W6b02<9ZW6b028\TK Me)s7X(wE%t$,q+H:Xz'_-WR%ah$rZ(36
eO8%3W+*7:sx;W6b02<9ZW6b028\TK Me)s7X(wE%t$,q+H:Xz'_-WR%ah$rZ(36
eO8%JW+*7:sx;W6b02<9ZW6b028\TK Me)s7X(wE%t$,q+H:Xz'_-WR%ah$rZ(36
eO6%JW+*7:7I]W6K>d$+g/09-A[M#tuM0'w);3:dah5!RI:ra:ZbyWu3aj$rD(394Uy=8
o2/xZt%j3(uxP[stw6k>D$+G/09$oW9SV7uU2,_3uhi/23_jXCsxo'_-wr%AH$Rz(36
eO8%-W6b02<8<[:\0U$+ZK:=md/%TOcIX4y=+h:rahZ=yW+3a)P7$;-! 2\9qpy
38H(7GF+*7c5P#y%k.2d2zF:=2'7erw+*7H;J#y%k.2hm0s R-ud%3sMudu[/<9'X8al
)Cu)9[(jB53:=2'pBv4:%8\ BG90Bd787\) /%)57\) /%))7CV[cp7 D-/Um02,.3(3ev2,.;(3e*+$u*u-/b+$u*i-[by$u/;!J_*5!3wIc0D\8G)-:b:$u\u-[bH57x 3)1-*[
4#oW_\5Skv<9[(Jb53:%8\ bg90bD787\) /%S07%YobDAw\*WF\PU.%'!96
:7w-/;!j_j[\TK:d$hy=+4:d$)y=+jP9cI5_JxP9cI)_3x)9cGV4:[-'BhL
Txs<m43[0Qih/x48BQPh[%2,#3((eh0
'4%YobXzT%-hm9[(Jx;+m9[(Jx3j#9P7 d-/uM0GH##Y%K=M'7cv[CipV9/#[0_0
'4-4:=2'5$;W+*7:7I]W+*7:sx;W+*7:5hRW6K>;\)##0-Dl<YZS!-4\L
)C9r3daW\*wOw_\.st9290ad\C2 c>D>.#=6%0g[mKT:m4'.st929p7 D[92c.Zl
Td#tJ=o66t [90ad\C2 c.Z$9G*Uw7'.m\F:R- /6t :R- /6t [98Dx6CFrJdo\)8
o!o4F.%'!99p7 D/2;022/sh9!X7gj8$):R- /6S5r*xD\%/2;022v4:['o$gW#8
_Ow_\G\*s0=32/sh9!X7gW##k%FM7j%/V+-xL<yzs0=xL<yzs0=32hm0s!-4\.\$oY
38u[/K# Xx>E90w+*7:SX;w+*7J0X#k%FM7j%//0o$2/sh9!X7gj8$):\>aW[
a#0-DU[/k# xZ
Fh<# 9X1)pJ# 9X%+(7d#tJdaW\*wOw_\.%'!99-a[1$o:\6( 7CV[c0uj,/*<XIgxR:q
7W Y$9g*uW7'.M\f:\>Aw7\) 'Vh$9g*uW7'.M\W+*7j0x#Y%K.0
o4Tfqxip//sUqUuG/SH)u577[[
4#3IX Hd:$u]Dd8-#Y%K=M'7\) 'Vt$Yc[T5mI.M\W+*7j0$#Y%K=M'[
a#0-D'3+Z* 'Dj06Z/a*m;J4gQ
7W S$,9;<C.zX79/%54f$#<2c2u23+DKqM[280s3>:Xp[S[!76
:7w-/2F\0>Jb/UPC0AD0k$ W>0
'8JW!=%G3+DK:=2'P=u,:\0U$.PK[Y2U$UqhHU%23_-xc:V2>9qp:O6*77k/-[XUHO'((6
e357\) / t;7\) / t;79K<9$#/-')<9c*9!;U:rajZbV4:O0*77k5-[XO[_3W<Wg3yx8
o;[x787\) /U:S79k<9$#/-')<9C*9!;u:RAJzBv4:o0*77K5-[xo[_3w<wG3YX8
o;uxZt%j3(uxZt%j3(uxP/9#T8B33t9#m-2b)57%(Ce%s07Kk-[xo:_3wUkAH$9CD;)10
'4-p(9>/80s1(+Xp/9# 9x%t;74#q=.357X -/BjPx#=+)1-PIJW+j8za0'K-[X46_Jxc/10
o,*((E1tP7*[!=g(:9qpy
38Jpe#/[=2'#=1w6B0280SuE'xFh6\V;'x48_jXC/123#Q+h/*:$#:#+N23/_3wI]A:zBj+Y
8IiYX++W/xi 4\D9y0*7[
4#e9mh_7k+490AD\c2 C.zX74#q==zVb#M+)1-5xJWF=a:Zxu+:=_78O<5<) 0
oU*((E%:P7%t-/B:(x#tTW[!T8Z(36
e7(7kp4-XOPA#;!j_;>./v+-XfH6\$+%%2,#q+H'1:$,\((E1tP7\[!=g(:9qpy
8CiYX+u(/xL6_jX($126DC z*6uY=8
o!2xo7a#9(>323+dkQm[/$)Cs+5[ 57x -/bJpX#=+)1-pijw+J8ZA0'k-[x46_jXC/10
o,*((E1tP7*[!=g(:9qpy
38JpH#93>xo7a0w7wd78+#m+)1-5Xjwf=A:zXU+:=_78o<5<) 2,.Q+h'1:$,*((e1Tp[
atTW[!T8Z(36
e75xRWu/N2>x_f:38GH#9Wi=a:ZbJ+:r[*P!Jj(9[\H#2);bah$U*((E%:P7%t-/B:(x8
_2J8ZA0'k-[z
FhBjJ:\0u$+zk:=2'5i]wU/n2'4/ 0yU2,#Q+h'1:$,\((e1Tp7\[!=G(:9QP:D$*p!-+(6
:l6_Jx($126dc Z*6Uy=8
o!'1y$+zk:\0u$#<2Cs%2>=_w7wdZW8;wI=A:zBj+:R[*p!jJ(9[\h#2);BAH$u*((e%:p[
a=2)1-PIJW2j8za0'K-[Z
F>#jw007g[mKT:\0u$+zk:\0u$#KV<9C*p!-wf)1-p>#!O)12\9Q+Y
3[H97t! c73\0#y<BxP/9#y<BxZ>mzwI)1-57%((e1V$Rd((94uYX8
Xr=$3W%8
.ends iob_ibuf
** End of subcircuit definition.
************************************
** Library name: rnr_ioi
** Cell name: ioi_5to1_mux
** View name: schematic
************************************
.subckt ioi_5to1_mux i0 i1 i2 i3 i4 out s0 s0_b s1 s1_b s2 s2_b s3 s3_b s4
+s4_b
.prot FREELIB
7O$h$M$2:b/GX7cI:\P $.kv<9c*5!R3:ra:ZxuWR%a:$rZ((6
eO6x#vRxXUP60W!/XpVY#tuM02,_-xPUXlyx++w94 yx#!<)10
'\*3:M4'$9-S[98j$+D;:]md/7X(cEV)$,q+H/*2\Yq+:00*P[
492'Xd\%#K3C32H=#Yo%XI>MZWi)%-0j#=-/B:(7$;-/XM/_JQ
7O$S$M$2:buGX7c3:\P $.kv<9c*5!R3:ra:ZxuWR%a:$rZ((6
eO8<#vRxXU)7cI:\0U$#kv<9c*7!-h:ra:ZxuWR%a:$rZ((6
eO8x#vRxXUP7c+:\0U$#kv<9c*7!-h:ra:ZxuWR%a:$rZ((6
eO8b#vRxXU57cU:\0U$#kv<9c*7!-h:ra:ZxuWR%a:$rZ((6
eO8=#vRxXU77cp:\0U$#kv<9c*7!-h:ra:ZxuWR%a:$rZ((6
eO8j#vRxXUs7c3:\0U$#kv<9c*7!-h:ra:ZxuWR%a:$rZ((6
BM8.'v 6
.ends ioi_5to1_mux
** End of subcircuit definition.
************************************
** Library name: rnr_ioi
** Cell name: ioi_inmux_new
** View name: schematic
************************************
.subckt ioi_inmux_new disable i0 i1 i2 i3 out s0 s0_b s1 s1_b s2 s2_b s3
+s3_b
.prot FREELIB
7O$:$M$2:b1GX7c+:\P $.kv<9c*5!R3:ra:ZxuWR%a:$rZ((6
eO6j#vRxXU560W!'XpVY#tuM02,_-xPUXlyx++w94 yx#!<)10
'\*U:M4'$93S[98h$+D;:]md/7X(cEV)$,q+H/*2\Yq+:00*P[
492:Xd\%#KmC32Hj#Yo%XI>MZWi)%-0j#=-/B:(7$;-/XM/_JQ
7O[S$M$2:%8Ug-%):\0U$+ZK:=md/7X((E%23_Jx($XMV_JWRba:L
)K (9.mj7z+:w12<9zw+o.u$uQPh'j23_jX($xmv_jwrBA:l
)K C9.mj7zu:w%2<9zw+o.u$uQPh'j23_jX($xmv_jwrBA:l
)K 39.mj7zP:w 2<9zw+o.u$uQPh'j23_jX($xmv_jwrBA:l
)K M9.mj7z3:wU2<9zw+o.u$uQPh'j23_jX($xmv_jwrBA:l
!$ 2y.'l
.ends ioi_inmux_new
** End of subcircuit definition.
************************************
** Library name: rnr_ioi
** Cell name: ioi_2to1_mux
** View name: schematic
************************************
.subckt ioi_2to1_mux in0 in1 out sel selb
.prot FREELIB
H]=3g\#M2)1-57X -/BjL
)KT(9.mj7z)f98Zp79;O9$oW9#m-D$23_jX($xmv_jwrBA:l
)KT39.mj7z)f-x78=#yO%xi>mzwI)Ci$,Q+h/*2\yQ+:00*p[
49+/Xd\%#K9r32H#JW6b028\TK:da487%((E1t$rD((94Uy=8
oU= 2WRSw<*I2h#3w6B028\tk:DA487%((e1T$Rd((94uY=8
Xr=$3W%8
.ends ioi_2to1_mux
** End of subcircuit definition.
************************************
** Library name: rnr_ioi
** Cell name: ioi_optinv
** View name: schematic
************************************
.subckt ioi_optinv in_n in_p out_n out_p sel_n sel_p
.prot FREELIB
H]=3g\#M2CmM'_D[i]X486k!7)P\,##M+C8z<xq;Td[2,./#+\1*VdXt:d[GH#9p-%_48[
aM2C8z<=q;Td$0
'4upm98z..##+C[280sU(90(36\W<*iG67cv!C%'w=/9R3X46_XtqO4f$U\(i=DO\)8
o!oEa3g3w!=di$4\s+9[(jBrw<*Ig67z)fc[2hmCsCX.H.\$o:D$*,./9r3x48_x Qo4Fl
)C#+\1280Sup9.mj6*w7wd78+#m+)CZ.4\y(9IZYX++W/xZ 4\D9y0*77xT-D$gh#9+Y
8IiYX++W/xi 4\D9y0*7[
4#!=-h$#<2c/Xd\%/ :38GH#9Wi=a486c 6[Xl8_Jx($128dc Z*6Uy=#M2)cI.4\Y36
:l6_Jx($126dc Z*6Uy=8
Xr=$3W%8
.ends ioi_optinv
** End of subcircuit definition.
************************************
** Library name: rnr_spicemodel
** Cell name: ioi_inputmux
** View name: schematic
************************************
.subckt ioi_inputmux i_inff input_optinv_sel out_comp out_true
.prot FREELIB
%'Xp/9##qW[2[_yx32_0
[h#Y<bXzT%5j:KaYZx:Q
%[Xp/9#vRxD':r<W%) j [
gj:\0U$4/#+j_2[_yxejZ
ap79k<9.mj6GVU]xaY=;X)Jz
a079k<9[(j=33:kA+z>Y[Y
kU2<9zw!c3gh##/-sbe [
gh:\0U$#<23[V2[_5xwjZ
Fhy%:Qo4F.###Q-d7879k<9-u/79k<9-u/7\) sxP/9#yO%xP/9#yO%xP/9#yO%xP/9#yO%xP/9#yO%z
$hmCspX.H.\$oY
38 32/9r3di$4/#+9-u/79k<9-u/79k<9[(jBvw6B02<ydw6B02<ydw6B02<ydw6B02<ydw6B02<ydq
$W.7.<sv3CmM'[
4M39[(J=-,:=2'sI#9ed83T7X((E%h$,qp(/XUyx+Uc9mA6_D[uK$O*7kM;)P\>U'9e6
:O:_3WuKahL
)x+:=2'S># 9X J)7KLIw6($uQ+h' 23_3+(90*p!-u:o>iYy:9%]MV$\x5-%_o,8KLY
8M3Y=#9%) 0
'4k!7C0#8S/t:\0U$4/fqW[2<9ZW6b02<9ZW+*7Y(79;o9-U/79K<9- V79K<9- V79K<9- V[
a#0WD78\$Oq=24L
)C9r3duE#GsU9- v7Cs!=xP/9#y<BxP/9# 9XhH$+zk:\p $+zk:\p $+zk:\p $+zk:\p l
TCV!c8Z>R4s+*C0
'4k!7C=Ue#gS29- V7cS!=Xp/9#Y<bXp/9# 9xV)$+ZK:\P $+ZK:\P $+ZK:\P $+ZK:\P L
TCV!c8Z>R4s+*C0
'43W6%P2H60S!=Xp/9#Y<bXp/9# 9xF+$+ZK:\P $+ZK:\P $+ZK:\P $+ZK:\P $4T#qW[O\)/ 9dZ
Fh4t#Q%='G4\s0]778+# 9XUT$#<2Msx7.-/#+98gh## 9X1H;$##+]4'.m*2!=-g/0%q
$W.7.M*2!=-2,./9R3aS$U\Su0e*57X qW[pP_;Wi]D78+J()9cz.4\Y3)u0
oU*S!=-hy$8
o!uU2h#*! c.ij4\yQB2L$#<2([fy$)Cs!=-2,#Q+hi1:$,\((e1Tp7\[!=G(:9QPY
8CiYX+4(/xL6_jX($126DC z*6uY=8
o!u 280SPC:xZt%jP#/xFh6C 69CZYX+L)/xL8_jX($128DC z*6uY=#m2) -9ejq
$r$*P!Jj(9$\H#2);bahL
)Cu:=2'S># 9X H;74#Qw[P$u\((e%:p7% -/b:(X# tw[!t8z(39CiYX+u(/z
$3.Q+h/*:$.:#+N23/_3q
7W/v$#<2m$XzT%Vh:38GH#9Wi=a:ZbJ+:r[*P!Jj(9[\H#2);bah$U*((E%:P[
a=2)1-PIJW2j8za0'K-[Z
Fhi3w+*7H7<##Qw[\ 74#Qw[P$u\(Ce/:p7% -/b:(X# tw[!t8z(C9CiYH+L(/z
$3.Q+h/*:$.:#+N23/_-q
7W%t$#<2)$XzT%3pm9e7.4\Y:d[*77% -/B:(x# TW[!T8Z(39cIyb#=2)1-PIJQ
$]_78O<5<) 0
'4-l:=2'7=;W+*7h7<#O!C8z<7X -[Xl8_Jx($128dc Z*6Uyb#M2)%23.q+H/*:L
T*[!=G(:9QuY
38J9># 9XhH$#<23[*2'4/#+\x48_3wf=A:zXU+:=_78o<5<) 2,.Qu:R$*p!jJ(6
:I 4\d9Y0*7[
4#(9[(J=-,:=2'7bRW7WD78+#M+)1-*$JWF=a:Zxu+:=_78O<5<) 2,.qpH2F:L
T%T-/b:(X#Ttw[!t8z(36
e7sh;W007GJ8$):=2'7b]W7WD78+#M+)%23#q+H/*:$#:#+n23/_-Wi]aj$,*((E1tP[
atTW[!T8Z(>6
e77=5W007G[Mkt:=2'7bVW7WD78+#M+)%23#q+H/*:$#:#+n23/_-Wi]aj$,*((E1tP[
atTW[!T8Z(>6
BM8.'v 6
.ends ioi_inputmux
** End of subcircuit definition.
************************************
** Library name: rnr_spice_sanjay
** Cell name: io_cust_input
** View name: schematic
************************************
.subckt receiver in1_int in2_int net67 vcco vccaux lvds_out cmos_out sstl_hstl_out
+ input_optinv_sel in_to_ff cbnet1<39> cbnet1<38> cbnet1<37> cbnet1<36> cbnet1<35>
+ cbnet1<34> cbnet1<33> cbnet1<32> cbnet1<31> cbnet1<30> cbnet1<29> cbnet1<28> cbnet1<27>
+ cbnet1<26> cbnet1<25> cbnet1<24> cbnet1<23> cbnet1<22> cbnet1<21>
+ cbnet1<20> cbnet1<19> cbnet1<18> cbnet1<17> cbnet1<16> cbnet1<15>
+ cbnet1<14> cbnet1<13> cbnet1<12> cbnet1<11> cbnet1<10> cbnet1<9>
+ cbnet1<8> cbnet1<7> cbnet1<6> cbnet1<5> cbnet1<4> cbnet1<3>
+ cbnet1<2> cbnet1<1> cbnet1<0> cnnd1<13> cnnd1<12> cnnd1<11>
+ cnnd1<10> cnnd1<9> cnnd1<8> cnnd1<7> cnnd1<6> cnnd1<5> cnnd1<4>
+ cnnd1<3> cnnd1<2> cnnd1<1> cnnd1<0> cnpd1<19> cnpd1<18> cnpd1<17>
+ cnpd1<16> cnpd1<15> cnpd1<14> cnpd1<13> cnpd1<12> cnpd1<11>
+ cnpd1<10> cnpd1<9> cnpd1<8> cnpd1<7> cnpd1<6> cnpd1<5> cnpd1<4>
+ cnpd1<3> cnpd1<2> cnpd1<1> cnpd1<0>
+ cbnet2<39> cbnet2<38> cbnet2<37> cbnet2<36> cbnet2<35> cbnet2<34> cbnet2<33>
+ cbnet2<32> cbnet2<31> cbnet2<30> cbnet2<29> cbnet2<28> cbnet2<27>
+ cbnet2<26> cbnet2<25> cbnet2<24> cbnet2<23> cbnet2<22> cbnet2<21>
+ cbnet2<20> cbnet2<19> cbnet2<18> cbnet2<17> cbnet2<16> cbnet2<15>
+ cbnet2<14> cbnet2<13> cbnet2<12> cbnet2<11> cbnet2<10> cbnet2<9>
+ cbnet2<8> cbnet2<7> cbnet2<6> cbnet2<5> cbnet2<4> cbnet2<3>
+ cbnet2<2> cbnet2<1> cbnet2<0> cnnd2<13> cnnd2<12> cnnd2<11>
+ cnnd2<10> cnnd2<9> cnnd2<8> cnnd2<7> cnnd2<6> cnnd2<5> cnnd2<4>
+ cnnd2<3> cnnd2<2> cnnd2<1> cnnd2<0> cnpd2<19> cnpd2<18> cnpd2<17>
+ cnpd2<16> cnpd2<15> cnpd2<14> cnpd2<13> cnpd2<12> cnpd2<11>
+ cnpd2<10> cnpd2<9> cnpd2<8> cnpd2<7> cnpd2<6> cnpd2<5> cnpd2<4>
+ cnpd2<3> cnpd2<2> cnpd2<1> cnpd2<0>
+ lvds_m<8> lvds_m<7> lvds_m<6> lvds_m<5> lvds_m<4>
+ lvds_m<3> lvds_m<2> lvds_m<1> lvds_m<0> lvds_s<8> lvds_s<7>
+ lvds_s<6> lvds_s<5> lvds_s<4> lvds_s<3> lvds_s<2> lvds_s<1> lvds_s<0>
+ icbnet<2> icbnet<1> icbnet<0>
.prot FREELIB
7W j$#<2)$Xp:0:S25P2:S%v'%XA3M[;-/Bh0.#5FM= yh;Q
7W h$+')TC$;V7959jD78%#Y%K=M'79/%MXd\%/=05PG<8<[y
38s$4\PQw['$4\uQw['$,9;<cMc*P#=6%0g>wUe:R- /6K1)+xL<yzsUHvq$,9;<cMc)P8
_f\pu.\M3v9IPv9/9_')23+dkQorH%7%yOBdo#X1wf\pu.9MLv9IPv9/k_$)0
o,9;<C0C9p#=6%0G/WRE:r- /6Z1>+Xl<YZS<huQ$,9;<C0C5p#=6%0G/W3Ey
8IPv9/k_/)2<9zw6B02<sGV:\p $+G/'0E2<sGV:w[H.4\2:w[J.4\2:\0u$+G/'0E2<sGVY
88Dx6%yOBdDxR:q
7W 2[-\) 'R)*p#/[=2'5W;jV9>/80sU_UJQ$S0 9x%Cs<1W%-[(Jbm3>+XAX#<2chu)%[
a/[=2'5W;UV9>/80sU_U Q$S0 9x%Csx1W%-[(JbmU#+XAX#<2ch%v%7gf+*7j#buEy
8>/80Su_'jq$s0 9X%c5<1w%-[(jBMu>+xax#<2CH%)%7GF+*7J#B-e:k3Zt%-1C[)0
oS0 9x%C5x1W%-[(Jbmp#+XAX#<2ch v%7gf+*7j#=uE:K3zT%-132)2[-\) 'Rh0p8
_%-[(jBMP>+xax#<2CH )%7GF+*7J#=-e:k3Zt%-13[)2[-\) 'rHpP#/[=2'5w]eY
8>/80Su_s)2[-\) 'rT%7GF+*7J#$1w%-[(jBM4v9>/80Su_:)2[-\) 'r)%[
a/[=2'5W-E:K3zT%-13+XAX#<2ch1Q$S\ o'Rhsp#/+=Pj#=-E:K[zVbmp3+Z
$[#\;CH :%7G +%%c;P#/+=pJ#>1w%=[ 5wUe:k[ZvBMHv9>Z8y-1p+xa8#du_:)0
oS\ o'R)%7g +%%C5p#/+=Pj#=1W%=[ 5WJE:K[IVbmp#+XA8.DU_[HQ$S\to'Rh(p8
_%=$ 5w3Hv9>Z6y-13i)2[#*;CH s%7G 2%%c7J1w%=$ 5w3uv9>Z6y-13[)0
oS\to'RhPp#/+]Pj#E1W%=$ 5WyE:K[IVbmjV9>z6Y-1)+XA8.DU_I)2[#*;ch/QL
TG 2%%cSP#/+]pJ#B1w%=$ 5w3e:k[ivBM+v98Z56C  9>/80Su_ufq$+G/'0E0
o+g/09.MJ6%v'%Z
FhJ#/[=2'7w;Lv9>/80SP_u*q$s0 9X cS$1w%-[(j=M3p+xax#<23HUs%7GF+*7H#J;eY
8>/80SP_u%q$s0 9X cS=1w%-[(j=M3(+xax#<23H%e%7GF+*7H#BYe:k3Zt%31C$)0
oS0 9x C5$1W%-[(J=mUP+XAX#<23h%S%7gf+*7h#b;E:K3zT%31c')2[-\) [Rj7p8
_%-[(j=Mu(+xax#<23H e%7GF+*7H#=Ye:k3Zt%313$)2[-\) [rH9P#/[=2'7w34v6
:AX#<23h S%7gf+*7h#=;E:K3zT%313')2[-\) [Rh7p#/[=2'7W3+V9>/80sp_()0
oS0 9x C*p#/[=2'7WuE:K3zT%31)+XAX#<23hVQ$S0 9x C)p#/[=2'7W;Ey
8>/80SP_')2[-\) [rH%7GF+*7H#X1w%=[ 7w33v9>Z8y313')2[#\;3H H%[
a/+=Ph#=JE:K[zV=m,V9>z8Y31e+XA8#Dp_$)2[#\;3hJQ$S\ o[R+%7g +% C)p8
_%=[ 7w;e:k[Zv=Muv9>Z8y313+xa8#dP_/)2[#*;3H e%7G 2% c7>1w%=$ 7w3Jv6
:A8.Dp_[JQ$S\to[Rh0p#/+]Ph#=VE:K[IV=mpm+XA8.Dp_[%Q$S\to[Rh7p8
_%=$ 7w3+v9>Z6y31#+xa8.dP_s)2[#*;3H*q$s\TO[ry%7G 2% c0P#/+]pH#H1q
$K[IV=m3V9>z6Y31c+XA8.Dp_[)2[#*;3h1Q$4\pqW['$S0 9x CsE1W6K>;\)8
_6k>D$m$2QR.;v[
4#(98AX#<2_')2HS0 9xRh%7c/[=2'#x1W<b7l./Z2FC.MJ7c 3C8zJ7c cC8zJ7%YobDd\%8
_007g[mKT:m4'.%'!99>oW9/VrXxP[s[!79-a[m#y;*_gh#Sw!m3gh-$[Y
38J$4\s md\ 7C 207gW.S#+\dut,#VrXdaW\*w007gj8$):w.7.4\TrXMm'[
+!+]6dJ[
.ends receiver
