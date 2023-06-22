#include <iostream>

using namespace std;
void ekranayaz() {

	cout << "*********************************************************" << endl;
	cout << "*                                                       *" << endl;
	cout << "*		This code wrote  by Emin Cil	        *" << endl;
	cout << "*                                                       *" << endl;
	cout << "*********************************************************" << endl;
}

// Base class
class Hayvan {

public:
	virtual void SesCikar() {
		cout << "Hayvan SesCikar fonksiyonu çaðýrýldý" << endl;
	}
	
	void yazdir() {
		cout << "Hayvan sýnýfýnýn yazdýr metdou çaðýrýldý" << endl;
	}

};

// Child Class: Kedi

class Kedi : public Hayvan {

public:
	void SesCikar() {
		cout << "miyav miyav" << endl;
	}
	void yazdir() {
		cout << "Kedi sýnýfý yazýyor" << endl;
	}
};
// Child Class: Kopek

class Kopek : public Hayvan {

public:
	void SesCikar() {
		cout << "Hav hav hav" << endl;
	}
	void yazdir() {
		cout << "Kopek sýnýfý yazýyor" << endl;
	}
};

void UcKezSesCikar(Hayvan* h) {
	for (int i = 0; i < 3; i++)
	{
		h->SesCikar();
	}

}


int main() {
	setlocale(LC_ALL, "Turkish");
	ekranayaz();
	Hayvan* pHayvan;
	Kedi tekir;

	pHayvan = &tekir;

	pHayvan->SesCikar();
	pHayvan->yazdir();
	UcKezSesCikar(pHayvan);
	Kopek karabas;
	pHayvan = &karabas;
	pHayvan->SesCikar();
	pHayvan->yazdir(); 
	UcKezSesCikar(pHayvan);
	Kedi ked1;
	UcKezSesCikar(&ked1);
	Kopek kopke1;
	UcKezSesCikar(&kopke1);
	

	cout << endl;
	cout << endl;
	return 0;
}