#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>

#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int M, N, flag;
int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };

int main() {
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		while (i != 0) {
			flag = i % 10;
			arr[flag]++;
			i /= 10;
		}
	}

	for (int i = 0; i <= 9; i++)
		cout << arr[i] << " ";

	return 0;
}