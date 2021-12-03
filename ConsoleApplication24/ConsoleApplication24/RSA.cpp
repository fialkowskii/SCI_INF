#include "RSA.h"
#include <iostream>

using namespace std;

int RSA::NWD(int a, int b)
{
	int c;

	while (b != 0)
	{
		c = b;
		b = a % b;
		a = c;
	};
	return a;
}

int RSA::odwr_mod(int a, int n)
{
	int a0, n0, p0, p1, q, r, t;

	p0 = 0; p1 = 1; a0 = a; n0 = n;
	q = n0 / a0;
	r = n0 % a0;
	while (r > 0)
	{
		t = p0 - q * p1;
		if (t >= 0)
			t = t % n;
		else
			t = n - ((-t) % n);
		p0 = p1; p1 = t;
		n0 = a0; a0 = r;
		q = n0 / a0;
		r = n0 % a0;
	}
	return p1;
}
void RSA::losowanie()
{
	int p, q, wybor, euler, n, e, d;

	cout << "Chcesz wylosowac(0) czy podac(1) dwie liczby pierwsze p i q?: ";
	cin >> wybor;
	if (wybor == 0) {
		const int tp[10] = { 11, 13, 17, 19, 23, 29, 31, 37, 41, 43 };

		do
		{
			p = tp[rand() % 10];
			q = tp[rand() % 10];
		} while (p == q);

		euler = (p - 1) * (q - 1);
		n = p * q;
	}

	if (wybor == 1) {
		cout << "p :";
		cin >> p;
		cout << "q :";
		cin >> q;

		euler = (p - 1) * (q - 1);
		n = p * q;
	}

	for (e = 3; NWD(e, euler) != 1; e += 2);
	d = odwr_mod(e, euler);

	cout << "klucz publiczny: \n"
		<< "e = " << e
		<< "\nn = " << n
		<< "\nklucz prywatny: \n"
		<< "d = " << d << endl;
}



