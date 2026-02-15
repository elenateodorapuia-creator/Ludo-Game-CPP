//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LudoSetup.h"
#include "LudoStart.h"
#include "LudoJoc.h"
#include "jocLocal.h"
#define TIP_LOCAL 0
#define TIP_RETEA 1
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfSetup *fSetup;
//---------------------------------------------------------------------------
__fastcall TfSetup::TfSetup(TComponent* Owner)
	: TForm(Owner)
{
	mJoc = nullptr;
}
__fastcall TfSetup::~TfSetup()
{
	// ca sa sterge mJoc ca e alocat dinamic
	if (mJoc != nullptr) {
		delete mJoc;
        mJoc = nullptr;
    }
}
//---------------------------------------------------------------------------
void __fastcall TfSetup::FormClose(TObject *Sender, TCloseAction &Action)
{
	fStart->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfSetup::btnLocalClick(TObject *Sender)
{
	mTipJocSelectat = TIP_LOCAL;
	pnlTipJoc->Visible = false;
	pnlNrJucatori->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TfSetup::btn2jucatoriClick(TObject *Sender)
{
	mNrJucatoriAles = 2;
	pnlNrJucatori->Visible = false;
	pnlNumeJucatori->Visible = true;
	btnStartJoc->Visible = true;
	lblAlbastru->Visible = true;
	editAlbastru->Visible = true;
	lblVerde->Visible = true;
	editVerde->Visible = true;
	lblRosu->Visible = false;
	editRosu->Visible = false;
	lblGalben->Visible = false;
	editGalben->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfSetup::btn4jucatoriClick(TObject *Sender)
{
	mNrJucatoriAles = 4;
	pnlNrJucatori->Visible = false;
	pnlNumeJucatori->Visible = true;
	btnStartJoc->Visible = true;
	lblAlbastru->Visible = true;
	editAlbastru->Visible = true;
	lblVerde->Visible = true;
	editVerde->Visible = true;
	lblRosu->Visible = true;
	editRosu->Visible = true;
	lblGalben->Visible = true;
	editGalben->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TfSetup::btnStartJocClick(TObject *Sender)
{
	String nume[4];
	if (mNrJucatoriAles == 2) {
		nume[0] = editAlbastru->Text;
		nume[1] = editVerde->Text;
	}
	else {
		nume[0] = editRosu->Text;
		nume[1] = editVerde->Text;
		nume[2] = editGalben->Text;
		nume[3] = editAlbastru->Text;
	}
	if (mJoc != nullptr) { // in caz ca se apasa de mai multe ori pe start sa nu se suprascrie
		delete mJoc;       // daca nu sterg ramane o zona de memorie ocupata dar care nu mai poate fi accesata
		mJoc = nullptr;
	}
	if (mTipJocSelectat == TIP_LOCAL) {
		mJoc = new JocLocal(nume, mNrJucatoriAles);
	} else{
		if (mTipJocSelectat == TIP_RETEA) {
			//mJoc = new JocRetea(nume, mNrJucatoriAles, ip);
			ShowMessage("nu am facut inca reteaua");
		}
	}
	fJoc->PreiaJoc(mJoc);
	fJoc->Left = this->Left;
	fJoc->Top = this->Top;
	fJoc->Show();
	fSetup->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TfSetup::btnReteaClick(TObject *Sender)
{
	mTipJocSelectat = TIP_RETEA;
	ShowMessage("nu am facut inca reteaua");
	//pnlTipJoc->Visible = false;
	//pnlNrJucatori->Visible = true;
}
//---------------------------------------------------------------------------

