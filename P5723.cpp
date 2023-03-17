#include<cstdio>
int judge(int a)
{
	if (a == 4)return 0;
	int n = 0;
	for (int i = 2; i*i <= a; i++)
	{
		if (a % i == 0)n++;
	}
	if (n == 0)return 1;
	else return 0;
}
int main()
{
	int l,n=0;
	int m=0;
	scanf_s("%d", &l);
	if (l == 1) 
	{
		printf("0"); return 0;
	}
	for (int i = 2;  ; i++)
	{
		if (n >= l)break;
		if (judge(i))
		{
			if (n+i > l)break;
			printf("%d\n", i);
			m++;
			n += i;
		}
	}
	printf("%d", m);
	return 0;
}