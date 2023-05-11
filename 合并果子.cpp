#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

ll n;
ll app[100500];
multiset<ll>ans;
ll sum;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> app[i];
		ans.insert(app[i]);
	}
	for (int i = 0; i < n-1; i++)
	{
		ll x = *(ans.begin()) + *(++ans.begin());
		sum += x;
		ans.erase(ans.begin());
		ans.erase(ans.begin());
		ans.insert(x);
	}
	printf("%lld\n", sum);
	return 0;
}