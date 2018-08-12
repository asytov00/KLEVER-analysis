 if(YEAR==2017 && MONTH==7){
/// 2017 Stefanino and DEVA digitizer readout

//Stefanino
    calo_crys_tot = 0.;
    for(unsigned int i0=0;i0<9;i0++){
        //if ((caldeva2[i0]>=180) && (caldeva2[i0] <=230))
        calo_crys_tot += deva[i0];
        
    }
    //calo_crys_tot_energy = (calo_crys_tot - 152.38) / 57.811; //calorimetry function from calibration
    

//DEVA
    calo_deva_tot = 0.;
    for(unsigned int i0=9;i0<12;i0++){
        //if ((caldeva2[i0]>=180) && (caldeva2[i0] <=230))
        calo_deva_tot += deva[i0];
    }
}

 if(YEAR==2018 && MONTH==8){
     
if( (runnumb < 300229)) {   
/// 2018 Stefanino and DEVA digitizer readout

//Stefanino

     //calo_crys_tot_energy_gamma = (deva[3] - 20.7523) / 105.493; //calorimetry function from calibration for gamma 2018 

//DEVA

     //calo_crys_tot_energy_efast = (deva[6] + 108.622) / 114.415; //calorimetry function from calibration for fast electrons/positrons 2018
     //calo_crys_tot_energy_eslow = (deva[7] + 58.9661) / 90.7316; //calorimetry function from calibration for slow electrons/positrons 2018

     //scin=deva[0]; //scintillator signal 2018


//Stefanino

     calo_crys_tot_energy_gamma = (deva[3] + 71.) /98.525 ; //calorimetry function from calibration for gamma 2018 

//DEVA

     calo_crys_tot_energy_efast = (deva[6] + 154.) / 97.725; //calorimetry function from calibration for fast electrons/positrons 2018
     calo_crys_tot_energy_eslow = (deva[7] + 22.) / 85.; //calorimetry function from calibration for slow electrons/positrons 2018

     scin=deva[0]; //scintillator signal 2018   
     photom=deva[1]; //photomultiplier 2018
}
else{
/// 2018 Stefanino and DEVA digitizer readout


//Stefanino

     calo_crys_tot_energy_gamma = (deva[3] + 71.) /88.7546 ; //calorimetry function from calibration for gamma 2018 

//DEVA

     calo_crys_tot_energy_efast = (deva[6] + 154.) / 97.725; //calorimetry function from calibration for fast electrons/positrons 2018
     calo_crys_tot_energy_eslow = (deva[7] + 22.) / 85.; //calorimetry function from calibration for slow electrons/positrons 2018

     scin=deva[0]; //scintillator signal 2018        
     photom=deva[1]; //photomultiplier 2018
}     
}


if( (runnumb >= 300220)) {
  
/// 2018 Stefanino and DEVA digitizer readout


//Stefanino

     calo_crys_tot_energy_gamma = (deva[3] + 71.) /82.7857 ; //calorimetry function from calibration for gamma 2018 

//DEVA

     calo_crys_tot_energy_efast = (deva[6] + 154.) / 97.725; //calorimetry function from calibration for fast electrons/positrons 2018
     calo_crys_tot_energy_eslow = (deva[7] + 22.) / 85.; //calorimetry function from calibration for slow electrons/positrons 2018

     scin=deva[0]; //scintillator signal 2018        
     photom=deva[1]; //photomultiplier 2018    
    
}    

if( (runnumb >= 300225)) {
  
/// 2018 Stefanino and DEVA digitizer readout


//Stefanino

     calo_crys_tot_energy_gamma = (deva[3] + 71.) /81.6422 ; //calorimetry function from calibration for gamma 2018 

//DEVA

     calo_crys_tot_energy_efast = (deva[6] + 154.) / 97.725; //calorimetry function from calibration for fast electrons/positrons 2018
     calo_crys_tot_energy_eslow = (deva[7] + 22.) / 85.; //calorimetry function from calibration for slow electrons/positrons 2018

     scin=deva[0]; //scintillator signal 2018        
     photom=deva[1]; //photomultiplier 2018    
    
 }  


//***************KLEVER EXPERIMENT*****************


if (KLEVER) { 
  
  scin3 = deva[0]; //scintillator before crystal
  scin4 = deva[1];  //scintillator after crystal
  
  devacal[2] = (deva[2]+145.053)/79.7879;
  devacal[3] = (deva[3]+104.883)/78.1859;
  devacal[4] = (deva[4]+171.443)/109.463;
  devacal[5] = (deva[5]+117.115)/102.42;
  devacal[6] = (deva[6]+182.678)/80.0947;
  devacal[7] = (deva[7]+151.721)/83.4786;
  
  if (runnumb >= 400255) {
    
    devacal[2] = (deva[2]+182.912)/101.046;
    devacal[3] *= 9236/9389;
    devacal[4] *= 12915/12860;
    devacal[5] *= 12126/12080;
    devacal[6] *= 9399/9459;
    devacal[7] *= 9823/9945;
    
  }
  
  if (runnumb >= 400276) {
    
    devacal[3] = (deva[3]+142.897)/93.9701;
    
  }

  if (runnumb >= 400289) { // calibration from 400312
    
    devacal[2] = (deva[2]+310.928)/103.078;
    devacal[3] = (deva[3]+162.823)/73.0963;
    devacal[4] = (deva[4]+222.128)/108.491;
    devacal[5] = (deva[5]+115.262)/102.381;
    devacal[6] = (deva[6]+193.604)/82.7409;
    devacal[7] = (deva[7]+180.202)/85.7358;
    
  }

  calo_crys_tot_energy_gamma = devacal[2];
  calo_crys_tot_energy_efast = devacal[3] + devacal[4] + devacal[5] + devacal[6] + devacal[7];
  
 }
 
 
 
 
 
 
 
 
