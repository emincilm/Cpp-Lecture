#pragma once
#include <iostream>

using namespace std;
class Hayvan
{
public:
	Hayvan(string ad);
	//~Hayvan();
	
	void Beslen();
	void Uyu();
	void setIsim(string ad);
	string getIsim();
private:
	string Isim;

//protected:
//	string Isim; // public deðilde protected üst sýnýfta türettiðimizi alt sýnýflarda kullanabiliriz

};

//Hayvan::Hayvan()
//{
//}
//
//Hayvan::~Hayvan()
//{
//}
