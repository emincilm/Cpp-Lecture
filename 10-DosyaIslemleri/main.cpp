#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// ifstream: is input file stream which allows you to read the contents of a file
// ofstream: is output file stream which allows you to write contents to a file
// fstream: allows both reading from and writing to files by default 
// However, you can have an fstream behave like an ifstream or ofstream by passing in the
// ios::open_mode flag,

//ios::app = All write operations must occur at the end of the file // dosyanýn sonuna yazar 
//ios::binary = Open in binay mode
//ios::in = Open for reading
//ios::out = Open for writing
//ios:trunc = Empty the contents of the file after opening
//ios::ate = Go to the end of the file after opening

void ekranayaz() {

	cout << "*********************************************************" << endl;
	cout << "*                                                       *" << endl;
	cout << "*		This code wrote  by Emin Cil	        *" << endl;
	cout << "*                                                       *" << endl;
	cout << "*********************************************************" << endl;
}
int main() {
	setlocale(LC_ALL, "Turkish");
	ekranayaz();
	fstream file;
	file.open("C:\Users\emin\source\repos\Cpp\10-DosyaIslemleri\readme.txt",ios::out | ios::binary | ios::app| ios::in);
	// sadece ios::out modunca açarsak herþeyi siler ve sondakini yazar 
	if (!file.is_open()) {
		cout << "Dosya Açýlamadý" << endl;
	}
	else {
		/*file << endl;
		string str = "Bu dosya Emin ÇÝL tarafýndan yazýlmýþtýr. ";
		file << str;*/
		string str;
		while (getline(file, str)) {
			cout << str << endl;
		}
		file.close();
	}


	cout << endl;
	return 0;
}