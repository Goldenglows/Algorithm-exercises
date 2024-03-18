#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>

#include<iostream>
#include<math.h>
using namespace std;

int A[13] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int B[13] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
int years, months, days;

int main() {
	cin >> years >> months;

	if (years % 400 == 0 || (years % 4 == 0 && years % 100 != 0)) {
		cout << B[months - 1];
	}
	else {
		cout << A[months - 1];
	}

	return 0;
}