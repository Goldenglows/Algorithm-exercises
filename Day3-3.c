#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n,flag;

int main() {
	scanf("%d", &n);
	//Determine if it is an even number.
	if (n % 2 != 0) {
		printf("-1");
		return 0;
	}
	while (n) {
		flag=pow(2,int(log(n)/log(2)));
		printf("%d ", flag);
		n -= flag;
	}
	return 0;
}