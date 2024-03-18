#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>

#include<iostream>
#include<math.h>
using namespace std;
int A, C;


int main() {

	cin >> A;
	for (int i = 1; i <= sqrt((double)A); i++) {
		if (A % i == 0)
			C++;
	}
	cout << C;
	return 0;
}