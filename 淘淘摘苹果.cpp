#include<stdio.h>
int main()
{
	int a[11] = { 0 }, b,n=0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &b);
	for (int i = 0; i < 10; i++)
	{
		if (b + 30 >= a[i]) { n++; }
	}
	printf("%d", n);
}