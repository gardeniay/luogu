#include<stdio.h>
#include<malloc.h>
int judge(int a)
{
	int m=0;
	for (int i = 2; i < a; i++)
	{
		if (a%i!=0)
		{
			m++;
		}
	}
	if (m == a-2) { return 1; }
	else { return 0; }
}
int main()
{
	int n,k=0, * a = {}, * b = {};
	scanf_s("%d", &n);
	a = (int*)malloc(4 * static_cast<size_t>(n));
	if (a == NULL) { return 0; }
	b = (int*)malloc(4 * static_cast<size_t>(n));
	if (b == NULL) { return 0; }
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &*(a+i));
	}
	for (int i = 0; i < n; i++)
	{
		if (judge(*(a+i))==1)
		{
			*(b+k) = *(a + i);
			k++;
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d", *(b+i));
		printf(" ");
	}
}