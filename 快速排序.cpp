#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

ll ans[100001];

void qsort(ll a[], int l, int r)
{
	int i = l,j = r;
	ll tmp, flag = a[(l + r) / 2];
	do
	{
		while (a[i] < flag)i++;
		while (a[j] > flag)j--;
		if (i <= j)
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++; j--;
		}
	} while (i <= j);
	if (l < j)qsort(a, l, j);
	if (r > i)qsort(a, i, r);
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &ans[i]);
	}
	qsort(ans, 0, n-1);
	for (int i = 0; i < n; i++)
	{
		printf("%lld", ans[i]);
		printf(" ");
	}
}