******************************************************************************
* *
* TEXAS INSTRUMENTS INCORPORATED
* Standard Linear and Logic Group
* HSPICE Model for SN74AVCH4T245
* PROPERTY OF TEXAS INSTRUMENTS INCORPORATED. UNAUTHORIZED
* REPRODUCTION AND/OR DISTRIBUTION IS STRICTLY PROHIBITED.
*
* THIS PRODUCT IS PROTECTED UNDER COPYRIGHT LAW.
* CREATED 2004, (C) COPYRIGHT 2004, TEXAS INSTRUMENTS
* INCORPORATED, ALL RIGHTS RESERVED
*
* UNLESS THERE IS A SIGNED, WRITTEN AGREEMENT TO THE
* CONTRARY, TEXAS INSTRUMENTS (TI) IS PROVIDING THE IBIS
* MODELS AND WITHOUT ANY WARRANTY, EXPRESSED OR
* IMPLIED. TI ASSUMES NO LIABILITY FOR:
* 1) THE ACCURACY OF THE HSPICE MODELS PROVIDED TO YOUR
* COMPANY;
* 2) THE PROPER FUNCTIONING OF THESE HSPICE MODELS IN YOUR
* DESIGN OR FOR ANY RESULTING APPLICATIONS; OR
* 3) INFRINGEMENT OF PATENTS, COPYRIGHTS OR INTELLECTUAL
* PROPERTY RIGHTS RESULTING FROM YOUR USE OF THESE HSPICE
* MODELS.
*
* TI PROVIDES HSPICE MODELS AS A SERVICE TO OUR CUSTOMERS.
* YOU AND YOUR COMPANY SHALL NOT DISTRIBUTE, SELL OR GIVE
* THESE MODELS TO ANYONE ELSE WITHOUT PRIOR WRITTEN
* PERMISSION FROM TI.
*
* TI RESERVES THE RIGHT TO MAKE CHANGES TO OUR PRODUCTS OR
* TO DISCONTINUE ANY SEMICONDUCTOR PRODUCT OR SERVICE
* WITHOUT NOTICE, AND ADVISES OUR CUSTOMERS TO OBTAIN THE
* LATEST VERSION OF RELEVANT INFORMATION TO VERIFY, BEFORE
* PLACING ORDERS, THAT THE INFORMATION BEING RELIED ON IS
* CURRENT.
*
* PLEASE BE AWARE THAT YOUR RECEIPT AND USE OF THE HSPICE
* INFORMATION PROVIDED SHALL SERVE AS ACCEPTANCE OF THESE
* TERMS AND CONDITIONS. IF YOU DO NOT ACCEPT THESE TERMS,
* YOU SHOULD RETURN OR DESTROY THE HSPICE MODELS AND ANY
* OTHER ACCOMPANYING INFORMATION IMMEDIATELY.
* SN74AVCH4T245
* HSPICE NETLIST file built on Wed Apr 28 10:11:02 CDT 2004
.SUBCKT SN74AVCH4T245 PE1 PE2 PE3 PE4 PE5 PE6 PE7 PE8 PE9 PE10 PE11 PE12 PE13
+ PE14 PE15 PE16
***PLEASE INCLUDE ONLY ONE PACKAGE***
.INCLUDE 'soic16.pkg'
* .INCLUDE 'qfn16.pkg'
* .INCLUDE 'ssop16.pkg'
* .INCLUDE 'tssop16.pkg'
* .INCLUDE 'tvsop16.pkg'
X_SN74AVCH4T245__DIE PI1 PI2 PI3 PI4 PI5 PI6 PI7 PI8 PI9 PI10 PI11 PI12 PI13
+ PI14 PI15 PI16 SN74AVCH4T245__DIE
***PLEASE INCLUDE ONLY ONE PROCESS***
***NOMINAL or STRONG or WEAK***
.LIB 'sn74avch4t245_process.lib' NOMINAL
**
** No globals were defined outside of .SUBCKT calls...
**
**
** The following netlist has gone through the hspice netlist cleaner,
** version v2.0 - Nov 20 2003
** on Wed Apr 28 10:11:02 CDT 2004
**
* .width IN=256
* .echo on Expansion of
* /share/sll/db/avc4t245/da/avch4t245/SPICE/avch4t245.spi ()
** Added by cleaner script...
.SUBCKT SN74AVCH4T245__DIE CVCC S_1DIR S_2DIR S_1A1 S_1A2 S_2A1 S_2A2 CGND
+ CGND__0 S_2B2 S_2B1 S_1B2 S_1B1 S_2NOE S_1NOE CVCC__1
.prot FREELIB
6b=OTx#/Z=P2[O\;qC12VS#+66
-Ug\<p:K-A[7gY%KDG77D/:/-0
[S9/%5%2[+g/'9>!8Y#+HU$0
[S9/%- 2[+g/[9>!8Y#+HU$0
'6/;%\>Agb#/6K>;$S2 o9>!8Y#;q=cGV#X)FrX;:0[(3:u0
'6/;%\>AX=#/6K>/$S2 o9>!8Y#;q=cGV#X)FrX;:0[(3:u0
'-:) 5XA<Sgf:KgzV70#Zj2'$U*p-$V-*7%t3)F+L
)0[9X32[+G/'9>!8y#F!N_(j7%T3)f+$u*P-$v-*[
4f!x h$9/p'[XU.=0p:bDhJ8c$390G7%'#[[XAa#DW%\>Ag7gY%K32X4sS[fZ
Fx4SPC90g71-w<c /57zs3X67G=#kQ[73h-3w%N[ $s9/%5xa<sGF:-8'.-hq
7-8'5=#Kq'=h$9/U[[XU.bs5!5 2/6-2;W3h$S2 o9>p[S[W%\>AX70# C3>L
)0# '%2/6-$C90g5--w<c%':4[P:BdJj8CF39>!8y#/6k>;$s9/%-x/h%/FA6
edT=#Kq[P7:7ZS3=.($9/p Y8;77ZS3x67X=#/Z=P2[+g/'9>p[S0W0j_;$M:[[9.(.hsQ
7M2j$9/UoW62/6- 0*XU.bs5!5 2/6-2;W3h$S2 o9>p[S[W%\>AX7T[T5Xd d0W0*DSJ[
4/6K>d$M:['9.\ -#/6K>;$S9/%-XAa#DW%\>A.M:[q5Z
[$!</AmxD8[
,WH*>>w7T :*eIg#Z#0=Xd 7eKa56(-9%==%3Wg+gI '/+-Y[''\>>)%-IPQ0IHS<'[W7GX/+K2WZ
[$kfq
H*[ /7Z w:=p[/V2c:VG.Yc)y
e0mxsW2:-8'.-hw'932j8C$:X67x7GD+%xa<sG$:k-a[-8
/25p;$1#/z=p2p!;TY
k$;v-#F:kGZv7jXM]z
F.6z/;5x;$s2 O92uvH4;Y
3dg/s'F:-xaA#dw9Bps'y8
o''32G70w y8/$s9/%5xa<sGF:kGZv7h$fJ37j60*Y
33JG70w'973h1#/6k>/$s9/%5xaA#dwA5I\x4Ss[Fz
-t#dk:-8'.-hq
59B([/TW0=Z
[$!</AmxD87<o25[uhm\w0Jz
[$5z*'y2w/,%'O-l;<sv2C:vwv1E$6k;sjBv4=B$7[0E*'R_/h%/FAe0ih7).Y
e0mxsW2:F=L -C2Q-;2h##VrXx':4#/6k>7$s9/%mxaA#dq
7CD/D7Zp:K-A[4#/Z=P2XrZ*0rP0
'6/#+\ 2/=#Kc9>p[ScW%n[ $4\Y29cIy<JWi=aj0[
4SqW[p57ZU:bu2[+g/!9>!8Y##+\$2,.q4(9czybRQ
7CD78+VW Y82J8c :K-A[M#/Z=P2H#9t:d$**x#M+)J:L
)/s0072/H#VrXxa<sGV:X67$%'#+9>P[s*w%N[ $m$2'6
eG.8<Ko98z$93W%n[ $8/ i*il$Uc %)1234\/-'BE97'M-[*-77'(3'H0
'6/K9bP2/=#/6K>7$S2 o90(/Y8
oQc>P[s*s;*_2WRSw%\>aW7S5!=xa<sGT:kGZv7Gy%k$g:0:s<*0 .-8
o yxuS7zu:X67$9vw%\>aW7GD+%x':1\kf57(.)vq
H*[ /7H$Fj37J60*y
ax-tshV:m[0
N7+)%f.2w##)7]=z/4T :M_2-9H$;*LU3,e;[Q=p[hsU>IL g5[Y%f/'5hR'<]8AT5T! 5BU64#bB6
BU\-g\ 9.MJ1##+9.MJ7*vi*62J8cW Y8z$S9/%]XAa#DQ
7CDO6j#t0d23$9VW Y826MX);9>!8Y#9q]>>)6*/a9i*77X(3'V0
'6/92:XIwU<5:=gh$4\W<:XAa#DWuC$ADh/t%fXly=#M-[%+L
)/s+[xiA=##+90)$s2 O9Mg8shs+k;23_3wI)%:p[
4Sq=%2/j#2;W[2[O\;:KgzV7kS+K;G8SHWF) 2,_-4(6
eG.#;W+n 2H##/Z=P2[O\;:ODz[// %fXly=#M-[1:L
)/s+:xZA=#2;wxaA#dw%N[ $\/ %FdZ[/#=-[x4Y>jq
7CDzwrsp:b%28O3W%n[ $S2 o93;3,[K 9izy=#9cOa)Z$5WT)%:$U\(mI10
'6/ 007j$9-$:=gh$S2 o9>!8Y#f'ri;/%#=+) 2>bk(mEJY$U\(mI12 _-+y
3dg6=#/6k>i$.2P:w[2[+G/29>!8y#9Q]>>)6*/A9I*77x(3'10
'6/tc9>p[S*W2n 2J8c :K-A[.#/Z=P2>6*/a:DI[/#=-[X4y=R+y
3dg6m$239>P[s*w<[xiA=#T0D23$s2 O9Mg6shiQ]>>$uQHCixLY=8
oQc$D\%-w%\>a67zP'9$!77*VI*62[o\;:odi[/vs2k;23_3wI)jJ0[
4SqY 2/=#vRxXAa#DW;C[4T,%WiW[Ayx#=!=>*5!]h:YaSP7'M-IV0
'6/5c9.MJ7ZU:KgzV7'S+d2l37X#+Ka:$,c %)%-;$#5-:12:Uq4P6
eG.8;W<[=2wrsW%n[ $8/ i*il$Uc %)1234\/-'BE97'M-IV2:_V+y
3dg:H#VrXxu51#/z=p2:6\m9RI2,4\/-/xLh#G(Cefy$8x(pix3YHjq
H*[ /7T! 5Z
[$!</AmxD8[
,WH*>>w7T :*eIg#Z#0=Xd 7eKa56(-9%==%3Wg+gI '/+-Y[''\>>)%-IPQ0IHS<'uC$ADh+K2WZ
[$kfq
Hb4/[GsWuC$ADh# [9[ $#2W+bXAa#DWi)V23_3Q
o[XAa#DW+-X 8UZ![C=2kK)=$'Bv9t5.5vc$9t;xcS]KNx+43S/1L
y-w%N[ $#0wO=Cu\-/T:7t=rk%_CehyO$f_lD:yOJ+uE;][5c,+h$%kK[
kp:=P28O# <9[/$.g*:da1RKX<(E*j4C,pR7Xly])bLvi5P!;3>;9:ZI-.$/B:PxVlB;9h\]8
_:5p*Kk)B3e*T7i,BI81-S<f.5/b+7>v.ba iK7[k-7t=r=+JW[*[ruA+huvk4FjXp[hs4c,P27z
$$.d(xVt=r=+JW[*$ruA+huvk4F-.5/bT5cf<30Y269QRlVt=7!UJ3$:=,TjXMi]knBf<(e*J4c,Pr7z
-t#dk:odi[/vq
59B([/TW0=Z
[$!</AmxD87<o25[uhm\w0Jxw//[59q0L35dF=5-a)%-ipqp;-19/A:7J)<Ek2w>(--[=f50'z9*#Y
ax=4[
+KR->]J70$Fr=UJ7\p:=g289#/Z=P2>bk(mEJY$dq)+x23.#$9qM_G6M%:qj8za0'K:d[*)<JQ
$9izy=8
;39>!8y# 39pZ,9$FQ5x1rk)Ph'j$rDEuba -0T)[='\H4F)9Co]$9c,P3e/s4FjXp[hs4]8
;C9>!8y# 39pZ,9$FQ]x1rk-<lV -5$ABtq%kn=+4$V_w533.5VMJ>cAHb8 HzHv.ba1-(BfRY
3dg>#3w<[xZA7\k:kGZv7Ks+k;g8shwf)YL8F3R:DA1,#,Px6
6/g,# 390h$])b3[1:-KX =']KNK-x)Q%K4]#K%5i(y=+U)(X'[=q3H(u(=x;W K%*=<++9!1tL
!< OBx/G,%$<Xz
[$!</AmxD8[
,WH*>>w7T :*eIg#Z#0=Xd 7eKa56(-9%==%3Wg+gI '/+-Y[''\>>)%-IPQ0IHS<'uC[AD!Zt!6
92RC8
X<03aM%#9Q=>>$#dw+NxZ/7GD+%x4Y<#=-[z
o77\;:=G289#/z=p28shwI)Y=ru,+h$%k4F3!x9I*Kk)BlR\:zJ;iba1-(Bf_(e1:pHY.ba mK[
aW'%a1RK)pH$*h(f)M$/B)0CF<(EVh*hF.5[$1$1Z(XvT=7!uj3$9=,tJxmI]KNx+43S/K4f3tX6
:26YqrLvT=7!uj3$:=,tJxmI]KNbF<(E*j4C,pR7XI/_7bLvThZIupw8T4ox+3P;][5C,+H$%K4f3!X6
B(8YZWuC[AD[
,WH*>>w7T y
ax-tshV:m[2t)*$+B8D87t[:q0>G8<'<RIwv-E$6k/'5Hr'O5l;<shi '/+-9*#%*l3.#x)fRbu648
<:V]0
Z9$f%472:6\M9ri2D42*:r.4$S2 o964y<#5-[,234\/-'BE97X#+Ka:L
!*$;5M26XQRlV64=!;+W;9-(BfRY
% 2[o\;:R.4$y\m<03gG[
aWXvT=RK'M*Eu:(C,bLY\jNK;UmQ$:4CeIc/]$5!Rh$r8z[tX#+K][R8X_iW[A4Ce3BA1-0=yIB7Z
-61'$U9$HY])B;D\-SXU.5e*J4]8
;C9>!8y#*!N;2v#xkr-d;l
T#RlVt=r8x6hu1T4F)B;!%[rJ-3=] k45vu(;:Jz<5_fw[aOuC %;9=:uAm!=>k45;.5/b+7>v.x6
BIg8[9:]%*kK'M*Eu:(C7Q
oUXAa#DWFMc2V#XKR-DIL
T#RlV%wSc,B;D:4h#G_lVt3=B,BM'Uwr.-<h$%k4cEiC/][r8x6hu1T4cAuhij$34\/$D8Z[c,+h$%kK[
+t'Y=O$.;(Xv64=!;+w;y0
Vh#/Z=P2D42*:%[4/r0S26
:2kK)U=U][R8X_iW[AoK)b;!%[Rj-3=v$)N!uUB;]W)bJ.5v64=!;+w;]$5!Rh$r8z[tX#+K][P!uUB7Z
3x7zP:B%2Kk'6l'9=SB;'lV64nX+JC;\:zJjJb;]kK7z/'R2*7!j,p97a7_-X>i25pJ8
_:X>JY>+4(*\:9[
'*39;7a/#K39y=sb;'Lv64Nx+jc;\:ZjJjB;y2/S[=9) -PERW K *5!]49!1)$%gU-[BjP<<6(IZ
3dB#kC9ID,77BM'Uwrk'm5/bT5c.+hu1T4c7w<k=Lt_3X((v2js3(Cef+t3j3:X>JY=+u(i25p<8
X9=pu$8/ I*ILl
F#X9k;D$m\q
59B([/TW0=X('.[ <W.z$M:Q
59LUD1')=bil-Y0''\>SJbV4=%=Wg+g*>x%S05Zt!K2WJ8[ <r='T64IHb$7$KFQ
Hb4/[GsW Y=z/,[29CeS$4\W!=32wd:#:M4'$.TM9YXAa#DQ
7CD78+3W0j_7$9-W2Mc(:7gd+%X78+4t:r[*77%t-[X48_-4:d$*0<8
oQc[H$9;w!=xu77GD+%xo.#G*Q=>>$,QP:DAsp[
4Sq=%2wrsW!=32/=#/Z=P2>6\/aC[AD7%(39c*7>JQ
7CDzs7Zp:b%2[O\;:KgzV7kS+K;G8SHWF) 2,_3l(6
eG.#VW0072wd:#:KgzV7gd+%XO.#g*q=>>$,qp:dah0[
4Sq] 26MX);90)$M$2:].4T8#/Z=P2>6*/a:DI[/#=-[X4y=JQ
7CDI57*vi*62/h#Km9$d,0'W%n[ $\/t%f/G6SHWF) 2,_u4y
3dg6J#T0D23$9;w<'xiWu<5:kGZv7Ks2k;s..G*:DAJp7%(36
eG..VW2Mc(:7T! 98zX7ZI:KgzV7kS2K;S..g*:rah$UqjP6
B(8YZW Y=z/,[29CeSL
F#X9k;D$m\q
59B([/TW0=X('.[ <W.z$M:W=b;;:0eKFrL X5[Y%:7j)<e;'Q=p[/V2c:VW/.c/9Q8z<)*x<]80
N7).y
e0mxsW2:w[P'.##+9.mj7*VI*62[o\;:R$*77% -[x46_-+:D[*7X8
oQc[H$m$2:w[2[o\;:kGZv7Ks+k;g8shwI)Y48F3R:RA13#,Px6
eG..3W2Mc(:7T! 98z$.TM9YXAa#DWuC$ADh/t%fXly]%t5[y2,_7M2A 1L
!< OBx78+4TY
ax-tshV:m[0
N7+)%f.2w##)7]=z/4T :M_0
N7eKa56(-9%==%3Wg+gI '/+-Y[''\>>)%-IPQ0IHS<'%\>A66')TC0(/Y/fHb$7$KFQ
Hb4/[GsW%\>A66')TC0(/Y/f:M4'$.TM9YX':4\W%\>A67gd+%Z
F.6dP:k-a[.#T0D23$y/kA4Ogv=/D<%dJ(s#$;*=*7<#[-[x4YJ8
oQcpJ$s9/%]xiWu<5:kGZv7ds+Dd 8u<=f9=3t1Q3(/z
F.6C 6[xu(7zi:].4t8#/z=p2h#9T:D[*)7xT-[10
'6/#+\%2/=#Kc973H##/Z=P2H#9t:d[*7x#M2)u:L
)/sU=U:$9vw<'xuS7GD+%xo.#G*Q=>>$,QP:DAHp[
4SqO[)s7Zh:bV2/=#/Z=P2>6\/aC[AD7%(39c*7x8
oQcMZ)X#k3/xu7X#/z=p2[o\;:odZ[// %FxLY=#m-[10
'6/92U12[+g/29>p[S*W<UXIwU<5:KgzV7kS2K;S..g*:rah$Uqh(/Z
F.6KTM[xa<sGT:k-a[.#T0D23$9;w%N[ $\/T%F/g6shwf) 2,_r+Y
3dg>.;u:k-a[.#VrXxu07z3:kGZv7Ks2k;s..G*:RAH$uQ4(6
eG.\*3m9>p[S*W<2XAa#DW<[XAa#DWuC$ADh/t%fXly=#M-[10
'6/92:126MX);90t$93+:].4T8#/Z=P2>6*/a:DI[/#=-[X4y=JQ
7CDzT=#K#9>!8Y#/Z=P2[O\;:ODz[// %fXly=#M-'V0
'6/ 9'XU97Zh:bF2[O\;:ODz[// %fXly=#M-'V0
'6/ 9UXU07Z4:bH2[O\;:ODz[// %fXly=#M-'V0
'6/ 9:XU*7T! 9.MJ7gd+%XO.#g*q=>>$,qp:daj0[
4SqY2UV7*vi*62/<#/Z=P2:6\M9ri2,4\/-/XlH#g(cEFY$8X(3$Bh$8qpcSZ
F.6')<%%2WRSw<2xaA#dw;c[4t,%w;) J*7'm-[*-77%#+kAJze5wIw[aYX8
X9=pu$s9/%]d3tD/k9Bpgx[
,WH*>>w7T y
ax-tshV:m[2t)*$+B8D87t[:q0>G8<'<RIwv-E$6k/'5Hr'O5l;<shi '/+-9*#%*l78+*X<]82rc8
X<03aM%##+\$2h##VrXxiWu<5:kGZv7xT-'12,#QP(6
eG.#3W0072H##/Z=P2[O\;:ODz[// %fXly=#M-7czN=7Q
7CDI77*vi*62wrsW!=XIwU<5:KgzV7kS2K;S..g*:rah$Uqri]9hk[
+)+%02H#9ty
ax-tshV:m[0
N7+)%f.2w##)7]=z/4T :M_2-9H$;*LU3,e;[Q=p[hsU>IL g5[Y%f/'5hR'<]8AT5DS<f,#Z9*#y
ax=4[
+KR->]J7DS<f,#$\c RbXI3rZWT) 2,_-xP9=3T1qp(/Z
 77*=rBxoh#$k:% gA9dsC$>2Kk[5959:z<3L>;Y0
Vb#tF002>4\!<9Pz,0%=:7T=RK[595L44f;.$vT=,t;.5U][ CF<(EVh*hFry
e2Zv9#;QB;]E[
,WH*>>w7T y
ax-tshV:m[2t)*$+B8D87t[:q0>G8<'<RIwv-E$6k/'5Hr'O5l;<shi '/+-9*#%*l .#xX<]82rc8
X<03aM%#;Q=C2>4\!<9$L\9#/z=p2G8<$-[10
V=#tF002>4\!<9Pz,0%=:7T;:0[<(EVh*hFry
%%2[o\;:o8Z\9#;+D0mx6[wxVt;:0[<WevknX+43s/kK[
D3:KgzV7k#+002V#XKR-DI$])b>ATU_8sb'Y2;NI+4B;][P!uUB7Z
-t#dk:%dZ,[
,WH*>>w7T y
ax-tshV:m[2t)*$+B8D87t[:q0>G8<'<RIwv-E$6k/'5Hr'O5l;<shi '/+-9*#%*l/\9hVf%bu648
<:V]0
Z9$f%472XrZ*0rP2HM#t0d23$S2 o6
eG.Y3W<UXIwU<5:KgzV7DS+dD 8U<=F9=3T1qp(6
eG.Y-W<'XU)7DS<f,#.Y3SZbPG5IgWi)u2 _-W'Y2;y=J+y
3dg>#3w<'xu77GD+%xaA#dwUc[ad6\/A9C*)!rwf)/0
'6/9+IXU77cv:KgzV7gd+%XO.#g*q=>>$,qp:da+L
)/sU] 2/J#k>90H$.tm9yxaA#dwUc$adH/T%FxLYB#m-(z
F.6KTp9$D,0'w<[x7W7*VI*62[o\;:odi[/vs2k;23_3wI) :l
)/s;'x7W7zu:kGZv7's+D2L37x#+kA:$,C %)%-;$#5I) s$8Qi(/z
-t#dk:-4udm%;Y
ax-tshV:m[0
N7+)%f.2w##)7]=z/4T :M_2-9H$;*LU3,e;[Q=p[hsU>IL g5[Y%f/'5hR'<]8AT5Z)<%BU64#bB6
BU\-g\ 90(/Y##09$d,0'W%n[ L
)/s+[xiWu<5:].4t8#k39>!8y#9Q=>>.#G*:RAH$uQup6
eG.#-W<[X7w7cv:KgzV7kS+K;G8SHWF) 2,_-4y
3dg8J##09>!8y#/z=p2[o\;:odZ[// %FxLY=#m-'v0
Z0\;<90(/Y8
<:e2adm#V+6
92Z0g*09.z$04t'=07w##vT9LUD1')=bil-Y0''\>SJbV4=%=Wg+g*>x%S05Zt!K2WT9DI7%BU648
<:V]0
Z9$f%472T9DI7%XIgY#/Z=P0
V=#/Z=P261DWo=c(3,#rL$9=*!R<cEVKN!uU5E*j4]8
;3-xaA#dw25p2v#x)fRx1ri,BEev[5!r.5e*Jn!Uub7z
 57GD+%xiGy#;+D0mx6[w3(fyl
y-F:kGZv7*$O9pZ,9$FQ5xH;e5q
oUXAa#DW25P2V#XKR-DI$b3jy
%U/$s2 O9$;v7d IB4/..#u3$z
F.6K 390H$9-w%N[ $s2 O9Mg8shs+k;23_3XCix4YB-4Y
3dg>#3F:BU2/H#/z=p2[o\;:odZ[// %Fx4YB-4:RAHzBrq
7CD371#Kc9>!8Y#/Z=P2:6\M9ri2:_R+w964yI+UP9c78Sq+:r8z[_]x#:Z
F.6'P'-xu)7GD+%xaA#dw;c[4t,%wfw[aYe+,>9C78sQ+:yC*(!-4:yA+pi8
oQc6Hx7zu:kGZv7GD+%x3.#x)fRx3,_UXCix3Y<jJ:D8Z[_jwfw[aYe+,>6
eG.83f[90S$S2 o9>!8Y#5q=c(3,#=!=>*;!]I:d8z[_JW;)V:(7'M-$Bj0[
'U:]= $93W>/XU[1%)-[B:;<#2%[ajZhR)*/u2JS-(eEV:T3Jhy
y%/$.[;:BU2)X#k%5I(Y=++#ix'[=Quh:v(=X;w k%**!r+9!1yl
!< OBx(/yvoO6
92Z0g*09.zL
F#X9k;D$m\w93$;89CV+9.\$5z*'y2w/,%'O-l;<sv2C:vwv1E$6k;sjBv4=B$7[0EV9c/'z9*#Y
ax=4[
+KR->]J7T)q:72V4'W0*32J8c$3973H-3W%n[ $S9/%5XA<Sgf:M_\g7T[T-Z
a77S5!5 2[o\;:/b)6[
g3:x67X=#/Z=P2P!;ty
k$;v=#V9-xaA#dw(eUil
s*$O'x h8#/z=p2p!;TY
3dgv=#/6k>;$s9/%5x .9h\8cpH.oz;Q'*a$uQuhix\Y$#$;*=*5Xjq
7CD 57gY%K32[+g/[9PG//w:q% Ga9DSc$>2g8<$-'1:$dqh:dajZ<8
oQcp)$s2 O9>!8y#;QB;]E6dPQN0 .BU/:56(G_-+(9_*77x(Cev0
'6/#+\ 2[O\;:b%2/$#K3:XAa#DW!=-Ia7X -U12,.q4P6
eG.4\Y3/XUs7Zp390h)7gd+%X78+*Wi]a+P7X -U10
'6/#+\ j$9uW<[12/=VW%n[ $4\Y29cIy<JWi=a)P[
4SqW[p5x#KP90h57gY%K=2[O\;:W[p67Xt-2V2,#qIP6
eG.4\Yc[XU7b#K>9>p[S[W%n[ $4\Y29czy=-+:d$*7<JQ
7CD78+-U:bF2/=;W%\>AX7gd+%X78+*Wi]aY07X -:V0
'6/#+\%)$933:bH2[+g/[9>!8Y##+\$2,#qpc/X46_34(6
eG.4\Ym90S$%'#'[XA<Sg$:KgzV7c 6]X46_-4(9czyjJ+y
3dgh#9H:Bh2j8CF39>P[s0w%N[ $4\y29CZYJj+:D$*5<jq
7CDz77gY%K=2[+g/'90h97gd+%XO.#g*q=>>$,qp:daj0[
4Sq=%2/=5W<[V2/=RW%n[ $\/ %fDz[/#=-[X4ybRQ
7CDzw83W%n[ $93W<'XUs7Zp>9>!8Y#/%=.3a7X -212,.q,(6
eG.#T5c9>!8Y#K390Y$9uW<[/2[O\;:K>zw82Wi=aYP7Xt-(10
'6/t39>p[S[W<[/2/=RW%\>Ag7gd+%XO..g*>C$AD7%(39c*sxJQ
7CDI57gY%K32[+g/[9>p[S0W%\>AX7gd+%XO..g*>C$AD7%(39c*sxJQ
7CD3T9Dp:M2/$93W%n[ $8/ i*il$Uc %)1234\/-'BE97'M-[*-77'(3'H0
'6/59bPj$Yc5:b%2[O\;:YDz,0%=:d8z[_JWFW[Ayb+,)96*7byW;dah(!3Q
7CD3T9D3:KgzV7ZpP9>!8Y#5q=c(3,#5-[%v$8X(3$Bh$,c %)%-;$#M!=>*P[
4Sqb>377T)[9>!8Y#)<%/fV[
4Sqb>357D#;9>!8Y#)<%/fV[
4Sqb2UV=#K390h)7gd+%XUT9DQ
7CDUT9DU:b%2/=VW%n[ $9<Ko6
e':1\K'90)$93p:M_\X7Z4:K-A[1#/Z=P2J8[ <r='T64Iy
373G#zF:B*2/=jw0J_;$9]w%\>ax7GD+%x':1\kf57(.)vq
H*[ /7T)q:70
N7+)%f.2w#8
<:e2adm#V+92F61\k!m[2WD#'<F=3t5z=fqp/-19/>X%s05d$=5-adHSu>ilu64G)=k>ZW82X<]80
N7).y
e0mxsW2:k>ZW82wzy.m8y##+[x78B#VrXxiWu<5:kGZv7x -[12,.Qi(6
eG.#3W0072H#-WZY.M8Y#/Z=P2>6\/aC[AD7%(39c*kU\<37Z
F.6\u:m4'$4\P:N6D\#dw%N[ $\/ %FdZ[/#=-[x4Y]x 5[Y0
'6/t39$d,0'W<[X78=#t0d23$S2 o9mG6SHIq]>>$,qp:da1,.,pX6
eG..-W2Mc(:7ZU:W[j$.TM9YXAa#DWuC$ADh/t%fXly=#M-7cIN=7Q
7CDIs7*vi*62wrsW!=%2/=#/Z=P2>6*/a:DI[/#=-[X4y]Xt5[y0
'6/t>9$d,0'W0072H#3W<'XAa#DWuC$ADh/t%fXly=#M-7cIN=7Q
H*[ /7g/+M6!L
F#X9k;D$m\q
59B([/TW0=X('.[ <W.z$M:W=b;;:0eKFrL X5[Y%:7j)<e;'Q=p[/V2c:VW/.c/9Q8z<.2x<]80
N7).y
e0mxsW2:w[P6o#D;m4Zv7C :m4'$.tm9yxaA#dwI]AJp7x -[10
'6/ 39.MJ7c :n6d\#DW%n[ $\/ %fDz[/#=-[X4y]X 5[y0
'6/t39$d,0'W0072H##t0d23$S2 o9mG6SHIq]>>$,qp:da1,.,pX6
B(8YZW!=-Ia[
,WH*>>w7T y
ax-tshV:m[2t)*$+B8D87t[Y
axw//[59q0L35dF=5-a)%-ipqp;-19/A:7J)<Ek2w>(-s9/%c.\ 6[X<]82rc8
X<03aM%#/6k>gWD:s'9=D D#F0J_2[+G/'9>P[s0w%N[ l
)/s!=-J$9-w<(xa<sGF:kGZv7C 63$23#Q4:R$*07x -ux46_;q
7CD78+-$:bF2gM:[:K-A[-#/Z=P2H#9O29izy=#=2) 2,#qUP9cIyhJQ
7CD78+;W<SXU97gY%K=2[O\;:W[p'.#M2)u2,#q3:r$*07% -IZ
F.6C 6u32/$#F0J_2[+G/'9>!8y##+\Ei$u*(>/x48_-4:R$*77% -[z
F.6\P:BU2/J#/z=p2[o\;:odZ[// %Fx4Y<#=-[z
F.6\u:B 2/=#/z=p2[o\;:odZ[// %FxLY=#m-iz
F.6\3:B%2/=3w%N[ $s2 O9Mg8shs+k;23_3wI)v0
'6/ >90v$93U:KgzV7gd+%XO.#g*q=>>$Uq4:rahL
)/s2[12[+G/[90H57zP:k-a[-#/z=p2>6*/A:di[/#m-ixLY=8
oQc$)$s9/%-xu07zP39>P[s0w%N[ $\/T%F/g6shwI)U23_-+Y
3dg6H#/6k>/$934:B H$9rw%N[ $\/T%F/g6shwf)%:$uQ3Y
3dg6<#/6k>/$9-w<[ 2/=rw%N[ $\/T%F/g6shwI)U23_-+Y
3dg6$#/6k>;$9vw<[%2[+G/'9>!8y#9Q]>>)6*/A9I*5X#m-uz
F.6*J:k-a[1#k32xu7B#k>9>!8y#9Q]>>)6*/A9C*S7%(C/z
F.6*L:k-a[1#kE90H57zP)9>!8y#9Q]>>)6*/A9I*5X#m-uz
F.6*,:k-a[1#k3[xuS7Gy%k=2[o\;:odi[/vs2k;23_3wI)v0
Z0\;<9>p[S/vTjD;L
F#X9k;D$m\q
59B([/TW0=X('.[ <W.z$M:W=b;;:0eKFrL X5[Y%:7j)<e;'Q=p[/V2c:VW/.c/9Q37ad<2Hb$7L
F#Bb6
BU\-g\ 937ad<2:-4U$S2 o9iI7_uU:d$hy=J+y
3dg>#3w[002/B#/z=p2[o\;:odZ[// %FxLY=#m-:v:p[
4SqY 2/=#/Z=P2[O\;:YDz,0%=:d8z[_JWFW[Ayb+,)964y<#5-'1]L
)/s;'xu57zJ:kGZv7's+D2L37x#+kA:$,C %)%-;$#5I)v2:_-+.6
eG.8;W<UXU77gd+%X3.#X)FrX4H#g((9i78SqUH(J2:Uq4:YajPG8
oQc6s$9;w<2xaA#dw;c[4t,%wIw[aYX#=!=>*5!]H:yC*07'(C/,0
'6/5P90t$95W%n[ $8/ i*il$Uc %)1234\/-'BE97'M-IX3ybJ\y
e2Zv9#F!N_(j[
,WH*>>w7T y
a90
Nf#2a*X\w,%viW[!$!Z![K,'/7X);*X;VY<;:-o2J/<W%r2;80'W%MmOg#Dxy
a92j/<k99=3t7')4083ty##+9.3v0'w mx3t\ty997>t7zT!k2g>md)f9$;:1K) *6uz[
,<y
axoWyC[!*p2j/<wUc[ad7\) R8uj7:V;97>t7\/A90ihs<wUmp(3!+XY
e0mxsW2:odZ[// %FxZv7\D:=02[o\;:DA+$,QPY
o 28y# z9[u$s2 O9[ad7x(xVt4nX+JC;][7R7wf)Y=rk)=*/b)SHf<(e*J4TjX(/1s*cf<30Y0
o7[;-7T=R=+jw[*[RUa+HUVK4fJxP[HS4C,p27X;/_7bLv -(I3j5vc$P!;4B;9:Z<3l>;][7.7Q
$9$ y])bLv -(I3j$vc$P!;4B;9j4fJxw']KN=$r:]0*kK)bL[Bt(=u_Ld::ZjR.BA%KNx+jc;][7r7Q
H*[ /7kS+K;G8SHQ
59mdV4:#9%X'D0#;q=c280s=!b72 M'W f22V#X)FrXU64g):O. T,+xH6
BU\-g\ 9PG8U/;+d2l37k#+0026,$K:KgzV7[595ahP[
Dp:]iM/7k#+002V#X)FrX1R1')'A1-0=yIB7Z
 57GD+%xoh#$k:%[4/R0s'9Y=r1')'a*-0c,+hi V)c7q
oUXAa#DWuW[M/7D ib4/..#rLv/[R9_5 v=3T1,jHI]K4fJxw']1L
!< OBx .#xsO=C(3,8
<:o. hDC)O97>t7Ks2k;s$#<2fw0'$Dt5:X;($.G*:B$7[0#90%2Lz!+q
Hb4/[GsWuC$ADh/t%fXzX7\;:=g289#/Z=P2,_RWF) 0
V=#/Z=P28-#;+d0MX6[WXvTlob+l)8JKNKX_)8u-5>F.5/B+7>Vry
%%2[o\;:=32v#xkr-di$])BlVI$5!YH$2]$ruAH$ubJ*cf<C;9:zi-.x6
mh$#DW+nXz/7\f:]>>$UqrLvc[P!uUB;9h\]#=-7T=RK%6(Eu))C,+H$%Kox++(//v4C,pR7Z
$$1d(xVt=7!UJ3$9=,TjXMi]knX+43s/k4F3Tx9=uY])Bl[bT(=U<lD::zJr.ba1-0=Yib;9H6]8
_:]p*Kk)Bl[bT(=U_lD::zJr.ba%knX+JC;][7R7w2BA1rk)B3e*T7iABI81-S<f.5'][p!Uub;9H\]8
X9=pu$\/T%F/g6shq
59mdV4:#9%X'D0#;qb;]e7\) r8UJ7:v;97>T7Dpqn0 .bu/:b$7[0#90%2lZ!+Q
Hb4/[GsWoC0>m2/;3CgUV6-j%9m78rZW2r4U$dqp:dajZ<#$;*=*7xJQ
o[XI3rZWuW[M/7Dpqn0 .bu/:7T;:0[<(EVh*hFry
%%26,$k:o8Z\9#;+D2L377BlVt;:0['I;9)4T)BlD:)4F;.5J]knX+43s/kK[
+)+%02V6Z*.<D 762KoC%t[[
+!+]6dJ[
.ENDS SN74AVCH4T245
