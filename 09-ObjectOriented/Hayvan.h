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
//	string Isim; // public de�ilde protected �st s�n�fta t�retti�imizi alt s�n�flarda kullanabiliriz

};

//Hayvan::Hayvan()
//{
//}
//
//Hayvan::~Hayvan()
//{
//}
