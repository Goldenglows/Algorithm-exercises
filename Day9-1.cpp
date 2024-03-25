#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int n;
long long dp[61];


int main() {

	cin >> n;
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= n; i++)
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
	cout << dp[n];
	return 0;
}

