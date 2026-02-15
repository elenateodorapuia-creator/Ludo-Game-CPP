//---------------------------------------------------------------------------

#ifndef jucatorH
#define jucatorH

#include "pion.h"

//---------------------------------------------------------------------------

class Jucator {
private:
	String mNumeJucator;
	int mCuloareJucator;
	Pion mPionii[4];
	int mPioniLaFinalContor;
public:
	Jucator(String nume, int culoare);  //Constructor

	String getNumeJucator();        //metode get
	int getCuloareJucator();
	String getNumeCuloareJucator();
	Pion& getPion(int id);
	int getPioniLaFinal();

	bool aCastigat();
	void adaugaPionLaFinal();
};

#endif
