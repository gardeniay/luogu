#define _CRT_SECURE_NO_WperRNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

ll n, sum, k=1;
ll ans[1000000];

int cmp(ll a, ll b)
{
	return a < b;
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin>>ans[i];
	}
	sort(ans + 1, ans + 1 + n, cmp);
	ll i = 0, j = n;
	while (i < j)
	{
		sum += pow(ans[j] - ans[i], 2);
		if (k % 2 != 0)
		{
			i++;
		}
		else
		{
			j--;
		}
		k++;
	}
	printf("%lld\n", sum);
	return 0;
}