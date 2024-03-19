#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int n;

int main() {

	std::cin >> n;
	for (int i = 0; i < n; i++, cout << "\n") {
		for (int offset = i % 26, j = 0; j < n; j++, offset = (offset + 1) % 26) {

			std::cout << (char)(offset + 'A');
		}
	}
	return 0;
}