#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int  flag = 1;
int selectlargest(int n) {
	//Select the largest number with power of 2
	while (n >= flag * 2) {
		flag *= 2;
	}
	printf("%d ", flag);
	return n - flag;
}

int main() {
	int n;
	scanf("%d", &n);
	//Determine if it is an even number.
	if (n % 2 != 0)
		printf("-1");
	while (selectlargest(n) == 0)
		n = selectlargest(n);
	return 0;
}