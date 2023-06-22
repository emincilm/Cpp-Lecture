#include <iostream>
#include "Hayvan.h"

using namespace std;


Hayvan::Hayvan(string ad) {
	Hayvan::Isim = ad;
}

void Hayvan::Beslen() {
	cout << Hayvan::Isim << " besleniyor.." << endl;
}

void Hayvan::Uyu() {
	cout << Hayvan::Isim << " uyuyor.." << endl;
}

void Hayvan::setIsim(string ad) {
	Hayvan::Isim = ad;
}

string Hayvan::getIsim() {
	return Hayvan::Isim;
}