Board specifications for ibob2 / roach.

1. Bare board workmanship and finish in accordance with the latest revision of
IPC-6012: Performance Specification for Rigid Printed Boards.

2. Assembled board in accordance with latest revision of 
ANSI-J-STD-001: Requirements for Soldered Electrical and Electronic Assemblies.

3. Pad finish to be HASL or white tin.

4. Solder mask to be green LPI.

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
top                      .5  art001.pho
             4 mil prepreg
ground1                  .5  art002.pho
             5 mil panel
route2                   .5  art003.pho
             5 mil prepreg
2.5v                     .5  art004.pho
             5 mil panel
route3                   .5  art005.pho
             5 mil prepreg
ground3                  .5  art006.pho
             5 mil panel
route4                   .5  art007.pho
             5 mil prepreg
assorted                 .5  art008.pho
             see * note. panel
3.3v 1.5vaux             .5  art009.pho
             5 mil prepreg
route5                   .5  art010.pho
             5 mil panel
1.0v 3.3vaux             .5  art011.pho
             5 mil prepreg
route6                   .5  art012.pho
             5 mil panel
1.8v                     .5  art013.pho
             5 mil prepreg
route7                   .5  art014.pho
             5 mil panel
ground8                  .5  art015.pho
             4 mil prepreg
bottom                   .5  art016.pho
bottom mask              --  sm016028.pho
bottom silk              --  ssb016029.pho
bottom paste             --  smd016022.pho

* note -- adjust to obtain a nominal finished board thickness of 93 mil.


10. Target impedances.  
** 	Differential refers to 100micron spacing, 136micron width pairs on outer layers.
*** 	Single ended refers to 100micron width trace.

LAYER		TARGET IMPEDANCE
top		100 Ohm differential **
route2		50 Ohm single ended ***
route3		50 Ohm single ended ***
route4		50 Ohm single ended ***
route5		50 Ohm single ended ***
route6		50 Ohm single ended ***
route7		50 Ohm single ended ***
bottom		100 Ohm differential **


Please direct technical questions or issues to one of--
Technical points of contact.

Michael Revnell
National Radio Astronomy Observatory
Socorro New Mexico USA

(505)835-7293
mrevnell@nrao.edu

Francois Kapp
South African Square Kilometre Array
Capetown South Africa

+27 21 531 7282
francois.kapp@ska.ac.za
