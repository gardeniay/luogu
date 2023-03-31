#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

typedef struct hum
{
	int direction;
	char name[100];
}hum;
typedef struct order
{
	int dir,num;
}ord;

int n=1, m, ans = 1;

int main()
{
	hum* ans_hum;
	ord* ans_ord;
	scanf("%d %d", &n, &m);
	ans_hum = (hum*)malloc((n+1) * sizeof(hum));
	if (ans_hum == NULL)return 0;
	ans_ord = (ord*)malloc((n + 1) * sizeof(ord));
	if (ans_ord == NULL)return 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> ans_hum[i].direction >> ans_hum[i].name;
	}
	for (int i = 1; i <= m; i++)
	{
		cin >> ans_ord[i].dir >> ans_ord[i].num;
	}
	for (int i = 1; i <= m; i++)
	{
		if (ans_ord[i].dir == 0&&ans_hum[ans].direction==0)
		{
			if (ans - ans_ord[i].num <= 0)
			{
				ans += n;
			}
			ans -= ans_ord[i].num;
		}
		else if (ans_ord[i].dir == 1 && ans_hum[ans].direction == 0)
		{
			if (ans + ans_ord[i].num > n)
			{
				ans -= n;
			}
			ans += ans_ord[i].num;
		}
		else if (ans_ord[i].dir == 0 && ans_hum[ans].direction == 1)
		{
			if (ans + ans_ord[i].num > n)
			{
				ans -= n;
			}
			ans += ans_ord[i].num;
		}
		else if (ans_ord[i].dir == 1 && ans_hum[ans].direction == 1)
		{
			if (ans - ans_ord[i].num <= 0)
			{
				ans += n;
			}
			ans -= ans_ord[i].num;
		}
	}
	printf("%s", ans_hum[ans].name);
}