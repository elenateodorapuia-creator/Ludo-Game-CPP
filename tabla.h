//---------------------------------------------------------------------------

#ifndef tablaH
#define tablaH

#include "casuta.h"
#include "pion.h"
//---------------------------------------------------------------------------

#define NUMAR_CASUTE_TRASEU 52
#define NUMAR_CASUTE_ACASA 16
#define NUMAR_CASUTE_ZONA_FINALA 20
#define NUMAR_CASUTE_CASTIG 1

class Tabla{
private:
    Casuta mTraseuCasute[NUMAR_CASUTE_TRASEU];
	Casuta mCasuteAcasa[NUMAR_CASUTE_ACASA];
	Casuta mCasuteZonaFinala[NUMAR_CASUTE_ZONA_FINALA];
	Casuta mCasutaCastig[NUMAR_CASUTE_CASTIG];

public:
	Tabla();

	Casuta* getCasutaTraseu(int idTraseu);
	Casuta* getCasutaAcasa(int idAcasa);
	Casuta* getCasutaStartCuloare(int culoare);
    Casuta* getCasutaLiberaAcasa(int culoare);
	// gaseste prima casuta libera din baza
	Casuta* calculeazaDestinatia(Pion* pion, int numarMutari);
	// cea mai complea functie

	bool mutaPion(Pion* pionDeMutat, int numarMutari);
	// returneaza true daca e mancat un pion

private:
	void initializeazaTabla();
    void initializeazaCoordonate();

};


#endif
