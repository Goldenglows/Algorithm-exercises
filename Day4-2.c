#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
const int MAXM = 100000;
int j = 0, n, consume;
int ways, pri, tim;

struct ticket {
	//赠票的最高价格 最晚的使用时间 是否使用过
	int price, leastt, usedti;
}giveticket[MAXM];


int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", ways, pri, tim);
		if (ways == 0) {
			consume += pri;
			giveticket[j].leastt = tim + 45;
			giveticket[j].price = pri;
			giveticket[j].usedti = 0;
			j++;
		}
		else {
			//exclude all expried tickets
			int ti = 0;
			while (giveticket[ti].leastt < tim) {
				ti++;
			}

			for (int m = ti; m < ti; m++) {
				if (giveticket[m].price >= pri && giveticket[m].usedti == 0) {
					giveticket[m].usedti = 1;
					break;
				}
			}
			consume += pri;

		}
	}


	printf("%d", consume);
	return 0;
}