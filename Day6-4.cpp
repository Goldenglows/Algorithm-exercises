#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int n, a, b, c, flag = 0;

int main() {

	cin >> n;
	for (a = 1; a <= n; a++) {
		for (b = a; b <= n; b++) {
			c = sqrt(a * a + b * b);

			if (c > n || c * c != a * a + b * b)
				continue;
			flag++;
		}
	}
	cout << flag;

	return 0;
}