#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

long long int max(long long int a[])
{
	long long int max=a[0];
	for (int i = 1; i < 6; i++)
	{
		if (a[i] > max)max = a[i];
	}
	return max;
}
int main()
{
	long long int n;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++)
	{
		long long int a[4] = { 0 }, ans[6] = { 0 };
		for (int j = 0; j < 3; j++)
		{
			scanf("%lld", &a[j]);
		}
		ans[0] = a[0] + a[1] + a[2];
		ans[1] = a[0] * a[1] * a[2];
		ans[2] = a[0] + a[1] * a[2];
		ans[3] = (a[0] + a[1]) * a[2];
		ans[4] = a[0] * a[1] + a[2];
		ans[5] = a[0] * (a[1] + a[2]);
		printf("%lld\n",max(ans));
	}
}