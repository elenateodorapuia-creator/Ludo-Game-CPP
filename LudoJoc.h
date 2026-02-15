//---------------------------------------------------------------------------

#ifndef LudoJocH
#define LudoJocH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>

#include "jocLocal.h"
//---------------------------------------------------------------------------
class TfJoc : public TForm
{
__published:	// IDE-managed Components
	TImage *imgTabla;
	TButton *btnZar;
	TLabel *lblRezultatZar;
	TLabel *lblInfo;
	TGroupBox *gbJucatori;
	TLabel *lblJucator1;
	TLabel *lblJucator2;
	TLabel *lblJucator3;
	TLabel *lblJucator4;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnZarClick(TObject *Sender);
private:	// User declarations
	JocLocal* mJoc;
	int mValoareZarCurent;
    int mJucatorLaRand;

	void CreeazaPioniiGrafic();
	void ActualizeazaAfisareRand(bool mutariValide);
	void __fastcall GestionareClickPion(TObject *Sender);
    void InitializareLegendaJucatori();

public:		// User declarations
	__fastcall TfJoc(TComponent* Owner);
    void PreiaJoc(JocLocal* jocPrimit);
};
//---------------------------------------------------------------------------
extern PACKAGE TfJoc *fJoc;
//---------------------------------------------------------------------------
#endif
