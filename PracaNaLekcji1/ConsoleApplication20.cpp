#include <iostream>
#include <string>
using namespace std;

string tekst;
int wybor;
int dlugosc = 0;
char tn;

string podstawieniowy(string tekst, int dlugosc) {
	
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
	cout << tekst << endl;
	return 0;
	
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


int main()
{
	cout << "\n 1. Szyfr podstawieniowy (szyfr cezara) \n 2. Szyfr przestawieniowy \n 3. Szyfr podstawieniowy i przestawieniowy \n 4. Odszyfruj tekst";
	cout << "\n\nWybierz liczbe: ";
	cin >> wybor;

	if (wybor == 1) {
		cout << podstawieniowy(tekst, dlugosc);
		return 0;
	}
	else if (wybor == 2) {
		cout << przestawieniowy(tekst);
		return 0;
	}
	else if (wybor == 3) {
		cout << szyfrdouble(tekst, dlugosc);
		return 0;
	}
}

