//---------------------------------------------------------------------------

#pragma hdrstop

#include "tabla.h"
#include "pion.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Tabla::Tabla() {
	initializeazaTabla();
	initializeazaCoordonate();
}

void Tabla::initializeazaTabla() {

	for (int i = 0; i < NUMAR_CASUTE_TRASEU; i++) {
		mTraseuCasute[i] = Casuta(i, CASUTA_NORMALA, 0, 0);
	}

	// casute sigure:
	mTraseuCasute[49].setTipCasuta(CASUTA_START_ROSU);
	mTraseuCasute[10].setTipCasuta(CASUTA_START_ALBASTRU);
	mTraseuCasute[23].setTipCasuta(CASUTA_START_GALBEN);
	mTraseuCasute[36].setTipCasuta(CASUTA_START_VERDE);

	// casute acasa:
	for (int i = 0; i < NUMAR_CASUTE_ACASA; i++) {
		mCasuteAcasa[i] = Casuta(100 + i, CASUTA_ACASA, 0, 0);
	}

	// casute finale:
	for (int i = 0; i < NUMAR_CASUTE_ZONA_FINALA; i++) {
		mCasuteZonaFinala[i] = Casuta(200 + i, CASUTA_ZONA_FINALA, 0, 0);
	}

	// casuta castig:
	mCasutaCastig[0] = Casuta(999, CASUTA_CASTIG, 0, 0);
}

void Tabla::initializeazaCoordonate(){  //munca de chinez batran
	mTraseuCasute[0].setXCasuta(10);      //casute traseu
	mTraseuCasute[0].setYCasuta(385);
	mTraseuCasute[1].setXCasuta(56);
	mTraseuCasute[1].setYCasuta(385);
	mTraseuCasute[2].setXCasuta(102);
	mTraseuCasute[2].setYCasuta(385);
	mTraseuCasute[3].setXCasuta(148);
	mTraseuCasute[3].setYCasuta(385);
	mTraseuCasute[4].setXCasuta(194);
	mTraseuCasute[4].setYCasuta(385);
	mTraseuCasute[5].setXCasuta(240);
	mTraseuCasute[5].setYCasuta(385);
	mTraseuCasute[6].setXCasuta(286);
	mTraseuCasute[6].setYCasuta(431);
	mTraseuCasute[7].setXCasuta(286);
	mTraseuCasute[7].setYCasuta(477);
	mTraseuCasute[8].setXCasuta(286);
	mTraseuCasute[8].setYCasuta(523);
	mTraseuCasute[9].setXCasuta(286);
	mTraseuCasute[9].setYCasuta(569);
	mTraseuCasute[10].setXCasuta(286);
	mTraseuCasute[10].setYCasuta(615);
	mTraseuCasute[11].setXCasuta(286);
	mTraseuCasute[11].setYCasuta(661);
	mTraseuCasute[12].setXCasuta(336);
	mTraseuCasute[12].setYCasuta(661);
	mTraseuCasute[13].setXCasuta(384);
	mTraseuCasute[13].setYCasuta(661);
	mTraseuCasute[14].setXCasuta(384);
	mTraseuCasute[14].setYCasuta(615);
	mTraseuCasute[15].setXCasuta(384);
	mTraseuCasute[15].setYCasuta(569);
	mTraseuCasute[16].setXCasuta(384);
	mTraseuCasute[16].setYCasuta(523);
	mTraseuCasute[17].setXCasuta(384);
	mTraseuCasute[17].setYCasuta(477);
	mTraseuCasute[18].setXCasuta(384);
	mTraseuCasute[18].setYCasuta(431);
	mTraseuCasute[19].setXCasuta(430);
	mTraseuCasute[19].setYCasuta(385);
	mTraseuCasute[20].setXCasuta(476);
	mTraseuCasute[20].setYCasuta(385);
	mTraseuCasute[21].setXCasuta(525);
	mTraseuCasute[21].setYCasuta(385);
	mTraseuCasute[22].setXCasuta(571);
	mTraseuCasute[22].setYCasuta(385);
	mTraseuCasute[23].setXCasuta(617);
	mTraseuCasute[23].setYCasuta(385);
	mTraseuCasute[24].setXCasuta(663);
	mTraseuCasute[24].setYCasuta(385);
	mTraseuCasute[25].setXCasuta(663);
	mTraseuCasute[25].setYCasuta(339);
	mTraseuCasute[26].setXCasuta(663);
	mTraseuCasute[26].setYCasuta(293);
	mTraseuCasute[27].setXCasuta(617);
	mTraseuCasute[27].setYCasuta(293);
	mTraseuCasute[28].setXCasuta(571);
	mTraseuCasute[28].setYCasuta(293);
	mTraseuCasute[29].setXCasuta(525);
	mTraseuCasute[29].setYCasuta(293);
	mTraseuCasute[30].setXCasuta(476);
	mTraseuCasute[30].setYCasuta(293);
	mTraseuCasute[31].setXCasuta(430);
	mTraseuCasute[31].setYCasuta(293);
	mTraseuCasute[32].setXCasuta(384);
	mTraseuCasute[32].setYCasuta(247);
	mTraseuCasute[33].setXCasuta(384);
	mTraseuCasute[33].setYCasuta(199);
	mTraseuCasute[34].setXCasuta(384);
	mTraseuCasute[34].setYCasuta(153);
	mTraseuCasute[35].setXCasuta(384);
	mTraseuCasute[35].setYCasuta(107);
	mTraseuCasute[36].setXCasuta(384);
	mTraseuCasute[36].setYCasuta(61);
	mTraseuCasute[37].setXCasuta(384);
	mTraseuCasute[37].setYCasuta(15);
	mTraseuCasute[38].setXCasuta(336);
	mTraseuCasute[38].setYCasuta(15);
	mTraseuCasute[39].setXCasuta(290);
	mTraseuCasute[39].setYCasuta(15);
	mTraseuCasute[40].setXCasuta(290);
	mTraseuCasute[40].setYCasuta(61);
	mTraseuCasute[41].setXCasuta(290);
	mTraseuCasute[41].setYCasuta(107);
	mTraseuCasute[42].setXCasuta(290);
	mTraseuCasute[42].setYCasuta(153);
	mTraseuCasute[43].setXCasuta(290);
	mTraseuCasute[43].setYCasuta(199);
	mTraseuCasute[44].setXCasuta(290);
	mTraseuCasute[44].setYCasuta(247);
	mTraseuCasute[45].setXCasuta(242);
	mTraseuCasute[45].setYCasuta(293);
	mTraseuCasute[46].setXCasuta(196);
	mTraseuCasute[46].setYCasuta(293);
	mTraseuCasute[47].setXCasuta(150);
	mTraseuCasute[47].setYCasuta(293);
	mTraseuCasute[48].setXCasuta(104);
	mTraseuCasute[48].setYCasuta(293);
	mTraseuCasute[49].setXCasuta(56);
	mTraseuCasute[49].setYCasuta(293);
	mTraseuCasute[50].setXCasuta(10);
	mTraseuCasute[50].setYCasuta(293);
	mTraseuCasute[51].setXCasuta(10);
	mTraseuCasute[51].setYCasuta(339);
	mCasuteZonaFinala[0].setXCasuta(56); // casute z finala
	mCasuteZonaFinala[0].setYCasuta(339);
	mCasuteZonaFinala[1].setXCasuta(102);
	mCasuteZonaFinala[1].setYCasuta(339);
	mCasuteZonaFinala[2].setXCasuta(148);
	mCasuteZonaFinala[2].setYCasuta(339);
	mCasuteZonaFinala[3].setXCasuta(194);
	mCasuteZonaFinala[3].setYCasuta(339);
	mCasuteZonaFinala[4].setXCasuta(240);
	mCasuteZonaFinala[4].setYCasuta(339);
	mCasuteZonaFinala[5].setXCasuta(336);
	mCasuteZonaFinala[5].setYCasuta(615);
	mCasuteZonaFinala[6].setXCasuta(336);
	mCasuteZonaFinala[6].setYCasuta(569);
	mCasuteZonaFinala[7].setXCasuta(336);
	mCasuteZonaFinala[7].setYCasuta(523);
	mCasuteZonaFinala[8].setXCasuta(336);
	mCasuteZonaFinala[8].setYCasuta(477);
	mCasuteZonaFinala[9].setXCasuta(336);
	mCasuteZonaFinala[9].setYCasuta(431);
	mCasuteZonaFinala[10].setXCasuta(617);
	mCasuteZonaFinala[10].setYCasuta(339);
	mCasuteZonaFinala[11].setXCasuta(571);
	mCasuteZonaFinala[11].setYCasuta(339);
	mCasuteZonaFinala[12].setXCasuta(525);
	mCasuteZonaFinala[12].setYCasuta(339);
	mCasuteZonaFinala[13].setXCasuta(479);
	mCasuteZonaFinala[13].setYCasuta(339);
	mCasuteZonaFinala[14].setXCasuta(433);
	mCasuteZonaFinala[14].setYCasuta(339);
	mCasuteZonaFinala[15].setXCasuta(336);
	mCasuteZonaFinala[15].setYCasuta(61);
	mCasuteZonaFinala[16].setXCasuta(336);
	mCasuteZonaFinala[16].setYCasuta(107);
	mCasuteZonaFinala[17].setXCasuta(336);
	mCasuteZonaFinala[17].setYCasuta(153);
	mCasuteZonaFinala[18].setXCasuta(336);
	mCasuteZonaFinala[18].setYCasuta(199);
	mCasuteZonaFinala[19].setXCasuta(336);
	mCasuteZonaFinala[19].setYCasuta(245);
	mCasuteAcasa[0].setXCasuta(80); // casute acasa
	mCasuteAcasa[0].setYCasuta(77);
	mCasuteAcasa[1].setXCasuta(170);
	mCasuteAcasa[1].setYCasuta(77);
	mCasuteAcasa[2].setXCasuta(80);
	mCasuteAcasa[2].setYCasuta(172);
	mCasuteAcasa[3].setXCasuta(170);
	mCasuteAcasa[3].setYCasuta(172);
	mCasuteAcasa[4].setXCasuta(80);
	mCasuteAcasa[4].setYCasuta(497);
	mCasuteAcasa[5].setXCasuta(170);
	mCasuteAcasa[5].setYCasuta(497);
	mCasuteAcasa[6].setXCasuta(80);
	mCasuteAcasa[6].setYCasuta(587);
	mCasuteAcasa[7].setXCasuta(170);
	mCasuteAcasa[7].setYCasuta(587);
	mCasuteAcasa[8].setXCasuta(505);
	mCasuteAcasa[8].setYCasuta(497);
	mCasuteAcasa[9].setXCasuta(595);
	mCasuteAcasa[9].setYCasuta(497);
	mCasuteAcasa[10].setXCasuta(505);
	mCasuteAcasa[10].setYCasuta(587);
	mCasuteAcasa[11].setXCasuta(595);
	mCasuteAcasa[11].setYCasuta(587);
	mCasuteAcasa[12].setXCasuta(505);
	mCasuteAcasa[12].setYCasuta(77);
	mCasuteAcasa[13].setXCasuta(595);
	mCasuteAcasa[13].setYCasuta(77);
	mCasuteAcasa[14].setXCasuta(505);
	mCasuteAcasa[14].setYCasuta(172);
	mCasuteAcasa[15].setXCasuta(595);
	mCasuteAcasa[15].setYCasuta(172);
	mCasutaCastig[0].setXCasuta(336);   //casuta castig
	mCasutaCastig[0].setYCasuta(333);
}


Casuta* Tabla::getCasutaTraseu(int idTraseu) {
	if (idTraseu >= 0 && idTraseu < NUMAR_CASUTE_TRASEU) {
		return &mTraseuCasute[idTraseu];
	}
	return nullptr;
}

Casuta* Tabla::getCasutaAcasa(int idAcasa) {
	if (idAcasa >= 0 && idAcasa < NUMAR_CASUTE_ACASA) {
		return &mCasuteAcasa[idAcasa];
	}
	return nullptr;
}


Casuta* Tabla::getCasutaStartCuloare(int culoare) {
	int idStart = 0;

	switch (culoare) {
		case ROSU: idStart = 49; break;
		case ALBASTRU: idStart = 10; break;
		case GALBEN: idStart = 23; break;
		case VERDE: idStart = 36; break;
		default: return nullptr;
	}

	return getCasutaTraseu(idStart);
}

Casuta* Tabla::getCasutaLiberaAcasa(int culoare) {
	int indexStart = culoare * 4;

	for (int i = 0; i < 4; i++) {
		Casuta* casuta = &mCasuteAcasa[indexStart + i];
		if (!(casuta->esteOcupata())) {
			return casuta;
		}
	}
	return nullptr;
}

Casuta* Tabla::calculeazaDestinatia(Pion* pion, int numarMutari) {
	int culoare = pion->getCuloarePion();

	// pionul e in casa si zarul e 6
	if (pion->getStareCurentaPion() == PION_INCASA){
		if(numarMutari == 6) {
			Casuta* start = getCasutaStartCuloare(culoare);
			if (start->esteOcupata() && start->getPionPeCasuta()->getCuloarePion() == culoare) {
				return nullptr; // nu poate iesi din casa daca pe start e deja un pion propriu
			}
			return start;
		} else {
			return nullptr;
			}
	}

	// pionul e pe tabla sau in z finala
	/* prima data am tratat cazurile diferit, dar mi-am dat seama ca cumva si zona
	 finala face parte din traseu doar ca la fiecare culoare aceasta este partea
	 din traseu care este diferita pentru ele */
	 // plus ca am o parte de cod care s-ar fi repetat la fiecare (turnurile)
	if (pion->getStareCurentaPion() == PION_PETABLA || pion->getStareCurentaPion() == PION_INZONAFINALA) {

		Casuta* casutaCurenta = pion->getCasutaCurentaPion();
		int idCurent = casutaCurenta->getIdCasuta();

		// pe casuta de dinainte de intrare in z finala
		int idInainteDeIntrareFinala;
		switch (culoare) {
			case ROSU: idInainteDeIntrareFinala = 51; break;
			case ALBASTRU: idInainteDeIntrareFinala = 12; break;
			case GALBEN: idInainteDeIntrareFinala = 25; break;
			case VERDE: idInainteDeIntrareFinala = 38; break;
			default: return nullptr;
		}

		Casuta* destinatieCalculata = nullptr;

		// pe traseu
		if (idCurent < 100) {
			//daca se afla deja pe casuta de dinainte de zona finala:
			if (idCurent == idInainteDeIntrareFinala) {
				if (numarMutari < 6) {
					int indexFinal = (culoare * 5) + (numarMutari - 1);
					destinatieCalculata = &mCasuteZonaFinala[indexFinal];
				} else if (numarMutari == 6) {
					destinatieCalculata = &mCasutaCastig[0];
				} else {
					destinatieCalculata = nullptr;
				}
			} else {
				int idVerificare = idCurent;
				int pasiFacutiPanaLaIntrare = -1;
				for (int i = 1; i <= numarMutari; i++) {
					idVerificare--; // scad ca am notat eu casutele in sens invers ups
					// dupa 0 urmeaza 51 ca e circular traseul
					if (idVerificare < 0) {
						idVerificare = 51;
					}

					// vedem daca a ajuns la "poarta" de intrare in zona finala
					if (idVerificare == idInainteDeIntrareFinala) {
						pasiFacutiPanaLaIntrare = i;
						// nu ma opresc ca sa stiu cu cati pasi avansez in zona finala
					}
				}

				// daca am intalnit "poarta" in timp ce am parcurs mutarile
				if (pasiFacutiPanaLaIntrare != -1) {
					int pasiRamasiDeFacutInCuloar = numarMutari - pasiFacutiPanaLaIntrare;
					// daca s-a oprit pe "poarta" ramane pe zona de traseu
					if (pasiRamasiDeFacutInCuloar == 0) {
						destinatieCalculata = getCasutaTraseu(idInainteDeIntrareFinala);
					} else if (pasiRamasiDeFacutInCuloar > 5) {
						destinatieCalculata = nullptr; // mutare invalida (zona finala are 5 casute)
					} else {
						//indexul din vectorul de casute din zona finala:
						int indexFinal = (culoare * 5) + (pasiRamasiDeFacutInCuloar - 1);
						destinatieCalculata = &mCasuteZonaFinala[indexFinal];
					}
				} else { //se plimba pe traseu
					int idDestinatieSimpla = idCurent - numarMutari;
					if (idDestinatieSimpla < 0)
						idDestinatieSimpla += 52;
					destinatieCalculata = getCasutaTraseu(idDestinatieSimpla);
				}
			}
		}

		// pion este deja in z finala
		else if (idCurent >= 200) {
			int indexCurentZona = idCurent - 200;
			int indexBaza = culoare * 5; // de unde incepe z finala
			int pozitieInCuloar = indexCurentZona - indexBaza; //unde in z finala este

			int nouaPozitieInCuloar = pozitieInCuloar + numarMutari;

			if (nouaPozitieInCuloar < 5) {
				// ramane in z finala
				destinatieCalculata = &mCasuteZonaFinala[indexCurentZona + numarMutari];
			} else if (nouaPozitieInCuloar == 5) {
				// castiga
				destinatieCalculata = &mCasutaCastig[0];
			} else {
				// zar prea mare
				destinatieCalculata = nullptr;
			}
		}
		// sa nu se faca "turnuri" si sa nu fie batuti pionii de pe casute sigure:
		if (destinatieCalculata != nullptr && destinatieCalculata->getIdCasuta() != 999) {
			if (destinatieCalculata->esteOcupata()) {
				Pion* pionExistent = destinatieCalculata->getPionPeCasuta();
				if (pionExistent->getCuloarePion() == pion->getCuloarePion()) {
					return nullptr;
				}
				int tipCasuta = destinatieCalculata->getTipCasuta();
				bool esteCasutaSigura =
					tipCasuta == CASUTA_ZONA_FINALA ||
					tipCasuta == CASUTA_START_ROSU ||
					tipCasuta == CASUTA_START_ALBASTRU ||
					tipCasuta == CASUTA_START_GALBEN ||
					tipCasuta == CASUTA_START_VERDE;
				if (esteCasutaSigura) {
					return nullptr;
				}
			}
		}
		return destinatieCalculata;
	}
	return nullptr; // mutare invalida
}

bool Tabla::mutaPion(Pion* pionDeMutat, int numarMutari) {
	bool pionBatut = false;
	// functia are dublu rol: muta pionul dar si returneaza daca a mancat un pion sau nu

	Casuta* casutaDestinatie = calculeazaDestinatia(pionDeMutat, numarMutari);
	//A TREIA APELARE

	if (casutaDestinatie == nullptr) {
		return false; // mutare invalida (daca sare peste castig sau e blocat de turn/imunitate)
	}  // mai verificam si in JocLocal::executaMutare asta dar mai bine de 2 ori :))

	// cand se pune un pion peste altul, se "mananca"
	// daca ar fi de aceeasi culoare nu s-ar ajunge aici, cazul este tratat in calcDest
	if (casutaDestinatie->esteOcupata()) {
		Pion* pionOponent = casutaDestinatie->getPionPeCasuta();
		pionBatut = true;
		Casuta* casutaAcasa = getCasutaLiberaAcasa(pionOponent->getCuloarePion());
		casutaDestinatie->eliminaPion();
		pionOponent->trimiteInCasa(casutaAcasa);
		casutaAcasa->setPion(pionOponent);
		pionOponent->setStareCurentaPion(PION_INCASA); // resetam starea oponentului mancat
	}

	Casuta* casutaVeche = pionDeMutat->getCasutaCurentaPion();
	if (casutaVeche != nullptr && casutaVeche->getPionPeCasuta() == pionDeMutat) {
		casutaVeche->eliminaPion();
	}   // ma asigur ca sterg ce trebe inainte sa streg, desi ar merge si fara test

	pionDeMutat->muta(casutaDestinatie);
	casutaDestinatie->setPion(pionDeMutat);

	//stare pion
	if (casutaDestinatie->getTipCasuta() == CASUTA_CASTIG) {
		casutaDestinatie->eliminaPion();
		pionDeMutat->setStareCurentaPion(PION_FINALIZAT);
	} else if (casutaDestinatie->getTipCasuta() == CASUTA_ZONA_FINALA) {
		pionDeMutat->setStareCurentaPion(PION_INZONAFINALA);
	} else if (pionDeMutat->getStareCurentaPion() == PION_INCASA && numarMutari == 6) {
		pionDeMutat->scoateDinCasa(casutaDestinatie);
	} else if (pionDeMutat->getStareCurentaPion() != PION_FINALIZAT) {
		pionDeMutat->setStareCurentaPion(PION_PETABLA);
	}

	return pionBatut;
}

