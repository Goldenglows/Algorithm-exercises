#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>

#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int n, m, count1 = 0, arr[1000];

int main() {

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}


	for (int j = m; j <= n; j++) {
		int count2 = 0;
		for (int i = j; i >= j - m + 1; i--) {
			count2 += arr[i];
			if (count2 < count1) {
				count1 = count2;
			}
		}

	}
	cout << count1;

	return 0;
}