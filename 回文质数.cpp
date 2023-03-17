#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
typedef long long int ll;
ll a, b;
ll prime[10000000], com[10000001];
void findprime(ll b)
{
	int cnt = 0;
	for (ll i = 2; i < b; i++)
	{
		if (com[i] == 0)prime[++cnt] = i;
		for (int j = 1; j <= cnt && i * prime[j] <= b; j++)
		{
			com[i * prime[j]] = 1;
			if (i % prime[j] == 0)break;
		}
	}
	return;
}
int judge2(ll a)
{
	ll sum=0;
	ll k = a;
	while (a != 0)
	{
		sum = sum * 10 + a % 10;
		a /= 10;
	}
	if (sum == k)return 1;
	else return 0;
}
int judge3(ll a)
{
	if((a>=1000&&a<=10000)||(a>=100000&&a<=1000000))
		return 0;
	else 
		return 1;
}
int main()
{
	scanf("%lld %lld", &a, &b);
	if (a % 2 == 0)a++;
	if (b >= 10000000)b = 9999999;
	findprime(b);
	for (ll i = a; i <= b; i += 2)
	{
		if (judge2(i) == 1)
		{
			if (com[i] == 0)
			{
				if (judge3(i) == 1)
				{
					printf("%lld\n", i);
				}
			}
		}
	}
}