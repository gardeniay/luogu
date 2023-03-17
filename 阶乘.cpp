#include<stdio.h>
int main()
{
	int n,a=1;
	scanf_s("%d", &n);
	for (int i = 1; i < n; i++)
	{
		a *= i;
	}
	printf("%d", a * n);
}