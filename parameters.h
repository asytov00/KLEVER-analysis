#ifndef _PARAMETERS_H_
#define _PARAMETERS_H_

#define YEAR 2018
#define MONTH 8
#define KLEVER 1 //1 for Klever experiment

#define E0 120. //initial energy of incoming beam 

#define SQR(X) (X)*(X)

#define MAX_ENTRIES 100000000000

#define N_RUNS 1

#define RUN_NUMB  400458

#define RUN_NUMB2 400455
#define RUN_NUMB3 400402
#define RUN_NUMB4 300312
#define RUN_NUMB5 300313
#define RUN_NUMB6 112967
#define RUN_NUMB7 112968
#define RUN_NUMB8 112970
#define RUN_NUMB9 112971
#define RUN_NUMB10 110107
#define RUN_NUMB11 110108
#define RUN_NUMB12 100497
#define RUN_NUMB13 100500
#define RUN_NUMB14 100501
#define RUN_NUMB15 97735
#define RUN_NUMB16 97736
#define RUN_NUMB17 97736

#define N_FILES 0 // number of files for a single run to be analyzed; 0 == all files
#define N_FILES_IN 1 //starting number of files to be analyzed

//// OPTIONS
#define SLICESON 0 // slices histograms 0=no 1=yes
#define LOWRES 0 //low resolution histograms 3d 0=off 1=on
#define CRY 0 //on instead of position on telescope use position on crystal
#define SAVE 0 //
#define ONLYTREE 0//

#define CORRECT_TORSION 0 //move the xpos and xpos zeros at the center of the crystal
#define CENTER 0 //move the xpos and xpos zeros at the center of the crystal
#define GONIO_ZERO 0//set the zero of the gonio plot in the first step
#define OFFSET_GONIO 0//
#define PLANE_ROTANG 0


///////////////////////////////////////////////////////////////////////
//////////////// Silicon Detector Position in meters///////////////////
///////////////////////////////////////////////////////////////////////
#define Z110_1   0.          // SD1
#define Z210_1   10.075      // SD2
#define Zg10_1   10.574      // Goniometer-Crystal position
#define Z310_1   20.678      // SD3
#define Z410_1   21.051      // SD4

#define Z112_1   00.000      // SD1
#define Z212_1   10.008      // SD2
#define Zg12_1   10.227      // Goniometer-Crystal position
#define Z312_1   21.178      // SD3

#define Z114_1   0.000      // SD1
#define Z214_1   5.37      // SD2
#define Zg14_1   6.28      // Goniometer-Crystal position
#define Z314_1   11.50      // SD3

#define Z115_1   0.000      // SD1
#define Z215_1   5.21      // SD2
#define Zg15_1   5.57      // Goniometer-Crystal position
#define Z315_1   12.03      // SD3

#define Z116_1   0.000     // SD1
#define Z216_1   5.6       // SD2
#define Zg16_1   6.09      // Goniometer-Crystal position
#define Z316_1   11.4      // SD3

#define Z117_1   0.000     // SD1
#define Z217_1   5.168     // SD2
#define Zg17_1   5.821     // Goniometer-Crystal position
#define Z317_1   11.521    // SD3


#define Z118_1   0.000     // SD1
#define Z218_1   11.9      // SD2
#define Zg18_1   12.375    // Goniometer-Crystal position
#define Z318_1   17.227    // SD3

//*****Definitions for Klever experiment
#define Z118K_1   0.000  //SD1
#define Z218K_1   11.9  //SD2
#define Zg18K_1   12.22 //Goniometer-Crystal position
#define Z318K_1   17.227  //T3
#define ZmMb18K_1 0.000  //mean z of the MB
#define Zgg18K_1  29.518 //Goniometer-Crystal position
#define Z418K_1  0.000 //BCgamma
#define Z518K_1  0.000 //BC1
#define Z618K_1  0.000 //BC2

#endif
