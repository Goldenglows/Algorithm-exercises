#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int a, b, x, y;
	scanf("%d %d %d %d",&a,&b,&x,&y);

	int maxdit= abs(a - b);
	int i = abs(a - x);
	int n = abs(a - y);
	int m = abs(b - x);
	int j = abs(b - y);
	int tmp;

	if (i > n)
		tmp = n;
	else
		tmp = i;

	if (j > m)
		tmp += m;
	else
		tmp += j;

	if (tmp > maxdit)
		printf("%d", maxdit);
	else
		printf("%d", tmp);

}