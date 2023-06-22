#include <iostream>
#include "Otomobil.h"
#include "Hayvan.h"
#include "Kedi.h"
#include "Kopek.h"
#include "Kus.h"
using namespace std;
void ekranayaz() {

	cout << "*********************************************************" << endl;
	cout << "*                                                       *" << endl;
	cout << "*		This code wrote  by Emin Cil	        *" << endl;
	cout << "*                                                       *" << endl;
	cout << "*********************************************************" << endl;
}

int Kopek::kopekSayisi = 0;
int main() {
	setlocale(LC_ALL, "Turkish");
	ekranayaz();
	/*Otomobil otomobil1("siyah", "mercedes", 85, 2020,5);
	Otomobil otomobil2("mavi", "bmw", 95,2021,3);
	Otomobil otomobil3("sarý", "opel", 75,2022,5);*/
	//otomobil1.renk = "siyah";
	//otomobil2.renk = "mavi";
	//otomobil3.renk = "sarý";
	//otomobil1.model = "Mercedes";
	//otomobil2.model = "BMW";
	//otomobil3.model = "Opel";
	//otomobil1.guc = 85;
	//otomobil2.guc = 95;
	//otomobil3.guc = 75;
	/*cout << "1. Otomobil rengi: " << otomobil1.renk << endl;
	cout << "2. Otomobil rengi: " << otomobil2.renk << endl;
	cout << "3. Otomobil rengi: " << otomobil3.renk << endl;*/
	// private yaptýðýmýz için setle atama yapýp getle alýyoruz 
	/*otomobil1.ruhsatBilgileri();
	otomobil2.ruhsatBilgileri();
	otomobil3.ruhsatBilgileri();
	otomobil1.setOtomobilRenk("kýrmýzý");*/
	/*Otomobil* p;
	p = &otomobil1;
	p->ruhsatBilgileri();
	p = &otomobil2;
	p->ruhsatBilgileri();
	p = &otomobil3;
	p->ruhsatBilgileri();*/

	//Otomobil* p;
	//p = new Otomobil("Sarý", " Audi", 110, 2023,7); 
	//p->setOtomobilRenk("Mor");
	//p->ruhsatBilgileri();
	//delete p; // pointer ile oluþturulan sýnýflarý iþiniz bittiðinde delete edin;


	/*Hayvan h("Karabaþ");
	h.Beslen();
	h.Uyu();*/

	Kedi tekir("tekir");
	tekir.Beslen();
	tekir.Uyu();
	tekir.fareYakala();

	cout << "Kopek Sayisi = " << Kopek::getKopekSayisi() <<endl;
	Kopek kopek("Karabaþ");
	kopek.Beslen();
	kopek.Uyu();
	kopek.havla();
	cout << "Kopek Sayisi = " << Kopek::getKopekSayisi() << endl;
	Kopek kopek1("Karabaþ1");
	Kopek kopek2("Karabaþ2");
	Kopek* kp = new Kopek("karabas3");
	cout << "Kopek Sayisi = " << Kopek::getKopekSayisi() << endl;
	delete kp;
	cout << "Kopek Sayisi = " << Kopek::getKopekSayisi() << endl;
	Kus kus("Tweety");
	kus.Beslen();
	kus.Uyu();
	kus.uc();
	 

	cout << "6in karesi	" << Kopek::karesiniHesapla(6) << endl;






	cout << endl;
	cout << endl;
	return 0;
}
