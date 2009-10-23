Board specifications for ROACH 1.0.2.

1. Bare board workmanship and finish in accordance with the latest revision of
IPC-6012: Performance Specification for Rigid Printed Boards.

2. Assembled board in accordance with latest revision of
ANSI-J-STD-001: Requirements for Soldered Electrical and Electronic Assemblies.

3. Pad finish to be ENIG.

4. Solder mask to be blue LPI.

5. Silk screen legends to be white.

6. All dielectric layers to be Isola 370HR high temp laminate.

7. All conductor layers copper thickness specified in table below.

8. Finished board size 12x9.6 inches 305x244 mm. Ref. Dimensions and mounting
holes consistent with ATX motherboard specification v2.2.

9. Layer stackup. May be adjusted to obtain desired impedance targets or
accomodate manufacturing processes.

LAYER         DIELECTRIC cu. FILE
top paste                --  smd001023.pho
top silk                 --  sst001026.pho
top mask                 --  sm001021.pho
top                      0.5  art001.pho
             4 mil prepreg
ground1                  0.5  pgp002.pho
             5 mil panel
route2                   0.5  art003.pho
             5 mil prepreg
2.5v                     0.5  art004.pho
             5 mil panel
route3                   0.5  art005.pho
             5 mil prepreg
ground3                  0.5  pgp006.pho
             5 mil panel
route4                   0.5  art007.pho
             5 mil prepreg
assorted                 0.5  art008.pho
             see * note. panel
3.3v 1.5vaux             0.5  art009.pho
             5 mil prepreg
route5                   0.5  art010.pho
             5 mil panel
1.0v 3.3vaux             0.5  art011.pho
             5 mil prepreg
route6                   0.5  art012.pho
             5 mil panel
1.8v                     0.5  art013.pho
             5 mil prepreg
route7                   0.5  art014.pho
             5 mil panel
ground8                  0.5  pgp015.pho
             4 mil prepreg
bottom                   0.5  art016.pho
bottom mask              --  sm016028.pho
bottom silk              --  ssb016029.pho
bottom paste             --  smd016022.pho

fabrication drawing      --  dd001024.pho
Assembly Drawing         --  adt001027.pho

* note -- adjust to obtain a nominal finished board thickness of 93 mil.


10. Impedance control
** 	Differential refers to 100micron spacing, 136micron width pairs on outer layers.
*** 	Single ended refers to 100micron width trace.

LAYER		TARGET IMPEDANCE
top		100 Ohm +/- 10% differential **
route2		50 Ohm +/- 10% single ended ***
route3		50 Ohm +/- 10% single ended ***
route4		50 Ohm +/- 10% single ended ***
route5		50 Ohm +/- 10% single ended ***
route6		50 Ohm +/- 10% single ended ***
route7		50 Ohm +/- 10% single ended ***
bottom		100 Ohm +/- 10% differential **

11. Bids shall include fees for electrical test of bare boards as a separate line item.

12. NOTE RAIL BORDER EXTENSION ON ALL SIDES OF THE FAB INDICATED ON ASSEMBLY DRAWING.  USE V SCORE ON THE BORDER RAILS FOR SEPARATION PURPOSE.
LINES ARE 15 MIL FROM BOARD EDGE.  PLEASE CALL TO CLARIFY IF UNCLEAR.

Please direct technical questions or issues to one of--
Technical points of contact.

Henry Chen
Casper Group, BWRC
Berkeley California USA
510-666-3121 / 408-806-9730
hchen05@ssl.berkeley.edu

Francois Kapp
South African Square Kilometre Array
Cape Town South Africa
+27 21 531 7282
francois.kapp@ska.ac.za
