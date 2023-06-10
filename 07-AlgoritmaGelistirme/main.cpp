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
	cout << "fonksiyon 1 sayacý:" << sayac << endl;
}
void fonksiyon2() {
	static int sayac = 0;
	sayac++;
	cout << "fonksiyon 2 sayýsý " << sayac << endl;
}
int main() {
	setlocale(LC_ALL, "Turkish");
	ekranayaz();
	/* Kullancýdan alýnan tam sayýya kadar tüm asal sayýlarý bulup ekrana yazdýrýnýz 
	int sayi;
	cout << "Lütfen bir sayý giriniz: ";
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


	// 4 basamaklý ve rakamlarý birbirinden farklý kaç tane tam sayý olduðunu bulan ve ekrana yazdýran bir c++ porgramý yazýnýz
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
	cout << "1000-9999 arasýnda: " << sayac << " adet rakamlarý farkli tamsayi vardýr.";*/

	// 20 ile 40 arasýndaki sayýlarýn tüm bölenlerini bulan ve ekrana yazdýran bir program yazýnýz
	// 20 bölenleri 1,2,4,5,10,20
	//const int degismez = 5; //const deðiþkeni ile birlikte tanýmladýðýmz int float double char string ne olursa olsun deðeri deðiþemeyiz
	//static int stat1;		// statik deðerler artýp azalsa bile  statik olduðu için her zaman baþlangýçta atanan deðer kullanýlýr. 
	//int baslangic, bitis;
	//cout << "Baþlangýç Sayýsýný giriniz:";
	//cin >> baslangic;
	//cout << "Bitiþ Sayýsýný giriniz:";
	//cin >> bitis;

	//for (int i = baslangic; i <= bitis; i++){
	//	cout << i << "\nsayisinin  bölenleri: ";
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