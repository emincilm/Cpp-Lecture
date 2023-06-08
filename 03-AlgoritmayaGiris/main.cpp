#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");		/// türkçe karakterleri yazmak için  ama deðiþken isimleri türkçe karakter olamaz sadece cout için bu 
	cout << "*********************************************************" << endl;
	cout << "*                                                       *" << endl;
	cout << "*		This code wrote  by Emin Cil	        *" << endl;
	cout << "*                                                       *" << endl;
	cout << "*********************************************************" << endl;
	/*
	//sifre belirleme
	string sifre;
	cout << "Bir Sifre Belirleyiniz: ";
	cin >> sifre;
	cout << endl;
	cout << "Sifreniz belirlendi0" << endl;

	//sifre sorma
	string kullaniciSifre;
	cout << " Lutfen sifreyi giriniz:";
	cin >> kullaniciSifre;
	cout << endl << endl;;

	if (sifre == kullaniciSifre) {
		cout << "Sifre dogru ";
	}
	else if (sifre != kullaniciSifre){
		cout << "Sifre Yanlis";
	}
	*/
	/*
	// ssayýlarýn alýnmasý
	int sayi1, sayi2;
	cout << "Lutfen 1. sayiyi giriniz:";
	cin >> sayi1;
	cout << endl;
	cout << "Lutfen 2. sayiyi giriniz:";
	cin >> sayi2;
	cout << endl;
	// negatif pozitif 
	if (sayi1 > 0 && sayi2 > 0) {
		cout << "Her iki sayida pozitiftir."<< endl;
	}
	else if (sayi1 < 0 && sayi2 < 0 ){
		cout << "Her iki sayida negatiftir." << endl;
	}
	else if (sayi1 < 0 || sayi2) {
		cout << "Sayilardan bir tanesi negatiftir." << endl;
	}



	// 4 islem secme
	int secilenislem;
	cout << "Lutfen yapacaginiz islemi seciniz\n Islemler \n 1 + \n 2 - \n 3 * \n 4 /\n";
	cin >> secilenislem;
	cout << endl << endl;

	if (secilenislem == 1) {
		cout << "Sectiginiz Islem Toplama " << endl;
		cout << "Sonuc: " << sayi1 + sayi2;
	}
	else if (secilenislem == 2) {
		cout << "Sectiginiz Islem Cikarma " << endl;
		cout << "Sonuc: " << sayi1 - sayi2;
	}
	else if (secilenislem == 3) {
		cout << "Sectiginiz Islem Carpma " << endl;
		cout << "Sonuc:" << sayi1 * sayi2;
	}
	else if (secilenislem == 4) {
		cout << "Sectiginiz Islem Bolme " << endl;
		cout << "Sonuc: " << sayi1 / sayi2;
	}
	else
		cout << " Lutfen 1-4 arasýnda sayi giriniz"; 

	 */

	// Kullanýcýdan 3 tane tamsayý alýnýz
	// Bu 3 tamsayinin en büyüðünü bulup ekrana yazdýrýnýz
	// Bunlarý yaparken en az sayida kod yazarak yapmaya çalýþýn

	int s1, s2, s3;
	cout << "3 tane sayi giriniz:";
	cin >> s1 >> s2 >> s3;
	cout << endl;

	if (s1 >= s2 && s1 >= s3) {
		cout << "En buyuk sayi " << s1 << endl;
	}
	else if (s2 >= s1 && s2 >= s3) {
		cout << "En buyuk sayi " << s2 << endl;
	}
	else
		cout << "En buyuk sayi " << s3 << endl;
	return 0;
}