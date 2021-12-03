#include "DwaSzyfry.h"
#include <iostream>
#include <string>

using namespace std;

string DwaSzyfry::dwaszyfry(string tekst, int dlugosc) {

	for (int i = 0; i < tekst.length(); i++) {

		if ((unsigned char)tekst[i] < 123 && (unsigned char)tekst[1] > 96) {
			tekst[i] = (unsigned char)tekst[i] + dlugosc;
			if ((unsigned char)tekst[i] > 122) {
				tekst[i] = (unsigned char)tekst[i] % 123 + 97;
			}
		}
	}
	
	for (int i = 0; i < tekst.length() - 1; i += 2) {
		swap(tekst[i], tekst[i + 1]);
	}
	return tekst;
}
