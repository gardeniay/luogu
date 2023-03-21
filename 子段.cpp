#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;


typedef long long int ll;
typedef double d;

ll n, tle[3000], s[2000];
ll ans;

int main()
{
	scanf("%lld", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &tle[i]);
		s[i + 1] = s[i] + tle[i];
	}
	for (int i = 0; i < n + 1; i++)
	{
		for (int j = i + 1; j < n + 1; j++)
		{
			if ((s[j] - s[i]) % 3 == 0)ans++;
		}
	}
	printf("%lld", ans);
}