#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

ll ans[2000];
ll sum;
char c;

int main()
{
	int n = 0;
	while (1)
	{
		scanf("%lld", &ans[n]);
		c = getchar();
		sum += ans[n];
		n++;
		if (c == '\n')break;
	}
	printf("%lld", sum * int(pow(2, n - 1)));
}