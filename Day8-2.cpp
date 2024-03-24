#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int n, bL, mL, temp;

int main() {
    cin >> n >> bL >> mL;

    for (int i = 0; i < n; i++) {
        cin >> temp;

        if () {
            bL += temp;
        }
        else if () {
            bL -= temp;
        }
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n, begin, maxlevel;
int ans;
int a[51];
int f[51][1001];
int main()
{
    scanf("%d%d%d", &n, &begin, &maxlevel);
    f[0][begin] = 1;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
        for (int j = maxlevel; j >= 0; j--)
        {
            if (j - a[i] >= 0)
                f[i][j] = f[i][j] || f[i - 1][j - a[i]];
            if (j + a[i] <= maxlevel)
                f[i][j] = f[i][j] || f[i - 1][j + a[i]];
        }
    for (int i = maxlevel; i >= 1; i--)
        if (f[n][i] == 1)
        {
            printf("%d", i);
            return 0;
        }
    printf("-1");
    return 0;
}

