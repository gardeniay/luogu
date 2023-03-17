#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n, x=0, k=0;
	scanf("%d", &n);
	int m = n / 364;
	for (int i = 1; i <= 100; i++)
	{
		if (m - 3 * i > 0 && m - 3 * i <= 100)
		{
			x = m - 3 * i;
			k = i;
			break;
		}
	}
	printf("%d\n%d", x, k);
}