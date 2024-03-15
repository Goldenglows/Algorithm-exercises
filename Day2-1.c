#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	long long a = 0;
	long long b = 0;
	long long c = 0;

	scanf("%lld %lld %lld",&a,&b,&c);
	if (a*a > b*c)
		printf("Alice");
	else
		printf("Bob");
	return 0;
}