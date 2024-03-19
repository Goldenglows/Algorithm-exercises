#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int starty, endy, sum;

int main() {
	cin >> starty >> endy;
	for (int i = starty + 1; i < endy; i++) {
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
			sum += i;
	}
	cout << sum;
	return 0;
}