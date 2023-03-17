#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
int mul[1000], plu[1000];
int main()
{
	int n,i;
	scanf("%d", &n);
	mul[0] = 1; plu[0] = 1;
	for (i = 2; i <= n; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			mul[j] *= i;
		}
		for (int j = 0; j < 100; j++)
		{
			if (mul[j] > 9)
			{
				mul[j + 1] += mul[j] / 10, mul[j] %= 10;
			}
		}
		for (int j = 0; j < 100; j++)
		{
			plu[j] += mul[j];
			if (plu[j] > 9)
			{
				plu[j + 1] += plu[j] / 10, plu[j] %= 10;
			}
		}
	}
	for (i = 100; i >= 0 && plu[i] == 0; i--);
	for (int j = i; j >= 0; j--)
	{
		printf("%d",plu[j]);
	}
	return 0;
}