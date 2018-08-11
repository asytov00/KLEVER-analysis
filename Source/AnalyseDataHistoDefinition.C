
TH1F *hx1na = new TH1F("hx1na","X1 not-aligned;X1 [#mum]",500,posMin[1],posMax[1]);
TH1F *hx2na = new TH1F("hx2na","X2 not-aligned;X2 [#mum]",500,posMin[3],posMax[3]);
TH1F *hx3na = new TH1F("hx3na","X3 not-aligned;X3 [#mum]",500,posMin[5],posMax[5]);

TH1F *hy1na = new TH1F("hy1na","Y1 not-aligned;Y1 [#mum]",500,posMin[0],posMax[0]);
TH1F *hy2na = new TH1F("hy2na","Y2 not-aligned;Y2 [#mum]",500,posMin[2],posMax[2]);
TH1F *hy3na = new TH1F("hy3na","Y3 not-aligned;Y3 [#mum]",500,posMin[4],posMax[4]);

TH1F *hx1naP = new TH1F("hx1naP","X1 not-aligned;X1 [#mum]",500,posMin[1],posMax[1]);
TH1F *hx2naP = new TH1F("hx2naP","X2 not-aligned;X2 [#mum]",500,posMin[3],posMax[3]);
TH1F *hx3naP = new TH1F("hx3naP","X1 aligned on crystal;X1   [#mum]",500,posMin[1],posMax[1]);

TH1F *hy1naP = new TH1F("hy1naP","X1 not-aligned;X1 [#mum]",500,posMin[1],posMax[1]);
TH1F *hy2naP = new TH1F("hy2naP","X2 not-aligned;X2 [#mum]",500,posMin[3],posMax[3]);
TH1F *hy3naP = new TH1F("hy3naP","X1 aligned on crystal;X1   [#mum]",500,posMin[1],posMax[1]);

TH1F *hx1 = new TH1F("hx1","X1 aligned;X1   [#mum]",1000,posMin[1],posMax[1]);
TH1F *hx2 = new TH1F("hx2","X2 aligned;X2   [#mum]",1000,posMin[3],posMax[3]);
TH1F *hx3 = new TH1F("hx3","X3 aligned;X3   [#mum]",1000,posMin[5],posMax[5]);

TH1F *hy1 = new TH1F("hy1","Y1 aligned;Y1   [#mum]",1000,posMin[0],posMax[0]);
TH1F *hy2 = new TH1F("hy2","Y2 aligned;Y2   [#mum]",1000,posMin[2],posMax[2]);
TH1F *hy3 = new TH1F("hy3","Y3 aligned;Y3   [#mum]",1000,posMin[4],posMax[4]);

TH1F *hx1P = new TH1F("hx1P","X1 aligned;X1   [#mum]",1000,posMin[1],posMax[1]);
TH1F *hx2P = new TH1F("hx2P","X2 aligned;X2   [#mum]",1000,posMin[3],posMax[3]);
TH1F *hx3P = new TH1F("hx3P","X3 aligned;X3   [#mum]",1000,posMin[5],posMax[5]);

TH1F *hy1P = new TH1F("hy1P","Y1 aligned;Y1   [#mum]",1000,posMin[0],posMax[0]);
TH1F *hy2P = new TH1F("hy2P","Y2 aligned;Y2   [#mum]",1000,posMin[2],posMax[2]);
TH1F *hy3P = new TH1F("hy3P","Y3 aligned;Y3   [#mum]",1000,posMin[4],posMax[4]);

TH1F *hx12 = new TH1F("hx12","X position difference; X2-X1 [#mum]",2000,-2.5E4,2.5E4);
TH1F *hx13 = new TH1F("hx13","X position difference; X3-X1 [#mum]",2000,-2.5E4,2.5E4);
TH1F *hx23 = new TH1F("hx23","X position difference; X3-X2 [#mum]",2000,-2.5E4,2.5E4);

TH1F *hy12 = new TH1F("hy12","Y position difference; Y2-Y1 [#mum]",2000,-2.5E4,2.5E4);
TH1F *hy13 = new TH1F("hy13","Y position difference; Y3-Y1 [#mum]",2000,-2.5E4,2.5E4);
TH1F *hy23 = new TH1F("hy23","Y position difference; Y3-Y2 [#mum]",2000,-2.5E4,2.5E4);

TH1F *hx12P = new TH1F("hx12P","X position difference; X2-X1 [#mum]",2000,-2.5E4,2.5E4);
TH1F *hx13P = new TH1F("hx13P","X position difference; X3-X1 [#mum]",2000,-2.5E4,2.5E4);
TH1F *hx23P = new TH1F("hx23P","X position difference; X3-X2 [#mum]",2000,-2.5E4,2.5E4);

TH1F *hy12P = new TH1F("hy12P","Y position difference; Y2-Y1 [#mum]",2000,-2.5E4,2.5E4);
TH1F *hy13P = new TH1F("hy13P","Y position difference; Y3-Y1 [#mum]",2000,-2.5E4,2.5E4);
TH1F *hy23P = new TH1F("hy23P","Y position difference; Y3-Y2 [#mum]",2000,-2.5E4,2.5E4);



TH2F *hxy1 = new TH2F("hxy1","Y Vs X for detector 1;X  [#mum];Y  [#mum]",detectXBin,detectX1,detectX2,detectYBin,detectY1,detectY2);
TH2F *hxy2 = new TH2F("hxy2","Y Vs X for detector 2;X  [#mum];Y  [#mum]",detectXBin,detectX1,detectX2,detectYBin,detectY1,detectY2);
TH2F *hxy3 = new TH2F("hxy3","Y Vs X for detector 3;X  [#mum];Y  [#mum]",detectXBin,detectX1,detectX2,detectYBin,detectY1,detectY2);




///////////////////////////////////////////////////////////////////////
////////////////// Divergence Histograms  /////////////////////////////
///////////////////////////////////////////////////////////////////////
TH1F *hthXin = new TH1F("hthXin","In-going divergence (#theta_{x,in}) for X view;Horizontal Incoming Angle [#murad]"
                        ,thXinBin,-thXin+0.5,thXin+0.5);
TH1F *hthYin = new TH1F("hthYin","In-going divergence (#theta_{y,in}) for Y view;Vertical Incoming Angle [#murad]"
                        ,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthXYin = new TH2F("hthXYin","In-going divergence (#theta_{x,in},#theta_{y,in});Horizontal Incoming Angle [#murad];Vertical Incoming Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,thXinBin,-thXin+0.5,thXin+0.5);


TH1F *hthXoutP  = new TH1F("hthXoutP","Out-going divergence (#theta_{x,out}) for X view;Horizontal Outgoing Angle [#murad]"
                           ,thXoutBin,-thXout,+thXout);
TH1F *hthXoutA  = new TH1F("hthXoutA","Out-going divergence (#theta_{x,out}) for X view;Horizontal Outgoing Angle [#murad]"
                           ,thXoutBin,-thXout,+thXout);
TH1F *hthXoutB  = new TH1F("hthXoutB","Out-going divergence (#theta_{x,out}) for X view;Horizontal Outgoing Angle [#murad]"
                           ,thXoutBin,-thXout,+thXout);
TH1F *hthXoutC  = new TH1F("hthXoutC","Out-going divergence (#theta_{x,out}) for X view;Horizontal Outgoing Angle [#murad]"
                           ,thXoutBin,-thXout,+thXout);

TH1F *hthXout  = new TH1F("hthXout","Out-going divergence (#theta_{x,out}) for X view;Horizontal Outgoing Angle [#murad]"
                          ,thXoutBin,-thXout,+thXout);
TH1F *hthYout  = new TH1F("hthYout","Out-going divergence (#theta_{y,out}) for Y view;Vertical Outgoing Angle [#murad]"
                          ,thXoutBin,-thXout,+thXout);


TH2F *hthXYout = new TH2F("hthXYout","Out-going divergence (#theta_{x,out},#theta_{y,out});Horizontal Outgoing Angle [#murad];Vertical Outgoing Angle [#murad]",thXoutBin,-thXout,thXout,thXoutBin,-thXout,thXout);




///////////////////////////////////////////////////////////////////////
////////////////// Beam Deflection Histograms  ////////////////////////
///////////////////////////////////////////////////////////////////////
TH1F *hdeflX = new TH1F("hdeflX","X Beam deflection (#Delta#theta_{x} = #theta_{x,in} - #theta_{x,out}) for X view;Horizontal Deflection Angle [#murad]"
                        ,deflXBin,deflXmar1,deflXmar2);
TH1F *hdeflXP = new TH1F("hdeflXP","X Beam deflection (#Delta#theta_{x} = #theta_{x,in} - #theta_{x,out}) for X view;Horizontal Deflection Angle [#murad]",deflXBin,deflXmar1,deflXmar2);
TH1F *hdeflXA = new TH1F("hdeflXA","X Beam deflection (#Delta#theta_{x} = #theta_{x,in} - #theta_{x,out}) for X view;Horizontal Deflection Angle [#murad]",deflXBin,deflXmar1,deflXmar2);
TH1F *hdeflXB = new TH1F("hdeflXB","X Beam deflection (#Delta#theta_{x} = #theta_{x,in} - #theta_{x,out}) for X view;Horizontal Deflection Angle [#murad]",deflXBin,deflXmar1,deflXmar2);
TH1F *hdeflXC = new TH1F("hdeflXC","X Beam deflection (#Delta#theta_{x} = #theta_{x,in} - #theta_{x,out}) for X view;Horizontal Deflection Angle [#murad]",deflXBin,deflXmar1,deflXmar2);
TH1F *hdeflXcutR = new TH1F("hdeflXcutR","X Beam deflection (#Delta#theta_{x} = #theta_{x,in} - #theta_{x,out}) for X view;Horizontal Deflection Angle [#murad]",deflXBin,deflXmar1,deflXmar2);


TH1F *hdeflY  = new TH1F("hdeflY","Beam deflection (#theta_{IN} - #theta_{OUT}) for Y view;Y beam deflection [#murad]"
                         ,deflYBin,deflYmar1,deflYmar2);
TH1F *hdeflYP  = new TH1F("hdeflYP","Y Beam deflection (#Delta#theta_{y} = #theta_{y,in} - #theta_{y,out}) for Y view;Vertical Deflection Angle [#murad]",deflYBin,deflYmar1,deflYmar2);
TH1F *hdeflYA  = new TH1F("hdeflYA","Y Beam deflection (#Delta#theta_{y} = #theta_{y,in} - #theta_{y,out}) for Y view;Vertical Deflection Angle [#murad]",deflYBin,deflYmar1,deflYmar2);
TH1F *hdeflYB  = new TH1F("hdeflYB","Y Beam deflection (#Delta#theta_{y} = #theta_{y,in} - #theta_{y,out}) for Y view;Vertical Deflection Angle [#murad]",deflYBin,deflYmar1,deflYmar2);
TH1F *hdeflYC  = new TH1F("hdeflYC","Y Beam deflection (#Delta#theta_{y} = #theta_{y,in} - #theta_{y,out}) for Y view;Vertical Deflection Angle [#murad]",deflYBin,deflYmar1,deflYmar2);
TH1F *hdeflYcutR  = new TH1F("hdeflYcutR","Y Beam deflection (#Delta#theta_{y} = #theta_{y,in} - #theta_{y,out}) for Y view;Vertical Deflection Angle [#murad]",deflYBin,deflYmar1,deflYmar2);


TH2F *hdeflXY = new TH2F("hdeflXY","Y Vs X beam deflection; Horizontal Deflection Angle [#murad];Vertical Deflection Angle [#murad]"
                         ,deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflXYP = new TH2F("hdeflXYP","Y Vs X beam deflection; Horizontal Deflection Angle [#murad];Vertical Deflection Angle [#murad]",deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflXYA = new TH2F("hdeflXYA","Y Vs X beam deflection; Horizontal Deflection Angle [#murad];Vertical Deflection Angle [#murad]",deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflXYB = new TH2F("hdeflXYB","Y Vs X beam deflection; Horizontal Deflection Angle [#murad];Vertical Deflection Angle [#murad]",deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflXYC = new TH2F("hdeflXYC","Y Vs X beam deflection; Horizontal Deflection Angle [#murad];Vertical Deflection Angle [#murad]",deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflXYR = new TH2F("hdeflXYR","Y Vs X beam deflection; Horizontal Deflection Angle [#murad];Vertical Deflection Angle [#murad]",deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);



printf("1d Histograms correctly created\n");







///////////////////////////////////////////////////////////////////////
///////////// Beam Deflection VS in-going Divergence Histograms ///////
///////////////////////////////////////////////////////////////////////
TH2F *hdeflXthXin = new TH2F("hdeflXthXin","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXthYin = new TH2F("hdeflXthYin","X beam deflection (#Delta#theta_{x}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflYthXin = new TH2F("hdeflYthXin","Y beam deflection (#Delta#theta_{y}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflYthYin = new TH2F("hdeflYthYin","Y beam deflection (#Delta#theta_{y}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflYBin,deflYmar1,deflYmar2);

TH2F *hdeflRthXin = new TH2F("hdeflRthXin","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,0.,deflXmar2);
TH2F *hdeflRthYin = new TH2F("hdeflRthYin","X beam deflection (#Delta#theta_{x}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,0.,deflXmar2);

TH2F *hdeflXthXinP = new TH2F("hdeflXthXinP","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXthYinP = new TH2F("hdeflXthYinP","X beam deflection (#Delta#theta_{x}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflYthXinP = new TH2F("hdeflYthXinP","Y beam deflection (#Delta#theta_{y}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflYthYinP = new TH2F("hdeflYthYinP","Y beam deflection (#Delta#theta_{y}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflRthXinP = new TH2F("hdeflRthXinP","Y beam deflection (#Delta#theta_{y}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,0.,deflXmar2);
TH2F *hdeflRthYinP = new TH2F("hdeflRthYinP","Y beam deflection (#Delta#theta_{y}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,0.,deflXmar2);


TH2F *hdeflXthXinPA = new TH2F("hdeflXthXinPA","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXthYinPA = new TH2F("hdeflXthYinPA","X beam deflection (#Delta#theta_{x}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflYthXinPA = new TH2F("hdeflYthXinPA","Y beam deflection (#Delta#theta_{y}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflYthYinPA = new TH2F("hdeflYthYinPA","Y beam deflection (#Delta#theta_{y}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflYBin,deflYmar1,deflYmar2);

TH2F *hdeflXthXinPB = new TH2F("hdeflXthXinPB","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXthYinPB = new TH2F("hdeflXthYinPB","X beam deflection (#Delta#theta_{x}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflYthXinPB = new TH2F("hdeflYthXinPB","Y beam deflection (#Delta#theta_{y}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflYthYinPB = new TH2F("hdeflYthYinPB","Y beam deflection (#Delta#theta_{y}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflYBin,deflYmar1,deflYmar2);

TH2F *hdeflXthXinPC = new TH2F("hdeflXthXinPC","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXthYinPC = new TH2F("hdeflXthYinPC","X beam deflection (#Delta#theta_{x}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflYthXinPC = new TH2F("hdeflYthXinPC","Y beam deflection (#Delta#theta_{y}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflYthYinPC = new TH2F("hdeflYthYinPC","Y beam deflection (#Delta#theta_{y}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflYBin,deflYmar1,deflYmar2);

TH2F *hthXthXinPC = new TH2F("hthXthXinPC","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hthXthXinP = new TH2F("hthXthXinP","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinPX1 = new TH2F("hdeflXthXinPX1","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXthXinPX2 = new TH2F("hdeflXthXinPX2","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXthXinPX3 = new TH2F("hdeflXthXinPX3","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXthXinPX4 = new TH2F("hdeflXthXinPX4","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinPY1 = new TH2F("hdeflXthXinPY1","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXthXinPY2 = new TH2F("hdeflXthXinPY2","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXthXinPY3 = new TH2F("hdeflXthXinPY3","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXthXinPY4 = new TH2F("hdeflXthXinPY4","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP_3 = new TH2F("hdeflXthXinP_3","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP_2 = new TH2F("hdeflXthXinP_2","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP_1 = new TH2F("hdeflXthXinP_1","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP_0 = new TH2F("hdeflXthXinP_0","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);


///////////////////////////////////////////////////////////////////////
///////////// Beam Deflection VS Position Histograms //////////////////
///////////////////////////////////////////////////////////////////////
TH2F *hdeflXposX = new TH2F("hdeflXposX","X beam deflection  (#Delta#theta_{x}) Vs X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Horizontal Deflection Angle [#murad]",detectXBin,detectX1,detectX2,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXposXP = new TH2F("hdeflXposXP","X beam deflection  (#Delta#theta_{x}) Vs X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Horizontal Deflection Angle [#murad]",detectXBin,detectX1,detectX2,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXposY = new TH2F("hdeflXposY","X beam deflection  (#Delta#theta_{x}) Vs Y position at the crystal (y_{in}); Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",detectYBin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXposYP = new TH2F("hdeflXposYP","X beam deflection  (#Delta#theta_{x}) Vs Y position at the crystal (y_{in}); Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",detectYBin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflYposX = new TH2F("hdeflYposX","Y beam deflection  (#Delta#theta_{y}) Vs X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Vertical Deflection Angle [#murad]",detectXBin,detectX1,detectX2,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflYposY = new TH2F("hdeflYposY","Y beam deflection  (#Delta#theta_{y}) Vs Y position at the crystal (y_{in}); Vertical Incoming Position [#mum]; Vertical Deflection Angle [#murad]",detectYBin,detectY1,detectY2,deflYBin,deflYmar1,deflYmar2);


TH2F *hdeflXposXCry = new TH2F("hdeflXposXCry","X beam deflection  (#Delta#theta_{x}) Vs X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Horizontal Deflection Angle [#murad]",detectXBin,detectX1,detectX2,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXposYCry = new TH2F("hdeflXposYCry","X beam deflection  (#Delta#theta_{x}) Vs Y position at the crystal (y_{in}); Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",detectYBin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);
TH2F *hClu3posX = new TH2F("hClu3posX","; Horizontal Incoming Position [#mum];Cluster",detectXBin,detectX1,detectX2,20,-0.5,19.5);
TH2F *hClu3posY = new TH2F("hClu3posY","; Vertical Incoming Position [#mum];Cluster",detectYBin,detectY1,detectY2,20,-0.5,19.5);
TH2F *hClu3posXP = new TH2F("hClu3posXP","; Horizontal Incoming Position [#mum];Cluster",detectXBin,detectX1,detectX2,20,-0.5,19.5);
TH2F *hClu3posYP = new TH2F("hClu3posYP","; Vertical Incoming Position [#mum];Cluster",detectYBin,detectY1,detectY2,20,-0.5,19.5);

TH2F *hdeflXposXA = new TH2F("hdeflXposXA","X beam deflection  (#Delta#theta_{x}) Vs X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Horizontal Deflection Angle [#murad]",detectXBin,detectX1,detectX2,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXposYA = new TH2F("hdeflXposYA","X beam deflection  (#Delta#theta_{x}) Vs Y position at the crystal (y_{in}); Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",detectYBin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflYposXA = new TH2F("hdeflYposXA","Y beam deflection  (#Delta#theta_{y}) Vs X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Vertical Deflection Angle [#murad]",detectXBin,detectX1,detectX2,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflYposYA = new TH2F("hdeflYposYA","Y beam deflection  (#Delta#theta_{y}) Vs Y position at the crystal (y_{in}); Vertical Incoming Position [#mum]; Vertical Deflection Angle [#murad]",detectYBin,detectY1,detectY2,deflYBin,deflYmar1,deflYmar2);

TH2F *hdeflXposXB = new TH2F("hdeflXposXB","X beam deflection  (#Delta#theta_{x}) Vs X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Horizontal Deflection Angle [#murad]",detectXBin,detectX1,detectX2,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXposYB = new TH2F("hdeflXposYB","X beam deflection  (#Delta#theta_{x}) Vs Y position at the crystal (y_{in}); Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",detectYBin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflYposXB = new TH2F("hdeflYposXB","Y beam deflection  (#Delta#theta_{y}) Vs X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Vertical Deflection Angle [#murad]",detectXBin,detectX1,detectX2,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflYposYB = new TH2F("hdeflYposYB","Y beam deflection  (#Delta#theta_{y}) Vs Y position at the crystal (y_{in}); Vertical Incoming Position [#mum]; Vertical Deflection Angle [#murad]",detectYBin,detectY1,detectY2,deflYBin,deflYmar1,deflYmar2);





TH2F *hdeflXposXC = new TH2F("hdeflXposXC","X beam deflection  (#Delta#theta_{x}) Vs X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Horizontal Deflection Angle [#murad]",detectXBin,detectX1,detectX2,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflXposYC = new TH2F("hdeflXposYC","X beam deflection  (#Delta#theta_{x}) Vs Y position at the crystal (y_{in}); Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",detectYBin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflYposXC = new TH2F("hdeflYposXC","Y beam deflection  (#Delta#theta_{y}) Vs X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Vertical Deflection Angle [#murad]",detectXBin,detectX1,detectX2,deflYBin,deflYmar1,deflYmar2);
TH2F *hdeflYposYC = new TH2F("hdeflYposYC","Y beam deflection  (#Delta#theta_{y}) Vs Y position at the crystal (y_{in}); Vertical Incoming Position [#mum]; Vertical Deflection Angle [#murad]",detectYBin,detectY1,detectY2,deflYBin,deflYmar1,deflYmar2);



///////////////////////////////////////////////////////////////////////
//////////////////// Position Zone Analysis  //////////////////////////
///////////////////////////////////////////////////////////////////////


TH2F *hdeflXthXinP11 = new TH2F("hdeflXthXinP11","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP12 = new TH2F("hdeflXthXinP12","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP13 = new TH2F("hdeflXthXinP13","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP14 = new TH2F("hdeflXthXinP14","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);


TH2F *hdeflXthXinP21 = new TH2F("hdeflXthXinP21","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP22 = new TH2F("hdeflXthXinP22","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP23 = new TH2F("hdeflXthXinP23","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP24 = new TH2F("hdeflXthXinP24","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);


TH2F *hdeflXthXinP31 = new TH2F("hdeflXthXinP31","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP32 = new TH2F("hdeflXthXinP32","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP33 = new TH2F("hdeflXthXinP33","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP34 = new TH2F("hdeflXthXinP34","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);


TH2F *hdeflXthXinP41 = new TH2F("hdeflXthXinP41","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP42 = new TH2F("hdeflXthXinP42","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP43 = new TH2F("hdeflXthXinP43","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinP44 = new TH2F("hdeflXthXinP44","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

///////////////////////////////////////////////////////////////////////
///////////// Beam Divergence VS Position Histograms //////////////////
///////////////////////////////////////////////////////////////////////

TH2F *hposXposYin = new TH2F("hposXposYin","Y position at the crystal (y_{in}) Vs X position at the crystal (x_{in});  Horizontal Incoming Position [#mum]; Vertical Incoming Position [#mum];",detectXBin,detectX1,detectX2,detectYBin,detectY1,detectY2);
TH2F *hthXposXin = new TH2F("hthXposXin","X in-going angle (#theta_{x,in}) Vs X position at the crystal (x_{in});  Horizontal Incoming Position [#mum];Horizontal Incoming Angle [#murad]",detectXBin,detectX1,detectX2,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthXposYin = new TH2F("hthXposYin","X in-going angle (#theta_{x,in}) Vs Y position at the crystal (y_{in});  Vertical Incoming Position [#mum]; Horizontal Incoming Angle [#murad]",detectYBin,detectY1,detectY2,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthYposYin = new TH2F("hthYposYin","X in-going angle (#theta_{X,in}) Vs Y position at the crystal (y_{in});  Vertical Incoming Position [#mum]; Horizontal Incoming Angle [#murad]",detectYBin,detectY1,detectY2,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthYposXin = new TH2F("hthYposXin","Y in-going angle (#theta_{y,in}) Vs Y position at the crystal (y_{in});  Vertical Incoming Position [#mum]; Vertical Incoming Angle [#murad]",detectXBin,detectX1,detectX2,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthXposXout = new TH2F("hthXposXout","X out-going angle (#theta_{x,out}) Vs X position out of the crystal (x_{out});  x_{out} [#mum]; Horizontal Outgoing Angle [#murad]",detectXBin,detectX1,detectX2,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthYposYout = new TH2F("hthYposYout","Y out-going angle (#theta_{y,out}) Vs Y position out of the crystal (y_{out});  y_{out} [#mum]; Vertical Outgoing Angle [#murad]",detectYBin,detectY1,detectY2,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthXposXinP = new TH2F("hthXposXinP","X in-going angle (#theta_{x,in}) Vs X position at the crystal (x_{in});  Horizontal Incoming Position [#mum];Horizontal Incoming Angle [#murad]",detectXBin,detectX1,detectX2,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthXposYinP = new TH2F("hthXposYinP","X in-going angle (#theta_{x,in}) Vs Y position at the crystal (y_{in});  Vertical Incoming Position [#mum]; Horizontal Incoming Angle [#murad]",detectXBin,detectX1,detectX2,thXinBin,-thXin+0.5,thXin+0.5);

TH2F *hthYposXinP = new TH2F("hthYposXinP","Y in-going angle (#theta_{y,in}) Vs X position at the crystal (x_{in});  Horizontal Incoming Position [#mum];Vertical Incoming Angle [#murad]",detectYBin,detectY1,detectY2,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthYposYinP = new TH2F("hthYposYinP","Y in-going angle (#theta_{y,in}) Vs Y position at the crystal (y_{in});  Vertical Incoming Position [#mum]; Vertical Incoming Angle [#murad]",detectYBin,detectY1,detectY2,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthXposXoutP = new TH2F("hthXposXoutP","X out-going angle (#theta_{x,out}) Vs X position out of the crystal (x_{out});  x_{out} [#mum]; Horizontal Outgoing Angle [#murad]",detectXBin,detectX1,detectX2,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthYposYoutP = new TH2F("hthYposYoutP","Y out-going angle (#theta_{y,out}) Vs Y position out of the crystal (y_{out});  y_{out} [#mum]; Vertical Outgoing Angle [#murad]",detectYBin,detectY1,detectY2,thXinBin,-thXin+0.5,thXin+0.5);







///////////////////////////////////////////////////////////////////////
///////////// Beam Divergence VS Time /////////////////////////////////
///////////////////////////////////////////////////////////////////////
int nfilestot = 0.;
for(ijk=0;ijk<N_RUNS;ijk++)
{
    nfilestot=nfilestot+nfiles[ijk];
}
TH2F *hthXrun = new TH2F("hthXrun","X in-going angle (#theta_{x,in}) Vs Run number; Run Number; Horizontal Incoming Angle [#murad]",nfilestot,0,nfilestot,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthYrun = new TH2F("hthYrun","Y in-going angle (#theta_{y,in}) Vs Run number; Run Number; Vertical Incoming Angle [#murad]",nfilestot,0,nfilestot,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthXrunCry = new TH2F("hthXrunCry","X in-going angle (#theta_{x,in}) Vs Run number; Run Number; Horizontal Incoming Angle [#murad]",nfilestot,0,nfilestot,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hthYrunCry = new TH2F("hthYrunCry","Y in-going angle (#theta_{y,in}) Vs Run number; Run Number; Vertical Incoming Angle [#murad]",nfilestot,0,nfilestot,thXinBin,-thXin+0.5,thXin+0.5);
TH2F *hdeflXrunCryB = new TH2F("hdeflXrunCryB","X beam deflection (#Delta#theta_{x}) Vs Run number; Run Number ; Horizontal Deflection Angle [#murad]",nfilestot,0,nfilestot,deflXBin,deflXmar1,deflXmar2);
TH2F *hdeflYrunCryB = new TH2F("hdeflYrunCryB","Y beam deflection (#Delta#theta_{y}) Vs Run number; Run Number ; Vertical Deflection Angle [#murad])",nfilestot,0,nfilestot,deflYBin,deflYmar1,deflYmar2);


///////////////////////////////////////////////////////////////////////
//////////////////////// Scan Histograms  /////////////////////////////
///////////////////////////////////////////////////////////////////////

TH2F *h2dX0 = new TH2F("h2dX0","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle (#phi_{x}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX1 = new TH2F("h2dX1","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle (#phi_{x}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX2A = new TH2F("h2dX2A","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle (#phi_{x}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX2B = new TH2F("h2dX2B","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle (#phi_{x}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX2C = new TH2F("h2dX2C","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle (#phi_{x}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX2R = new TH2F("h2dX2R","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle (#phi_{x}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);

TH2F *h2Clu3_0in = new TH2F("h2Clu3_0in","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*20,rotSX-fabs(rotSX),rotDX+fabs(rotDX),20,-0.5,19.5);
TH2F *h2Clu3_1in = new TH2F("h2Clu3_1in","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*20,rotSX-fabs(rotSX),rotDX+fabs(rotDX),20,-0.5,19.5);

TH2F *h2Clu3_1inInv = new TH2F("h2Clu3_1inInv","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*20,rotSX-fabs(rotSX),rotDX+fabs(rotDX),20,-0.5,19.5);


TH2F *h2dX0in   = new TH2F("h2dX0in","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*20,rotSX-fabs(rotSX),rotDX+fabs(rotDX),deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX1in = new TH2F("h2dX1in","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2*10,rotSX-fabs(rotSX),rotDX+fabs(rotDX),deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX1inGO = new TH2F("h2dX1inGO","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2*10,-1778676,-1776716,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX1inT = new TH2F("h2dX1inT","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2*10,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX1inInv = new TH2F("h2dX1inInv","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2*10,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);

TH2F *h2dX1u = new TH2F("h2dX1u","X beam deflection (#theta_{x,out}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Outgoing Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);

TH2F *h2thX1in = new TH2F("h2thX1in","X out-going angle (#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; #theta_{x} [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);

TH2F *h2dX1inX1 = new TH2F("h2dX1inX1","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX1inX2 = new TH2F("h2dX1inX2","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX1inX3 = new TH2F("h2dX1inX3","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX1inX4 = new TH2F("h2dX1inX4","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);

TH2F *h2dX1inY1 = new TH2F("h2dX1inY1","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX1inY2 = new TH2F("h2dX1inY2","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX1inY3 = new TH2F("h2dX1inY3","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);
TH2F *h2dX1inY4 = new TH2F("h2dX1inY4","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);



TH2F *h2dY0 = new TH2F("h2dY0","Y beam deflection (#Delta#theta_{y}) Vs Goniometer rotation angle (#phi_{x}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflYBin,deflYmar1,deflYmar2);
TH2F *h2dY1 = new TH2F("h2dY1","Y beam deflection (#Delta#theta_{y}) Vs Goniometer rotation angle (#phi_{x}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflYBin,deflYmar1,deflYmar2);
TH2F *h2dY2A = new TH2F("h2dY2A","Y beam deflection (#Delta#theta_{y}) Vs Goniometer rotation angle (#phi_{x}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflYBin,deflYmar1,deflYmar2);
TH2F *h2dY2B = new TH2F("h2dY2B","Y beam deflection (#Delta#theta_{y}) Vs Goniometer rotation angle (#phi_{x}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflYBin,deflYmar1,deflYmar2);
TH2F *h2dY2C = new TH2F("h2dY2C","Y beam deflection (#Delta#theta_{y}) Vs Goniometer rotation angle (#phi_{x}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflYBin,deflYmar1,deflYmar2);
TH2F *h2dY2R = new TH2F("h2dY2R","Y beam deflection (#Delta#theta_{y}) Vs Goniometer rotation angle (#phi_{x}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflYBin,deflYmar1,deflYmar2);

TH2F *h2dY0in = new TH2F("h2dY0in","Y beam deflection (#Delta#theta_{y}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflYBin,deflYmar1,deflYmar2);
TH2F *h2dY1in = new TH2F("h2dY1in","Y beam deflection (#Delta#theta_{y}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);

TH2F *h2dY1inInv = new TH2F("h2dY1inInv","Y beam deflection (#Delta#theta_{y}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2);


TH3F *h2dX1inTors = new TH3F("h2dX1inTors","X beam deflection (#Delta#theta_{x}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Torsion [#murad/mm] ; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",40,-20.5,19.5,(nbin+4)*5.,rotSX,rotDX,deflXBin / 4.,deflXmar1,deflXmar2);



///////////////////////////////////////////////////////////////////////
//////////////// Scan Histograms: 2D Slices  //////////////////////////
///////////////////////////////////////////////////////////////////////

TH2F *hdeflXY_SL[256];
TH2F *hdeflXYP_SL[256];
TH2F *hdeflXYPT_SL[256];
TH2F *hthXY_SL[256];
TH2F *hthXYPT_SL[256];

char histoname1[256];
char histoname2[256];

int nhisto = 0;
if(scanflag == 0) nhisto = Nsteps_lin+5;
if(scanflag == 1) nhisto = Nsteps_rot+5;
if(scanflag == 2) nhisto = Nsteps_crad+5;
int deflXYscanSTEP = 5;

int slicesnumb = 1;
slicesnumb = 10;

for(i=0; i < 9 ;i++)
{
    for(j=0; j < 9 ;j++)
    {
        k = i*10+j;
        sprintf(histoname2,"Y beam deflection  (#Delta#theta_{y}) Vs X beam deflection  (#Delta#theta_{x}) - ( #theta_{x,in,c} ,  #theta_{y,in,c} ) = ( %d , %d ) [#murad]; Horizontal Deflection Angle [#murad]; Vertical Deflection Angle [#murad]",(i-4)*deflXYscanSTEP,(j-4)*deflXYscanSTEP);
        sprintf(histoname1,"hdeflXY_SL%1d%1d",i,j);
        hdeflXY_SL[k] = new TH2F(histoname1,histoname2,deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);
        sprintf(histoname1,"hdeflXYPT_SL%1d%1d",i,j);
        hdeflXYPT_SL[k] = new TH2F(histoname1,histoname2,deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);
        sprintf(histoname1,"hdeflXYP_SL%d%1d",i,j);
        hdeflXYP_SL[k] = new TH2F(histoname1,histoname2,deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);
        
        sprintf(histoname2,"Y beam out-going angle  (#theta_{y,out}) Vs X  beam out-going angle (#theta_{xmout}) - ( #theta_{x,in,c} ,  #theta_{y,in,c} ) = ( %d , %d ) [#murad]; Horizontal Outgoing Angle [#murad]; Vertical Outgoing Angle [#murad]",(i-4)*deflXYscanSTEP,(j-4)*deflXYscanSTEP);
        sprintf(histoname1,"hthXY_SL%1d%1d",i,j);
        hthXY_SL[k] = new TH2F(histoname1,histoname2,deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);
        sprintf(histoname1,"hthXYPT_SL%1d%1d",i,j);
        hthXYPT_SL[k] = new TH2F(histoname1,histoname2,deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);
    }
}


printf("2d Histograms correctly created\n");


/*TH2F *hdeflXY_center[32][32];

for(i=0; i < 32 ;i++)
{
    for(j=0; j < 32 ;j++)
    {
     
        sprintf(histoname2,"Y beam out-going angle  (#theta_{y,out}) Vs X  beam out-going angle (#theta_{xmout}) - ( #theta_{x,in,c} ,  #theta_{y,in,c} ) = ( %.1f, %.1f ) [#murad]; Horizontal Deflection Angle [#murad]; Vertical Deflection Angle [#murad]",i-16,j-16);
        sprintf(histoname1,"hdeflXY_center%02d%02d",i,j);
        hdeflXY_center[i][j] = new TH2F(histoname1,histoname2,deflXBin/8,deflXmar1,deflXmar2,deflYBin/8,deflYmar1,deflYmar2);
        
    }
}*/
    
    ///////////////////////////////////////////////////////////////////////
//////////////////////// 3D Histograms  ///////////////////////////////
///////////////////////////////////////////////////////////////////////

/*
int TH3DxSbin = (int)(fabs(rotR - rotL) / 2);
int TH3Dxbin = int(thXinBin);
int TH3Dybin = int(thXinBin);
int TH3Pxbin = int(fabs(detectX1 - detectX2))/50;
int TH3Pybin = int(fabs(detectY1 - detectY2))/100;

if(LOWRES)
{
    TH3DxSbin = TH3DxSbin/4;
    TH3Dxbin = TH3Dxbin/4;
    TH3Dybin = TH3Dybin/4;
    TH3Pxbin = TH3Pxbin/4;
    TH3Pybin = TH3Pybin/4;
}



//////////////////////// Scan 3D Histograms  ///////////////////////////////

TH3F *hdeflXthXinTors = new TH3F("hdeflXthXinTors","X beam deflection (#Delta#theta_{x}) VS  Torsion (#tau) VS X in-going angle (#theta_{x,in}); #tau [#murad/mm]; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",40,-10.1,9.9,TH3Dxbin,-thXin+0.5,thXin+0.5,deflXBin/4.,deflXmar1,deflXmar2);

TH3F *hdeflXthXinTorsX = new TH3F("hdeflXthXinTorsX","X beam deflection (#Delta#theta_{x}) VS  Torsion (#tau) VS X in-going angle (#theta_{x,in}); #tau [#murad/mm]; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",20,-80.1,79.9,TH3Dxbin,-thXin+0.5,thXin+0.5,deflXBin/4.,deflXmar1,deflXmar2);

TH3F *hChTorsXY = new TH3F("hChTorsXY","Channeled Particles Vs #tau_{x} Vs #tau_{y}; #tau_{x} [#murad/mm];  #tau_{y} [#murad/mm]; Incoming Angle [#murad]",20,-80.1,79.9,20,-80.1,79.9,TH3Dxbin,-thXin+0.5,thXin+0.5);

TH3F *hdeflXposXposY = new TH3F("hdeflXposXposY","X beam deflection (#Delta#theta_{x}) VS Y position at the crystal (y_{in}) VS X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",TH3Pxbin,detectX1,detectX2,TH3Pybin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);

TH3F *hdeflXposXposYC = new TH3F("hdeflXposXposYC","X beam deflection (#Delta#theta_{x}) VS Y position at the crystal (y_{in}) VS X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",TH3Pxbin,detectX1,detectX2,TH3Pybin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);

TH3F *hdeflXposYthXin = new TH3F("hdeflXposYthXin","X beam deflection (#Delta#theta_{x}) VS  Y position at the crystal (y_{in}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",TH3Dxbin,-thXin+0.5,thXin+0.5,TH3Pybin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);
*/
TH3F *hdeflXYscan = new TH3F("hdeflXYscan","X beam deflection (#Delta#theta_{x}) VS Y beam deflection (#Delta#theta_{y}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad];  Vertical Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);
/*
TH3F *hdeflXYscanA = new TH3F("hdeflXYscanA","X beam deflection (#Delta#theta_{x}) VS Y beam deflection (#Delta#theta_{y}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad];  Vertical Deflection Angle [#murad]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2,deflYBin,deflYmar1,deflYmar2);

TH3F *hdeflXposXscan = new TH3F("hdeflXposXscan","X beam deflection (#Delta#theta_{x}) VS X position at the crystal (x_{in}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad];  x_{in} [#mum]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2,TH3Pxbin,detectX1,detectX2);

TH3F *hdeflXposYscan = new TH3F("hdeflXposYscan","X beam deflection (#Delta#theta_{x}) VS Y position at the crystal (x_{in}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad];  x_{in} [#mum]",(nbin+4)*2,rotSX,rotDX,deflXBin,deflXmar1,deflXmar2,TH3Pybin,detectY1,detectY2);

TH3F *hdeflYposXscan = new TH3F("hdeflYposXscan","Y beam deflection (#Delta#theta_{y}) VS X position at the crystal (x_{in}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad];  x_{in} [#mum]",(nbin+4)*2,rotSX,rotDX,deflYBin,deflYmar1,deflYmar2,TH3Pxbin,detectX1,detectX2);

TH3F *hdeflYposYscan = new TH3F("hdeflYposYscan","Y beam deflection (#Delta#theta_{y}) VS Y position at the crystal (x_{in}) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad];  x_{in} [#mum]",(nbin+4)*2,rotSX,rotDX,deflYBin,deflYmar1,deflYmar2,TH3Pybin,detectY1,detectY2);

TH3F *hdeflXthXrun = new TH3F("hdeflXthXrun","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}) VS Run Number; Run Number; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",int(nfilestot/100)+1,0,nfilestot,TH3Dxbin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH3F *hdeflXthXinTorsion = new TH3F("hdeflXthXinTorsion","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}) VS Run Number; Torsion [#murad/mm]; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",41,-20.5,20.5,TH3Dxbin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

//////////////////////// Phase Space 3D Histograms  ///////////////////////////////

TH3F *hdeflXposXthXin = new TH3F("hdeflXposXthXin","X beam deflection (#Delta#theta_{x}) VS  X position at the crystal (x_{in}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Incoming Position [#mum];Horizontal Deflection Angle [#murad]",TH3Dxbin,-thXin+0.5,thXin+0.5,TH3Pxbin,detectX1,detectX2,deflXBin,deflXmar1,deflXmar2);

TH3F *hdeflXposXthYin = new TH3F("hdeflXposXthYin","X beam deflection (#Delta#theta_{x}) VS  X position at the crystal (x_{in}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Horizontal Incoming Position [#mum];Horizontal Deflection Angle [#murad]",TH3Dybin,-thXin+0.5,thXin+0.5,TH3Pxbin,detectX1,detectX2,deflXBin,deflXmar1,deflXmar2);

TH3F *hdeflXposYthYin = new TH3F("hdeflXposYthYin","X beam deflection (#Delta#theta_{x}) VS  Y position at the crystal (y_{in}) VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",TH3Dybin,-thXin+0.5,thXin+0.5,TH3Pybin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);

TH3F *hdeflXposYthXin = new TH3F("hdeflXposYthXin","X beam deflection (#Delta#theta_{x}) VS  Y position at the crystal (y_{in}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",TH3Dxbin,-thXin+0.5,thXin+0.5,TH3Pybin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);

TH3F *hdeflXposYthXinSCAN = new TH3F("hdeflXposYthXinSCAN","X beam deflection (#Delta#theta_{x}) VS  Y position at the crystal (y_{in}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",TH3DxSbin,rotSX,rotDX,TH3Pybin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);

TH3F *hdeflXthXthYin = new TH3F("hdeflXthXthYin","X beam deflection (#Delta#theta_{x}) VS Y in-going angle (#theta_{y,in}) VS X in-going angle (#theta_{x,in}); Vertical Incoming Angle [#murad]; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",TH3Dybin/2,-thXin+0.5,thXin+0.5,TH3Dybin/2,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH3F *hdeflXposXposY = new TH3F("hdeflXposXposY","X beam deflection (#Delta#theta_{x}) VS Y position at the crystal (y_{in}) VS X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",TH3Pxbin,detectX1,detectX2,TH3Pybin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);

TH3F *hdeflXposXposYA = new TH3F("hdeflXposXposYA","X beam deflection (#Delta#theta_{x}) VS Y position at the crystal (y_{in}) VS X position at the crystal (x_{in}); Horizontal Incoming Position [#mum];Vertical Incoming Position [#mum]; Horizontal Deflection Angle [#murad]",TH3Pxbin,detectX1,detectX2,TH3Pybin,detectY1,detectY2,deflXBin,deflXmar1,deflXmar2);



TH3F *hdeflXthYinTors = new TH3F("hdeflXthYinTors","X beam deflection (#Delta#theta_{x}) VS  Torsion (#tau) VS X in-going angle (#theta_{x,in}); #tau [#murad/mm]; Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",100,150.,350.,TH3Dybin,-thYin,+thYin,deflXBin,deflXmar1,deflXmar2);

printf("3d Histograms correctly created\n");

//////////////////////// DeflectionXY 3D Histograms  ///////////////////////////////

TH3F *hdeflXYthXinP = new TH3F("hdeflXYthXinP","X beam deflection (#Delta#theta_{x}) VS  Y beam deflection (#Delta#theta_{y}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad];Vertical Deflection Angle [#murad];Horizontal Deflection Angle [#murad]",TH3Dxbin/8,-thXin+0.5,thXin+0.5,deflYBin/8,deflYmar1,deflYmar2,deflXBin/8,deflXmar1,deflXmar2);

TH3F *hdeflXYthYinP = new TH3F("hdeflXYthYinP","Y beam deflection (#Delta#theta_{Y}) VS  Y beam deflection (#Delta#theta_{y}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad];Vertical Deflection Angle [#murad];Horizontal Deflection Angle [#murad]",TH3Dybin/32,-thYin,+thYin,deflYBin/8,deflYmar1,deflYmar2,deflXBin/8,deflXmar1,deflXmar2);

TH3F *hdeflXYthXinA = new TH3F("hdeflXYthXinA","X beam deflection (#Delta#theta_{x}) VS  Y beam deflection (#Delta#theta_{y}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad];Vertical Deflection Angle [#murad];Horizontal Deflection Angle [#murad]",TH3Dxbin/8,-thXin+0.5,thXin+0.5,deflYBin/8,deflYmar1,deflYmar2,deflXBin/8,deflXmar1,deflXmar2);

TH3F *hdeflXYthYinA = new TH3F("hdeflXYthYinA","Y beam deflection (#Delta#theta_{Y}) VS  Y beam deflection (#Delta#theta_{y}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad];Vertical Deflection Angle [#murad];Horizontal Deflection Angle [#murad]",TH3Dybin/32,-thYin,+thYin,deflYBin/8,deflYmar1,deflYmar2,deflXBin/8,deflXmar1,deflXmar2);
*/

//////////////////////// Calorimeter Histograms  ///////////////////////////////

/// 2018 ////
TH1F *hCalo2018ADC[8];
for (int ii111 = 0 ; ii111 <8 ; ii111++){
    sprintf(histoname2,"ADC ( %d ) [#murad]; ADC [channel]; Counts [a.u.]",ii111);
    sprintf(histoname1,"hCalo2018ADC%1d",ii111);
    hCalo2018ADC[ii111] = new TH1F(histoname1,histoname2,16000,-0.5,16000-0.5);
}

TH1F *hCalo2018ADC1 = new TH1F("hCaloCrysADC","Digit Calo Crys",16000,0,16000);
TH1F *hCalo2018ADC2 = new TH1F("hCaloCrysADC","Digit Calo Crys",16000,0,16000);
TH1F *hCalo2018ADC3 = new TH1F("hCaloCrysADC","Digit Calo Crys",16000,0,16000);
TH1F *hCalo2018ADC4 = new TH1F("hCaloCrysADC","Digit Calo Crys",16000,0,16000);

double EminCalo = -0.5;

double EmaxCalo = 140.5;
int binCalo = (EmaxCalo - EminCalo) * 2.;

//scan plots for gamma 2018
double binSizeCrad=(gonio_crad_last-gonio_crad_first)/Nsteps_crad;
double binSizeRot=(gonio_rot_last-gonio_rot_first)/Nsteps_rot;
TH2F *Crad2018Ph_gamma = new TH2F("Crad2018Ph_gamma","Gamma Vs Cradle Scan; Cradle Angle [#murad]; Energy [GeV]",Nsteps_crad+1,gonio_crad_first-0.5*binSizeCrad,gonio_crad_last+0.5*binSizeCrad,binCalo,EminCalo,EmaxCalo);
TH2F *Rot2018Ph_gamma = new TH2F("Rot2018Ph_gamma","Gamma Vs Rotational Scan; Rotational Angle [#murad]; Energy [GeV]",Nsteps_rot+1,gonio_rot_first-0.5*binSizeRot,gonio_rot_last+0.5*binSizeRot,binCalo,EminCalo,EmaxCalo);

TH2F *h2dX1in2018Ph_gamma = new TH2F("h2dX1in2018Ph_gamma","Gamma: Calorimeter 4 Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",(nbin+4)*2*10,rotSX,rotDX,binCalo,EminCalo,EmaxCalo);
TH2F *h2dX1in2018PhInv_gamma = new TH2F("h2dX1in2018PhInv_gamma","Gamma: Calorimeter 4 Vs Goniometer rotation angle - X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",(nbin+4)*2*10,rotSX,rotDX,binCalo,EminCalo,EmaxCalo);

TH2F *h2018PhthXinP_gamma = new TH2F("h2018PhthXinP_gamma","Gamma: Calorimeter 4 VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *h2018PhthYinP_gamma = new TH2F("h2018PhthYinP_gamma","Gamma: Calorimeter 4 VS Y in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);

//scan plots for fast electrons/positrons 2018
TH2F *h2dX1in2018Ph_efast = new TH2F("h2dX1in2018Ph_efast","e+/- fast: Calorimeter 4 Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",(nbin+4)*2*10,rotSX,rotDX,binCalo,EminCalo,EmaxCalo);
TH2F *h2dX1in2018PhInv_efast = new TH2F("h2dX1in2018PhInv_efast","e+/- fast: Calorimeter 4 Vs Goniometer rotation angle - X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",(nbin+4)*2*10,rotSX,rotDX,binCalo,EminCalo,EmaxCalo);

TH2F *h2018PhthXinP_efast = new TH2F("h2018PhthXinP_efast","e+/- fast: Calorimeter 4 VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *h2018PhthYinP_efast = new TH2F("h2018PhthYinP_efast","e+/- fast: Calorimeter 4 VS Y in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);

//scan plots for slow electrons/positrons 2018
TH2F *h2dX1in2018Ph_eslow = new TH2F("h2dX1in2018Ph_eslow","e+/- slow: Calorimeter 4 Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",(nbin+4)*2*10,rotSX,rotDX,binCalo,EminCalo,EmaxCalo);
TH2F *h2dX1in2018PhInv_eslow = new TH2F("h2dX1in2018PhInv_eslow","e+/- slow: Calorimeter 4 Vs Goniometer rotation angle - X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",(nbin+4)*2*10,rotSX,rotDX,binCalo,EminCalo,EmaxCalo);

TH2F *h2018PhthXinP_eslow = new TH2F("h2018PhthXinP_eslow","e+/- slow: Calorimeter 4 VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *h2018PhthYinP_eslow = new TH2F("h2018PhthYinP_eslow","e+/- slow: Calorimeter 4 VS Y in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Energy [GeV]; Counts [a.u.]",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);

////////


TH1F *hCaloCrys = new TH1F("hCaloCrys","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);
TH1F *hCaloCrysP = new TH1F("hCaloCrysP","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);
TH1F *hCaloCrysA = new TH1F("hCaloCrysA","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);
TH1F *hCaloCrysR = new TH1F("hCaloCrysR","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);
TH1F *hCaloCrysCh = new TH1F("hCaloCrysCh","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);
TH1F *hCaloCrysOut = new TH1F("hCaloCrysOut","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);

TH1F *hCaloCrysDeva = new TH1F("hCaloCrysDeva","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);
TH1F *hCaloCrysPDeva = new TH1F("hCaloCrysPDeva","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);
TH1F *hCaloCrysChDeva = new TH1F("hCaloCrysChDeva","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);
TH1F *hCaloCrysOutDeva = new TH1F("hCaloCrysOutDeva","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);

TH1F *hCaloCrysE = new TH1F("hCaloCrysE","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);
TH1F *hCaloCrysPE = new TH1F("hCaloCrysPE","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);
TH1F *hCaloCrysChE = new TH1F("hCaloCrysChE","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);
TH1F *hCaloCrysOutE = new TH1F("hCaloCrysOutE","Digit Calo Crys",binCalo,EminCalo,EmaxCalo);

TH1F *hCaloCrysADC = new TH1F("hCaloCrysADC","Digit Calo Crys",1000,0,10000);
TH1F *hCaloCrysADCP = new TH1F("hCaloCrysADCP","Digit Calo Crys",1000,0,10000);
TH1F *hCaloCrysADCA = new TH1F("hCaloCrysADCA","Digit Calo Crys",1000,0,10000);
TH1F *hCaloCrysADCR = new TH1F("hCaloCrysADCR","Digit Calo Crys",1000,0,10000);
TH1F *hCaloCrysADCCh = new TH1F("hCaloCrysADCCh","Digit Calo Crys",1000,0,10000);
TH1F *hCaloCrysADCOut = new TH1F("hCaloCrysADCOut","Digit Calo Crys",1000,0,10000);
//TH2F *h2dX1inRad   = new TH2F("h2dX1inRad","Energy loss at Stefanino (GeV) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy loss at Stefanino [GeV]",1000,-17000,-2000,140*2,-0.5,139.5);
//TH2F *h2dX1Rad   = new TH2F("h2dX1Rad","Energy loss at Stefanino (GeV) Vs Goniometer rotation angle; Horizontal Incoming Gonio [#murad]; Energy loss at Stefanino [GeV]",1000,-17000,-2000,140*2,-0.5,139.5);

//TH2F *h2dX1inRad   = new TH2F("h2dX1inRad","Energy loss at Stefanino (GeV) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy loss at Stefanino [GeV]",2000,-60000,-50000,140*2,-0.5,139.5);
//TH2F *h2dX1Rad   = new TH2F("h2dX1Rad","Energy loss at Stefanino (GeV) Vs Goniometer rotation angle; Horizontal Incoming Gonio [#murad]; Energy loss at Stefanino [GeV]",2000,-60000,-50000,140*2,-0.5,139.5);

TH2F *h2dX1inRad   = new TH2F("h2dX1inRad","Energy loss at Stefanino (GeV) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy loss at Stefanino [GeV]",2048,-63000,-51000,140*2,-0.5,139.5);
TH2F *h2dX1Rad   = new TH2F("h2dX1Rad","Energy loss at Stefanino (GeV) Vs Goniometer rotation angle; Horizontal Incoming Gonio [#murad]; Energy loss at Stefanino [GeV]",2048,10000,50000,140*2,-0.5,139.5);

//TH2F *h2dX1inRad   = new TH2F("h2dX1inRad","Energy loss at Stefanino (GeV) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy loss at Stefanino [GeV]",2000,2000,20000,140*2,-0.5,139.5);
//TH2F *h2dX1Rad   = new TH2F("h2dX1Rad","Energy loss at Stefanino (GeV) Vs Goniometer rotation angle; Horizontal Incoming Gonio [#murad]; Energy loss at Stefanino [GeV]",2000,2000,20000,140*2,-0.5,139.5);

TH2F *h2dX1inRadGO   = new TH2F("h2dX1inRadGO","Energy loss at Stefanino (GeV) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy loss at Stefanino [GeV]",(nbin+4)*2,-1785015,1783615,130*2,-0.5,150.0);
TH2F *h2dX1inRadInv   = new TH2F("h2dX1inRadInv","Energy loss at Stefanino (GeV) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Energy loss at Stefanino [GeV]",(nbin+4)*2,rotSX,rotDX,130*2,-0.5,150.0);



//TH2F *h2dX1inClu4   = new TH2F("h2dX1inClu4","Cluster 4 Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Cluster 4",1000,-17000,-2000,20,0,20);
//TH2F *h2dX1inClu5   = new TH2F("h2dX1inClu5","Cluster 5) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Cluster 5",1000,-17000,-2000,20,0,20);

//TH2F *h2dX1inClu4   = new TH2F("h2dX1inClu4","Cluster 4 Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Cluster 4",2000,-60000,-50000,20,0,20);
//TH2F *h2dX1inClu5   = new TH2F("h2dX1inClu5","Cluster 5) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Cluster 5",2000,-60000,-50000,20,0,20);

//TH2F *h2dX1inClu4   = new TH2F("h2dX1inClu4","Cluster 4 Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Cluster 4",2000,-9500,-6500,20,0,20);
//TH2F *h2dX1inClu5   = new TH2F("h2dX1inClu5","Cluster 5) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Cluster 5",2000,-9500,-6500,20,0,20);

//TH2F *h2dX1inClu4   = new TH2F("h2dX1inClu4","Cluster 4 Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Cluster 4",2000,2000,20000,20,0,20);
//TH2F *h2dX1inClu5   = new TH2F("h2dX1inClu5","Cluster 5) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Cluster 5",2000,2000,20000,20,0,20);

TH2F *h2dX1inClu4   = new TH2F("h2dX1inClu4","Cluster 4 Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Cluster 4",2048,10000,50000,20,0,20);
TH2F *h2dX1inClu5   = new TH2F("h2dX1inClu5","Cluster 5) Vs Goniometer rotation angle + X in-going angle (#theta_{x,in}) ; Horizontal Incoming Angle [#murad]; Cluster 5",2048,10000,50000,20,0,20);

TH3F *hCaloCrysXY = new TH3F("hCaloCrysXY","Digit Calo Deva",3,-0.5,2.5,3,-0.5,2.5,1000,-0.5,5999.5);

TH2F *hCaloCrysDevaP = new TH2F("hCaloCrysDevaP","Digit Calo Deva",1000,-0.5,5999.5,1000,-0.5,15999.5);

TH1F *hCaloCrysDevaP1 = new TH1F("hCaloCrysDevaP1","Digit Calo Deva",2000,-0.5,20999.5);

TH1F *hCaloDeva = new TH1F("hCaloDeva","Digit Calo Deva",1000,-0.5,29999.5);

TH2F *hCaloCrysthXinP = new TH2F("hCaloCrysthXinP","; Horizontal Incoming Angle [#murad]; Digit Calo Crys",thXinBin,-thXin+0.5,thXin+0.5,1000,-0.5,5999.5);

TH2F *hCaloCrysEthXinP = new TH2F("hCaloCrysEthXinP","; Horizontal Incoming Angle [#murad]; Digit Calo Crys",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *hCaloCrysEthYinP = new TH2F("hCaloCrysEthYinP","; Vertical Incoming Angle [#murad]; Digit Calo Crys",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *hCaloCrysEthXinA = new TH2F("hCaloCrysEthXinA","; Horizontal Incoming Angle [#murad]; Digit Calo Crys",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *hCaloCrysEthYinA = new TH2F("hCaloCrysEthYinA","; Vertical Incoming Angle [#murad]; Digit Calo Crys",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *hCaloCrysEthXinR = new TH2F("hCaloCrysEthXinR","; Horizontal Incoming Angle [#murad]; Digit Calo Crys",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *hCaloCrysEthYinR = new TH2F("hCaloCrysEthYinR","; Vertical Incoming Angle [#murad]; Digit Calo Crys",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);

TH2F *hdeflXthXinCal = new TH2F("hdeflXthXinCal","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);

TH2F *hdeflXthXinCal2 = new TH2F("hdeflXthXinCal2","X beam deflection (#Delta#theta_{x}) VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Horizontal Deflection Angle [#murad]",thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);


int imbinX = 5;
int imbinY = 30;
TH2F *hStruct[imbinX][imbinY];
/*
for(int i05 = 0;i05<imbinY;i05++){
    for(int i04 = 0;i04<imbinX;i04++){
        sprintf(histoname2,"[%1d;%1d];Incoming Angle [#murad];Deflection Angle [#murad]",i04,i05);
        sprintf(histoname1,"hStruct%1d%1d",i04,i05);
        hStruct[i04][i05] = new TH2F(histoname1,histoname2,thXinBin,-thXin+0.5,thXin+0.5,deflXBin,deflXmar1,deflXmar2);
        //std::cout << i03 << std::endl;
    }
}*/

TH2F *hCaloCrysCalib = new TH2F("hCaloCrysCalib","Digit Calo Crys Calib;Events;ADC",1500,0,6000000,1000,-0.5,5999.5);

TH2F *hdeflXtor[8192];
for (torY = 0 ; torY <50 ; torY++)
	{
	//torXY = (torX+4)*10+(torY+5);
	//sprintf(hname,"TORSIONXY_%d_%d",torX,torY);
       if (torY <10) //if (torY<10)
{
	hdeflXtor[torY] = new TH2F(Form("TORSIONY_%1d",torY),"",800,-800,800,deflXBin,deflXmar1,deflXmar2);}
       if (torY>=10) {hdeflXtor[torY] = new TH2F(Form("TORSIONY_%2d",torY),"",800,-800,800,deflXBin,deflXmar1,deflXmar2); } 
}


//////////////////////////////////
//////Multitrack Histograms//////
/////////////////////////////////

//nStrip histograms
TH1F *hx1nStripP = new TH1F("hx1nStripP","X1 nStrip;X1 nStrip",20,0,20);
TH1F *hx2nStripP = new TH1F("hx2nStripP","X2 nStrip;X2 nStrip",20,0,20);
TH1F *hx3nStripP = new TH1F("hx3nStripP","X3 nStrip;X3 nStrip",20,0,20);
TH1F *hy1nStripP = new TH1F("hy1nStripP","Y1 nStrip;Y1 nStrip",20,0,20);
TH1F *hy2nStripP = new TH1F("hy2nStripP","Y2 nStrip;Y2 nStrip",20,0,20);
TH1F *hy3nStripP = new TH1F("hy3nStripP","Y3 nStrip;Y3 nStrip",20,0,20);

//cluster histograms
TH1F *hx1CluP = new TH1F("hx1CluP","X1 Clu;X1 Clu",20,0,20);
TH1F *hx2CluP = new TH1F("hx2CluP","X2 Clu;X2 Clu",20,0,20);
TH1F *hx3CluP = new TH1F("hx3CluP","X3 Clu;X3 Clu",20,0,20);
TH1F *hy1CluP = new TH1F("hy1CluP","Y1 Clu;Y1 Clu",20,0,20);
TH1F *hy2CluP = new TH1F("hy2CluP","Y2 Clu;Y2 Clu",20,0,20);
TH1F *hy3CluP = new TH1F("hy3CluP","Y3 Clu;Y3 Clu",20,0,20);

//cluster histograms
TH1F *hx1Clu = new TH1F("hx1Clu","X1 Clu;X1 Clu",20,0,20);
TH1F *hx2Clu = new TH1F("hx2Clu","X2 Clu;X2 Clu",20,0,20);
TH1F *hx3Clu = new TH1F("hx3Clu","X3 Clu;X3 Clu",20,0,20);
TH1F *hy1Clu = new TH1F("hy1Clu","Y1 Clu;Y1 Clu",20,0,20);
TH1F *hy2Clu = new TH1F("hy2Clu","Y2 Clu;Y2 Clu",20,0,20);
TH1F *hy3Clu = new TH1F("hy3Clu","Y3 Clu;Y3 Clu",20,0,20);

///Multitrack Scan Histograms////

//Scan Histograms added in 2018 (Cluster vr. rotational scan)
TH2F *hX3CluRotP = new TH2F("hX3CluRotP", "X3 Number of Clusters Vs Rotational Angle; Rotational Angle [#murad]; N",(nbin+4)*20,rotSX,rotDX,20,0,20);
TH2F *hX3CluRot_inP = new TH2F("hX3CluRot_inP","X3 Number of Clusters Vs Rotational + X in-going angle (#theta_{x,in}); Rotational + X in-going  Angle [#murad]; N",(nbin+4)*2,rotSX,rotDX,20,0,20);
  
TH2F *hX3CluCradP = new TH2F("hX3CluCradP", "X3 Number of Clusters Vs Cradle Angle; Cradle Angle [#murad]; N",(nbin+4)*20,rotSX,rotDX,20,0,20);
TH2F *hX3CluCrad_inP = new TH2F("hX3CluCrad_inP","X3 Number of Clusters Vs Cradle + Y in-going angle (#theta_{y,in}); Cradle + Y in-going  Angle [#murad]; N",(nbin+4)*20,rotSX,rotDX,20,0,20);

//***************

TH2F *hClu3thXinP = new TH2F("hClu3thXinP","X Cluster 3 VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Cluster",thXinBin,-thXin+0.5,thXin+0.5,20,-0.5,19.5);
TH2F *hClu3thYinP = new TH2F("hClu3thYinP","X Cluster 3 VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Cluster",thXinBin,-thXin+0.5,thXin+0.5,20,-0.5,19.5);
TH2F *hthXinP_gamma = new TH2F("hthXinP_gamma","Gamma VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Energy [GeV}",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *hthYinP_gamma = new TH2F("hthYinP_gamma","Gamma VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Energy [GeV}",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *hthXinP_efast = new TH2F("hthXinP_efast","Gamma VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Energy [GeV}",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *hthYinP_efast = new TH2F("hthYinP_efast","Gamma VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Energy [GeV}",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *hthXinP_eslow = new TH2F("hthXinP_eslow","Gamma VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Energy [GeV}",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);
TH2F *hthYinP_eslow = new TH2F("hthYinP_eslow","Gamma VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Energy [GeV}",thXinBin,-thXin+0.5,thXin+0.5,binCalo,EminCalo,EmaxCalo);

//

//Scintillator histograms 2018
TH2F *hthXinScinP= new TH2F("hthXinScinP","Scintillator VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Scintillator signal",thXinBin,-thXin*2+0.5,thXin*2+0.5,400,-200,19800);
TH2F *hthYinScinP= new TH2F("hthYinScinP","Scintillator VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Scintillator signal",thXinBin,-thYin*2+0.5,thYin*2+0.5,400,-200,19800);

TH2F *h2RotScinP = new TH2F("h2RotScinP", "Scintillator Vs Scan of Rotational + X in-going angle (#theta_{x,in}); Scan Angle [#murad]; Scintillator signal",(nbin+4)*20,rotSX,rotDX,100,0,20000);
TH2F *h2RotScin_inP = new TH2F("h2RotScin_inP","Scintillator Vs Scan of Rotational - X in-going angle (#theta_{x,in}); Scan Angle [#murad]; Scintillator signal",(nbin+4)*20,rotSX,rotDX,100,0,20000);

TH2F *CradScinP = new TH2F("CradScinP","Scintillator Vs Cradle Scan; Cradle Angle [#murad]; Scintillator signal",Nsteps_crad,gonio_crad_first-0.5*binSizeCrad,gonio_crad_last-0.5*binSizeCrad,400,-200,19800);
TH2F *RotScinP = new TH2F("RotScinP","Scintillator Vs Rotational; Rotational Angle [#murad]; Scintillator signal",Nsteps_rot,gonio_rot_first-0.5*binSizeRot,gonio_rot_last-0.5*binSizeRot,400,-200,19800);

//Photomultiplier histograms 2018
TH2F *hthXinPhotomP= new TH2F("hthXinPhotomP","Photomultiplier VS X in-going angle (#theta_{x,in}); Horizontal Incoming Angle [#murad]; Photomultiplier signal",thXinBin,-thXin*2+0.5,thXin*2+0.5,400,-200,19800);
TH2F *hthYinPhotomP= new TH2F("hthYinPhotomP","Photomultiplier VS Y in-going angle (#theta_{y,in}); Vertical Incoming Angle [#murad]; Photomultiplier signal",thXinBin,-thYin*2+0.5,thYin*2+0.5,400,-200,19800);

TH2F *h2RotPhotomP = new TH2F("h2RotPhotomP", "Photomultiplier Vs Scan of Rotational + X in-going angle (#theta_{x,in}); Scan Angle [#murad]; Photomultiplier signal",(nbin+4)*20,rotSX,rotDX,100,0,20000);
TH2F *h2RotPhotom_inP = new TH2F("h2RotPhotom_inP","Photomultiplier Vs Scan of Rotational - X in-going angle (#theta_{x,in}); Scan Angle [#murad]; Photomultiplier signal",(nbin+4)*20,rotSX,rotDX,100,0,20000);


//******HISTOGRAMS FOR KLEVER EXPERIMENT

TH1F *hS3max = new TH1F("hS3max", "Scintillator S3 Max; Scintillator Max",100,0,20000);
TH1F *hS4max = new TH1F("hS4max", "Scintillator S4 Max; Scintillator Max",100,0,20000);

TH2F *hS4maxScan = new TH2F("hS4maxScan", "S4 Vs Scan of Rotational + X in-going angle (#theta_{x,in}); Scan Angle [#murad]; S4 signal",(nbin+4)*20,rotSX,rotDX,100,0,20000);

TH2F *hS4maxGonio = new TH2F("hS4maxGonio","S4 Vs Scan of Rotational - X in-going angle (#theta_{x,in}); Scan Angle [#murad]; S4 signal",400,-50000,50000,100,0,20000);


TH1F *hGamma = new TH1F("hGamma", "Gamma cal energy", binCalo,EminCalo,EmaxCalo);
TH2F *hGammaStep = new TH2F("hGammaStep","Gamma energy vs scan step",step_last-step_first+1,step_first-0.5,step_last+0.5,binCalo,EminCalo,EmaxCalo);

TH2F *hS4Step = new TH2F("hS4Step","S4 signal vs scan step",step_last-step_first+1,step_first-0.5,step_last+0.5,100,0,20000);

TH2F *hGammaS4 = new TH2F("hGammaS4", "Gamma cal energy vs S4 signal", 200, 0, 20000,binCalo,EminCalo,EmaxCalo);

TH2F *hGammaT2x = new TH2F("hGammaT2x","Gamma cal energy vs T2 x pos",200,0,2,binCalo,EminCalo,EmaxCalo);

TH2F *hGammaT2y = new TH2F("hGammaT2y","Gamma cal energy vs T2 y pos",200,0,2,binCalo,EminCalo,EmaxCalo);

TH1F *helectron = new TH1F("helectron", "Electrons cal energy", binCalo,EminCalo,EmaxCalo);

TH2F *hxygamma = new TH2F("hxygamma","xy gamma distribution; X  [#mum]; y  [#mum]",100,-20000,20000,100,-20000,20000);
TH1F *hxgamma = new TH1F("hxgamma", "xy gamma distribution; Counts; x  [#mum]", 100,-20000,20000);
TH1F *hygamma = new TH1F("hygamma", "xy gamma distribution; Counts; y  [#mum]", 100,-20000,20000);




TH1F *hS3maxPP = new TH1F("hS3maxPP", "Scintillator S3 Max with T3 clasters condition; Scintillator Max",100,0,20000);
TH1F *hS4maxPP = new TH1F("hS4maxPP", "Scintillator S4 Max with T3 clasters condition; Scintillator Max",100,0,20000);

TH2F *hS4maxScanPP = new TH2F("hS4maxScanPP", "S4 Vs Scan of Rotational + X in-going angle (#theta_{x,in}), with T3 clasters condition; Scan Angle [#murad]; S4 signal",(nbin+4)*20,rotSX,rotDX,100,0,20000);

TH2F *hS4maxGonioPP = new TH2F("hS4maxGonioPP","S4 Vs Scan of Rotational - X in-going angle (#theta_{x,in}), with T3 clasters condition; Scan Angle [#murad]; S4 signal",400,-50000,50000,100,0,20000);


TH1F *hGammaPP = new TH1F("hGammaPP", "Gamma cal energy with T3 clasters condition", binCalo,EminCalo,EmaxCalo);
TH2F *hGammaStepPP = new TH2F("hGammaStepPP","Gamma energy vs scan step, with T3 clasters condition",step_last-step_first+1,step_first-0.5,step_last+0.5,binCalo,EminCalo,EmaxCalo);

TH2F *hS4StepPP = new TH2F("hS4StepPP","S4 signal vs scan step with T3 clasters condition",step_last-step_first+1,step_first-0.5,step_last+0.5,100,0,20000);

TH2F *hGammaS4PP = new TH2F("hGammaS4PP", "Gamma cal energy vs S4 signal with T3 clasters condition", 200, 0, 20000, binCalo,EminCalo,EmaxCalo);

TH2F *hGammaT2xPP = new TH2F("hGammaT2xPP","Gamma cal energy vs T2 x pos with T3 clasters condition",200,0,2,binCalo,EminCalo,EmaxCalo);

TH2F *hGammaT2yPP = new TH2F("hGammaT2yPP","Gamma cal energy vs T2 y pos with T3 clasters condition",200,0,2,binCalo,EminCalo,EmaxCalo);

TH1F *helectronPP = new TH1F("helectronPP", "Electrons cal energy", binCalo,EminCalo,EmaxCalo);

TH2F *hxygammaPP = new TH2F("hxygammaPP","xy gamma distribution with T3 clasters condition; X  [#mum]; y  [#mum]",100,-90000,150000,100,-90000,150000);
TH1F *hxgammaPP = new TH1F("hxgammaPP, x gamma distribution with T3 clasters condition", "xy gamma distribution; Counts; x  [#mum]", 100,-90000,150000);
TH1F *hygammaPP = new TH1F("hygammaPP, y gamma distribution with T3 clasters condition", "xy gamma distribution; Counts; y  [#mum]", 100,-90000,150000);

TH2F *hxyBC1ePP = new TH2F("hxyBC1ePP","xy electrons distribution at the BC1 detector with T3 clasters condition; X  [#mum]; y  [#mum]",100,-90000,150000,100,-90000,150000);
TH1F *hxBC1ePP = new TH1F("hxBC1ePP, x electrons distribution at the BC1 detector with T3 clasters condition", "xy gamma distribution; Counts; x  [#mum]", 100,-90000,150000);
TH1F *hyBC1ePP = new TH1F("hyBC1ePP, y electrons distribution at the BC1 detector with T3 clasters condition", "xy gamma distribution; Counts; y  [#mum]", 100,-90000,150000);

TH2F *hxyBC2ePP = new TH2F("hxyBC2ePP","xy electrons distribution at the BC2 detector with T3 clasters condition; X  [#mum]; y  [#mum]",100,-90000,150000,100,-90000,150000);
TH1F *hxBC2ePP = new TH1F("hxBC2ePP, x electrons distribution at the BC2 detector with T3 clasters condition", "xy gamma distribution; Counts; x  [#mum]", 100,-90000,150000);
TH1F *hyBC2ePP = new TH1F("hyBC2ePP, y electrons distribution at the BC2 detector with T3 clasters condition", "xy gamma distribution; Counts; y  [#mum]", 100,-90000,150000);


