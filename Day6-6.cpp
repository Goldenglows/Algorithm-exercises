#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int h,m,s;
char M;

int main() {
	cin >> h >> m >> s >> M;
	if (M == 'A')
		cout << h * 60 * 60 + m * 60 + s;
	else if (M=='P')
		cout<< h * 60 * 60 + m * 60 + s+12*60*60;

	return 0;
}