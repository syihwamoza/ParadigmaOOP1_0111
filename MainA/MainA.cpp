#include <iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varIbu = new ibu("dini");
	ibu* varibu2 = new ibu("novi");
	anak* varAnak1 = new ("tono");
	anak* varAnak2 = new ("rini");
	anak* varAnak3 = new ("Dewi");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varibu2->tambahAnak(varAnak3);
	varibu2->tambahAnak(varAnak1);

	varIbu->cetakAnak();
	varibu2->cetakAnak();

	delete varIbu;
	delete varIbu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

	return 0;
}

