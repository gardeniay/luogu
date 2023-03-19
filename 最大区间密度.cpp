#define _CRT_SECURE_NO_WARNINGS
typedef long long int ll;
typedef double d;
#include<iostream>
#include<algorithm>
using namespace std;

ll ans[2005];
int main()
{
	ll n;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &ans[i]);
	}
	for (ll i = 0; i < n-1; i++)
	{
		d aw = 2 / double(ans[i+1] - ans[i]),t;
		ll m = ans[i + 1] - ans[i];
		for (ll j = i+1; j < n; j++)
		{
			t = (j - i + 1) / double((ans[j] - ans[i]));
			if (t > aw)
			{
				aw = t;
				m = ans[j] - ans[i];
			}
			else if (t == aw && (ans[j] - ans[i]) < m)m = ans[j] - ans[i];
		}
		printf("%lld\n", m);
	}
}