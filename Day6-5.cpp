#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int n, pri[100], x, num = 0;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> pri[i];
	cin >> x;

	for (int j = 0; j < n; j++) {
		if (x >= pri[j]) {
			x -= pri[j];
			num++;
		}
	}
	cout << num;
	return 0;
}