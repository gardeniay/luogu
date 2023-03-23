#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

int n;
ll tle[1000],tmp[1000];

void del(ll a[], int b)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == b)
		{
			a[i] = 0;
			break;
		}
	}
}
int ser(ll a[], ll b)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == b)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	ll t,ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &tle[i]);
	}
	for (int i = 0; i < n; i++)
	{
		tmp[i] = tle[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			t = tle[i] + tle[j];
			if (ser(tmp, t) == 1)
			{
				ans++;
				del(tmp, t);
			}
		}
	}
	printf("%lld", ans);
}