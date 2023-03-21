#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;


typedef long long int ll;
typedef double d;

ll n, a, b;

int ser(int n, int x, int y)
{
	if (x == 1)return y;
	else
	{
		if (x == n)return 3 * n - 2 - y + 1;
		else
		{
			if (y == 1)return 4 * n - 4 - x + 2;
			else
			{
				if (y == n)return n + x - 1;
				else
					return ser(n - 2, x - 1, y - 1) + 4 * (n - 1);
			}
		}
	}
}

int main()
{
	ll m = 0, i, j, x = 0, y = 0;
	scanf("%lld %lld %lld", &n, &a, &b);
	printf("%lld", ser(n, a, b));
}