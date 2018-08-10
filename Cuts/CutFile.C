///////////////////////////////////////////
//               CUT FILES               //
//      for Coherent data analysis       //
//     01 July 2012 - Enrico Bagli       //
///////////////////////////////////////////


// ST1004 Si axes [110] plane (111) 
if( (runnumb >= 112000 && runnumb <= 113103 ))
{
    deflXmar1=-512.;    deflXmar2=512.;
    deflYmar1=-512.;    deflYmar2=512.;
    
    thXin=512.;
    thXout=256.;
    
    torsion_posYthX=-40.;//murad on mm
    //torsion_posXthX=0.;//20.;//murad on mm
    meanchang = 0.;
    //X_CUT_left = 10700.;    X_CUT_right = 11250;
    X_CUT_left = -14980;//14000.;   //15400;// 
    X_CUT_right =-14000.;//14980.;// 16100;//
    Y_CUT_left = 10000.;    
    Y_CUT_right = 14000.;
    //Y_CUT_left = 10500;    Y_CUT_right = 11500;
    
    DEVA_CUT = 600.;

}


///PWO [001] - SiPM 2017 - 24th July
if( (runnumb >= 113104 && runnumb <= 113139  ))
{
    deflXmar1=-512.;    deflXmar2=512.;
    deflYmar1=-512.;    deflYmar2=512.;
    
    thXin=512.;
    thXout=256.;
    
    torsion_posYthX=-40.;//murad on mm
    //torsion_posXthX=0.;//20.;//murad on mm
    meanchang = 0.;
   
    X_CUT_left = -15170.;   //15400;// 
    X_CUT_right =-13400.;// 16100;//
    Y_CUT_left = 5000;//10000.;    
    Y_CUT_right = 20000;//13800.;
    //Y_CUT_left = 10500;    Y_CUT_right = 11500;
    
    DEVA_CUT = 600.;

}

///W [111] - 2017 - 25th July
if( (runnumb >= 113140 && runnumb <= 114000 ))
{
    deflXmar1=-512.;    deflXmar2=512.;
    deflYmar1=-512.;    deflYmar2=512.;
    
    thXin=512.;
    thXout=256.;
    
    torsion_posYthX=-40.;//murad on mm
    //torsion_posXthX=0.;//20.;//murad on mm
    meanchang = 0.;
   
    X_CUT_left = 13000.;   //15400;// 
    X_CUT_right =15500.;// 16100;//
    Y_CUT_left = 5000;//10000.;    
    Y_CUT_right = 20000;//13800.;
    //Y_CUT_left = 10500;    Y_CUT_right = 11500;
    
    DEVA_CUT = 600.;

}

//2018 Silicon Strip
if( (runnumb >= 300087))
{
    deflXmar1=-128.;    deflXmar2=128.;
    deflYmar1=-128.;    deflYmar2=128.;
    
    thXin=128.;
    thXout=128.;
    
    torsion_posYthX=0.;//murad on mm
    //torsion_posXthX=0.;//20.;//murad on mm
    meanchang = 0.;
   
    X_CUT_left  = 10200.;  
    X_CUT_right = 11900.;
    Y_CUT_left  = 10000;//10000.;    
    Y_CUT_right = 12000;//13800.;
    //Y_CUT_left = 10500;    Y_CUT_right = 11500;
    
    DEVA_CUT = 600.;
 }
//2018 W 001
if( (runnumb >= 300167))
{
    deflXmar1=-128.;    deflXmar2=128.;
    deflYmar1=-128.;    deflYmar2=128.;
    
    thXin=128.;
    thXout=128.;
    
    torsion_posYthX=0.;//murad on mm
    //torsion_posXthX=0.;//20.;//murad on mm
    meanchang = 0.;
   
    X_CUT_left  = 10000.;  
    X_CUT_right = 13600.;
    Y_CUT_left  = 8100;//10000.;    
    Y_CUT_right = 14300;//13800.;
    //Y_CUT_left = 10500;    Y_CUT_right = 11500;
    
    DEVA_CUT = 600.;
 }

 //BGO
if( (runnumb >= 300258))
{
    deflXmar1=-128.;    deflXmar2=128.;
    deflYmar1=-128.;    deflYmar2=128.;
    
    thXin=128.;
    thXout=128.;
    
    torsion_posYthX=0.;//murad on mm
    //torsion_posXthX=0.;//20.;//murad on mm
    meanchang = 0.;
   
    X_CUT_left  = 10500.;  
    X_CUT_right = 14000.;
    Y_CUT_left  = 8000;//10000.;    
    Y_CUT_right = 13500;//13800.;
    //Y_CUT_left = 10500;    Y_CUT_right = 11500;
    
    DEVA_CUT = 600.;
 } 

//*************KLEVER EXPERIMENT******************

if(KLEVER){

    deflXmar1=-128.;    deflXmar2=128.;
    deflYmar1=-128.;    deflYmar2=128.;
    
    thXin=128.;
    thXout=128.;
    
    torsion_posYthX=0.;//murad on mm
    //torsion_posXthX=0.;//20.;//murad on mm
    meanchang = 0.;
   
    X_CUT_left  = 10500.;  //murad
    X_CUT_right = 14000.;
    Y_CUT_left  = 8000;    
    Y_CUT_right = 13500;
    
    DEVA_CUT = 600.;
 } 

 //PWO
if( (runnumb >= 300258))
{
    deflXmar1=-128.;    deflXmar2=128.;
    deflYmar1=-128.;    deflYmar2=128.;
    
    thXin=128.;
    thXout=128.;
    
    torsion_posYthX=0.;//murad on mm
    //torsion_posXthX=0.;//20.;//murad on mm
    meanchang = 0.;
   
    X_CUT_left  = 11730.;  
    X_CUT_right = 13400.;
    Y_CUT_left  = 8000;//10000.;    
    Y_CUT_right = 13500;//13800.;
    //Y_CUT_left = 10500;    Y_CUT_right = 11500;
    
    DEVA_CUT = 600.;
 } 

if( (runnumb >= 400000))
{
    deflXmar1=-128.;    deflXmar2=128.;
    deflYmar1=-128.;    deflYmar2=128.;
    
    thXin=128.;
    thXout=128.;
    
    torsion_posYthX=0.;//murad on mm
    //torsion_posXthX=0.;//20.;//murad on mm
    meanchang = 0.;
   
    X_CUT_left  = 11730.;  
    X_CUT_right = 13400.;
    Y_CUT_left  = 8000;//10000.;    
    Y_CUT_right = 13500;//13800.;
    //Y_CUT_left = 10500;    Y_CUT_right = 11500;
    
    DEVA_CUT = 600.;
 } 
