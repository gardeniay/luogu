#include<stdio.h>
long long int mal(int a)
{
	long long int n = 1;
	for (int i = 1; i <= a; i++)
	{
		n *= i;
	}
	return n;
}
int main()
{
	int n;
	scanf_s("%d", &n);
	long long int x=0;
	for (int i = 1; i <= n; i++)
	{
		x += mal(i);
	}
	printf("%lld", x);
}