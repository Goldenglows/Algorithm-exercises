#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int n, temp;
int a[10005], b[10005];

int main() {

	cin >> n;
	int a0 = 1, b0 = 1;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp % 2 == 1) {
			a[a0] = temp;
			a0++;
		}
		else if (temp % 2 == 0) {
			b[b0] = temp;
			b0++;
		}
	}

	for (int i = 1; i <= a0; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 1; i <= b0; i++) {
		cout << b[i] << " ";
	}

	return 0;
}