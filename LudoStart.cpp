//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LudoStart.h"
#include "LudoSetup.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfStart *fStart;
//---------------------------------------------------------------------------
__fastcall TfStart::TfStart(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfStart::btnExitClick(TObject *Sender)
{
	exit(0);
}
//---------------------------------------------------------------------------

void __fastcall TfStart::btnStartClick(TObject *Sender)
{
	 fStart->Hide();
	 fSetup->Left = this->Left;
	 fSetup->Top = this->Top;
	 fSetup->Show();
}
//---------------------------------------------------------------------------



