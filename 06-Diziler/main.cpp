#include <iostream>
using namespace std;

void ekranayaz() {

	cout << "*********************************************************" << endl;
	cout << "*                                                       *" << endl;
	cout << "*		This code wrote  by Emin Cil	        *" << endl;
	cout << "*                                                       *" << endl;
	cout << "*********************************************************" << endl;
}

//void dizi_degistir(int arr[], int size) {
//	for (int i = 0; i < size; i++){
//		arr[i] = arr[i] * arr[i];
//	}
//
//}

int main() {
	setlocale(LC_ALL, "Turkish");
	/*
	//int arr[5];
	float arr[5];
	arr[0] = 33;
	arr[1] = 20;
	arr[2] = 42;
	arr[3] = 53;
	arr[4] = 24;

	int	arra[] = { 20,4,5,6,2,1,4,5, };
	cout << "Arrayin sayýlarýný giriniz";
	cin >> arr[0];


	for (int i = 0; i < 5; i++){
		cout << arr[i]<<endl;
	}
	cout << endl;
	int dizi[2][4] = { {22,23,24,25},{26,27,28,29} };

	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 4; j++) {
			cout << dizi[i][j] <<" ";
		}
		cout << endl;
	}

	cout << dizi[1][2];


	*/
	/*
	int dizi[] = { 11,34,53,41,25,75,63 };
	dizi_degistir(dizi, 7);
	for (int i = 0; i < 7; i++)
	{
		cout << dizi[i] << ",";
	}
	*/

	// Kullanýcýdan 4 tane tamsayý alýn ve bu tamsayýlarý kullancýnýn girdiði sýranýn tam tersi olarak ekrana yazýn
	// örnek girilen sayýlar 1 7 9 5
	// yazmasý gereken 5 9 7 1 
	int my_arr[4];
	for (int i = 0; i < 4; i++)
	{
		cout << i << "inci sayýyý giriniz:";
		cin >> my_arr[i];
	}
	
	cout << " Çýkan Array Listesi ";
	for (int i = 3; i >=0 ; i--)
	{
		cout << my_arr[i] << " ";
	}
	cout << endl;
	return 0;
}