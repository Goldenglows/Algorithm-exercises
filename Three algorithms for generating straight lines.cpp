#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void ddaline(int a, int b, int n, int m) {

	int num = n - a, arx[1005], ary[1005], j = (m - b) / (n - a);
	arx[0] = a, ary[0] = b;

	int i = 0;
	while (1) {
		arx[i + 1] = ary[i] + 1;
		ary[i + 1] = int(ary[i] + j + 0.5);
		if (ary[i + 1] > n)
			break;
		else
			i++;
	}

	for (int h = 0; h <= i; h++) {
		printf("%d %d \n", arx[h], ary[h]);
	}

}

void middlepoline(int a, int b, int n, int m) {

	int num = n - a, arx[1005], ary[1005], j[1005];
	arx[0] = a, ary[0] = b,j[0] = n - a - 2 * (m - b);

	int i = 0;
	while (1) {
		arx[i + 1] = ary[i] + 1;
		if (j[i] > 0)
			ary[i + 1] = ary[i];
		else
			ary[i + 1] = ary[i] + 1;

		if (j[i] > 0)
			j[i + 1] = j[i] - 2 * (m - b);
		else
			j[i + 1] = j[i] - 2 * (m - b - n + a);

		if (ary[i + 1] >= n)
			break;
		else
			i++;
	}

	for (int h = 0; h <= i; h++) {
		printf("%d %d \n", arx[h], ary[h]);
	}

}

int bresenham(int a, int b, int n, int m) {

	int num = n - a, arx[1005], ary[1005], j[1005];
	arx[0] = a, ary[0] = b, j[0] = a-n;

	int i = 0;
	while (1) {
		arx[i + 1] = ary[i] + 1;
		if (j[i] < 0)
			ary[i + 1] = ary[i];
		else
			ary[i + 1] = ary[i] + 1;

		if (j[i] >= 0)
			j[i + 1] = j[i] - 2 * (n - a) + 2 * (m - b);
		else
			j[i + 1] = j[i] + 2 * (m - b);

		if (ary[i + 1] >= n)
			break;
		else
			i++;
	}

	for (int h = 0; h <= i; h++) {
		printf("%d %d \n", arx[h], ary[h]);
	}

}

int main() {

	initgraph(640, 480);

	int a, b, n, m;
	scanf_s("%d %d %d %d ", &a, &b, &n, &m);

	ddaline(a, b, n, m);
	middlepoline(a, b, n, m);
	bresenham(a, b, n, m);

	_getch();
	closegraph();

	return 0;
}

