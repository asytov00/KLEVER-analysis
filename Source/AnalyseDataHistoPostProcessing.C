for(int i00=1;i00<=hCaloCrysE->GetXaxis()->GetNbins();i00++){
    double content = hCaloCrysE->GetBinCenter(i00)*hCaloCrysE->GetBinContent(i00);
    hCaloCrysE->SetBinContent(i00,content);
}
for(int i00=1;i00<=hCaloCrysPE->GetXaxis()->GetNbins();i00++){
    double content = hCaloCrysPE->GetBinCenter(i00)*hCaloCrysPE->GetBinContent(i00);
    hCaloCrysPE->SetBinContent(i00,content);
}
for(int i00=1;i00<=hCaloCrysChE->GetXaxis()->GetNbins();i00++){
    double content = hCaloCrysChE->GetBinCenter(i00)*hCaloCrysChE->GetBinContent(i00);
    hCaloCrysChE->SetBinContent(i00,content);
}
for(int i00=1;i00<=hCaloCrysOutE->GetXaxis()->GetNbins();i00++){
    double content = hCaloCrysOutE->GetBinCenter(i00)*hCaloCrysOutE->GetBinContent(i00);
    hCaloCrysOutE->SetBinContent(i00,content);
}

