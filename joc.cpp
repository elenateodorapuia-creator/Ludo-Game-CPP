//---------------------------------------------------------------------------

#pragma hdrstop

#include "joc.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Joc::Joc(String numeJucatori[], int numarJucatori) {
	mNumarJucatori = numarJucatori;
	mJucatorCurentIndex = 0;
	mUltimulZar = 0;
	initializeazaJucatori(numeJucatori);
	bool mUltimaMutareAContiunutBataie = false;
}

void Joc::initializeazaJucatori(String numeJucatori[]) {
	if(mNumarJucatori == 2){
		mJucatori[0] = new Jucator(numeJucatori[0], ALBASTRU);
		mJucatori[1] = new Jucator(numeJucatori[1], VERDE);
	}  else  {
		mJucatori[0] = new Jucator(numeJucatori[0], ROSU);
		mJucatori[1] = new Jucator(numeJucatori[1], VERDE);
		mJucatori[2] = new Jucator(numeJucatori[2], GALBEN);
		mJucatori[3] = new Jucator(numeJucatori[3], ALBASTRU);
	}
}

int Joc::getNumarJucatori(){
	return mNumarJucatori;
}

int Joc::getJucatorCurentIndex() {
	return mJucatorCurentIndex;
}

int Joc::getUltimulZar() {
	return mUltimulZar;
}

bool Joc::getUltimaMutareAContinutBataie(){
	return mUltimaMutareAContinutBataie;
}

Jucator* Joc::getJucator(int index) {
	if (index >= 0 && index < mNumarJucatori) {
		return mJucatori[index];
	}
	return nullptr;
}

Tabla& Joc::getTabla() {
	return mTabla;
}

void Joc::setUltimulZar(int nrZar)
{
	mUltimulZar = nrZar;
}