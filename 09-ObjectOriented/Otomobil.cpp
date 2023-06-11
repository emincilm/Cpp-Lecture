#include "Otomobil.h"
//Otomobil Constuctor
Otomobil::Otomobil(string _renk, string _model, int _guc, int _my, int kp) {
	cout << "Constuctor cagirildi" << endl;
	renk = _renk;
	model = _model;
	guc = _guc;
	my = _my;
	pKapiSayisi = new int(kp); // = *pKapiSayisi = kp;
}
// Destructor for class Otomobil
Otomobil::~Otomobil() {
	cout << "Destructor cagirildi" << endl;
}
void Otomobil::ruhsatBilgileri() {
	cout << "Model: " << Otomobil::model << endl;
	cout << "Renk: " << Otomobil::renk << endl;
	cout << "Guc: " << Otomobil::guc << endl;
	cout << "Model Y�l�: " << Otomobil::my << endl;
	cout << "Otomobil Kap� Say�s�: " << Otomobil::pKapiSayisi << endl;
	cout << endl << endl;

}
// prive oldu�u i�ian setle atama yap�p get al�yoruz 
void Otomobil::setOtomobilRenk(string _renk) {
	renk = _renk;
}
string Otomobil::getOtomobilRenk() {
	return renk;
}
void Otomobil::setOtomobilModel(string _model) {
	model = _model;
}
string Otomobil::getOtomobilModel() {
	return model;
}
void Otomobil::setOtomobilGuc(int _guc) {
	guc = _guc;
}
int Otomobil::getOtomobilGuc() {
	return guc;
}
void Otomobil::setModelYil(int _my) {
	my = _my;
}
int Otomobil::getModelYil() {
	return my;
}