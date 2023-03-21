#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;


typedef long long int ll;
typedef double d;

ll n, tle[1000], t, ans;
ll tle1[1000];
int serch(ll a[], ll b)
{
	for (int j = 0; j < n; j++)
	{
		if (a[j] == b)return 1;
	}
	return 0;
}
void del(ll a[], ll b)
{
	for (int j = 0; j < n; j++)
	{
		if (a[j] == b)
		{
			a[j] = 0;
			return;
		}
	}
}

int main()
{
	scanf("%lld", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &tle[i]);
	}
	for (int i = 0; i < n; i++)
	{
		tle1[i] = tle[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int k = i + 1; k < n; k++)
		{
			t = tle[i] + tle[k];
			if (serch(tle1, t) == 1)ans++;
			del(tle1, t);
		}
	}
	printf("%lld", ans);
}