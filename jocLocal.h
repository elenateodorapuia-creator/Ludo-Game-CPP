//---------------------------------------------------------------------------

#ifndef jocLocalH
#define jocLocalH

#include "joc.h"
//---------------------------------------------------------------------------

class JocLocal : public Joc {
public:
	JocLocal(String numeJucatori[], int numarJucatori)
		: Joc(numeJucatori, numarJucatori) {}

	// metodele virtuale pure:
	void trageUrmatorulJucator() override;
	bool areMutariValide() override;
    bool executaMutare(Pion* pionSelectat) override;

    // destructor (important)
	~JocLocal() override;
};

#endif
