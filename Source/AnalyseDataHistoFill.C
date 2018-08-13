///////////////////////////////////////////////////////////////////////
////////////////// Detectors  Histograms  /////////////////////////////
///////////////////////////////////////////////////////////////////////
if(flagpos) {h2dX1inClu4->Fill(gonio_rot+divcorr,cluster[4]);}//scan radiazione
if(flagpos) {h2dX1inClu5->Fill(gonio_rot+divcorr,cluster[5]);}//scan radiazione

if  ((cluster[4]==1) && (cluster[5]==1))
{

hx1->Fill(x1);
hx2->Fill(x2);
hx3->Fill(x3);
hy1->Fill(y1);
hy2->Fill(y2);
hy3->Fill(y3);

hx1naP->Fill(x1);
hx2naP->Fill(x2);
hx3naP->Fill(x3);
hy1naP->Fill(y1);
hy2naP->Fill(y2);
hy3naP->Fill(y3);


hx12->Fill(x1-x2);
hx13->Fill(x1-x3);
hx23->Fill(x2-x3);

hy12->Fill(y1-y2);
hy13->Fill(y1-y3);
hy23->Fill(y2-y3);

hxy1->Fill(x1,y1);
hxy2->Fill(x2,y2);
hxy3->Fill(x3,y3);

hthXin->Fill(thXin);
hthYin->Fill(thYin);
hthXYin->Fill(thXin,thYin);

hthXout->Fill(thXout);
hthYout->Fill(thYout);


hthXYout->Fill(thXout,thYout);


if(flagpos) hx12P->Fill(x1-x2);
if(flagpos) hx23P->Fill(x3-x2);
if(flagpos) hy12P->Fill(y1-y2);
if(flagpos) hy23P->Fill(y3-y2);
if(flagpos) hx1P->Fill(x3);
if(flagpos) hx2P->Fill(x3);
if(flagpos) hx3P->Fill(x3);

if(flagpos) hthXoutP->Fill(thXout);
if(flagpos && flagdivA) hthXoutA->Fill(thXout);
if(flagpos && flagdivB) hthXoutB->Fill(thXout);
if(flagpos && flagdivC) hthXoutC->Fill(thXout);


hdeflX->Fill(deflX);
hdeflY->Fill(deflY);
hdeflXY->Fill(deflX,deflY);
if(flagpos) hdeflXP->Fill(deflX);
if(flagpos) hdeflYP->Fill(deflY);
if(flagpos && flagdivA) hdeflXA->Fill(deflX);
if(flagpos && flagdivA) hdeflYA->Fill(deflY);
if(flagpos && flagdivB) hdeflXB->Fill(deflX);
if(flagpos && flagdivB) hdeflYB->Fill(deflY);
if(flagpos && flagdivC) hdeflXC->Fill(deflX);
if(flagpos && flagdivC) hdeflYC->Fill(deflY);
if(flagpos && flagdivR) hdeflXcutR->Fill(deflX);
if(flagpos && flagdivR) hdeflYcutR->Fill(deflY);
if(flagpos) hdeflXYP->Fill(deflX,deflY);
if(flagpos && flagdivA) hdeflXYA->Fill(deflX,deflY);
if(flagpos && flagdivBx) hdeflXYB->Fill(deflX,deflY);
if(flagpos && flagdivC) hdeflXYC->Fill(deflX,deflY);
if(flagpos && flagdivR) hdeflXYR->Fill(deflX,deflY);

/*

if(SLICESON)
if(flagpos)
{
    for(ij=-4; ij <= 4 ;ij++)
    {
        for(jk=-4; jk <= 4 ;jk++)
        {
            k = (ij+4)*10+(jk+4);
            if((SQR(thXin-ij*deflXYscanSTEP-thXinCorr)+SQR(thYin-jk*deflXYscanSTEP-thYinCorr)) < SQR(divRcut))
            {
                hdeflXY_SL[k]->Fill(deflX,deflY);
                hthXY_SL[k]->Fill(thXout,thYout);
            }
            if(SQR(thXin-ij*deflXYscanSTEP-thXinCorr)< SQR(divCcutX))
                if(SQR(thYin-jk*deflXYscanSTEP-thYinCorr) < SQR(divCcutY))
                {
                    if( SQR(thXin-thXinCorr) < SQR(divAcutX) )
                        if( SQR(thYin) < SQR(divAcutY) ){
                            hdeflXY_center[ij][jk]->Fill(deflX,deflY);
                        }
                }
        }
    }
}

if(flagpos)
{
    for(ij=0; ij < 32 ;ij++)
    {
        for(jk=0; jk < 32 ;jk++)
        {
            if( SQR(thXin-ij-16) < SQR(divAcutX*1.5) )
                if( SQR(thYin-jk-16) < SQR(divAcutY*1.5) ){
                    hdeflXY_center[ij][jk]->Fill(deflX,deflY);
                }
        }
    }
}
 */
///////////////////////////////////////////////////////////////////////
///////////// Beam Deflection VS in-going Divergence Histograms ///////
///////////////////////////////////////////////////////////////////////
hdeflXthXin->Fill(thXin,deflX);
hdeflXthYin->Fill(thYin,deflX);
hdeflYthXin->Fill(thXin,deflY);
hdeflYthYin->Fill(thYin,deflY);
hdeflRthXin->Fill(thXin,deflR);
hdeflRthYin->Fill(thYin,deflR);


if(flagpos) hdeflXthXinP->Fill(thXin,deflX);
if(flagpos) hdeflXthYinP->Fill(thYin,deflX);
if(flagpos) hdeflYthXinP->Fill(thXin,deflY);
if(flagpos) hdeflYthYinP->Fill(thYin,deflY);
if(flagpos) hdeflRthXinP->Fill(thXin,deflR);
if(flagpos) hdeflRthYinP->Fill(thYin,deflR);

if(flagposx1 && flagposy) hdeflXthXinPX1->Fill(thXin,deflX);
if(flagposx2 && flagposy) hdeflXthXinPX2->Fill(thXin,deflX);
if(flagposx3 && flagposy) hdeflXthXinPX3->Fill(thXin,deflX);
if(flagposx4 && flagposy) hdeflXthXinPX4->Fill(thXin,deflX);
if(flagposx && flagposy1) hdeflXthXinPY1->Fill(thXin,deflX);
if(flagposx && flagposy2) hdeflXthXinPY2->Fill(thXin,deflX);
if(flagposx && flagposy3) hdeflXthXinPY3->Fill(thXin,deflX);
if(flagposx && flagposy4) hdeflXthXinPY4->Fill(thXin,deflX);


if(flagposx1 && flagposy1) hdeflXthXinP11->Fill(thXin,deflX);
if(flagposx1 && flagposy2) hdeflXthXinP12->Fill(thXin,deflX);
if(flagposx1 && flagposy3) hdeflXthXinP13->Fill(thXin,deflX);
if(flagposx1 && flagposy4) hdeflXthXinP14->Fill(thXin,deflX);

if(flagposx2 && flagposy1) hdeflXthXinP21->Fill(thXin,deflX);
if(flagposx2 && flagposy2) hdeflXthXinP22->Fill(thXin,deflX);
if(flagposx2 && flagposy3) hdeflXthXinP23->Fill(thXin,deflX);
if(flagposx2 && flagposy4) hdeflXthXinP24->Fill(thXin,deflX);

if(flagposx3 && flagposy1) hdeflXthXinP31->Fill(thXin,deflX);
if(flagposx3 && flagposy2) hdeflXthXinP32->Fill(thXin,deflX);
if(flagposx3 && flagposy3) hdeflXthXinP33->Fill(thXin,deflX);
if(flagposx3 && flagposy4) hdeflXthXinP34->Fill(thXin,deflX);

if(flagposx4 && flagposy1) hdeflXthXinP41->Fill(thXin,deflX);
if(flagposx4 && flagposy2) hdeflXthXinP42->Fill(thXin,deflX);
if(flagposx4 && flagposy3) hdeflXthXinP43->Fill(thXin,deflX);
if(flagposx4 && flagposy4) hdeflXthXinP44->Fill(thXin,deflX);


if(flagpos && flagdivAy) hdeflXthXinPA->Fill(thXin,deflX);
if(flagpos && flagdivAx) hdeflXthYinPA->Fill(thYin,deflX);
if(flagpos && flagdivAy) hdeflYthXinPA->Fill(thXin,deflY);
if(flagpos && flagdivAx) hdeflYthYinPA->Fill(thYin,deflY);

if(flagpos && flagdivBy) hdeflXthXinPB->Fill(thXin,deflX);
if(flagpos && flagdivBx) hdeflXthYinPB->Fill(thYin,deflX);
if(flagpos && flagdivBy) hdeflYthXinPB->Fill(thXin,deflY);
if(flagpos && flagdivBx) hdeflYthYinPB->Fill(thYin,deflY);

if(flagpos && flagdivCy) hdeflXthXinPC->Fill(thXin,deflX);
if(flagpos && flagdivCx) hdeflXthYinPC->Fill(thYin,deflX);
if(flagpos && flagdivCy) hdeflYthXinPC->Fill(thXin,deflY);
if(flagpos && flagdivCx) hdeflYthYinPC->Fill(thYin,deflY);

if(flagpos && flagdivCy) hthXthXinPC->Fill(thXin,thXout);
if(flagpos) hthXthXinP->Fill(thXin,thXout);



if(flagpos && nuclear == 0) hdeflXthXinP_0->Fill(thXin,deflX);
if(flagpos && nuclear == 1) hdeflXthXinP_1->Fill(thXin,deflX);
if(flagpos && nuclear == 2) hdeflXthXinP_2->Fill(thXin,deflX);
if(flagpos && nuclear == 3) hdeflXthXinP_3->Fill(thXin,deflX);


///////////////////////////////////////////////////////////////////////
///////////// Beam Deflection VS Position Histograms //////////////////
///////////////////////////////////////////////////////////////////////
hdeflXposX->Fill(xCRY,deflX);
hdeflXposY->Fill(yCRY,deflX);

if(flagposy) hdeflXposXCry->Fill(xCRY,deflX);
if(flagposx) hdeflXposYCry->Fill(yCRY,deflX);

hdeflYposX->Fill(xCRY,deflY);
hdeflYposY->Fill(yCRY,deflY);

if(flagpos) {hdeflXposXP->Fill(xCRY,deflX);
	    hdeflXposYP->Fill(yCRY,deflX);}
if(flagdivA && flagposy) hdeflXposXA->Fill(xCRY,deflX);
if(flagdivA && flagposx) hdeflXposYA->Fill(yCRY,deflX);
if(flagdivA && flagposy) hdeflYposXA->Fill(xCRY,deflY);
if(flagdivA && flagposx) hdeflYposYA->Fill(yCRY,deflY);
if(flagdivB && flagposy) hdeflXposXB->Fill(xCRY,deflX);
if(flagdivB && flagposx) hdeflXposYB->Fill(yCRY,deflX);
if(flagdivB && flagposy) hdeflYposXB->Fill(xCRY,deflY);
if(flagdivB && flagposx) hdeflYposYB->Fill(yCRY,deflY);
if(flagdivC && flagposy) hdeflXposXC->Fill(xCRY,deflX);
if(flagdivC && flagposx) hdeflXposYC->Fill(yCRY,deflX);
if(flagdivC && flagposy) hdeflYposXC->Fill(xCRY,deflY);
if(flagdivC && flagposx) hdeflYposYC->Fill(yCRY,deflY);



///////////////////////////////////////////////////////////////////////
///////////// Beam Divergence VS Position Histograms //////////////////
///////////////////////////////////////////////////////////////////////
hposXposYin->Fill(xCRY,yCRY);
hthXposXin->Fill(xCRY,thXin);
hthXposYin->Fill(yCRY,thXin);
hthYposYin->Fill(yCRY,thYin);
hthYposXin->Fill(xCRY,thYin);

if(flagpos) hthXposXinP->Fill(xCRY,thXin);
if(flagpos) hthXposYinP->Fill(yCRY,thXin);
if(flagpos) hthYposXinP->Fill(xCRY,thYin);
if(flagpos) hthYposYinP->Fill(yCRY,thYin);

hthXposXout->Fill(x3,thXout);
hthYposYout->Fill(y3,thYout);
if(flagpos) hthXposXoutP->Fill(x3,thXout);
if(flagpos) hthYposYoutP->Fill(y3,thYout);



///////////////////////////////////////////////////////////////////////
///////////// Beam Divergence VS Time /////////////////////////////////
///////////////////////////////////////////////////////////////////////
if(N_FILES > 0 && ijk>0)corr=corr+nfiles[ijk-1];
hthXrun->Fill(i+corr,thXin);
hthYrun->Fill(i+corr,thYin);
if(flagpos) hthXrunCry->Fill(i+corr,thXin);
if(flagpos) hthYrunCry->Fill(i+corr,thYin);
if(flagpos && flagdivB) hdeflXrunCryB->Fill(i+corr,deflX);
if(flagpos && flagdivB) hdeflYrunCryB->Fill(i+corr,deflY);
//if(flagpos && flagdivA) hdeflXthXrun->Fill(i+corr,thXin,deflX);




///////////////////////////////////////////////////////////////////////
//////////////////////// Scan Histograms  /////////////////////////////
///////////////////////////////////////////////////////////////////////

h2dX0->Fill((float)h2st,deflX);
h2dY0->Fill((float)h2st,deflY);

if(flagpos) h2dX1->Fill((float)h2st,deflX);
if(flagpos) h2dY1->Fill((float)h2st,deflY);

h2dX0in->Fill((float)h2st+divcorr,deflX);


if(flagpos) h2dX1u->Fill((float)h2st+divcorr,thXout);
if(flagpos) h2dX1in->Fill((float)h2st+divcorr,deflX);
if(flagpos) h2dX1inGO->Fill(gonio_rot+divcorr,deflX);
if(flagpos) h2dX1inInv->Fill((float)h2st-divcorr,deflX);

if(flagposy && flagposx1) h2dX1inX1->Fill((float)h2st+divcorr,deflX);
if(flagposy && flagposx2) h2dX1inX2->Fill((float)h2st+divcorr,deflX);
if(flagposy && flagposx3) h2dX1inX3->Fill((float)h2st+divcorr,deflX);
if(flagposy && flagposx4) h2dX1inX4->Fill((float)h2st+divcorr,deflX);

if(flagposx && flagposy1) h2dX1inY1->Fill((float)h2st+divcorr,deflX);
if(flagposx && flagposy2) h2dX1inY2->Fill((float)h2st+divcorr,deflX);
if(flagposx && flagposy3) h2dX1inY3->Fill((float)h2st+divcorr,deflX);
if(flagposx && flagposy4) h2dX1inY4->Fill((float)h2st+divcorr,deflX);

if(flagpos) h2thX1in->Fill((float)h2st+divcorr,thXout);

h2dY0in->Fill((float)h2st+divcorr,deflY);
if(flagpos) h2dY1in->Fill((float)h2st+divcorr,deflY);

if(flagpos) h2dY1inInv->Fill((float)h2st-divcorr,deflY);


if(flagpos && flagdivR) h2dX2R->Fill((float)h2st+divcorr,deflX);
if(flagpos && flagdivR) h2dY2R->Fill((float)h2st+divcorr,deflY);

if(scanflag==2)
{
    if(flagpos && flagdivAx) h2dX2A->Fill((float)h2st+divcorr,deflX);
        if(flagpos && flagdivBx) h2dX2B->Fill((float)h2st+divcorr,deflX);
            if(flagpos && flagdivCx) h2dX2C->Fill((float)h2st+divcorr,deflX);

                if(flagpos && flagdivAx) h2dY2A->Fill((float)h2st+divcorr,deflY);
                    if(flagpos && flagdivBx) h2dY2B->Fill((float)h2st+divcorr,deflY);
                        if(flagpos && flagdivCx) h2dY2C->Fill((float)h2st+divcorr,deflY);
                            }

if(scanflag==1)
{
    if(flagpos && flagdivAy) h2dX2A->Fill((float)h2st+divcorr,deflX);
        if(flagpos && flagdivBy) h2dX2B->Fill((float)h2st+divcorr,deflX);
            if(flagpos && flagdivCy) h2dX2C->Fill((float)h2st+divcorr,deflX);
                if(flagpos && flagdivAy) h2dY2A->Fill((float)h2st+divcorr,deflY);
                    if(flagpos && flagdivBy) h2dY2B->Fill((float)h2st+divcorr,deflY);
                        if(flagpos && flagdivCy) h2dY2C->Fill((float)h2st+divcorr,deflY);
                            }
if(flagpos) {h2dX1inRadGO->Fill(gonio_rot+divcorr,calo_crys_tot_energy);}//scan radiazione
if(flagpos) {h2dX1inRad->Fill((float)h2st+divcorr,calo_crys_tot_energy);}//scan radiazione
if(flagpos) {h2dX1Rad->Fill((float)h2st,calo_crys_tot_energy);}//scan radiazione
if(flagpos) {h2dX1inRadInv->Fill((float)h2st-divcorr,calo_crys_tot_energy);}//scan radiazione invertito

    
/*
if(flagpos)
for(ii=1;ii<=h2dX1inTors->GetXaxis()->GetNbins();ii++)
{
    double tauy = h2dX1inTors->GetXaxis()->GetBinCenter(ii);
    double val = (float)h2st+divcorr + 1.E-3*(-yCRY)*tauy;
    h2dX1inTors->Fill(tauy,val,deflX);
}

if(flagpos)
for(ii=1;ii<=hdeflXthXinTors->GetXaxis()->GetNbins();ii++)
{
    double tauy = hdeflXthXinTors->GetXaxis()->GetBinCenter(ii);
    double val = thXin + 1.E-3*(-yCRY)*tauy;
    hdeflXthXinTors->Fill(tauy,val,deflX);
}
if(flagpos)
for(ii=1;ii<=hdeflXthXinTorsX->GetXaxis()->GetNbins();ii++)
{
    double taux = hdeflXthXinTorsX->GetXaxis()->GetBinCenter(ii);
    double val = thXin + 1.E-3*(-xCRY)*taux;
    hdeflXthXinTorsX->Fill(taux,val,deflX);
}


if(((meanchang<0.) && (deflX<meanchang)) ||
   ((meanchang>0.) && (deflX>meanchang))){
    for(int i0=1;i0<=hChTorsXY->GetXaxis()->GetNbins();i0++)
    {
        for(int i1=1;i1<=hChTorsXY->GetYaxis()->GetNbins();i1++)
        {
            double taux = hChTorsXY->GetXaxis()->GetBinCenter(i0);
            double tauy = hChTorsXY->GetYaxis()->GetBinCenter(i1);
            double val = thXin + 1.E-3*(-xCRY)*taux + 1.E-3*(-yCRY)*tauy;
            hChTorsXY->Fill(taux,tauy,val);
        }
    }
}
*/
/*
hdeflXposXposY->Fill(xCRY,yCRY,deflX);
 if(flagposx && flagdivC) hdeflXposXposYC->Fill(xCRY,yCRY,deflX);

 if(flagposx) hdeflXposYthXin->Fill(thXin,yCRY,deflX);*/

/*
 */
 if(flagpos) hdeflXYscan->Fill((float)h2st+divcorr,deflX,deflY);
/*
 if(flagpos && flagdivA) hdeflXYscanA->Fill((float)h2st+divcorr,deflX,deflY);

 
 if(flagposy && flagdivAy) hdeflXposXthXin->Fill(thXin,xCRY,deflX);
 if(flagposy && flagdivAx) hdeflXposXthYin->Fill(thYin,xCRY,deflX);
 if(flagposx && flagdivAy) hdeflXposYthXin->Fill(thXin,yCRY,deflX);
 
 
 
 if(flagposx && flagdivAx) hdeflXposYthYin->Fill(thYin,yCRY,deflX);
 
 if(flagpos) hdeflXthXthYin->Fill(thXin,thYin,deflX);
 hdeflXposXposYA->Fill(xCRY,yCRY,deflX);
 hdeflXposXposY->Fill(xCRY,yCRY,deflX);
 hdeflXposXscan->Fill((float)h2st+divcorr,deflX,xCRY);
 hdeflXposYscan->Fill((float)h2st+divcorr,deflX,yCRY);
 hdeflYposXscan->Fill((float)h2st+divcorr,deflY,xCRY);
 hdeflYposYscan->Fill((float)h2st+divcorr,deflY,yCRY);
 
 if(flagpos) hdeflXYthXinP->Fill(thXin,deflY,deflX);
 if(flagpos) hdeflXYthYinP->Fill(thYin,deflY,deflX);
if(flagpos && flagdivAy) hdeflXYthXinA->Fill(thXin,deflY,deflX);
if(flagpos && flagdivAx) hdeflXYthYinA->Fill(thYin,deflY,deflX);

 
 if(flagpos)
 for(ii=1;ii<=hdeflXthXinTors->GetXaxis()->GetNbins();ii++)
 {
 tempF[0] = hdeflXthXinTors->GetXaxis()->GetBinCenter(ii);
 tempF[1] = thXin + 1.E-3*(yCRY)*tempF[0];
 hdeflXthXinTors->Fill(tempF[0],tempF[1],deflX);
 }
 
 if(flagpos)
 for(ii=1;ii<=hdeflXthYinTors->GetXaxis()->GetNbins();ii++)
 {
 tempF[0] = hdeflXthYinTors->GetXaxis()->GetBinCenter(ii);
 tempF[1] = thYin - 1.E-3*(xCRY)*tempF[0];
 hdeflXthYinTors->Fill(tempF[0],tempF[1],deflX);
 }*/


hCaloCrysADC->Fill(calo_crys_tot);
if(flagpos) hCaloCrysADCP->Fill(calo_crys_tot);
//if(flagpos && channeled) hCaloCrysADCCh->Fill(calo_crys_tot);
if(!flagpos) hCaloCrysADCOut->Fill(calo_crys_tot);
if(flagpos && flagdivA) hCaloCrysADCA->Fill(calo_crys_tot);
if(flagpos && flagdivR) hCaloCrysADCR->Fill(calo_crys_tot);

hCaloCrys->Fill(calo_crys_tot_energy);
if(flagpos) hCaloCrysP->Fill(calo_crys_tot_energy);
if(flagpos && flagdivA) hCaloCrysA->Fill(calo_crys_tot_energy);
if(flagpos && flagdivR) hCaloCrysR->Fill(calo_crys_tot_energy);
//if(flagpos && channeled) hCaloCrysCh->Fill(calo_crys_tot_energy);
if(!flagpos) hCaloCrysOut->Fill(calo_crys_tot_energy);

if(flagDeva) hCaloCrysDeva->Fill(calo_crys_tot_energy);
if(flagpos && flagDeva) hCaloCrysPDeva->Fill(calo_crys_tot_energy);
//if(flagpos && channeled && flagDeva) hCaloCrysChDeva->Fill(calo_crys_tot_energy);
if(!flagpos && flagDeva) hCaloCrysOutDeva->Fill(calo_crys_tot_energy);

hCaloCrysE->Fill(calo_crys_tot_energy);
if(flagpos) hCaloCrysPE->Fill(calo_crys_tot_energy);
//if(flagpos && channeled) hCaloCrysChE->Fill(calo_crys_tot_energy);
if(!flagpos) hCaloCrysOutE->Fill(calo_crys_tot_energy);



hCaloDeva->Fill(calo_deva_tot);

if(flagpos) hCaloCrysDevaP->Fill(calo_crys_tot,calo_deva_tot);
if(flagpos) hCaloCrysDevaP1->Fill(calo_crys_tot+calo_deva_tot);
if(flagpos) hCaloCrysthXinP->Fill(thXin,calo_crys_tot);
if(flagpos) hCaloCrysEthXinP->Fill(thXin,calo_crys_tot_energy);
if(flagpos) hCaloCrysEthYinP->Fill(thYin,calo_crys_tot_energy);

if(flagpos == true && (calo_crys_tot<65. && calo_deva_tot<8500.)==false) {
    hdeflXthXinCal->Fill(thXin,deflX);
}
if(flagpos == true && (calo_crys_tot<65. && calo_deva_tot<8500.)==true) {
    hdeflXthXinCal2->Fill(thXin,deflX);
}


if(flagposx){
for (torY = 0 ; torY <50 ; torY++)
	{
	TC =  (torY-50)*( - yCRY)*1.E-3;
	hdeflXtor[torY]->Fill(thXin+TC,deflX);             
	}
}

}



for (int ii111 = 0 ; ii111 <8 ; ii111++){
    hCalo2018ADC[ii111]->Fill(deva[ii111]);
    hCalo2018ADCscan[ii111]->Fill(nentries,deva[ii111]);
}
//scan plots for gamma 2018

if(flagpos) Crad2018Ph_gamma->Fill((float)h2st,calo_crys_tot_energy_gamma); 
if(flagpos) Rot2018Ph_gamma->Fill((float)h2st,calo_crys_tot_energy_gamma);

if(flagpos) h2dX1in2018Ph_gamma->Fill((float)h2st+divcorr,calo_crys_tot_energy_gamma);
if(flagpos) h2dX1in2018PhInv_gamma->Fill((float)h2st-divcorr,calo_crys_tot_energy_gamma);
if(flagpos) h2018PhthXinP_gamma->Fill(thXin,calo_crys_tot_energy_gamma);
if(flagpos) h2018PhthYinP_gamma->Fill(thYin,calo_crys_tot_energy_gamma);

//scan plots for fast electrons/positrons 2018
if(flagpos) h2dX1in2018Ph_efast->Fill((float)h2st+divcorr,calo_crys_tot_energy_efast);
if(flagpos) h2dX1in2018PhInv_efast->Fill((float)h2st-divcorr,calo_crys_tot_energy_efast);
if(flagpos) h2018PhthXinP_efast->Fill(thXin,calo_crys_tot_energy_efast);
if(flagpos) h2018PhthYinP_efast->Fill(thYin,calo_crys_tot_energy_efast);

//scan plots for slow electrons/positrons 2018
if(flagpos) h2dX1in2018Ph_eslow->Fill((float)h2st+divcorr,calo_crys_tot_energy_eslow);
if(flagpos) h2dX1in2018PhInv_eslow->Fill((float)h2st-divcorr,calo_crys_tot_energy_eslow);
if(flagpos) h2018PhthXinP_eslow->Fill(thXin,calo_crys_tot_energy_eslow);
if(flagpos) h2018PhthYinP_eslow->Fill(thYin,calo_crys_tot_energy_eslow);


//////////////////////////////////
//////Multitrack Histograms//////
/////////////////////////////////     //Included in 2018

if(flagpos){
//nStrip histograms
hx1nStripP->Fill(nstrip[0]);
hy1nStripP->Fill(nstrip[1]);
hx2nStripP->Fill(nstrip[2]);
hy2nStripP->Fill(nstrip[3]);
hx3nStripP->Fill(nstrip[4]);
hy3nStripP->Fill(nstrip[5]);

//cluster histograms
hx1CluP->Fill(cluster[0]);
hy1CluP->Fill(cluster[1]);
hx2CluP->Fill(cluster[2]);
hy2CluP->Fill(cluster[3]);
hx3CluP->Fill(cluster[4]);
hy3CluP->Fill(cluster[5]);

//Scan multitrack histograms

hX3CluCradP->Fill((float)h2st,cluster[4]);          
hX3CluCrad_inP->Fill((float)h2st+divcorr,cluster[4]);
 
hX3CluRotP->Fill((float)h2st,cluster[4]);          
hX3CluRot_inP->Fill((float)h2st+divcorr,cluster[4]);  

}

h2Clu3_0in->Fill((float)h2st+divcorr,cluster[4]); 
if(flagpos) h2Clu3_1in->Fill((float)h2st+divcorr,cluster[4]); //it has larger X-axis range than hX3CluCrad_inP
if(flagpos) h2Clu3_1inInv->Fill((float)h2st-divcorr,cluster[4]);

if(flagpos) hClu3thXinP->Fill(thXin,cluster[4]);
if(flagpos) hClu3thYinP->Fill(thYin,cluster[4]);

hClu3posX->Fill(xCRY,cluster[4]);
hClu3posY->Fill(yCRY,cluster[4]);
if(flagposy) hClu3posXP->Fill(xCRY,cluster[4]);
if(flagposx) hClu3posYP->Fill(yCRY,cluster[4]);

if(flagpos) hthXinP_gamma->Fill(thXin,calo_crys_tot_energy_gamma);
if(flagpos) hthYinP_gamma->Fill(thYin,calo_crys_tot_energy_gamma);
if(flagpos) hthXinP_eslow->Fill(thXin,calo_crys_tot_energy_eslow);
if(flagpos) hthYinP_eslow->Fill(thYin,calo_crys_tot_energy_eslow);
if(flagpos) hthXinP_efast->Fill(thXin,calo_crys_tot_energy_efast);
if(flagpos) hthYinP_efast->Fill(thYin,calo_crys_tot_energy_efast);

//Scintillator histograms 2018
if(flagpos) hthXinScinP->Fill(thXin,scin);
if(flagpos) hthYinScinP->Fill(thYin,scin);

if(flagpos) h2RotScinP->Fill((float)h2st+divcorr,scin);          
if(flagpos) h2RotScin_inP->Fill((float)h2st-divcorr,scin);  

if(flagpos) CradScinP->Fill((float)h2st,scin); 
if(flagpos) RotScinP->Fill((float)h2st,scin);


//Photomultiplier histograms 2018
if(flagpos) hthXinPhotomP->Fill(thXin,photom);
if(flagpos) hthYinPhotomP->Fill(thYin,photom);

if(flagpos) h2RotPhotomP->Fill((float)h2st+divcorr,photom);          
if(flagpos) h2RotPhotom_inP->Fill((float)h2st-divcorr,photom); 

//*******HISTOGRAMS FOR KLEVER EXPERIMENT
if(KLEVER){ 
    
    
  thXGammain=-calo_crys_tot_energy_efast/(E0-calo_crys_tot_energy_efast)*deflX+thXin; //calculated initial angle of gamma (before the crystal)
  thYGammain=-calo_crys_tot_energy_efast/(E0-calo_crys_tot_energy_efast)*deflY+thYin; //calculated initial angle of gamma (before the crystal)
  
  xGammaCRY=x2+thXGammain*Dgt; //calculated initial coodinate of gamma (at the crystal)
  yGammaCRY=y2+thYGammain*Dgt; //calculated initial coodinate of gamma (at the crystal) 
  
  flagpos = 0;
  flagposx = 0;
  flagposy = 0;
  
  if((xGammaCRY >= X_CUT_left) && (xGammaCRY <= X_CUT_right)) {flagposx = 1;}
  if((yGammaCRY >= Y_CUT_left) && (yGammaCRY <= Y_CUT_right)) {flagposy = 1;}

//    if((xGammaCRY <= X_CUT_left) || (xGammaCRY >= X_CUT_right)) {flagposx = 1;}
//    if((yGammaCRY <= Y_CUT_left) || (yGammaCRY >= Y_CUT_right)) {flagposy = 1;}    
    
  if(flagposx && flagposy) {flagpos = 1;}     


hS3max->Fill(scin3);
hS4max->Fill(scin4);

hS4maxScan->Fill((float)h2st,scin4);

hS4maxGonio->Fill((float)gonio_rot,scin4);

hGamma->Fill(calo_crys_tot_energy_gamma);
hGammaStep->Fill((float)goniostep,calo_crys_tot_energy_gamma);
hS4Step->Fill((float)goniostep,scin4);

helectron->Fill(calo_crys_tot_energy_efast);

hGammaS4->Fill(scin4,calo_crys_tot_energy_gamma);
hGammaT2x->Fill(pos[2],calo_crys_tot_energy_gamma);
hGammaT2y->Fill(pos[3],calo_crys_tot_energy_gamma);

//cluster histograms
hx1Clu->Fill(cluster[0]);
hy1Clu->Fill(cluster[1]);
hx2Clu->Fill(cluster[2]);
hy2Clu->Fill(cluster[3]);
hx3Clu->Fill(cluster[4]);
hy3Clu->Fill(cluster[5]);
hx4Clu->Fill(cluster[6]);
hy4Clu->Fill(cluster[7]);


//distribution of gamma at the silicon Detectors
hxygamma->Fill(BcgammaX,BcgammaY); //xy distribution
hxgamma->Fill(BcgammaX); //x distribution
hygamma->Fill(BcgammaY); //y distribution

hhx2CluGammaPP->Fill(cluster[2],calo_crys_tot_energy_gamma);

hXCluBCgammaLat->Fill((float)h2st,cluster[2]);
hYCluBCgammaLat->Fill((float)h2st,cluster[3]); 
 

// choose single trajectory at the T3
if  ((cluster[0]==1) && (cluster[1]==1))
{

    hXCluBCgammaLatP->Fill((float)h2st,cluster[2]);
    hYCluBCgammaLatP->Fill((float)h2st,cluster[3]);
  
    hS3maxP->Fill(scin3);
    hS4maxP->Fill(scin4);

    hS4maxScanP->Fill((float)h2st,scin4);

    hS4maxGonioP->Fill((float)gonio_rot,scin4);

    hGammaP->Fill(calo_crys_tot_energy_gamma);
    hGammaStepP->Fill((float)goniostep,calo_crys_tot_energy_gamma);
    hS4StepP->Fill((float)goniostep,scin4);

    hGammaS4P->Fill(scin4,calo_crys_tot_energy_gamma);
    hGammaT2xP->Fill(pos[2],calo_crys_tot_energy_gamma);
    hGammaT2yP->Fill(pos[3],calo_crys_tot_energy_gamma); 

    helectronP->Fill(calo_crys_tot_energy_efast);
    hGammaelectronP->Fill(calo_crys_tot_energy_efast,calo_crys_tot_energy_gamma);
    hGammaGammaP->Fill(E0-calo_crys_tot_energy_efast,calo_crys_tot_energy_gamma);
    hscin4GammaP->Fill(scin4,calo_crys_tot_energy_gamma);
    hS4electronP->Fill(calo_crys_tot_energy_efast,scin4);

    //distribution of gamma at the silicon Detectors
    hxygammaP->Fill(BcgammaX,BcgammaY); //xy distribution
    hxgammaP->Fill(BcgammaX); //x distribution
    hygammaP->Fill(BcgammaY); //y distribution

    //distribution of electrons at the BC1 Detectors
    hxyBC1eP->Fill(BC1eX,BC1eY); //xy distribution
    hxBC1eP->Fill(BC1eX); //x distribution
    hyBC1eP->Fill(BC1eY); //y distribution

    //distribution of electrons at the BC2 Detectors
    hxyBC2eP->Fill(BC2eX,BC2eY); //xy distribution
    hxBC2eP->Fill(BC2eX); //x distribution
    hyBC2eP->Fill(BC2eY); //y distribution

    hxyGammaCRYP->Fill(xGammaCRY,yGammaCRY);
    hxCRYGammaP->Fill(xGammaCRY,calo_crys_tot_energy_gamma);
    hxCRYscin4P->Fill(xGammaCRY,scin4);

    hyCRYGammaP->Fill(yGammaCRY,calo_crys_tot_energy_gamma);
    hyCRYscin4P->Fill(yGammaCRY,scin4);
    
    
    hx13P2->Fill(x1-x3);
    hx23P2->Fill(x2-x3);
    hx12P2->Fill(x1-x2);

    hy13P2->Fill(y1-y3);
    hy23P2->Fill(y2-y3);   
    hy12P2->Fill(y1-y2);
    
    
    // choose cut of gamma beam
    if(flagpos==1)//((calo_crys_tot_energy_efast<80.))//(flagpos==0) && 
    {

        hS3maxPP->Fill(scin3);
        hS4maxPP->Fill(scin4);



        hS4maxScanPP->Fill((float)h2st,scin4);

        hS4maxGonioPP->Fill((float)gonio_rot,scin4);

        hGammaPP->Fill(calo_crys_tot_energy_gamma);
        hGammaStepPP->Fill((float)goniostep,calo_crys_tot_energy_gamma);
        hS4StepPP->Fill((float)goniostep,scin4);

        hGammaS4PP->Fill(scin4,calo_crys_tot_energy_gamma);
        hGammaT2xPP->Fill(pos[2],calo_crys_tot_energy_gamma);
        hGammaT2yPP->Fill(pos[3],calo_crys_tot_energy_gamma); 

        helectronPP->Fill(calo_crys_tot_energy_efast);
        hGammaelectronPP->Fill(calo_crys_tot_energy_efast,calo_crys_tot_energy_gamma);
        hGammaGammaPP->Fill(E0-calo_crys_tot_energy_efast,calo_crys_tot_energy_gamma);
        hscin4GammaPP->Fill(scin4,calo_crys_tot_energy_gamma);
        hS4electronPP->Fill(calo_crys_tot_energy_efast,scin4);

        //distribution of gamma at the silicon Detectors
        hxygammaPP->Fill(BcgammaX,BcgammaY); //xy distribution
        hxgammaPP->Fill(BcgammaX); //x distribution
        hygammaPP->Fill(BcgammaY); //y distribution

        //distribution of electrons at the BC1 Detectors
        hxyBC1ePP->Fill(BC1eX,BC1eY); //xy distribution
        hxBC1ePP->Fill(BC1eX); //x distribution
        hyBC1ePP->Fill(BC1eY); //y distribution

        //distribution of electrons at the BC2 Detectors
        hxyBC2ePP->Fill(BC2eX,BC2eY); //xy distribution
        hxBC2ePP->Fill(BC2eX); //x distribution
        hyBC2ePP->Fill(BC2eY); //y distribution

        hxyGammaCRYPP->Fill(xGammaCRY,yGammaCRY);
        hxCRYGammaPP->Fill(xGammaCRY,calo_crys_tot_energy_gamma);   
        hxCRYscin4PP->Fill(xGammaCRY,scin4);    
        
        hyCRYGammaPP->Fill(yGammaCRY,calo_crys_tot_energy_gamma);   
        hyCRYscin4PP->Fill(yGammaCRY,scin4);

	

    }

}

}


