/*
This library is used to implement the method of generating dda straight lines algorithm
*/

#include <stdio.h>


int dda(int a, int b, int n, int m) {

	int num = n - a, arx[100005],ary[100005],j=(m-b)/(n-a);
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
		printf("%d %d ", arx[h], ary[h]);
	}

	return 0;
}