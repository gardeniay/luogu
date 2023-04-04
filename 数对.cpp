#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
#include<unordered_map>
using namespace std;

typedef long long int ll;
typedef double dou;

unordered_map<ll, ll>m;

ll n, c,ans;
ll a[200005];

int main()
{
	scanf("%lld %lld", &n, &c);
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &a[i]);
		m[a[i] + c]++;
	}
	for (int i = 1; i <= n; i++)
	{
		ans += m[a[i]];
	}
	printf("%lld", ans);
}