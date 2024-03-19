#include<iostream>
#include<math.h>
using namespace std;

int n, m, con;

int main() {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		m += i;
		con += m;
	}
	cout << con;

	return 0;
}