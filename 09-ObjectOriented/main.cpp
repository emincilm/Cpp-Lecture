#include <iostream>
#include "Otomobil.h"

using namespace std;
void ekranayaz() {

	cout << "*********************************************************" << endl;
	cout << "*                                                       *" << endl;
	cout << "*		This code wrote  by Emin Cil	        *" << endl;
	cout << "*                                                       *" << endl;
	cout << "*********************************************************" << endl;
}


int main() {
	setlocale(LC_ALL, "Turkish");
	ekranayaz();
	Otomobil otomobil1("siyah", "mercedes", 85, 2020,5);
	Otomobil otomobil2("mavi", "bmw", 95,2021,3);
	Otomobil otomobil3("sar�", "opel", 75,2022,5);
	//otomobil1.renk = "siyah";
	//otomobil2.renk = "mavi";
	//otomobil3.renk = "sar�";
	//otomobil1.model = "Mercedes";
	//otomobil2.model = "BMW";
	//otomobil3.model = "Opel";
	//otomobil1.guc = 85;
	//otomobil2.guc = 95;
	//otomobil3.guc = 75;
	/*cout << "1. Otomobil rengi: " << otomobil1.renk << endl;
	cout << "2. Otomobil rengi: " << otomobil2.renk << endl;
	cout << "3. Otomobil rengi: " << otomobil3.renk << endl;*/
	// private yapt���m�z i�in setle atama yap�p getle al�yoruz 
	/*otomobil1.ruhsatBilgileri();
	otomobil2.ruhsatBilgileri();
	otomobil3.ruhsatBilgileri();
	otomobil1.setOtomobilRenk("k�rm�z�");*/
	/*Otomobil* p;
	p = &otomobil1;
	p->ruhsatBilgileri();
	p = &otomobil2;
	p->ruhsatBilgileri();
	p = &otomobil3;
	p->ruhsatBilgileri();*/

	Otomobil* p;
	p = new Otomobil("Sar�", " Audi", 110, 2023,7); 
	p->setOtomobilRenk("Mor");
	p->ruhsatBilgileri();
	delete p; // pointer ile olu�turulan s�n�flar� i�iniz bitti�inde delete edin;

	cout << endl;
	cout << endl;
	return 0;
}
