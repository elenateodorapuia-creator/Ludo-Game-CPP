//---------------------------------------------------------------------------

#ifndef jocH
#define jocH

#include "jucator.h"
#include "tabla.h"
//---------------------------------------------------------------------------

#define NUMAR_MAXIM_JUCATORI 4

class Joc {
protected:
	Tabla mTabla;
	Jucator* mJucatori[NUMAR_MAXIM_JUCATORI];
	int mNumarJucatori;
	int mJucatorCurentIndex;
	int mUltimulZar;
	bool mUltimaMutareAContinutBataie;

public:
	Joc(String numeJucatori[], int numarJucatori);

	void initializeazaJucatori(String numeJucatori[]);

	int getNumarJucatori();
	int getJucatorCurentIndex();
	int getUltimulZar();
	bool getUltimaMutareAContinutBataie();
	Jucator* getJucator(int index);
	Tabla& getTabla();

	void setUltimulZar(int nrZar);

    virtual void trageUrmatorulJucator() = 0;
	// in jocLocal avanseaza un i
	// in jocRetea asteapta de la server

	virtual bool areMutariValide() = 0;

	virtual bool executaMutare(Pion* pionSelectat) = 0;
	// in jocLocal executa mutarea
	// in jocRetea trimite la server si asteapta mutarea

	// tb pt ca avem metode virtuale
	virtual ~Joc() {}
};

#endif
