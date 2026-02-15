//---------------------------------------------------------------------------

#ifndef jocReteaH
#define jocReteaH

#include "joc.h"
#include <System.Win.ScktComp.hpp> // pt socket
//---------------------------------------------------------------------------

class JocRetea : public Joc {
private:
	TClientSocket* mSocket;

public:
	JocRetea(String nume[], int nr, String ip);
	~JocRetea();

    void trageUrmatorulJucator() override;
    bool executaMutare(Pion* pionSelectat) override;
	bool areMutariValide() override;

	void __fastcall onSocketRead(TObject *Sender, TCustomWinSocket *Socket);
};



#endif
