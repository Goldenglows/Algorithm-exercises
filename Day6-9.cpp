#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>

#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int X, Y, Z, Q;

int main() {
	cin >> X;
	cin >> Y;
	cin >> Z;
	cin >> Q;
	if (Q >= X * 2 + Y * 5 + Z * 3) {
		cout << "Yes" << endl;
		cout << Q - X * 2 - Y * 5 - Z * 3;
	}
	else
	{
		cout << "No" << endl;
		cout << X * 2 + Y * 5 + Z * 3 - Q;
	}

	return 0;
}