//---------------------------------------------------------------------------

#ifndef LudoSetupH
#define LudoSetupH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>

#include "jocLocal.h"
//---------------------------------------------------------------------------
class TfSetup : public TForm
{
__published:	// IDE-managed Components
	TPanel *pnlTipJoc;
	TButton *btnLocal;
	TButton *btnRetea;
	TPanel *pnlNrJucatori;
	TButton *btn2jucatori;
	TButton *btn4jucatori;
	TPanel *pnlNumeJucatori;
	TLabel *lblAlbastru;
	TLabel *lblVerde;
	TLabel *lblRosu;
	TLabel *lblGalben;
	TEdit *editAlbastru;
	TEdit *editVerde;
	TEdit *editRosu;
	TEdit *editGalben;
	TButton *btnStartJoc;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnLocalClick(TObject *Sender);
	void __fastcall btn2jucatoriClick(TObject *Sender);
	void __fastcall btn4jucatoriClick(TObject *Sender);
	void __fastcall btnStartJocClick(TObject *Sender);
	void __fastcall btnReteaClick(TObject *Sender);
private:	// User declarations
	int mTipJocSelectat;
	int mNrJucatoriAles;
	JocLocal* mJoc;
public:		// User declarations
	__fastcall TfSetup(TComponent* Owner);
    __fastcall ~TfSetup();
};
//---------------------------------------------------------------------------
extern PACKAGE TfSetup *fSetup;
//---------------------------------------------------------------------------
#endif
