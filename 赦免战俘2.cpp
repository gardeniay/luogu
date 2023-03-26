#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

int n, ans[1050][1050];
int m;

void kind(int x,int a,int b)
{
	if (x == 2)
	{
		ans[a][b] = 0;
		return;
	}
	for (int i = a; i < a + x/2; i++)
	{
		for (int j = b; j < b + x/2; j++)
		{
			ans[i][j] = 0;
		}
	}
	kind(x / 2, a + x / 2, b);
	kind(x / 2, a, b + x / 2);
	kind(x / 2, a + x / 2, b + x / 2);
}

int main()
{
	scanf("%d", &n);
	m = pow(2,n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ans[i][j] = 1;
		}
	}
	kind(m,0,0);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d", ans[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}