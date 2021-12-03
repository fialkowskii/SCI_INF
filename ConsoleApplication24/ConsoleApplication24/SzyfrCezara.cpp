#include "SzyfrCezara.h"
#include <iostream>
#include <string>

using namespace std;

string SzyfrCezara::podstawieniowy(string tekst, int dlugosc) {

	for (int i = 0; i < tekst.length(); i++) {

		if ((unsigned char)tekst[i] >= 97 && (unsigned char)tekst[1] <= 122) {
			tekst[i] = (unsigned char)tekst[i] + dlugosc;
			if ((unsigned char)tekst[i] > 122) {
				tekst[i] = (unsigned char)tekst[i] % 123 + 97;
			}
			
		}
	}
	return tekst;
		
}
