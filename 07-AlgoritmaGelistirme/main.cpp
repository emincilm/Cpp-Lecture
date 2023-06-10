#include <iostream>
#include <chrono>
using namespace std;
void ekranayaz() {

	cout << "*********************************************************" << endl;
	cout << "*                                                       *" << endl;
	cout << "*		This code wrote  by Emin Cil	        *" << endl;
	cout << "*                                                       *" << endl;
	cout << "*********************************************************" << endl;
}
void fonksiyon1() {
	static int sayac = 0;
	sayac++;
	cout << "fonksiyon 1 sayac�:" << sayac << endl;
}
void fonksiyon2() {
	static int sayac = 0;
	sayac++;
	cout << "fonksiyon 2 say�s� " << sayac << endl;
}
int main() {
	setlocale(LC_ALL, "Turkish");
	ekranayaz();
	/* Kullanc�dan al�nan tam say�ya kadar t�m asal say�lar� bulup ekrana yazd�r�n�z 
	int sayi;
	cout << "L�tfen bir say� giriniz: ";
	cin >> sayi;
	chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	for (int i = 1; i <= sayi; i++){
		int sayac = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0){
				sayac++;
				if (sayac > 2) {
					break;
				}
			}
		}
		if (sayac == 2) {
			cout << i << ",";
		}
	}
	chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	cout << endl;
	std::cout << "Time diffrence = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[uS]" << std::endl;*/


	// 4 basamakl� ve rakamlar� birbirinden farkl� ka� tane tam say� oldu�unu bulan ve ekrana yazd�ran bir c++ porgram� yaz�n�z
	// 1000-9999
	/*int sayac = 0;
	int birlerB, onlarB, yuzlerB, binlerB;
	for (int i = 1000; i <= 9999; i++){
		birlerB = (i % 10);
		onlarB  = (i / 10) % 10;
		yuzlerB = (i / 100) % 10;
		binlerB = (i / 1000) % 10;
		if (birlerB != onlarB && birlerB != yuzlerB && birlerB != binlerB &&
			onlarB != yuzlerB && onlarB != binlerB && yuzlerB != binlerB) {
			sayac++;
		}
	}
	cout << "1000-9999 aras�nda: " << sayac << " adet rakamlar� farkli tamsayi vard�r.";*/

	// 20 ile 40 aras�ndaki say�lar�n t�m b�lenlerini bulan ve ekrana yazd�ran bir program yaz�n�z
	// 20 b�lenleri 1,2,4,5,10,20
	//const int degismez = 5; //const de�i�keni ile birlikte tan�mlad���mz int float double char string ne olursa olsun de�eri de�i�emeyiz
	//static int stat1;		// statik de�erler art�p azalsa bile  statik oldu�u i�in her zaman ba�lang��ta atanan de�er kullan�l�r. 
	//int baslangic, bitis;
	//cout << "Ba�lang�� Say�s�n� giriniz:";
	//cin >> baslangic;
	//cout << "Biti� Say�s�n� giriniz:";
	//cin >> bitis;

	//for (int i = baslangic; i <= bitis; i++){
	//	cout << i << "\nsayisinin  b�lenleri: ";
	//	for (int j = 1; j <= i; j++) {
	//		if (i%j==0){
	//			cout << j << ",";
	//		}
	//	}
	//	cout << endl;
	//}



	fonksiyon1();
	fonksiyon1();
	fonksiyon1();


	cout << endl;

	fonksiyon2();
	fonksiyon2();

	cout << endl;
	fonksiyon1();
	cout << endl;
	return 0;
}