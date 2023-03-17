#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
int judge1(int a, int b, int c)
{
	int x=0;
	x += a / 1000 + b / 1000 + c / 1000;
	if (x == 0)return 1;
	else return 0;
}
int judge2(int a, int b, int c)
{
	int exit[10] = { 0 };
	exit[0] = 1;
	for (int i = 0; i < 3; i++)
	{
		exit[a % 10]++;
		exit[b % 10]++;
		exit[c % 10]++;
		a /= 10;
		b /= 10;
		c /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (exit[i] > 1)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a, b, c;
	int flag = 0;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 1; i <= 999; i++)
	{
		int x = i * a;
		int y = i * b;
		int z = i * c;
		if (judge2(x, y, z) == 1&&judge1(x,y,z)==1)
		{
			flag = 1;
			printf("%d %d %d\n", x, y, z);
		}	
	}
	if (flag == 0)
	{
		printf("No!!!");
	}
}