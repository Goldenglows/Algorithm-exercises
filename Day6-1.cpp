#include<iostream>
#include<math.h>
using namespace std;

int hour1, houe2, min1, min2;

int main() {
	cin >> hour1;
	cin >> min1;
	cin >> houe2;
	cin >> min2;
	cout << houe2 * 60 + min2 - hour1 * 60 - min1;

	return 0;
}