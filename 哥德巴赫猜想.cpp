#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

int prime[100000], com[100000],cnt;

void findprime(int n)
{
	if (n == 0)return;
	com[1] = 1;
	for (int i = 2; i < n; i++)
	{
		if (com[i] == 0)prime[++cnt] = i;
		for (int j = 1; j <=cnt&&i*prime[j]<=n ; j++)
		{
			com[i * prime[j]] = 1;
			if (i % prime[j] == 0)
			{
				break;
			}
		}
	}
	return;
}

int main()
{
	int N,cmp=0;
	scanf("%d", &N);
	findprime(10000);
	for (int i = 4; i <= N; i+=2)
	{
		printf("%d=", i);
		for (int j = 2; j < N; j++)
		{
			if (com[i-j] == 0 && com[j] == 0)
			{
				printf("%d+%d\n", j, i-j);
				break;
			}
		}
	}
}