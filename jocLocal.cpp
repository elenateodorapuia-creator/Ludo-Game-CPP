//---------------------------------------------------------------------------

#pragma hdrstop

#include "jocLocal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void JocLocal::trageUrmatorulJucator() {
	//mJucatorCurentIndex = (mJucatorCurentIndex + 1) % mNumarJucatori;
	mJucatorCurentIndex++;
	if(mJucatorCurentIndex >= mNumarJucatori)
		mJucatorCurentIndex = 0;
}

bool JocLocal::executaMutare(Pion* pionSelectat) {
	Casuta* casutaDestinatie = mTabla.calculeazaDestinatia(pionSelectat, mUltimulZar);
    // A DOUA APELARE mJoc->executaMutare la apasarea pionului pt a vedea daca pionul ales e bun
	// apelam caluleazaDEstinatia numa ca sa stim daca exista o destinatie posibila
	if (casutaDestinatie == nullptr) {
		return false;     // mutare imposibila
	}
	mUltimaMutareAContinutBataie = mTabla.mutaPion(pionSelectat, mUltimulZar);

	Jucator* jucatorCurent = getJucator(mJucatorCurentIndex);
	if (pionSelectat->getStareCurentaPion() == PION_FINALIZAT) {
		jucatorCurent->adaugaPionLaFinal();
	}
	return true;
}

bool JocLocal::areMutariValide() {
	Jucator* jucatorCurent = getJucator(mJucatorCurentIndex);
	int zar = mUltimulZar;
	bool arePionInCasa = false;
	for (int i = 0; i < 4; ++i) {
		if (jucatorCurent->getPion(i).getStareCurentaPion() == PION_INCASA) {
			arePionInCasa = true;
			break;
		}
	}
	if (zar == 6 && arePionInCasa) {
		return true;
	}

	for (int i = 0; i < 4; i++) {
		Pion& pion = jucatorCurent->getPion(i);
		if (pion.getStareCurentaPion() == PION_PETABLA || pion.getStareCurentaPion() == PION_INZONAFINALA) {
			Casuta* destinatie = mTabla.calculeazaDestinatia(&pion, zar);
			// PRIMA APELARE
			if (destinatie != nullptr) {
				return true;
			}
		}
	}
	return false;      // nu are ce mutare sa faca deci se trece la urm jucator
}

JocLocal::~JocLocal() {
	for (int i = 0; i < mNumarJucatori; ++i) {
        delete mJucatori[i];
    }
}