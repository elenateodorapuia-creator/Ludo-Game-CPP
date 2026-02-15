//---------------------------------------------------------------------------

#pragma hdrstop

#include "jocRetea.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

JocRetea::JocRetea(String nume[], int nr, String ip) : Joc(nume, nr) {
	mSocket = new TClientSocket(nullptr);
    mSocket->ClientType = ctNonBlocking;
    mSocket->Host = ip;
	mSocket->Port = 2024;
    mSocket->OnRead = onSocketRead;
	// cu ajutorul lui gemini am initializat socketul
}

JocRetea::~JocRetea() {
    if (mSocket) {
        mSocket->Active = false;
        delete mSocket;
    }
}

bool JocRetea::executaMutare(Pion* p) {
    if (mSocket->Active) {
		ShowMessage("se trimite comanda catre server");
	} else {
		ShowMessage("server neconectat");
	}
	return false;
}

void JocRetea::trageUrmatorulJucator() {
	 // primim mesaj de la server si asa o sa stim dupa pe form sa afisam a cui e randul
}

bool JocRetea::areMutariValide() {
	return false;    //deocamdata atat
}

void __fastcall JocRetea::onSocketRead(TObject *Sender, TCustomWinSocket *Socket){
	   // asta face parte din ce m-a pus gemini sa pun in constructor
}
