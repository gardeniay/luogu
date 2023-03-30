#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

int n,m, ans[1000][1000],tmp[1000][1000];

void change(int x,int y,int r,int z)
{
	if (z == 0)
	{
		for (int i = -r; i <= r; i++)
		{
			for (int j = -r; j <= r; j++)
			{
				ans[x + j][y - i] = tmp[x + i][y + j];
			}
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				tmp[i][j] = ans[i][j];
			}
		}
		return;
	}
	else if (z == 1)
	{
		for (int i = - r ; i <= r; i++)
		{
			for (int j = - r ; j <= r; j++)
			{
				ans[x-j][y+i] = tmp[x+i][y+j];
			}
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				tmp[i][j] = ans[i][j];
			}
		}
		return;
	}
}

int main()
{
	int t=1;
	scanf("%d %d", &n,&m);
	int a, b, c, d;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			ans[i][j] = t;
			tmp[i][j] = ans[i][j];
			t++;
		}
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		change(a, b, c, d);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d", ans[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}