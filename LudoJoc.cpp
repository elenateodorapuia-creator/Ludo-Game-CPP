//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <stdlib.h>
#include <time.h>

#include "LudoJoc.h"
#include "LudoStart.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfJoc *fJoc;
//---------------------------------------------------------------------------
__fastcall TfJoc::TfJoc(TComponent* Owner)
	: TForm(Owner)
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	//ca sa nu se dea cu zarul aceeasi valoare de fiecare data cand pornim un joc
	//credite: gemini
}
//---------------------------------------------------------------------------

void __fastcall TfJoc::FormClose(TObject *Sender, TCloseAction &Action)
{
	fStart->Show();
}
//---------------------------------------------------------------------------
void TfJoc::PreiaJoc(JocLocal* jocPrimit) {
	this->mJoc = jocPrimit;
	CreeazaPioniiGrafic();
	ActualizeazaAfisareRand(true);
	InitializareLegendaJucatori();
}

void TfJoc::InitializareLegendaJucatori() {
	for (int i = 0; i < mJoc->getNumarJucatori(); i++) {
		Jucator* j = mJoc->getJucator(i);
		TLabel* lblCurent;
		switch(i) {
			case 0: lblCurent = lblJucator1; break;
			case 1: lblCurent = lblJucator2; break;
			case 2: lblCurent = lblJucator3; break;
			case 3: lblCurent = lblJucator4; break;
			default: continue;
		}
		lblCurent->Caption = j->getNumeCuloareJucator() + ": " + j->getNumeJucator();
		switch(j->getCuloareJucator()) {
			case 0: lblCurent->Font->Color = clRed; break;
			case 1: lblCurent->Font->Color = clBlue; break;
			case 2: lblCurent->Font->Color = clYellow; break;
			case 3: lblCurent->Font->Color = clGreen; break;
		}

		lblCurent->Visible = true;
	}
}

void TfJoc::CreeazaPioniiGrafic(){
	// m-a ajutat gemini sa setez imaginea pionilor prin cod
	for (int i = 0; i < mJoc->getNumarJucatori(); i++) {
		Jucator* j = mJoc->getJucator(i);
		int culoare = j->getCuloareJucator();
		for (int k = 0; k < 4; k++) {
			Pion& pionLogic = j->getPion(k);
			TImage* pImg = new TImage(this);
			pImg->OnClick = GestionareClickPion;
			pImg->Parent = this;
			pImg->Width = 34;
			pImg->Height = 54;
			pImg->Stretch = true;
			pImg->Transparent = true;
			UnicodeString path;
			switch(culoare) {
				case 0: path = "pion_rosu.png"; break;
				case 1: path = "pion_albastru.png"; break;
				case 2: path = "pion_galben.png"; break;
				case 3: path = "pion_verde.png"; break;
			}

			if (FileExists(path)) {
				pImg->Picture->LoadFromFile(path);
			}

			pionLogic.setImagineGrafica(pImg);

			int indexCasutaAcasa = culoare * 4 + k;
			Casuta* c = mJoc->getTabla().getCasutaAcasa(indexCasutaAcasa);
			pionLogic.muta(c);
			c->setPion(&pionLogic);
			pImg->Tag = (i * 10) + k;   // asta e pentru cand se apasa pe pion
										//se ia tagul ca sa stim la ce obiect pion face referire
		}
	}
}

//---------------------------------------------------------------------------

void __fastcall TfJoc::btnZarClick(TObject *Sender)
{
	mValoareZarCurent = (std::rand() % 6) + 1;
	lblRezultatZar->Caption = IntToStr(mValoareZarCurent);
	mJoc->setUltimulZar(mValoareZarCurent);
	int idx = mJoc->getJucatorCurentIndex();
	Jucator* j = mJoc->getJucator(idx);
	if (mJoc->areMutariValide()) {
		btnZar->Enabled = false;
		lblInfo->Caption = j->getNumeCuloareJucator() +	"(" + j->getNumeJucator() + ") alege un pion";
	} else {
		//ShowMessage("nu ai mutari valide");
		mJoc->trageUrmatorulJucator();
		btnZar->Enabled = true;
		ActualizeazaAfisareRand(false);
	}
}

void TfJoc::ActualizeazaAfisareRand(bool mutariValide) {
	int idx = mJoc->getJucatorCurentIndex();
	Jucator* j = mJoc->getJucator(idx);

	String numeCuloare = j->getNumeCuloareJucator() ;
	if(mutariValide==true)
		lblInfo->Caption = "Randul jucatorului: " + numeCuloare + " (" + j->getNumeJucator() + ")";
	else
		lblInfo->Caption = "Nu ai mutari valide!\n\nRandul jucatorului: "
							+ numeCuloare + " (" + j->getNumeJucator() + ")";
}

void __fastcall TfJoc::GestionareClickPion(TObject *Sender){
	TImage* imgApasata = (TImage*)Sender;

	int idImg = imgApasata->Tag;
	int idxJucator = idImg / 10;
	int idxPion = idImg % 10;
	if (btnZar->Enabled) {
		return; //daca nu a dat cu zar inainte
	}
	if (idxJucator != mJoc->getJucatorCurentIndex()) {
		lblInfo->Caption = "Alege un pion de culoarea ta";
		return; //in cazul in care se apasa pe un pion oponent
	}
	// daca nu iese pana aici din functie inseamna ca a apasat pe ce trebe
	// deci luam jucatoru si pionul bun:
	Jucator* j = mJoc->getJucator(idxJucator);
	Pion& p = j->getPion(idxPion);
	String nume = j->getNumeJucator();
	String numeCuloare = j->getNumeCuloareJucator();
	if (p.getStareCurentaPion() == PION_INCASA && mValoareZarCurent != 6) {
		lblInfo->Caption = "Mutare imposibila. " + numeCuloare +" (" + nume +") alege alt pion.";
		return;      //se apasa pe un pion din casa fara sa se poata
	}
	bool succes = mJoc->executaMutare(&p);

	if (succes) {
		if(j->aCastigat()){
			ShowMessage("FELICITARI!\nJucatorul " + numeCuloare +
							" (" + nume + ") a castigat!");
		}else{
			if (mValoareZarCurent == 6) {
				lblInfo->Caption = numeCuloare + "(" + nume + ") ai dat 6! Mai da o data.";
			} else {
				if(mJoc->getUltimaMutareAContinutBataie()){
					lblInfo->Caption = numeCuloare + "(" + nume + ") ai trimis un pion in casa! Mai da o data.";
				}
				else{
					mJoc->trageUrmatorulJucator();
					ActualizeazaAfisareRand(true);
				}
			}
			btnZar->Enabled = true;
			//lblRezultatZar->Caption = "-";
		}
	} else {
		lblInfo->Caption = "Mutare imposibila. " + numeCuloare + "(" + nume
										   + ") alege alt pion.";
	}

}

