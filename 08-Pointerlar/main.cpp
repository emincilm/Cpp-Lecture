#include <iostream>

using namespace std;

void ekranayaz() {

	cout << "*********************************************************" << endl;
	cout << "*                                                       *" << endl;
	cout << "*		This code wrote  by Emin Cil	        *" << endl;
	cout << "*                                                       *" << endl;
	cout << "*********************************************************" << endl;
}
int UcaginYonBilgileriniHesaplayanFonksiyon(int x_) {
	// hesaplamalar 2000 satýr kod   
	x_ = 34;
	return x_;
}
int UcaginYeniBilgileriniHesaplayanFonksiyon2(int* p) {
	*p = 24;
	return 0;
}
int fonks1(int &x) {
	x = x * 2;
	cout << "fonksiyon içindeki x" << x << endl; 
	return x;
}
int main() {
	setlocale(LC_ALL, "Turkish");
	ekranayaz();

	//int x = 7;

	//int* ptr;
	//ptr = &x;	// & : address of x  anýn iþaret ettiði adres

	//cout << x << endl;
	//cout << ptr << endl;
	//cout << *ptr << endl;
	//cout << &ptr << endl;
	//
	//*ptr = 9;
	//
	//cout << x << endl;
	//cout << ptr << endl;
	//cout << *ptr << endl;
	//cout << &ptr << endl;

	//x = UcaginYonBilgileriniHesaplayanFonksiyon(x);

	//cout << x << endl;
	//cout << ptr << endl;
	//cout << *ptr << endl;
	//cout << &ptr << endl;

	//UcaginYeniBilgileriniHesaplayanFonksiyon2(ptr);

	//cout << x << endl;
	//cout << ptr << endl;
	//cout << *ptr << endl;
	//cout << &ptr << endl;

	//int arr[] = { 34,47,85 };

	//int* p;
	//
	//p = arr;
	//cout << arr[0]<< endl;
	//cout << arr[1]<< endl;
	//cout << arr[2]<< endl;

	//cout << p << endl;
	//cout << arr << endl;
	//cout << *p << endl;
	//cout << *(p + 1) << endl;
	//cout << *(p + 2) << endl;
	//cout << p[0] << endl;
	//cout << p[1] << endl;
	//cout << p[2] << endl;



	//int x = 5;
	//fonks1(x);
	//cout << "main içindeki x" << x << endl;
	//x = fonks1(x);
	//cout << " fonksiyon içindeki x " << x << endl;
	/*
	int x = 7;
	int* p = &x;
	int y = *p + 8;
	int* z = &y;
	int w = *z + 5;
	cout << w;
	//////////////////////////////////
	int arr[5] = {10, 20, 30, 40, 50};
	int* ptr1 = arr;
	int* ptr2 = arr + 3;

	cout << "ptr2'nin tuttuðu deðer: " << *ptr2 << endl;

	ptr1++;
	ptr2--;

	cout << "ptr1'in tuttuðu deðer: " << *ptr1 << endl;
	cout << "ptr2'nin tuttuðu deðer: " << *ptr2 << endl;
	*/
	/*int* p = new int;
	*p = 7;
	cout << p << endl;
	cout << *p << endl;
	cout << &p << endl;
	delete p;
	cout << p << endl;*/

	/*int x; 
	cout << "Arrayin kaç tane tamsayý içereceðini giriniz: ";
	cin >> x;
	int* p = new int[x];
	for (int i = 0; i < x; i++){
		cin >> p[i];
	}
	for (int i = 0; i <x; i++){
		cout << p[i] << " " ;
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < x; i++){
		sum = sum + p[i];
	}
	cout << "Toplam: " << sum << endl;*/

	int a[5], * p, z;
	for (int i = 0; i < 5; i++){
		a[i] = i * i;
	}
	p = a;
	z = *(p + 1) + *(a + 2);
	cout << z;

	cout << endl;
	return 0;
}