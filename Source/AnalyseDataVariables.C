int i,j,k,ijk,ij,jk,ikl,ijkl,ii;

struct part_save
{
    double x_in;
    double y_in;
    double thx_in;
    double thy_in;
    double x_out;
    double y_out;
    double thx_out;
    double thy_out;
};

bool SD4 = 0;
bool SD5 = 0;

int iii;

int filein_first;      // start point of analysis
int runnumb;     // run number to be analyzed
int dummynfiles;
int nfilesTOT = 0;
int nfiles[2048];
for(i=0;i<2048;i++){
    nfiles[i]=0;
}
char filename[256];
char rootfilename[256];
char configfilename[256];
char asciifilename[256];
char goniofilename[256];
char homeDir[256];
sprintf(homeDir,"%s",getenv("HOME"));

int nentries = 0; // counter for total number of events
int tempI = 0;
float tempF[8];
float prova=0;
int nuclear;

float temp;
float pos[16]; //cm -> position in ascii file
float posMin[16]; //cm -> position in ascii file
float posMax[16]; //cm -> position in ascii file
for(ijkl=0;ijkl<16;ijkl++) posMin[ijkl]=+999999999.;
for(ijkl=0;ijkl<16;ijkl++) posMax[ijkl]=-999999999.;
int nstrip[12]; //# -> strip hitted in ascii file
float xsum_deva;
float xsum_rino;
int deva[16]; //# -> scintillator counts for nuclear interaction in ascii file?
int devabase[16]; //# -> scintillator counts for nuclear interaction in ascii file?
float devatot;
float deva_temp;
float rinotot;
float piezoc[8];
int cluster[16]; //# -> cluster hitted in ascii file
int caldeva2[16];
float rotang = 0.;

float calo_crys[9];
float calo_deva[6];
float calo_deva_tot;
int calo_crys_tot;
float calo_crys_tot_energy;
float calo_crys_tot_energy_gamma;//calorimetry function from calibration for gamma 2018
float calo_crys_tot_energy_efast;//calorimetry function from calibration for fast electrons/positrons 2018
float calo_crys_tot_energy_eslow;//calorimetry function from calibration for slow electrons/positrons 2018
float scin;//scintillator function 2018
float photom;//photomultiplier function 2018


float gonio_rot=0.; //murad -> gonio angle in ascii file
float gonio_crad=0.; //murad -> gonio cradle in ascii file
float up_lin=0.; //mm -> lateral linear motion in ascii file
float up_lin_2=0.; //mm -> latera_2 motion in ascii file / added in 2018
float up_ver=0.; //mm -> vertical motion in ascii file / added in 2018
int spillnumb; //# -> spill number in ascii file
int goniostep; //# -> scan step number in ascii file
int eventnumb;//# -> events number in ascii file

float rotL; // rotation scan left margin
float rotR; // rotation scan  right margin
int rotST=-1; // rotation scan  step size
float rotSX=0;
float rotDX=1;
float cradL; // cradle scan left margin
float cradR; // cradle scan right margin
int cradST; // cradle step size
float linL; // lin scan  left margin
float linR; // lin scan right margin
int linST; // lin step size
float lin_2L; // lin 2 scan left margin
float lin_2R; // lin 2 scan right margin
int lin_2ST; //lin 2 step size
float verL; //vertical scan left margin (added in 2018)
float verR; //vertical scan right margin (added in 2018)
int verST; //vertical step size (added in 2018)
int nbin=1;
int Nsteps_rot = 0; // number of steps in rotational scan
int Nsteps_rot_old = 0; // number of steps in rotational scan
int Nsteps_lin = 0; // number of steps in linear scan
int Nsteps_lin_2 = 0; // number of steps in linear(2) scan (added in 2018)
int Nsteps_crad = 0; // number of steps in cradle scan
int Nsteps_ver = 0; // number of steps in vertical scan  (added in 2018)
int AUX=0;
int counter=0;
int counterTotal=0;
int scanflag = -1; // flag for the type of scan: (0) lateral scan, (1) angular scan, (2) crad scan, (3) single DAQ, (4) (0) lateral scan 2, (5) vertical scan.
float h2st = 0.;
float cost1 = 0.3*3.59; // 10/3*B*L [Tm]  H4 2010  Bending Magnet @ 3.59 Tm
float cost2 = 0.3*3.59/120.; // 10/3*B*L/120 [Tm/(GeV/c)]   H4 2010  Positron/Electron Beam @ 120 GeV/c
float BcgammaX; //horizontal coordinate in the gamma silicon detector
float BcgammaY; //vertical coordinate in the gamma silicon detector

float old_gonio_rot;
float gonio_rot_first;
float gonio_rot_last;
float old_up_lin;
float old_up_lin_2; // added in 2018
float up_lin_first;
float up_lin_last;
float up_lin_2first; // added in 2018
float up_lin_2last; // added in 2018
float up_ver_first; // added in 2018
float up_ver_last; // added in 2018
float old_gonio_crad;
float old_up_ver; // added in 2018
float gonio_crad_first;
float gonio_crad_last;

int step_first;
int step_last;

float xg;
float x1;
float x2;
float x3;
float x4;
float x5;
float yg;
float y1;
float y2;
float y3;
float y4;
float y5;

int itot = 0.;

float ypart1 = 0.;
float ypart2 = 0.;

float xCRY = 0.;
float yCRY = 0.;

float deflX = 0.;
float deflY = 0.;
float deflR = 0.;

float TCposYthX = 0.;
float TCposXthY = 0.;
float TCposXthX = 0.;
float chi2x=0.;
float chi2y=0.;


///////////////////////////////////////////////////////////////////////
////////////////// Variables to be Defined ////////////////////////////
///////////////////////////////////////////////////////////////////////

float detectX1=-20000.;// microns -> detectors area divided by 2
float detectX2=20000;//1.92E4;// microns -> detectors area divided by 2
float detectY1=0.;// microns -> detectors area divided by 2
float detectY2=1.92E4;// microns -> detectors area divided by 2
float thXin=64.;// murad
float thXout=64.;// murad
float thYin=64.;// murad
float thYout=64.;// murad
float deflXmar1=-64.;
float deflXmar2=64.;
float deflYmar1=-64.;
float deflYmar2=64.;
float yCenter=0.96E4;// mum -> position of the center of the crystal
float divAcutX=5.;
float divAcutY=5.;
float divBcutX=10.;
float divBcutY=10.;
float divCcutX=5.;
float divCcutY=5.;
float divRcut=20.;
float thXinCorr=0.;
float thYinCorr=0.;
float torsion_posYthX=0.;//murad on mm
float torsion_posXthY=0.;//murad on mm
float torsion_posXthX=0.;//murad on mm

float X_CUT_left = 0.96E4-512.;
float X_CUT_right = 0.96E4+512.;
float Y_CUT_left = 0.96E4-512.;
float Y_CUT_right = 0.96E4+512.;

float DEVA_CUT = 0;

float meanchang = 0.;

bool flagdivA=0;
bool flagdivAx=0;
bool flagdivAy=0;
bool flagdivB=0;
bool flagdivBx=0;
bool flagdivBy=0;
bool flagdivC=0;
bool flagdivCx=0;
bool flagdivCy=0;
bool flagdivR=0;
bool flagdivT=0;
bool flagdivRT=0;
bool flagpos=0;
bool flagposx=0;
bool flagposy=0;
bool flagposx1=0;
bool flagposx2=0;
bool flagposx3=0;
bool flagposx4=0;
bool flagposy1=0;
bool flagposy2=0;
bool flagposy3=0;
bool flagposy4=0;
bool flagchi2x=0;
bool flagchi2y=0;
int TC=0;
int torY=0;

bool flagDeva = 0;

float Z1 = 0.;
float Z2 = 0.;
float Zg = 0.;
float Z3 = 0.;

//******VARIABLES TO KLEVER******

//variable to read

int unix_time;

float calo_elec_total_energy;
int scin3;
int scin4;

//**set up 
float ZmMb = 0.;
float Z4 = 0.;
float Z5 = 0.;
float Z6 = 0.;
//****END VARIABLES TO KLEVER*****


char tempdir[512];


bool FIRSTFILE=1;
int FIRST_RUN = RUN_NUMB;
int LAST_RUN =RUN_NUMB2;
if(N_RUNS==3) LAST_RUN = RUN_NUMB3;
if(N_RUNS==4) LAST_RUN = RUN_NUMB4;
if(N_RUNS==5) LAST_RUN = RUN_NUMB5;
if(N_RUNS==6) LAST_RUN = RUN_NUMB6;
if(N_RUNS==7) LAST_RUN = RUN_NUMB7;
if(N_RUNS==8) LAST_RUN = RUN_NUMB8;
if(N_RUNS==9) LAST_RUN = RUN_NUMB9;
if(N_RUNS==10) LAST_RUN = RUN_NUMB10;

////// YEAR RUN SELECTION //////

//char filesdir[512];


if(YEAR==2010){
    Z1 = Z110_1;
    Z2 = Z210_1;
    Zg = Zg10_1;
    Z3 = Z310_1;
  //  sprintf(filesdir,"/media/1TB/h8_june2010/ascii");
}

if(YEAR==2012){
    Z1 = Z112_1;
    Z2 = Z212_1;
    Zg = Zg12_1;
    Z3 = Z312_1;
    //sprintf(filesdir,"/media/1TB/h4h8_july2012/ascii");
}

if(YEAR==2014){
    Z1 = Z114_1;
    Z2 = Z214_1;
    Zg = Zg14_1;
    Z3 = Z314_1;
    //sprintf(filesdir,"/media/1TB/h4_nov2014/ascii");
}

if(YEAR==2014 && MONTH==12){
    Z1 = Z114_1;
    Z2 = Z214_1;
    Zg = Zg14_1;
    Z3 = Z314_1;
    //sprintf(filesdir,"/home/ebagli/DATA/UA9");
}

if(YEAR==2015 && MONTH==2){
    Z1 = Z114_1;
    Z2 = Z214_1;
    Zg = Zg14_1;
    Z3 = Z314_1;
    //sprintf(filesdir,"/home/ebagli/DATA/UA9");
}

if(YEAR==2015 && MONTH==9){
    Z1 = Z115_1;
    Z2 = Z215_1;
    Zg = Zg15_1;
    Z3 = Z315_1;
    sprintf(filesdir,"/home/ebagli/DATA/h4sep2015");
    //sprintf(filesdir,"/Users/ebagli/DATA/DATA_H4_COPY/H42015");
}

if(YEAR==2016 && MONTH==7){
    Z1 = Z116_1;
    Z2 = Z216_1;
    Zg = Zg16_1;
    Z3 = Z316_1;
    //sprintf(filesdir,"/home/ebagli/DATA/h4sep2015");
  //  sprintf(filesdir,"/media/leo/Elements/DATA_H4_2016/data_fe2");
//sprintf(filesdir,"/media/leo/AudioSeagate/DATA-H4-2016");
//sprintf(filesdir,"/home/leo/datadir");
    if(RUN_NUMB==112392 || RUN_NUMB==112295 ||
       RUN_NUMB==112323 || RUN_NUMB==112299 ||
       RUN_NUMB==112401 || RUN_NUMB==112410 ||
       RUN_NUMB==112413 || RUN_NUMB==112438 ||
       RUN_NUMB==112454 || RUN_NUMB==112455){
      //  sprintf(filesdir,"/home/leo/DATA/H4-2016");
    }
}

//if(YEAR==2017 && MONTH==7){
//    Z1 = Z117_1;
//    Z2 = Z217_1;
//    Zg = Zg17_1;
//    Z3 = Z317_1;
//
//sprintf(filesdir,"/media/leo/AudioSeagate/DATA-H4-2017");
//
//}

if(YEAR==2017 && MONTH==7){
    Z1 = Z117_1;
    Z2 = Z217_1;
    Zg = Zg17_1;
    Z3 = Z317_1;

//sprintf(filesdir,"/home/alexei/Alexei/Channeling/Experiment/CERN2017/DATA-H4-2017/"); ///data/Alexei/Channeling/Experiment/CERN2016/DATA_H4_2016/data_fe2/");

}

if(YEAR==2018 && MONTH==8){
    Z1 = Z118_1;
    Z2 = Z218_1;
    Zg = Zg18_1;
    Z3 = Z318_1;

//sprintf(filesdir,"/Users/taismaiolino/INFN_FERRARA/INFN_ROOT/AXIAL-Analysis/data2018"); ///data/Alexei/Channeling/Experiment/CERN2016/DATA_H4_2016/data_fe2/");
//sprintf(filesdir,"/data/insudaq/ascii_axial18/");
}

if(KLEVER){
    Z1 = Z118K_1;
    Z2 = Z218K_1;
    Zg = Zg18K_1;
    Z3 = Z318K_1;
    ZmMb = ZmMb18K_1;
    Z4 = Z418K_1; //BCgamma
    Z5 = Z518K_1; //BC1
    Z6 = Z618K_1; //BC2
}

sprintf(tempdir,"tempfile.txt");

float D12 = Z2 - Z1; // detector 1-2 distance
float D13 = Z3 - Z1; // detector 1-3 distance
float D23 = Z3 - Z2; // detector 2-3 distance
float D2g = Zg - Z2; // detector 2-g distance
float Dg3 = Z3 - Zg; // detector g-3 distance


