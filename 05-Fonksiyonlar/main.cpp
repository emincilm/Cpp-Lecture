#include <iostream>

using namespace std;
int alanHesapla(int x, int y) {
	int alan = x * y;
	return alan;
}

void ekranayaz() {

	cout << "*********************************************************" << endl;
	cout << "*                                                       *" << endl;
	cout << "*		This code wrote  by Emin Cil	        *" << endl;
	cout << "*                                                       *" << endl;
	cout << "*********************************************************" << endl;
 }
void ekranayaz(string merhaba) {
	cout << merhaba << endl;
}
void ekranayaz(int kullanici) {
	cout << "Merhaba" << kullanici << endl;
}
int yasgoster(int dogumYili) {
	int yas = 2023 - dogumYili;
	return yas;
}
int main() {
	setlocale(LC_ALL, "Turkish");
	ekranayaz();
	ekranayaz("Hoþ geldiniz");
	ekranayaz(12412);
	int dogumyili,yas;
	cout << "Doðum yýlýný giriniz:";
	cin >> dogumyili;
	yas = yasgoster(dogumyili);
	cout << "Yaþýnýz: " << yas<< endl;
	int x, y;
	cout << " Lütfen yüksekði giriniz: ";
	cin >> x;
	cout << endl;
	cout << " Lütfen boyu giriniz: ";
	cin >> y;
	cout << endl;
	int sonuc;
	sonuc = alanHesapla(x, y);
	cout << "Alan : " << sonuc;
	cout << endl << endl;

	return 0;
}