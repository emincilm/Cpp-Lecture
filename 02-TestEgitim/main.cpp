#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string isim = "Mehmet Emin Cil ";
	int	 yas = 25;
	int dogum = 1998;
	string �ni = "Karabuk Universitesi";
	string bolum = "Elektrik Elektronik Muhendisligi ";
	float ortalama = 2.92;
	char not_ortalamasi = 'A';
	bool sinav_enter = false; // 1 de yazsak olur false yazmak i�in de 0 yazarsakta olur 
	// float ve double tam say�lar i�in kullan�l�yor doubele �ok hane tutuyor ama float daha az tutar 
	// char de�eri asci tablosundan geliyor tam sayi de�eri yada tek t�rnek aras�nda de�eri yazabiliriz 
	// stringlere yazarken �ift t�rnak char i�in tek t�rnak gerekiyor 


	float not1 = 98;
	int not2 = 55;
	float ortalama_not; 
	ortalama_not = (not1 + not2) / 2;

	cout << "Merhaba " << endl << endl << " Ogrenci Adi - Soyadi\t" << "Ali Kaya" << endl;
	cout << "Merhaba " << isim << endl;
	cout << isim << �ni << "nde " << bolum << "okuyor " << ortalama << " ortalamasi var " << endl;
	cout << isim << yas << " yasinda " << dogum << " dogumlu"<< endl; 
	cout << "Not ortalamasi " << not_ortalamasi << endl;

	if (sinav_enter){
		cout << isim << " sinava girdi" << endl;
	}else
		cout << isim << " sinava girmedi" << endl;

	cout << isim << ortalama_not << endl;

	float en, boy, alan;
	cout << "Merhaba " << " En Giriniz: ";
	cin >> en;
	cout << endl;
	cout << "Boy giriniz: ";
	cin >> boy;
	cout << endl;
	alan = en * boy;
	cout << "Alan: " << alan;


	cout << "****************************" << endl;
	cout << "*						    *" << endl;
	cout << "* Emin Beyin Ciftligine HG *" << endl;
	cout << "*						    *" << endl;
	cout << "****************************" << endl << endl;

	int y =
		y = pow(2, 5);
	cout << y << endl;
		y = round(2.7);
		cout << y << endl;
		y = ceil(2.1);
		cout << y << endl;
		y = floor(2.1);
	cout << y << endl;
	return 0;
}