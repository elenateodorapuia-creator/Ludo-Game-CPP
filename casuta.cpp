//---------------------------------------------------------------------------

#pragma hdrstop

#include "casuta.h"
#include "pion.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Casuta::Casuta(){
	mIdCasuta = -1;
	mTipCasuta = CASUTA_NORMALA;
	mXCasuta = 0;
	mYCasuta = 0;
	mPionPeCasuta = nullptr;
}

Casuta::Casuta(int id, int tip, int x, int y){
	mIdCasuta = id;
	mTipCasuta = tip;
	mXCasuta = x;
	mYCasuta = y;
	mPionPeCasuta = nullptr;
}

int Casuta::getIdCasuta() {
    return mIdCasuta;
}

int Casuta::getTipCasuta() {
    return mTipCasuta;
}

int Casuta::getXCasuta() {
    return mXCasuta;
}

int Casuta::getYCasuta() {
    return mYCasuta;
}

Pion* Casuta::getPionPeCasuta() {
    return mPionPeCasuta;
}

void Casuta::setTipCasuta(int tipNou) {
    mTipCasuta = tipNou;
}

void Casuta::setXCasuta(int x) { mXCasuta = x; }

void Casuta::setYCasuta(int y) { mYCasuta = y; }

bool Casuta::esteOcupata() {
	return mPionPeCasuta != nullptr;
}

void Casuta::setPion(Pion* p) {
    mPionPeCasuta = p;
}

void Casuta::eliminaPion() {
    mPionPeCasuta = nullptr;
}
