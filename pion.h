//---------------------------------------------------------------------------

#ifndef pionH
#define pionH
//---------------------------------------------------------------------------

#include <Vcl.ExtCtrls.hpp> //pt TIamge

//Culorile pionilor:
#define ROSU 0
#define ALBASTRU 1
#define GALBEN 2
#define VERDE 3

//Starea pozitiei pionilor:
#define PION_INCASA 0
#define PION_PETABLA 1
#define PION_INZONAFINALA 2
#define PION_FINALIZAT 3

class Casuta;

class Pion{
private:
	int mIdPion;
	int mCuloarePion;
	int mStareCurentaPion;
	Casuta *mCasutaCurentaPion;
	TImage* mImagineGrafica;

public:
	Pion();
	Pion(int id, int culoare);   //Constructor

	int getIdPion();         //Metode get
	int getCuloarePion();
	int getStareCurentaPion();
	Casuta* getCasutaCurentaPion();
	TImage* getImagineGrafica();

	void setStareCurentaPion(int nouaStare);     //metode set
    void setImagineGrafica(TImage* img);

    void scoateDinCasa(Casuta* casutaStart);
    void muta(Casuta* casutaDestinatie);
	void trimiteInCasa(Casuta* casutaCasa);

};

#endif
