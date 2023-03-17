#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void sort(int a[])
{
	int t;
	for (int i = 1; i < 3; i++)
	{
		if (a[0] < a[i])
		{
			t = a[0];
			a[0] = a[i];
			a[i] = t;
		}
	}
	for (int i = 1; i >= 0; i--)
	{
		if (a[2] > a[i])
		{
			t = a[2];
			a[2] = a[i];
			a[i] = t;
		}
	}
	return;
}
int main()
{
	int e[3] = { 0 },a,b,c;
	char d[4];
	scanf("%d %d %d", &a, &b, &c);
	e[0] = a; e[1] = b; e[2] = c;
	scanf("%s", d);
	sort(e);
	for (int i = 0; i < 3; i++)
	{
		if (d[i] == 'C')
		{
			printf("%d", e[0]);
			printf(" ");
		}
		if (d[i] == 'B')
		{
			printf("%d", e[1]);
			printf(" ");
		}
		if (d[i] == 'A')
		{
			printf("%d", e[2]);
			printf(" ");
		}
	}
}