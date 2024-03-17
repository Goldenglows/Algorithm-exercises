#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n,premethod=-1,method,preprice=0,price,time1=0,time2,consume;

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &method, &price, &time2);
		if (premethod == 0 && time2 - time1 <= 45 && method == 1&&preprice>=price) {
			consume += 0;
		}
		else {
			consume += price;
		}
		time1 = time2;
		premethod = method;
		preprice = price;
	}

	printf("%d", consume);
	return 0;
}