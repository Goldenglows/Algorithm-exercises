#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main() {
	int t1,t2;
	int tt=0;
	int num=0;
	for (int i = 0; i < 7; i++) {
		scanf("%d %d", &t1, &t2);
		if (t1 + t2 > 8 && tt < t1 + t2) {
			tt = t1 + t2;
			num = i + 1;
		}
	}
	printf("%d", num);
	return 0;
}