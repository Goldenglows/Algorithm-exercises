#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int a ,b;
	scanf("%d %d", &a, &b);
	//翻转后
	int ge = a / 100;
	int shi = a / 10 - ge * 10;
	int bai = a % 100 - shi*10;
	a = ge + shi * 10 + bai * 100;

	ge = b / 100;
	shi = b / 10 - ge * 10;
	bai = b % 100 - shi* 10;
	b = ge + shi * 10 + bai * 100;

	if (a > b)
		printf("%d", a);
	else
		printf("%d", b);
	return 0;
}