//---------------------------------------------------------------------------

#pragma hdrstop

#include "pion.h"
#include "casuta.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Pion::Pion() {
    mIdPion = -1;
    mCuloarePion = -1;
    mStareCurentaPion = PION_INCASA;
    mCasutaCurentaPion = nullptr;
    mImagineGrafica = nullptr;
}

Pion::Pion(int id, int culoare)
{
	mIdPion = id;
	mCuloarePion = culoare;
	mCasutaCurentaPion = nullptr;
	mStareCurentaPion = PION_INCASA;
	mImagineGrafica = nullptr;
}


int Pion::getIdPion(){
	return mIdPion;
}

int Pion::getCuloarePion() {
	return mCuloarePion;
}

int Pion::getStareCurentaPion() {
	return mStareCurentaPion;
}

Casuta* Pion::getCasutaCurentaPion() {
	return mCasutaCurentaPion;
}

TImage* Pion::getImagineGrafica() {
    return mImagineGrafica;
}

void Pion::setStareCurentaPion(int nouaStare) {
	mStareCurentaPion = nouaStare;
}

void Pion::setImagineGrafica(TImage* img) {
	mImagineGrafica = img;
}

void Pion::scoateDinCasa(Casuta* casutaStart) {
	if (mStareCurentaPion == PION_INCASA && casutaStart != nullptr) {
		mCasutaCurentaPion->eliminaPion();    // asta se face si in mutaPion
		mCasutaCurentaPion = casutaStart;
		mStareCurentaPion = PION_PETABLA;
		muta(casutaStart);
	}
}

void Pion::muta(Casuta* casutaDestinatie) {
	if (casutaDestinatie != nullptr) {
		mCasutaCurentaPion = casutaDestinatie;
		if (mImagineGrafica != nullptr) {
			mImagineGrafica->Left = casutaDestinatie->getXCasuta();
			mImagineGrafica->Top = casutaDestinatie->getYCasuta();
		}
	}
	if (casutaDestinatie->getTipCasuta() == CASUTA_CASTIG) {
		mImagineGrafica->Visible = false;
	}
}

void Pion::trimiteInCasa(Casuta* casutaCasa) {
	mCasutaCurentaPion = casutaCasa;
	mStareCurentaPion = PION_INCASA;
	muta(casutaCasa);
}
