#include <iostream>
#include <string>
using namespace std;

string tekst;
int wybor;
char wybor2;
int dlugosc = 0;


string podstawieniowy(string tekst, int dlugosc, char wybor2) {

	cin.ignore();
	cout << "Podaj tekst: ";
	getline(cin, tekst);

	cout << "Ile znakow ma sie przesuwac?: ";
	cin >> dlugosc;

	for (int i = 0; i < tekst.length(); i++) {
		if (tekst[i] < 123 && tekst[i] > 96) {
			tekst[i] += dlugosc;
			if (tekst[i] > 122) {
				tekst[i] = tekst[i] % 123 + 97;
			}
		}

	}
	cout << tekst;
	cout << "\nChcesz odszyfrować tekst? (y/n) : ";
	cin >> wybor2;
	if (wybor2 = 'y') {

		for (int i = 0; i < tekst.length(); i++) {
			if (tekst[i] < 123 && tekst[i] > 96) {
				tekst[i] -= dlugosc;
				if (tekst[i] > 97) {
					tekst[i] = tekst[i] % 97 + 123;
				}
			}

		}
		return tekst;

	}
	
	
	

}

string przestawieniowy(string tekst) {

	cin.ignore();
	cout << "Podaj tekst: ";
	getline(cin, tekst);

	for (int i = 0; i < tekst.length() - 1; i += 2) {
		swap(tekst[i], tekst[i + 1]);
	}
	return tekst;
}

string dwaszyfry(string tekst, int dlugosc) {

	cin.ignore();
	cout << "Podaj tekst: ";
	getline(cin, tekst);

	cout << "Ile znakow ma sie przesuwac?: ";
	cin >> dlugosc;

	for (int i = 0; i < tekst.length(); i++) {
		if (tekst[i] < 123 && tekst[i] > 96) {
			tekst[i] += dlugosc;
			if (tekst[i] > 122) {
				tekst[i] = tekst[i] % 123 + 97;
			}
		}

	}
	
	for (int i = 0; i < tekst.length() - 1; i += 2) {
		swap(tekst[i], tekst[i + 1]);
	}
	return tekst;
}



int main()
{
	string tekst;
	cout << "\n 0. Exit\n 1. Szyfr podstawieniowy (szyfr cezara) \n 2. Szyfr przestawieniowy \n 3. Szyfr podstawieniowy i przestawieniowy";
	cout << "\n\nWybierz liczbe: ";
	cin >> wybor;
	


		if (wybor == 1) {
			cout << podstawieniowy(tekst, dlugosc, wybor2);
			
		}
		else if (wybor == 2) {
			cout << przestawieniowy(tekst);
			
		}
		else if (wybor == 3) {
			cout << dwaszyfry(tekst, dlugosc);
			
		}
		else if (wybor == 0) return 0;
		
	
		return main();
	
}
