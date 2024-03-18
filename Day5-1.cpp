#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>

#include<iostream>
using namespace std;

int coment = 1, fleet = 1;
char temp;

int main() {


	while ((temp = cin.get()) != '\n')
		coment *= temp - 'A' + 1;


	while ((temp = cin.get()) != '\n')
		fleet *= temp - 'A' + 1;


	if (coment % 47 == fleet % 47)
		cout << "GO";
	else
		cout << "STAY";
	return 0;
}