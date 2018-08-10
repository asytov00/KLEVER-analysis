
///////////////////////////////////////////////////////////////////////
////////////////// Variables to be Defined Zero ///////////////////////
///////////////////////////////////////////////////////////////////////

ypart1 = 0.;
ypart2 = 0.;

flagpos = 1;
flagposx = 1;
flagposy = 1;
flagposx1 = 0;
flagposx2 = 0;
flagposx3 = 0;
flagposx4 = 0;
flagposy1 = 0;
flagposy2 = 0;
flagposy3 = 0;
flagposy4 = 0;


    thXin = (x2-x1) / D12 ;
    thYin = (y2-y1) / D12 ;
    
    thXout = (x3-x2) / D23 ;//thXout = (x3+x2) / D23 ;
    thYout = (y3-y2) / D23 ;

                            deflX = thXout - thXin ;//deflX = thXout + thXin ;
                            deflY = thYout - thYin ;
    double offsetX = 0.;
    double offsetY = 0.;
    
    xCRY = x2;
    yCRY = y2;

part.x_in = xCRY;
part.y_in = yCRY;
part.x_out = x3;
part.y_out = y3;

if((xCRY >= X_CUT_left) && (xCRY <= X_CUT_right)) {flagposx = 1;}
if((yCRY >= Y_CUT_left) && (yCRY <= Y_CUT_right)) {flagposy = 1;}


if((yCRY >= Y_CUT_left) && (yCRY <= Y_CUT_left + yWidth/4)) {flagposy1 = 1;}
if((yCRY >= Y_CUT_left + yWidth/4) && (yCRY <= Y_CUT_left + yWidth*2/4)) {flagposy2 = 1;}
if((yCRY >= Y_CUT_left + yWidth*2/4) && (yCRY <= Y_CUT_left + yWidth*3/4)) {flagposy3 = 1;}
if((yCRY >= Y_CUT_left + yWidth*3/4) && (yCRY <= Y_CUT_right)) {flagposy4 = 1;}


if((xCRY >= X_CUT_left) && (xCRY <= X_CUT_left + xWidth/4)) {flagposx1 = 1;}
if((xCRY >= X_CUT_left + xWidth/4) && (xCRY <= X_CUT_left + xWidth*2/4)) {flagposx2 = 1;}
if((xCRY >= X_CUT_left + xWidth*2/4) && (xCRY <= X_CUT_left + xWidth*3/4)) {flagposx3 = 1;}
if((xCRY >= X_CUT_left + xWidth*3/4) && (xCRY <= X_CUT_left + xWidth*4/4)) {flagposx4 = 1;}

if(flagposx && flagposy) {flagpos = 1;}

