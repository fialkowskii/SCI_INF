#include "Odszyfrowanie.h"
#include <iostream>
#include <string>

using namespace std;

void Odszyfrowanie::odszyfrowanie(string tekst) {
	unsigned char znak = ' ';

	for (int przesuniecie = 1; przesuniecie < 25; przesuniecie++) {
	
		for (int i = 0; i < tekst.length(); i++) {

			znak = tekst[i];
			if (znak >= 97 && znak <= 122) {

				znak = znak - przesuniecie;
				if (znak < 97) {
					znak = znak + 26;
				}
				tekst[i] = znak;
			}

		}
		cout << tekst << endl;
	}
	
}
