//---------------------------------------------------------------------------

#ifndef casutaH
#define casutaH
//---------------------------------------------------------------------------

class Pion;

//Tip casute:
#define CASUTA_NORMALA 0        // pe traseu
#define CASUTA_START_ROSU 1     // unde iese pionul rosu
#define CASUTA_START_ALBASTRU 2 // ... albastru
#define CASUTA_START_GALBEN 3   // ... galben
#define CASUTA_START_VERDE 4    // ... verde
#define CASUTA_ZONA_FINALA 5   // csutele colorate din z finala
#define CASUTA_CASTIG 6        // finish
#define CASUTA_ACASA 7         // din baza

class Casuta {
private:
	int mIdCasuta;
	int mTipCasuta;
	int mXCasuta, mYCasuta;
	Pion* mPionPeCasuta;

public:
	Casuta(); // constructor facut pt functionarea constructorului Tabla
	Casuta(int id, int tip, int x, int y);
	// ca sa imi rezolv o eroare

	int getIdCasuta();         //metode get
	int getTipCasuta();
	int getXCasuta();
	int getYCasuta();
	Pion* getPionPeCasuta();

	void setTipCasuta(int tipNou); //metode set
	void setXCasuta(int x);
	void setYCasuta(int y);

	bool esteOcupata();
	void setPion(Pion* p);
	void eliminaPion();
};
#endif
