#include<stdio.h>
int judge(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
	{
		return 1;
	}
	else return 0;
}
int main()
{
	int m, n,s=0;
	scanf_s("%d %d", &m, &n);
	for (int i = m; i < n+1; i++)
	{
		if (judge(i) == 1) { s++; }
	}
	printf("%d\n", s);
	for (int i = m; i < n + 1; i++)
	{
		if (judge(i) == 1) 
		{
			printf("%d",i);
			printf(" ");
		}
	}
}