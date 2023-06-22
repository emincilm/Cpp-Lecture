#include "Kedi.h"

//Constructor
Kedi::Kedi(string ad) : Hayvan( ad) {
	// Ek yapýlacak iþlemleri de buraya yazýn
	
}

void Kedi::fareYakala() {
	cout << Hayvan::getIsim() << " fare yakalýyor" << endl;

};