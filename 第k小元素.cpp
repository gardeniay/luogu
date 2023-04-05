#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

typedef long long int ll;
typedef double dou;

ll n, k,c;
ll m;

int main()
{
	scanf("%lld %lld", &n, &k);
	set<ll>a;
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &c);
		a.insert(c);
	}
	for (auto i = a.begin(); i != a.end(); i++)
	{
		if (m == k-1)
		{
			printf("%lld", *i);
			return 0;
		}
		m++;
	}
	printf("NO RESULT");
}