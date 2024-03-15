#include<stdio.h>

int main() {
	int l;
	int m;
	int u[2], v[10000];
	scanf("%d%d", &l, &m);

	for (int i = 0; i <= l; i++) {
		v[i] = 0;
		//将所有的树都标志上0，表示没有被铲除
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 0; j < 2; j++)
			scanf("%d", &u[j]);
		for (int j = 0; j <=l; j++)
			if (j >= u[0] && j <= u[1])
				v[j] = 1;
		//将输入的两个数之间的所有树全部删除，置为1
	}
	int flag = 0;
	for (int num; num <= l; num++) {
		if (v[num] == 1)
			flag++;
	}

	printf("%d", l - flag);
	return 0;
}