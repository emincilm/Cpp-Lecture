#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	/*
	// 1'den kullaninin girdi�i say�ya kadar 7 nin katlar�n� ekrana yazd�ran bir kod yaz�n�nz 
	int index = 1;
	int max,kat;

	cout << "Lutfen max degeri giriniz: ";
	cin >> max;
	cout << endl;
	cout << "Ka��n katlar�n� yazd�rmak istiyorsun: " << endl;
	cin >> kat;
	while (index <= max){
		if (index % kat == 0) {
			cout << "index: \t" << index << endl;
		}
		index = index + 1;
	}
*/
	/*
	string sifre = "1234";
	string girilen_sifre;

	do {
		cout << "L�tfen �ifreyi Giriniz: ";
		cin >> girilen_sifre;
	} while (sifre !=girilen_sifre);

	cout << "�ifre Dogru Ho� geldiniz";
	*/
	/*
	// 1 den 20 ye kadar t�m say�lar� ekrana yazd�ran bir for d�ng�s� yazal�m
	int limit;
	cout << "Ka�a kadar say�lmas�n� istiyorsunuz ?";
	cin >> limit;


	for (int i = 0; i <= limit; i++){
		if (i%2==0){
			cout << i << ".ci say�"; 
			cout << endl;
		}
		
	}
	*/
	/*
	// kullan� taraf�ndan girilen say�n�n fakt�riyelinin hesaplanmas�
	int KullaniciSayi;
	int fak = 1;
	cout << "Fakt�riyeli hesaplanmas� istedi�ini say�y� giriniz: ";
	cin >> KullaniciSayi;

	for (int i = 1; i <= KullaniciSayi; i++){
		if (fak == 24) {
			continue;
		}
		fak = fak * i;
		cout << "i=" <<i << "\t" << "fakt�riyel:" << fak << endl;
		cout << "Fakt�riyel hesab�:" << fak << endl;
		
		if (fak >> 500) {
			break;
		}
	}

	cout << "�stenen Fakt�reiyer: " << fak << endl;
	*/

	// Kullan�c�n�n konsoldan girdi�i say�ya g�re a�a��daki �ekilde ��kt� veren program� yaz�n�z 
	//1
	//2 2
	//3 3 3
	//4 4 4 
	//5 5 5
	int sayi;
	cout << "Bir sayi giriniz: ";
	cin >> sayi;
	for (int i = 1; i <= sayi; i++){
		for (int j = 1; j <= i; j++) {
			cout << i  << " ";
			cout << j << " ";
		}
		cout << endl;
	}





	return 0;
}