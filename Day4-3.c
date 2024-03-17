#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int n = 0;
int main() {
	scanf("%d",&n);
	int temp = 0;
	for (n; n != 0; n /= 10) {
		temp = temp * 10 + n % 10;
	}
	printf("%d", temp);
	return 0;
	}