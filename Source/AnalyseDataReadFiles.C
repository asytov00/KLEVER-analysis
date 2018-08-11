 if(YEAR==2017 && MONTH==7){

    fscanf(filein,"%f %f %f %f %f %f", &(pos[0]),&(pos[1]),&(pos[2]),&(pos[3]),&(pos[4]),&(pos[5]));

    for(unsigned int i0=0;i0<6;i0++){
        fscanf(filein,"%2d",&(nstrip[i0]));
        //std::cout << nstrip[i0] << " " ;
    }
    for(unsigned int i0=0;i0<6;i0++){
        fscanf(filein,"%2d",&(cluster[i0]));
        //std::cout << cluster[i0] << " " ;
        
    }
    for(unsigned int i0=0;i0<16;i0++){
        fscanf(filein,"%5d",&(devabase[i0])); // 0-15 baseline
        //std::cout << devabase[i0] << " ";
    }    
    for(unsigned int i0=0;i0<16;i0++){
        fscanf(filein,"%5d",&(deva[i0])); // 0-15 calo caounts (0-8 stefanino; 9-12 DEVA)
        //std::cout << deva[i0] << " ";
        
    }
    for(unsigned int i0=0;i0<16;i0++){
        fscanf(filein,"%3d",&(caldeva2[i0])); // time 0-8 stefanino; 9-12 DEVA
        //std::cout << caldeva2[i0] << " " ;
        
    }
    fscanf(filein," %f %f %f %4d %4d %9d",&(gonio_rot),&(gonio_crad),&(up_lin),&(spillnumb),&(goniostep),&(eventnumb));
    
    //std::cout << gonio_rot << " " << eventnumb << std::endl;
    
}

 if(YEAR==2018 && MONTH==8&& KLEVER==0){
      fscanf(filein,"%f %f %f %f %f %f", &(pos[0]),&(pos[1]),&(pos[2]),&(pos[3]),&(pos[4]),&(pos[5]));

    for(unsigned int i0=0;i0<6;i0++){
        fscanf(filein,"%2d",&(nstrip[i0]));
        //std::cout << nstrip[i0] << " " ;
    }
    for(unsigned int i0=0;i0<6;i0++){
        fscanf(filein,"%2d",&(cluster[i0]));
        //std::cout << cluster[i0] << " " ;
        
    }
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%5d",&(devabase[i0])); // 0-15 baseline?
        //std::cout << devabase[i0] << " ";
    }    
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%5d",&(deva[i0])); // 0-15 calo caounts (0-8 stefanino; 9-12 DEVA)?
        //std::cout << deva[i0] << " ";
        
    }
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%3d",&(caldeva2[i0])); // time 0-8 stefanino; 9-12 DEVA?
        //std::cout << caldeva2[i0] << " " ;
        
    }
    fscanf(filein," %f %f %f %f %f %4d %4d %9d",&(gonio_rot),&(gonio_crad),&(up_lin),&(up_lin_2),&(up_ver),&(spillnumb),&(goniostep),&(eventnumb));
    
    //if( (runnumb >= 300258)) { 
    //  for(unsigned int i0=0;i0<519;i0++){    
    //      fscanf(filein,"%5d",&iii);
    //  }
    //}
    
    //std::cout << gonio_rot << " " << eventnumb << std::endl;

 }

//***********KLEVER EXPERIMENT**************

 if(YEAR==2018 && KLEVER==1){

   fscanf(filein,"%d %d", &(unix_time),&(eventnumb));
   
   fscanf(filein,"%f %f %f %f %f %f %f %f %f",&(pos[0]),&(pos[1]),&(pos[2]),&(pos[3]),&(gonio_rot),&(gonio_crad),&(up_lin),&(up_lin_2),&(up_ver));
   
   fscanf(filein,"%d %d",&(spillnumb),&(goniostep));   
//spillnum=gonioinfo

       //scientillator
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%d",&(devabase[i0]));	
    }
    //   devabase[0,1,2] correspond to base, max and trash information of the first scintillator/S3 (before crystal)
    //   devabase[3,4,5] correspond to base, max and trash information of the second scintillator/S4 (after crystal)
    //   devabase[6,7,8] are empty

	 //calorimemeters
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%d",&(deva[i0]));	
    }
	   
	 //&deva[0,1,2] -> correspond to gamma-calorimeter
	 //&deva[3,4,5] -> e-calorimeter
	 //&deva[6,7,8] -> e-calorimeter
	 //&deva[9],10,11] -> e-calorimeter
	 //&deva[12,13,14] -> e-calorimeter

	    //clusters
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%d",&(cluster[i0]));       
    }	    
	    
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%d",&(cluster[i0]));       
    }
         //&cluster[0,1] -> T3[X,Y] after photon production
         //&cluster[2,3] -> BCgamma[X,Y]
         //&cluster[4,5] -> BC1e[X,Y]
         //&cluster[6,7] -> BC2e[X,Y]

    
        for(unsigned int i0=0;i0<8;i0++){
            for(unsigned int j0=0;j0<11;j0++){
                fscanf(filein,"%f",&(posF[i0][j0]));       
            }
    }
         //&cluster[0,1] -> T3[X,Y] after photon production
         //&cluster[2,3] -> BCgamma[X,Y]
         //&cluster[4,5] -> BC1e[X,Y]
         //&cluster[6,7] -> BC2e[X,Y]     
         BcgammaX=posF[2][1]/ 0.0001 ;//cm -> microns //horizontal coordinate in the gamma silicon detector
         BcgammaY=posF[3][1]/ 0.0001 ;//cm -> microns //vertical coordinate in the gamma silicon detector
         BC1eX=posF[4][1]/ 0.0001 ;//cm -> microns//horizontal coordinate in the B1 detector
         BC1eY=posF[5][1]/ 0.0001 ;//cm -> microns //vertical coordinate in the B1 detector
         BC2eX=posF[6][1]/ 0.0001 ;//cm -> microns //horizontal coordinate in the B2 detector
         BC2eY=posF[7][1]/ 0.0001 ;//cm -> microns //vertical coordinate in the B2 detector
         
        //printf("kuku %d %d %d %d %d %d %d %d \n",deva[0],deva[1],deva[2],deva[3],deva[4],deva[5],deva[6],deva[7]);  
         
   //********
	  /*
   fscanf(filein,"%f %f %f %f %f %f", &(pos[0]),&(pos[1]),&(pos[2]),&(pos[3]),&(pos[4]),&(pos[5]),&(pos[6]),&(pos[7]),&(pos[8]),&(pos[9]),&(pos[10]),&(pos[11]));

    for(unsigned int i0=0;i0<6;i0++){
        fscanf(filein,"%2d",&(nstrip[i0]));	
    }
    
    for(unsigned int i0=0;i0<11;i0++){
        fscanf(filein,"%2d",&(cluster[i0]));       
    }
    
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%5d",&(devabase[i0])); // 0-15 baseline?
    }
    
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%5d",&(deva[i0])); // 0-15 calo caounts (0-8 stefanino; 9-12 DEVA)
        
    }
    
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%3d",&(caldeva2[i0])); // time 0-8 stefanino; 9-12 DEVA
        
    }
    
    fscanf(filein," %f %f %f %f %f %4d %4d %9d",&(gonio_rot),&(gonio_crad),&(up_lin),&(up_lin_2),&(up_ver),&(spillnumb),&(goniostep),&(eventnumb));  
	  */
 }



