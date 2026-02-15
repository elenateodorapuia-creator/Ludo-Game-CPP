//---------------------------------------------------------------------------

#pragma hdrstop

#include "jucator.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Jucator::Jucator(String nume, int culoare){
	mNumeJucator = nume;
	mCuloareJucator = culoare;
	mPioniLaFinalContor = 0;
	for (int i = 0; i < 4; i++) {
		mPionii[i] = Pion(i, culoare);
	}
}

String Jucator::getNumeJucator() {
	return mNumeJucator;
}

int Jucator::getCuloareJucator() {
	return mCuloareJucator;
}

String Jucator::getNumeCuloareJucator()
{
	String numeCuloare;
	switch(mCuloareJucator) {
		case 0: numeCuloare = "Rosu"; break;
		case 1: numeCuloare = "Albastru"; break;
		case 2: numeCuloare = "Galben"; break;
		case 3: numeCuloare = "Verde"; break;
	}
	return numeCuloare;
}

Pion& Jucator::getPion(int id) { // apelez in jocLo
	return mPionii[id];
}

int Jucator::getPioniLaFinal() {
	return mPioniLaFinalContor;
}


bool Jucator::aCastigat() {
	return mPioniLaFinalContor == 4;
}

void Jucator::adaugaPionLaFinal() {
	mPioniLaFinalContor++;
}
