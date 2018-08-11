#include <string>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "signal.h"
#include "TROOT.h"
#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TTree.h"
#include "parameters.h"


int main(int argc, char* argv[]){
    ///////////////////////////////////////////////////////////////////////
    /////////////////////// Main variables Definition /////////////////////
    ///////////////////////////////////////////////////////////////////////
  //Testing   
   char filesdir[512];
if (argc<2){
printf("\n\n!!!!!!!!!!\nPlease select the data files directory\n!!!!!!!!!!\n\n");
return 0 ;
}
else{
sprintf(filesdir,"%s",argv[1]);
}
    
#include "Source/AnalyseDataVariables.C" 
    ///////////////////////////////////////////////////////////////////////
    /////////////////////// Files Definition //////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    FILE *filein;
    FILE *fileout;
    FILE *fileascii;
    FILE *tempfile;
    //	TFile *fout;
    
    ///////////////////////////////////////////////////////////////////////
    /////////////////////// Start loop on run numbers /////////////////////
    ///////////////////////////////////////////////////////////////////////
    
    for(ijk = 0 ; ijk < N_RUNS ; ijk++)
    {
        runnumb = RUN_NUMB;
        
        if(ijk==1) runnumb = RUN_NUMB2;
        if(ijk==2) runnumb = RUN_NUMB3;
        if(ijk==3) runnumb = RUN_NUMB4;
        if(ijk==4) runnumb = RUN_NUMB5;
        if(ijk==5) runnumb = RUN_NUMB6;
        if(ijk==6) runnumb = RUN_NUMB7;
        if(ijk==7) runnumb = RUN_NUMB8;
        if(ijk==8) runnumb = RUN_NUMB9;
        if(ijk==9) runnumb = RUN_NUMB10;
        if(ijk==10) runnumb = RUN_NUMB11;
        if(ijk==11) runnumb = RUN_NUMB12;
        if(ijk==12) runnumb = RUN_NUMB13;
        if(ijk==13) runnumb = RUN_NUMB14;
        if(ijk==14) runnumb = RUN_NUMB15;
        if(ijk==15) runnumb = RUN_NUMB16;
        if(ijk==16) runnumb = RUN_NUMB17;
        
        
        printf("\n\nRun number: %d \n\n",runnumb);
        
        char text1[512];
        printf("Input data directory: %s\nFile containing the number of files for the run: %s \n",filesdir,tempdir);
        sprintf(text1,"ls -lrt %s/run%06d_* | wc -l > %s",filesdir,runnumb,tempdir);
        system(text1);
        tempfile = fopen(tempdir, "r");
        fscanf(tempfile,"%d",&dummynfiles);
        nfiles[ijk] = dummynfiles; // fill vector "nfiles[]" with the number of files for a given "runnumb"
        
        fclose(tempfile);

        printf("Number of files for RUN %d = %d  \n\n",runnumb,nfiles[ijk]);
        
        if(N_FILES > 0){
	  nfiles[ijk] = N_FILES;
	}
	  filein_first = N_FILES_IN;
	  
        
	  //filein_first=-1; 
	//        if(N_FILES > 0) filein_first = N_FILES_IN;
	/* if(nfiles[0] + filein_first > dummynfiles && N_FILES > 0)
        {
            nfiles[0] = dummynfiles - filein_first;
            printf("N_FILES > 0");
	    }
	*/
        
        
        ///////////////////////////////////////////////////////////////////////
        ///// fast check of all data files to check scan type and interval ////
        ///////////////////////////////////////////////////////////////////////
        printf("nfiles: %d ; filein_first = %d\n\n",nfiles[ijk],filein_first);
        i = filein_first;
        itot = 0;
        
        do
        {
            itot++;
            sprintf(filename,"%s/run%06d_multi_%06d.dat",filesdir,runnumb,i);
            if((filein = fopen(filename, "r"))!=NULL){
               printf("OPENING FILE: %s --- %d on %d \n",filename,i,nfiles[ijk]);
	       do{
#include "Source/AnalyseDataReadFiles.C"
                
		 if(FIRSTFILE && up_lin!=0){ 
                    gonio_rot_first = gonio_rot;
                    gonio_rot_last = gonio_rot;
                    up_lin_first = up_lin;
                    up_lin_last = up_lin;
		    up_lin_2first = up_lin_2; //added in 2018
		    up_lin_2last = up_lin_2; //added in 2018
		    up_ver_first = up_ver; //added in 2018
		    up_ver_last = up_ver;  //added in 2018 
                    gonio_crad_first = gonio_crad;
                    gonio_crad_last = gonio_crad;
		    step_first = goniostep;
		    step_last = goniostep;
                    FIRSTFILE=0;

		 }
                
		/*
		  for(ijkl=0;ijkl<10;ijkl++)
                {
                    if(pos[ijkl] < posMin[ijkl]) posMin[ijkl] = pos[ijkl]; //getting the min and max values of the entries
                    if(pos[ijkl] > posMax[ijkl]) posMax[ijkl] = pos[ijkl];
                };
		*/

		// printf("gonio_rot = %.1f;up_lin = %.1f;gonio_crad = %.1f\n",gonio_rot,up_lin,gonio_crad);
                
                if(gonio_rot < gonio_rot_first) gonio_rot_first = gonio_rot;
                if(gonio_rot > gonio_rot_last) gonio_rot_last = gonio_rot;
                if(up_lin < up_lin_first) up_lin_first = up_lin;
                if(up_lin > up_lin_last) up_lin_last = up_lin;
		if(up_lin_2 < up_lin_2first) up_lin_2first = up_lin_2; //added in 2018
                if(up_lin_2 > up_lin_2last) up_lin_2last = up_lin_2;  //added in 2018
		if(up_ver < up_ver_first) up_ver_first = up_ver; //added in 2018
		if(up_ver > up_ver_last)  up_ver_last = up_ver;  //added in 2018
                if(gonio_crad < gonio_crad_first) gonio_crad_first = gonio_crad;
                if(gonio_crad > gonio_crad_last) gonio_crad_last = gonio_crad;
                
                if(AUX!=0)
                {
                    if( ((fabs(old_gonio_crad) < (fabs(gonio_crad)-1.)) or
                         (fabs(old_gonio_crad) > (fabs(gonio_crad)+1.))) and not
                       ((gonio_crad_first < gonio_crad) &&
                        (gonio_crad_last > gonio_crad)))
                    {
                        Nsteps_crad++;
                    }
                
                              
                    if( ((fabs(old_gonio_rot) < (fabs(gonio_rot)-1.)) or
                         (fabs(old_gonio_rot) > (fabs(gonio_rot)+1.))) and not
                       ((gonio_rot_first < gonio_rot) &&
                        (gonio_rot_last > gonio_rot)))
                    {
                        Nsteps_rot++;
                    }
               
                              
                    if(old_up_lin != up_lin){
                        Nsteps_lin++;
                    }
		    
                    if(old_up_lin_2 != up_lin_2){ //added in 2018
                        Nsteps_lin_2++;
                    }
		    
		    if(old_up_ver != up_ver){ //added in 2018
		        Nsteps_ver++;
		    } 
                }
                
                old_gonio_rot = gonio_rot;
                old_up_lin = up_lin;
                old_gonio_crad = gonio_crad;
		old_up_ver = up_ver;  //added in 2018

                if(goniostep < step_first) step_first = goniostep;
                if(goniostep > step_last) step_last = goniostep;
		
		AUX=1;
		
		counter++;

	       }while((!feof(filein)));
	       printf("%d data sets read from this file.\n", counter);
	       fclose(filein);	// close data file;
	       counterTotal+= counter;
	       counter = 0;
	    }
	    else{
	      printf("****ERROR: file %s (--- %d on %d) NOT FOUND! \n",filename,i,nfiles[ijk]);
	    }	    
        i++;
        } while((itot<nfiles[ijk])); // end... loop on single RUN
    } // end... loop on multiple RUNs
     printf("\nNumber of data sets read in total: %d\n", counterTotal);
     counterTotal=0; 
    
    for(i=0;i<itot;i++) {nfilesTOT += nfiles[i];}
   
    
    ///////////////////////////////////////////////////////////////////////
    ///// calculation of step value and L and R margins for ////////// ////
    ///////////////////////////////////////////////////////////////////////
    
    
    float dummy_step = fabs(gonio_rot_first - gonio_rot_last) / Nsteps_rot ;
    if(fmod(dummy_step,1) < 0.5) {
        rotST = (int)dummy_step;
    } if(fmod(dummy_step,1) >= 0.5) {
        rotST = (int)dummy_step + 1;
    }
    
    dummy_step = fabs(gonio_crad_first - gonio_crad_last) / Nsteps_crad ;
    if(fmod(dummy_step,1) < 0.5) {
        cradST = (int)dummy_step;
    } if(fmod(dummy_step,1) >= 0.5) {
        cradST = (int)dummy_step + 1;
    }
    
    dummy_step = (fabs(up_lin_first-up_lin_last)/(Nsteps_lin)); 
    if(fmod(dummy_step,1) < 0.5) {
        linST = (int)dummy_step;
    } if(fmod(dummy_step,1) >= 0.5) {
        linST = (int)dummy_step + 1;
    }

    dummy_step = (fabs(up_lin_2first-up_lin_2last)/(Nsteps_lin_2)); //added in 2018
    if(fmod(dummy_step,1) < 0.5) {
        lin_2ST = (int)dummy_step;
    } if(fmod(dummy_step,1) >= 0.5) {
        lin_2ST = (int)dummy_step + 1;
    }
    
    dummy_step = (fabs(up_ver_first-up_ver_last)/(Nsteps_ver));
    if(fmod(dummy_step,1) < 0.5) {
        verST = (int)dummy_step;
    } if(fmod(dummy_step,1) >= 0.5) {
        verST = (int)dummy_step + 1;
    }
    

    
    
    rotL = gonio_rot_first;
    rotR = gonio_rot_last;
    cradL = gonio_crad_first;
    cradR = gonio_crad_last;
    linL=up_lin_first;
    linR=up_lin_last;
    lin_2L = up_lin_2first; //added in 2018
    lin_2R = up_lin_2last; //added in 2018  
    verL= up_ver_first; //added in 2018
    verR= up_ver_last; //added in 2018
    
    
    
    printf("\n--------------------------------\n\n");
    printf("Rot steps #:   %d (means %3d total positions) \n",Nsteps_rot,Nsteps_rot+1);
    printf("Lin steps #:   %d (means %3d total positions) \n",Nsteps_lin,Nsteps_lin+1);
    printf("Crd steps #:   %d (means %3d total positions) \n",Nsteps_crad,Nsteps_crad+1);
    printf("Ver steps #:   %d (means %3d total positions) \n",Nsteps_ver,Nsteps_ver+1);
    
    if((Nsteps_lin==0)&&(Nsteps_rot==0)&&(Nsteps_crad==0)&&(Nsteps_ver==0)) // &&(Nsteps_ver==0) added in 2018
    {
        printf("\n                    ======>    SINGLE DAQ (fixed position)    <======\n");
        scanflag = 3 ;
        printf("rotational@ %.1f murad cradle@ %.1f murad lin@ %.1f microns\n",gonio_rot,gonio_crad,up_lin);
    }
    else if(Nsteps_ver!=0){ //added in 2018
        nbin = (int)((verR - verL) / verST);
        rotSX = (verL-verST);
        rotDX = verL+(nbin*verST)+verST;

        printf("\n                    ======>    VERTICAL SCAN    <======\n\n");
        printf("Total Position: %d   from   %.1f microns to   %.1f microns  @ %d microns\n"
               ,Nsteps_ver+1,up_ver_first,up_ver_last,verST);
        printf("cradle@ %.1f murad rotational@ %.1f murad\n",gonio_crad,gonio_rot);
        scanflag = 5 ;
    }
    else if((Nsteps_crad>Nsteps_lin)&&(Nsteps_crad>Nsteps_rot)){
        nbin = (int)((cradR - cradL) / cradST);
        rotSX = (cradL-cradST*1.8);
        rotDX = cradL+(nbin*cradST)+cradST*2.2;

        printf("\n                    ======>    CRADLE SCAN    <======\n\n");
        printf("Total Position: %d   from   %.1f murad to   %.1f murad  @ %d murad\n"
               ,Nsteps_crad+1,gonio_crad_first,gonio_crad_last,cradST);
        printf("rotSX %f murad ; rotDX %f murad ; rotCENTER %f murad\n",rotSX,rotDX,(rotSX+rotDX)/2);
        printf("rotational@ %.1f murad lin@ %.1f microns\n",gonio_rot,up_lin);
        scanflag = 2 ;
    }
    else if(Nsteps_lin<Nsteps_rot){
        nbin = (int)((rotR - rotL) / rotST);
        rotSX = (rotL-rotST*1.8);
        rotDX = rotL+(nbin*rotST)+rotST*2.2;

        printf("\n                    ======>    ROTATIONAL SCAN    <======\n\n");
        printf("Total Position: %d   from   %.1f murad to   %.1f murad  @ %d murad\n"
               ,Nsteps_rot+1,gonio_rot_first,gonio_rot_last,rotST);
        printf("rotSX %f murad ; rotDX %f murad ; rotCENTER %f murad\n",rotSX,rotDX,(rotSX+rotDX)/2);
        printf("cradle@ %.1f murad lin@ %f microns\n",gonio_crad,up_lin);
        scanflag = 1 ;
    }
    else if(Nsteps_lin!=0){
        nbin = (int)((linR - linL) / linST);
        rotSX = (linL-linST);
        rotDX = linL+(nbin*linST)+linST;

        printf("\n                    ======>    LATERAL LINEAR SCAN    <======\n\n");
        printf("Total Position: %d   from   %.1f microns to   %.1f microns  @ %d microns\n"
               ,Nsteps_lin+1,up_lin_first,up_lin_last,linST);
        printf("cradle@ %.1f murad rotational@ %.1f murad\n",gonio_crad,gonio_rot);
        scanflag = 0 ;
    }
        else if(Nsteps_lin_2!=0){ //added in 2018
        nbin = (int)((lin_2R - lin_2L) / lin_2ST);
        rotSX = (lin_2L-lin_2ST);
        rotDX = lin_2L+(nbin*lin_2ST)+lin_2ST;

        printf("\n                    ======>    LATERAL LINEAR (2) SCAN    <======\n\n");
        printf("Total Position: %d   from   %.1f microns to   %.1f microns  @ %d microns\n"
               ,Nsteps_lin_2+1,up_lin_2first,up_lin_2last,lin_2ST);
        printf("cradle@ %.1f murad rotational@ %.1f murad\n",gonio_crad,gonio_rot);
        scanflag = 4 ;
    }

    printf("\nnbin = %d\n", nbin);

    ///////////////////////////////////////////////////////////////////////
    ////////////////// Histogram Variable Definitions /////////////////////
    ///////////////////////////////////////////////////////////////////////
    
    thXin=128.;    thXout=128.; //?
    
#include "Cuts/CutFile.C"
    
    if(CENTER == true){
        detectX1 = (X_CUT_left+X_CUT_right)/2 - 10000.;
        detectX2 = (X_CUT_left+X_CUT_right)/2 + 10000.;
        detectY1 = (Y_CUT_left+Y_CUT_right)/2 - 10000.;
        detectY2 = (Y_CUT_left+Y_CUT_right)/2 + 10000.;
    }
    else{
        detectX1 = X_CUT_left- 10000.;
        detectX2 = X_CUT_right+ 10000.;
        detectY1 = Y_CUT_left- 10000.;
        detectY2 = Y_CUT_right+ 10000.;
    }
    
    //detectX1=-20000;
    //detectX2=20000;

    
    int detectXBin = int((detectX2-detectX1)/32)*4;// pixel per 16 microns
    int detectYBin = int((detectY2-detectY1)/32);// pixel per 32 microns
    int thXinBin = int(thXin*2.);// pixel per 2 murad
    int thXoutBin = int(thXout*2/2);// pixel per 2 murad
    int deflXBin = int((deflXmar2-deflXmar1)*2/2);// pixel per 2 murad
    int deflYBin = int((deflYmar2-deflYmar1)*2/2);// pixel per 2 murad
    float xMean = (X_CUT_right+X_CUT_left)/2;
    float yMean = (Y_CUT_left+Y_CUT_right)/2;
    yCenter = yMean;
    
    float xWidth = fabs(X_CUT_right-X_CUT_left);
    float yWidth = fabs(Y_CUT_right-Y_CUT_left);
    
    
    
    if(LOWRES)
    {
        thXinBin = thXinBin/4;
        thXoutBin = thXoutBin/4;
        deflXBin = deflXBin/4;
        deflYBin = deflYBin/8;
        detectXBin = detectXBin/8;
        detectYBin = detectYBin/16;
    }
    
    if(CENTER)
    {
        detectX1 = detectX1 - xMean;
        detectX2 = detectX2 - xMean;
        detectY1 = detectY1 - yMean;
        detectY2 = detectY2 - yMean;
    }
    
    printf("\nX bin %d || Y bin %d || thX bin %d || thY bin %d\n\n"
           ,detectXBin,detectYBin,deflXBin,deflYBin);
    
    printf("Pos X Cuts: Left = %03.03f   Right = %03.03f  -->  Crystal = %03.03f\n",X_CUT_left,X_CUT_right,-X_CUT_left+X_CUT_right);
    printf("Pos Y Cuts: Left = %03.03f   Right = %03.03f  -->  Crystal = %03.03f\n\n",Y_CUT_left,Y_CUT_right,-Y_CUT_left+Y_CUT_right);
    printf("Ang X Cuts: A = %03.03f   B = %03.03f   C = %03.03f\n",divAcutX,divBcutX,divCcutX);
    printf("Ang Y Cuts: A = %03.03f   B = %03.03f   C = %03.03f\n",divAcutY,divBcutY,divCcutY);
    
    printf("Total number of files read: %d", nfilesTOT);
    
    printf("\n------->  press ENTER to continue <-------");
    printf("\n------->    press CTRL+C to exit  <-------\n\n");
    while(!getchar());
    
    ///////////////////////////////////////////////////////////////////////
    ////////////////// open the ROOT output files /////////////////////////
    ///////////////////////////////////////////////////////////////////////
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [256];
    char prova1[256];
    
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    
    strftime (buffer,80,"%y%m%d-%H%M%S",timeinfo);
    
    printf ( "The current local time is: %s", buffer );
    sprintf(prova1,"mkdir ../ROOT_OUTPUTS");
    
    system(prova1);
    
    if(N_RUNS == 1){
            sprintf(rootfilename,"../ROOT_OUTPUTS/run%06d.root",runnumb);
            sprintf(configfilename,"../ROOT_OUTPUTS/temp.txt");
            sprintf(asciifilename,"../ROOT_OUTPUTS/temp.dat");
    }
    else if(N_RUNS > 1){
            sprintf(rootfilename,"../ROOT_OUTPUTS/run%06d-%06d.root",FIRST_RUN,LAST_RUN);
            sprintf(configfilename,"../ROOT_OUTPUTS/temp.txt");
            sprintf(asciifilename,"../ROOT_OUTPUTS/temp.dat");
    }
    
    
    TFile *fout = new TFile(rootfilename,"RECREATE");
    fileout = fopen(configfilename, "w");
    //    fileascii = fopen(asciifilename, "w");
    printf("\nOpening = %s \n\n",rootfilename);
    puts (buffer);
    
    TTree *T = new TTree("T","Complete tree");
    part_save part;
    T->Branch("part",&part,"x_in/D:y_in/D:thx_in/D:thy_in/D:x_out/D:y_out/D:thx_out/D:thy_out/D");
    
    if(SAVE) fprintf(fileout,"runnumb %d \n detectX1 %f \n detectX2 %f \n detectY1 %f \n detectY2 %f \n thXin %f \n thXout %f \n deflXmar1 %f \n deflXmar2 %f \n deflYmar1 %f \n deflYmar2 %f \n torsion_posYthX %f \n X_CUT_left %f \n X_CUT_right %f \n Y_CUT_left %f \n Y_CUT_right %f \n divAcutX %f \n divAcutY %f \n divBcutX %f \n divBcutY %f \n divCcutX %f \n divCcutY %f \n divRcut %f \n thXinCorr %f \n thYinCorr %f",runnumb, detectX1, detectX2, detectY1, detectY2, thXin, thXout, deflXmar1, deflXmar2, deflYmar1, deflYmar2, torsion_posYthX, X_CUT_left,X_CUT_right, Y_CUT_left,Y_CUT_right, divAcutX, divAcutY, divBcutX, divBcutY, divCcutX, divCcutY, divRcut, thXinCorr, thYinCorr);
    
    fclose(fileout);
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////// Create  Histograms  /////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    
    for(ijkl=0;ijkl<4;ijkl++)
    {
        posMin[ijkl] = -1.92E4;
        posMax[ijkl] = +1.92E4;
    }
    for(ijkl=4;ijkl<6;ijkl++)
    {
        posMin[ijkl] = -9.5E4;
        posMax[ijkl] = +9.5E4; //larger area SD3 2017
    }
    for(ijkl=6;ijkl<10;ijkl++)
    {
        posMin[ijkl] = -10.E4;
        posMax[ijkl] = +10.E4;
    }
    
#include "Cuts/GonioFile.C"
    /*    
    if(scanflag==0)    // lin scan
    {
        nbin = (int)((linR - linL) / linST);
        rotSX = (linL-linST);
        rotDX = linL+(nbin*linST)+linST;
    }
    if(scanflag==1)    // rot scan
    {
        nbin = (int)((rotR - rotL) / rotST);
        rotSX = (rotL-rotST*1.8);
        rotDX = rotL+(nbin*rotST)+rotST*2.2;
    }
    if(scanflag==2)    // cradle scan
    {
        nbin = (int)((cradR - cradL) / cradST);
        rotSX = (cradL-cradST*1.8);
        rotDX = cradL+(nbin*cradST)+cradST*2.2;
    }
    */
    
    std::cout << rotSX << " " << rotDX << std::endl;
    float rotCENTER_shift = 0.;
    if((runnumb >= 97494) && (runnumb <= 97496)) rotCENTER_shift = -46.5;
    if(runnumb == 97423) rotCENTER_shift = +127;
    
    float rotCENTER = (rotSX+rotDX)/2 - rotCENTER_shift;
    float rotDIST = (rotDX-rotSX)/2;
    
    double offsetX = 0.;
    double offsetY = 0.;
    
    
#include "Cuts/OffSetGonioFile.C"
    
    if(GONIO_ZERO && scanflag!=0)
    {
        rotSX = 0.;
        rotDX = rotDIST*2;
    }
    if(CENTER && !GONIO_ZERO && scanflag!=0)
    {
        rotSX = rotCENTER_shift - rotDIST;
        rotDX = rotCENTER_shift + rotDIST;
    }
    if(OFFSET_GONIO)
    {
        if(scanflag==1)
        {
            rotSX -= offsetX;
            rotDX -= offsetX;
        }
        if(scanflag==2)
        {
            rotSX += offsetY;
            rotDX += offsetY;
        }
    }
    
    if(ONLYTREE)
    {
#include "Source/AnalyseDataVariablesZero.C"
    }
    
#include "Source/AnalyseDataHistoDefinition.C"
    
    ///////////////////////////////////////////////////////////////////////
    //////////////// Fill Histograms Routine //////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    
    int corr=0;
    
    Nsteps_rot = 0;
    Nsteps_lin = 0;
    Nsteps_crad = 0;
    Nsteps_lin_2 = 0;
    
    
    
    for(ijk=0;ijk<N_RUNS;ijk++){
        
        runnumb = RUN_NUMB;
        
        if(ijk==1) runnumb = RUN_NUMB2;
        if(ijk==2) runnumb = RUN_NUMB3;
        if(ijk==3) runnumb = RUN_NUMB4;
        if(ijk==4) runnumb = RUN_NUMB5;
        if(ijk==5) runnumb = RUN_NUMB6;
        if(ijk==6) runnumb = RUN_NUMB7;
        if(ijk==7) runnumb = RUN_NUMB8;
        if(ijk==8) runnumb = RUN_NUMB9;
        if(ijk==9) runnumb = RUN_NUMB10;
        if(ijk==10) runnumb = RUN_NUMB11;
        if(ijk==11) runnumb = RUN_NUMB12;
        
	/*        filein_first=-1;
        if(N_FILES > 0) filein_first = N_FILES_IN;
        
        if(nfiles[0] + filein_first > dummynfiles && N_FILES > 0)
        {
            nfiles[0] = dummynfiles - filein_first;
            printf("N_FILES > 0");
        }
	*/

        if(N_FILES > 0){
	  nfiles[ijk] = N_FILES;// if N_FILES = -1 all files are analyzed
	}
	  filein_first = N_FILES_IN;
        
        printf("Run number =  %d \n",runnumb);
        i = filein_first;
        itot = 0;
        
        do{
            itot++;
	    sprintf(filename,"%s/run%06d_multi_%06d.dat",filesdir,runnumb,i);
            
            //if(fmod(i+1,5.)==0) printf("%s \n",filename);
            
            double x0temp = 0.;
            double x1temp = 0.;
            double x2temp = 0.;
            double y0temp = 0.;
            double y1temp = 0.;
            double y2temp = 0.;
            
            if((filein = fopen(filename, "r"))!=NULL){
	      printf("OPENING FILE: %s (--- %d on %d) \n",filename,i,nfiles[ijk]); 
                bool bReadLine = true;
                do{ 
#include "Source/AnalyseDataReadFiles.C"
                    bReadLine = true;
                    /*
                    if(!(YEAR==2014 && MONTH==12) && !(YEAR==2015 && MONTH==2)
                       && !(YEAR==2015 && MONTH==9)){
                        if(y0temp==pos[0] &&
                           y1temp==pos[2] &&
                           y2temp==pos[4] &&
                           x0temp==pos[1] &&
                           x1temp==pos[3] &&
                           x2temp==pos[5]){
                            break;
                        }
                        y0temp = pos[0];
                        y1temp = pos[2];
                        y2temp = pos[4];
                        x0temp = pos[1];
                        x1temp = pos[3];
                        x2temp = pos[5];
                    }
*/
		    //                    if(nentries>MAX_ENTRIES) {break;}
                    
			
                    if(YEAR==2015 && MONTH==9){
                        if(pos[0]==-9999.){
                            bReadLine = false;
#include "Source/AnalyseDataCalorimeterFunction.C"
                           // hCaloCrysCalib->Fill(eventnumb,calo_crys_tot);
                        }
                    }

                    if(YEAR==2016 && MONTH==7){
                        if(pos[0]==-9999.){
                            bReadLine = false;
#include "Source/AnalyseDataCalorimeterFunction.C"
                          hCaloCrysCalib->Fill(eventnumb,calo_crys_tot);
                        }
                    }
                    
                    /*
                    if(YEAR==2016 && MONTH==7){
                        if(pos[5]==-6000.){
                            bReadLine = false;
#include "Source/AnalyseDataCalorimeterFunction.C"
                            hCaloCrysCalib->Fill(eventnumb,calo_crys_tot);
                        }
                    }
                    */
                    
                    if(bReadLine == true){
                        
                        ///////////////////////////////////////////////////////////////////////
                        //////////////// Calculation of the step dinamically //////////////////
                        ///////////////////////////////////////////////////////////////////////
		      
                        if (scanflag==0)
                        {
                            dummy_step = fabs((up_lin_first - up_lin) / linST );
                            if(fmod(dummy_step,1) < 0.5) {
                                Nsteps_lin = (int)dummy_step;
                            } if(fmod(dummy_step,1) >= 0.5) {
                                Nsteps_lin = (int)dummy_step + 1;
                            }
                        }

			if (scanflag==4) //added in 2018
                        {
                            dummy_step = fabs((up_lin_2first - up_lin_2) / lin_2ST );
                            if(fmod(dummy_step,1) < 0.5) {
                                Nsteps_lin_2 = (int)dummy_step;
                            } if(fmod(dummy_step,1) >= 0.5) {
                                Nsteps_lin_2 = (int)dummy_step + 1;
                            }
                        }
                        
                        if (scanflag==1)
                        {
                            dummy_step = fabs((gonio_rot_first - gonio_rot) / rotST );
                            if(fmod(dummy_step,1) < 0.5) {
                                Nsteps_rot = (int)dummy_step;
                            } if(fmod(dummy_step,1) >= 0.5) {
                                Nsteps_rot = (int)dummy_step + 1;
                            }
                        }
                        
                        
                        if (scanflag==2)
                        {
                            dummy_step = fabs((gonio_crad_first - gonio_crad) / cradST) ;
                            if(fmod(dummy_step,1) < 0.5) {
                                Nsteps_crad = (int)dummy_step;
                            } if(fmod(dummy_step,1) >= 0.5) {
                                Nsteps_crad = (int)dummy_step + 1;
                            }
                        }
			
                        if (scanflag==5)  //added in 2018
                        {
                            dummy_step = fabs((up_ver_first - up_ver) / verST) ;
                            if(fmod(dummy_step,1) < 0.5) {
                                Nsteps_ver = (int)dummy_step;
                            } if(fmod(dummy_step,1) >= 0.5) {
                                Nsteps_ver = (int)dummy_step + 1;
                            }
                        }			
		   
  
                        /////////////////////////////////
                        /////////////////////////////////
                        
                        
                        x1 = pos[0] / 0.0001 ;//cm -> microns // to analyse 2017 data change it to -->  x1 = -pos[0]
                        y1 = pos[1] / 0.0001 ;//cm -> microns
                        x2 = pos[2] / 0.0001 ;//cm -> microns // to analyse 2017 data change it to -->  x  = -pos[2]
                        y2 = pos[3] / 0.0001 ;//cm -> microns
                        x3 = pos[4] / 0.0001 ;//cm -> microns
                        y3 = pos[5] / 0.0001 ;//cm -> microns
                        x4 = pos[6] / 0.0001 ;//cm -> microns
                        y4 = pos[7] / 0.0001 ;//cm -> microns
                        x5 = pos[8] / 0.0001 ;//cm -> microns
                        y5 = pos[9] / 0.0001 ;//cm -> microns

			if(KLEVER){
			  x3 = pos4; //-> microns (see AnalyseDataRedVariables.C)
              y3 = pos5; //-> microns (see AnalyseDataRedVariables.C)
			}
                        
                        
                        hx1na->Fill(x1);
                        hx2na->Fill(x2);
                        hx3na->Fill(x3);
                        hy1na->Fill(y1);
                        hy2na->Fill(y2);
                        hy3na->Fill(y3);
                        
                        nentries++;
                        
                        
                        
                        
                        ///////////////////////////////////////////////////////////////////////
                        ////////////////// Definition of lat CUTS /////////////////////////////
                        ///////////////////////////////////////////////////////////////////////
                        
#include "Cuts/AlignFile.C"
                        
#include "Source/AnalyseDataStoreVariables.C"
                        
#include "Cuts/OffSetGonioFile.C"
#include "Source/AnalyseDataCalorimeterFunction.C"
                        
                        if(OFFSET_GONIO)
                        {
                            thXin -= offsetX;
                            thXout -= offsetX;
                            thYin += offsetY;
                            thYout += offsetY;
                        }
                        
                        part.thx_in = thXin;
                        part.thy_in = thYin;
                        part.thx_out = thXout;
                        part.thy_out = thYout;
                        if(ONLYTREE)  T->Fill();
                        
                        if(!ONLYTREE)
                        {
                            

                            
                            if(CORRECT_TORSION)
                            {
                                TCposYthX = torsion_posYthX * ( - yCRY ) * 1.E-3;
                                //TCposXthY = torsion_posXthY * ( - xCRY ) * 1.E-3;
                                //TCposXthX = torsion_posXthX * ( - xCRY ) * 1.E-3;
                               // thYin += TCposXthY;
                               // thYout += TCposXthY;
                                thXin += TCposYthX;
                                thXout += TCposYthX;
                              //  thXin += TCposXthX;
                             //   thXout += TCposXthX;
                            }
                            
                            
                            if(CENTER){
                            xCRY -= xMean;
                            yCRY -= yMean;
                            }
                             
                            flagdivA = 0;
                            if( SQR(thXin-thXinCorr) < SQR(divAcutX) )
                                if( SQR(thYin) < SQR(divAcutY) )
                                    flagdivA = 1;
                            
                            flagdivAx = 0;
                            if( SQR(thXin-thXinCorr) < SQR(divAcutX) )
                                flagdivAx = 1;
                            
                            flagdivAy = 0;
                            if( SQR(thYin) < SQR(divAcutY) )
                                flagdivAy = 1;
                            
                            flagdivB = 0;
                            if( SQR(thXin-thXinCorr) < SQR(divBcutX) )
                                if( SQR(thYin) < SQR(divBcutY) )
                                    flagdivB = 1;
                            
                            flagdivBx = 0;
                            if( SQR(thXin-thXinCorr) < SQR(divBcutX) )
                                flagdivBx = 1;
                            
                            flagdivBy = 0;
                            if( SQR(thYin) < SQR(divBcutY) )
                                flagdivBy = 1;
                            
                            flagdivC = 0;
                            if( SQR(thXin-thXinCorr) < SQR(divCcutX) )
                                if( SQR(thYin) < SQR(divCcutY) )
                                    flagdivC = 1;
                            
                            flagdivCx = 0;
                            if( SQR(thXin-thXinCorr) < SQR(divCcutX) )
                                flagdivCx = 1;
                            
                            flagdivCy = 0;
                            if( SQR(thYin) < SQR(divCcutY) )
                                flagdivCy = 1;
                            
                            flagdivR = 0;
                            //if((SQR(thXin)+SQR(thYin-56.)) < SQR(10))//negative pions axial Ge <110>
                              //  flagdivR = 1;
                           // if((SQR(thXin)+SQR(thYin)) < SQR(10))
                             // flagdivR = 1;
	
                            if((SQR(thXin-15)+SQR(thYin+126.)) < SQR(20))//positrons axial Ge <110>
                                flagdivR = 1;


                            flagDeva = 0;
                            if(calo_deva_tot > DEVA_CUT){
                                flagDeva = 1;
                            }
                            
                            deflX = thXout - thXin ;
                            deflY = thYout - thYin ;
                            if(YEAR==2015 && MONTH==9){
                            deflX *= -1;
                            thXin*= -1;
                            thXout *= -1;
                            }
                            
                            
                            
                            float divcorr = thXin;
                            
                            if(scanflag==1){ divcorr = -thXin;
                                if(YEAR==2014){
                                    divcorr = -thXin;
                                }
                                if(YEAR==2012){
                                    divcorr = +thXin;
                                }
                                if(YEAR==2010){
                                    divcorr = +thXin; //NOT CHECKED
                                }
                                if(YEAR==2016){
                                    divcorr = +thXin; //NOT CHECKED
                                }
                                if(YEAR==2017){
                                    divcorr = +thXin; //NOT CHECKED
                                }
			 	if(YEAR==2018){ //inserted in 2018
                                    divcorr = +thXin; 
                                }
				
                            }
                            else if(scanflag==2) divcorr = thYin;
                            else if(scanflag==0) divcorr = -xCRY*1.E-3+12.4; // to center for the lateral scan
			    else if(scanflag==4) divcorr = -xCRY*1.E-3;
			    else if(scanflag==5) divcorr = +yCRY*1.E-3;

                            if(scanflag==0) h2st = up_lin;
			    else if(scanflag==4) h2st = up_lin_2; //added in 2018
			    else if(scanflag==5) h2st = up_ver;   //added in 2018
                            else if(scanflag==1) h2st = gonio_rot;
                            else if(scanflag==2) h2st = gonio_crad;
                            
                            if(GONIO_ZERO  && scanflag!=0)
                            {
                                if(scanflag==1) h2st -= gonio_rot_first;
                                if(scanflag==2) h2st -= gonio_crad_first;
                            }
                            
                            if(CENTER && !GONIO_ZERO && scanflag!=0)
                            {
                                h2st -= rotCENTER;
                            }
                            int nstep = 0;
                            
                            if(scanflag==0) nstep=Nsteps_lin;
                            if(scanflag==1) nstep=Nsteps_rot;
                            if(scanflag==2) nstep=Nsteps_crad;
			    if(scanflag==4) nstep=Nsteps_lin_2; //added in 2018
			    if(scanflag==5) nstep=Nsteps_ver;   //added in 2018
                            
                            //thXin *= -1.;
                            //thXout *= -1;
                            //deflX *= -1.;
                            
#include "Source/AnalyseDataHistoFill.C"
                        }
                    }
		    counter++;
                } while((!feof(filein)));
                printf("%d data sets read from this file.\n", counter);
		counterTotal += counter;
		counter = 0;  
                fclose(filein);	// close data file
		
            }
	    else{
	      printf("****ERROR: file %s (--- %d on %d) NOT FOUND! \n",filename,i,nfiles[ijk]);
	    }
	i++;
        }while((itot<nfiles[ijk]));  // end of for loop on single RUN
    } // end of for loop on multiple RUNs
     printf("\nNumber of data sets read in total: %d\n", counterTotal);
     counterTotal=0;
    //    fclose(fileascii);

//#include "Source/AnalyseDataHistoPostProcessing.C"
    printf("\n\n");
    printf("Number of processed events:  %d  \n\n",nentries);
    printf("\n");
    

    fout->Write();// write ROOT file
    fout->Close();// close ROOT file  
    return 0;
}


