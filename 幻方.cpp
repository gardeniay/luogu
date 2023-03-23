#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

int n, a[40][40], l, h;

int main()
{
	scanf("%d", &n);
	a[0][n / 2] = 1; l = n / 2; h = 0;
	for (int i = 2; i <= n*n; i++)
	{
		if (h == 0 && l != n - 1)
		{
			a[n - 1][l + 1] = i;
			l++;
			h = n - 1;
		}
		else if (l == n - 1 && h != 0)
		{
			a[h - 1][0] = i;
			l = 0;
			h--;
		}
		else if(h==0&&l==n-1)
		{
			a[h + 1][l] = i;
			h++;
		}
		else if (h != 0 && l != n - 1)
		{
			if (a[h - 1][l + 1] == 0 && h - 1 >= 0 && l + 1 <= n)
			{
				a[h - 1][l + 1] = i;
				h--;
				l++;
			}
			else
			{
				a[h + 1][l] = i;
				h++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d", a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}

