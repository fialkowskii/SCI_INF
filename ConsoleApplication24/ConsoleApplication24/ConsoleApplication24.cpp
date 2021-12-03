#include <iostream>
#include <string>
#include "SzyfrCezara.h"
#include "SzyfrPrzestawieniowy.h"
#include "DwaSzyfry.h"
#include "Odszyfrowanie.h"
#include "RSA.h"

using namespace std;

string tekst;
int wybierz, wybor;
int dlugosc = 0;

int main()
{
	cout << "=========================================\n"
		<< " 0. Zakoncz program"
		<< " 1. Szyfr Cezara\n"
		<< " 2. Szyfr przestawieniowy\n"
		<< " 3. Dwa Szyfry\n"
		<< " 4. Odszyfrowanie szyfru Cezara\n"
		<< " 5. Klucze RSA\n"
		<< "=========================================\n\n"
		<< "Wybor: ";
	cin >> wybierz;
	cout << endl;

	if (wybierz == 1) {
	
		cin.ignore();
		cout << "Podaj tekst: ";
		getline(cin, tekst);

		cout << "Ile znakow ma sie przesuwac?: ";
		cin >> dlugosc;

		SzyfrCezara szyfr;
		cout << szyfr.podstawieniowy(tekst, dlugosc) << endl;
	}

	if (wybierz == 2) {
		cin.ignore();
		cout << "Podaj tekst: ";
		getline(cin, tekst);

		SzyfrPrzestawieniowy szyfr;
		cout << szyfr.przestawieniowy(tekst) << endl;
	}

	if (wybierz == 3) {
	
		cin.ignore();
		cout << "Podaj tekst: ";
		getline(cin, tekst);

		cout << "Ile znakow ma sie przesuwac?: ";
		cin >> dlugosc;

		DwaSzyfry szyfr;
		cout << szyfr.dwaszyfry(tekst, dlugosc) << endl;
	}

	if (wybierz == 4) {
	
		cin.ignore();
		cout << "Podaj zaszyfrowany tekst szyfrem Cezara: ";
		getline(cin, tekst);

		Odszyfrowanie szyfr;
		szyfr.odszyfrowanie(tekst);
	}

	if (wybierz == 5) {
		RSA los;
		los.losowanie();
	}

	if (wybierz == 0) {
		return 0;
	}
	return main();
}

