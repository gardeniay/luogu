#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
int title[200005];
long long int ans, s[200005];
int main()
{
	long int n;
	scanf("%ld", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &title[i]);
		s[i] = s[i - 1] + title[i];
	}
	for (int i = 1; i <= n; i++)
	{
		ans += title[i] * (s[n] - s[i]);
	}
	printf("%lld", ans);
}