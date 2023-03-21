#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;


typedef long long int ll;
typedef double d;

ll n, a[1000000];

int cmp(ll a, ll b)
{
	return a > b;
}

int main()
{
	ll ans = 0, t = 0;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a, a + n, cmp);
	ans = a[0] * a[1] > a[n - 1] * a[n - 2] ? a[0] * a[1] : a[n - 1] * a[n - 2];
	printf("%lld", ans);
}