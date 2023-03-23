#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

int n,ans;
char start[101][101],end1[101][101],tmp[101][101], mid[101][101],a[101][101];
char c;

int change1()
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			tmp[i][n - 1 - j] = start[j][i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (end1[i][j] != tmp[i][j])return 0;
		}
	}
	return 1;
}
int change2()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tmp[n - 1 - i][n-1-j] = start[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (end1[i][j] != tmp[i][j])return 0;
		}
	}
	return 1;
}
int change3()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tmp[n - 1 - j][i] = start[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (end1[i][j] != tmp[i][j])return 0;
		}
	}
	return 1;
}
int change4()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tmp[i][n - 1 - j] = start[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (end1[i][j] != tmp[i][j])return 0;
		}
	}
	return 1;
}
int change5()
{
	change4();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			start[i][j] = tmp[i][j];
			a[i][j] = tmp[i][j];
		}
	}
	if (change1() == 1)return 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			start[i][j] = a[i][j];
		}
	}
	if (change2() == 1)return 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			start[i][j] = a[i][j];
		}
	}
	if (change3() == 1)return 1;
	return 0;
}
int change6()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mid[i][j] != end1[i][j])return 0;
		}
	}
	return 1;
}
int change()
{
	if (change1() == 1)return 1;
	if (change2() == 1)return 2;
	if (change3() == 1)return 3;
	if (change4() == 1)return 4;
	if (change5() == 1)return 5;
	if (change6() == 1)return 6;
	else return 7;

}

int main()
{
	scanf("%d", &n);
	c = getchar();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>start[i][j];
			mid[i][j] = start[i][j];
		}
	}
	c = getchar();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>end1[i][j];
		}
	}
	printf("%d", change());
}