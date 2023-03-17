#include<iostream>
#include<cstdio>
#include<algorithm>
int i, n, m, j, sum, b;
int a[110];
int main()
{
    double f = 0, anw = 0, max = 0;
    scanf(" %d %d ", &n, &m);
    b = m - 2;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++) std::cin >> a[j];
        std::sort(a + 1, a + 1 + m);
        for (sum = 2; sum < m; sum++) anw += a[sum];
        f = anw / b;
        if (f > max) max = f;
        f = 0; anw = 0;
    }
    printf("%.2f", max);
}