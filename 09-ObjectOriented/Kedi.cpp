#include "Kedi.h"

//Constructor
Kedi::Kedi(string ad) : Hayvan( ad) {
	// Ek yap�lacak i�lemleri de buraya yaz�n
	
}

void Kedi::fareYakala() {
	cout << Hayvan::getIsim() << " fare yakal�yor" << endl;

};