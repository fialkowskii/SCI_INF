#pragma once
#include <iostream>
#include <string>

using namespace std;

class RSA
{
public:
	int NWD(int a, int b);
	int odwr_mod(int a, int n);
	void losowanie();
};