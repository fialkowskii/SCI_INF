#include "SzyfrPrzestawieniowy.h"
#include <iostream>
#include <string>

using namespace std;

string SzyfrPrzestawieniowy::przestawieniowy(string tekst) {

	for (int i = 0; i < tekst.length() - 1; i += 2) {
		swap(tekst[i], tekst[i + 1]);
	}
	return tekst;
}
