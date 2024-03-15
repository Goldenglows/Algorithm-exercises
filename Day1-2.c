#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int num = 0;
	char arr[8];
	scanf("%s", arr);

	for (int i = 0; i < 8; i++) {
		if (arr[i] == '1') {
			num++;
		}
	}
	printf("%d", num);
	return 0;
}
