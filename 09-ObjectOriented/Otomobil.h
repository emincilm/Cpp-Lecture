#pragma once
#include <iostream>

using namespace std;

class Otomobil
{
public:
	// Cunstructor for class Otomobil
	Otomobil(string _renk, string _model, int _guc, int _my, int kp);
	// Destructor for class Otomobil
	~Otomobil();
	void ruhsatBilgileri();
	void setOtomobilRenk(string _renk);
	string getOtomobilRenk();
	void setOtomobilModel(string _model);
	string getOtomobilModel();
	void setOtomobilGuc(int _guc);
	int getOtomobilGuc();
	void setModelYil(int _my);
	int getModelYil();
 	int* pKapiSayisi;

private:
	string renk;
	string model;
	int guc;
	int my;
};
