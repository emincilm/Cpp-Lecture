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
	ekranayaz("Ho� geldiniz");
	ekranayaz(12412);
	int dogumyili,yas;
	cout << "Do�um y�l�n� giriniz:";
	cin >> dogumyili;
	yas = yasgoster(dogumyili);
	cout << "Ya��n�z: " << yas<< endl;
	int x, y;
	cout << " L�tfen y�ksek�i giriniz: ";
	cin >> x;
	cout << endl;
	cout << " L�tfen boyu giriniz: ";
	cin >> y;
	cout << endl;
	int sonuc;
	sonuc = alanHesapla(x, y);
	cout << "Alan : " << sonuc;
	cout << endl << endl;

	return 0;
}