#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n, awa, award[33], onaw[10];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < 7; i++) {
		scanf("%d", &awa);
		award[awa] = 1;
	}
	for (int i = 1; i <= 7; i++) {
		onaw[i] = 0;
	}

	//小明的号码
	for (int i = 1; i <= n; i++) {
		int flag = 0;
		for (int j = 1; j <=7; j++) {
			scanf("%d", &awa);
			if (award[awa] == 1)
				flag++;
		}
		onaw[flag] ++;
	}

	for (int i = 7; i > 0; i--)
		printf("%d ", onaw[i]);
	return 0;
}