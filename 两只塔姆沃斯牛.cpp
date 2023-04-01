#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

char ans[12][12], cmp[12][12];
char c;
int result;
int man[3], cow[3];
int tdz, zt[1600005];

void itz()
{
	for (int i = 0; i < 12; i++)
	{
		ans[0][i] = '*';
		cmp[0][i] = '*';
	}
	for (int i = 0; i < 12; i++)
	{
		ans[11][i] = '*';
		cmp[11][i] = '*';
	}
	for (int i = 0; i < 12; i++)
	{
		ans[i][0] = '*';
		cmp[i][0] = '*';
	}
	for (int i = 0; i < 12; i++)
	{
		ans[i][11] = '*';
		cmp[i][11] = '*';
	}
}
int change1(int a,int b)
{
	if (man[0] == 0)
	{
		if (ans[a - 1][b] == '*')
		{
			man[0]++;
			return 1;
		}
	}
	else if (man[0] == 1)
	{
		if (ans[a][b+1] == '*')
		{
			man[0]++;
			return 1;
		}
	}
	else if (man[0] == 2)
	{
		if (ans[a + 1][b] == '*')
		{
			man[0]++;
			return 1;
		}
	}
	else if (man[0] == 3)
	{
		if (ans[a][b-1] == '*')
		{
			man[0]++;
			if (man[0] > 3)man[0] = 0;
			return 1;
		}
	}
	return 0;
}
int change2(int c, int d)
{

	if (cow[0] == 0)
	{
		if (ans[c - 1][d] == '*')
		{
			cow[0]++;
			return 1;
		}
	}
	else if (cow[0] == 1)
	{
		if (ans[c][d + 1] == '*')
		{
			cow[0]++;
			return 1;
		}
	}
	else if (cow[0] == 2)
	{
		if (ans[c + 1][d] == '*')
		{
			cow[0]++;
			return 1;
		}
	}
	else if (cow[0] == 3)
	{
		if (ans[c][d - 1] == '*')
		{
			cow[0]++;
			if (cow[0] > 3)cow[0] = 0;
			return 1;
		}
	}
	return 0;
}
void move1()
{
	if (man[0] == 0)man[1]--;
	else if (man[0] == 1)man[2]++;
	else if (man[0] == 2)man[1]++;
	else if (man[0] == 3)man[2]--;
}
void move2()
{
	if (cow[0] == 0)cow[1]--;
	else if (cow[0] == 1)cow[2]++;
	else if (cow[0] == 2)cow[1]++;
	else if (cow[0] == 3)cow[2]--;
}

int main()
{
	itz();
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cin>>ans[i][j];
			if (ans[i][j] == 'C')
			{
				man[1] = i;
				man[2] = j;
			}
			if (ans[i][j] == 'F')
			{
				cow[1] = i;
				cow[2] = j;
			}
		}
	}
	do
	{
		tdz = man[1] + man[2] * 10 + cow[1] * 100 + cow[2] * 1000 + man[0] * 10000 + cow[0] * 40000;
		if (zt[tdz]) 
		{
			cout << 0 << endl;
			return 0;
		}
		zt[tdz] = 1;
		if (change1(man[1], man[2]) == 0)move1();
		if (change2(cow[1], cow[2]) == 0)move2();
		result++;
	} while (!(man[1] == cow[1] && man[2] == cow[2]));
	printf("%d", result);
}