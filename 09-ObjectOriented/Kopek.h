#pragma once
#include "Hayvan.h"
class Kopek : public Hayvan
{
public:
	Kopek(string ad);
	~Kopek();
	void havla();
	static int getKopekSayisi() {
		return kopekSayisi;
	}
	static int karesiniHesapla(int x);

private:

	static int kopekSayisi; //const static float pi = 3.14 asla deðiþmez ama const olmazsa deðiþir

};