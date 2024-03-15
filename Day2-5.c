#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int a, b;
	int count = 0;
	scanf("%d %d",&a,&b);
	for (int i = a; i <= b; i++) {
		int flag = 0, sumji = 0, sumou = 0;
		int num = i;

		while (num > 0) {
			if (flag == 0) {//操作奇数部分
				sumji += num % 10;
				flag = 1;//将钥匙赋值为1，并且操作偶数部分
			}
			else {
				sumou += num % 10;
				flag = 0;
			}
			num /= 10;
		}
		if (sumji == sumou)
		count++;
	}
	printf("%d", count);

	return 0;
}