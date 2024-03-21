#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>

#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int n, m, count1 = 0, count2 = 0, arr[1000], flag;

int main() {

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int j = 0; j < m; j++) {
		count1 += arr[j];
	}

	for (int j = m; j < n; j++) {
		count2 = count1;
		count1 = count1 - arr[j - m] + arr[j];
		if (count2 < count1) {
			flag = count2;
		}
		else {
			flag = count1;
		}
	}
	cout << flag;

	return 0;
}