TProfile pRot, pCRad;

void scan_profiles() {

  TFile *f = TFile::Open("../ROOT_OUTPUTS/run400229.root");
  pRot = hGammaStep->ProfileX("Rotational scan",20,36);
  pRot-SetDirectory(0);
  f->Close();
  TFile *f = TFile::Open("../ROOT_OUTPUTS/run400239.root");
  pCrad = hGammaStep->ProfileX("Cradle scan",20,36);
  pCrad->SetDirectory(0);
  f->Close();
  c1->Divide(1,2);
  c1->Clear();
  pRot->Draw();
  pCrad->Draw();

}
