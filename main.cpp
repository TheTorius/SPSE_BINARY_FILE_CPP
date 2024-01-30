#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

struct Kniha {
	int id;
	char znak[50];
};

int main() {
	ofstream w;
	Kniha k;

	k.id = 1;
	strcpy_s(k.znak, "Binarni soubor");

	w.open("data.dat", ios::out | ios::binary | ios::app);

	//w.write((char*) & k, sizeof(Kniha));
	//w.write

	w.close();




	ifstream r("data.dat",ios::binary);
	Kniha k2;

	while (r.read((char*)&k2, sizeof(Kniha))) {
		cout << k2.id;
		cout << k2.znak;
	}
	
	r.close();

}