//---------------------------------------------------------------------------

#ifndef LudoStartH
#define LudoStartH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TfStart : public TForm
{
__published:	// IDE-managed Components
	TButton *btnExit;
	TButton *btnStart;
	TImage *imgLogo;
	void __fastcall btnExitClick(TObject *Sender);
	void __fastcall btnStartClick(TObject *Sender);
	//void __fastcall imgLogoClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfStart(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfStart *fStart;
//---------------------------------------------------------------------------
#endif
