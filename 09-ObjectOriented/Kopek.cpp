#include "Kopek.h">

Kopek::Kopek(string ad) : Hayvan(ad) {
	kopekSayisi++; 
}

Kopek::~Kopek() {
	kopekSayisi--;
}

void Kopek::havla() {
	cout << Hayvan::getIsim() << " havlýyor" << endl;
}

int Kopek::karesiniHesapla(int x) {
	return x * x;
}