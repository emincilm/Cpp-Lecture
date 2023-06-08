#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	/*
	// 1'den kullaninin girdiði sayýya kadar 7 nin katlarýný ekrana yazdýran bir kod yazýnýnz 
	int index = 1;
	int max,kat;

	cout << "Lutfen max degeri giriniz: ";
	cin >> max;
	cout << endl;
	cout << "Kaçýn katlarýný yazdýrmak istiyorsun: " << endl;
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
		cout << "Lütfen Þifreyi Giriniz: ";
		cin >> girilen_sifre;
	} while (sifre !=girilen_sifre);

	cout << "Þifre Dogru Hoþ geldiniz";
	*/
	/*
	// 1 den 20 ye kadar tüm sayýlarý ekrana yazdýran bir for döngüsü yazalým
	int limit;
	cout << "Kaça kadar sayýlmasýný istiyorsunuz ?";
	cin >> limit;


	for (int i = 0; i <= limit; i++){
		if (i%2==0){
			cout << i << ".ci sayý"; 
			cout << endl;
		}
		
	}
	*/
	/*
	// kullaný tarafýndan girilen sayýnýn faktöriyelinin hesaplanmasý
	int KullaniciSayi;
	int fak = 1;
	cout << "Faktöriyeli hesaplanmasý istediðini sayýyý giriniz: ";
	cin >> KullaniciSayi;

	for (int i = 1; i <= KullaniciSayi; i++){
		if (fak == 24) {
			continue;
		}
		fak = fak * i;
		cout << "i=" <<i << "\t" << "faktöriyel:" << fak << endl;
		cout << "Faktöriyel hesabý:" << fak << endl;
		
		if (fak >> 500) {
			break;
		}
	}

	cout << "Ýstenen Faktöreiyer: " << fak << endl;
	*/

	// Kullanýcýnýn konsoldan girdiði sayýya göre aþaðýdaki þekilde çýktý veren programý yazýnýz 
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