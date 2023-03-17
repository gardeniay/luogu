#include<stdio.h>
int main()
{
	int n;
	int x=0;
	scanf_s("%d", &n);
	for (int i = 1;  ; i++)
	{
		if (i < 10)
		{
			printf("0");
			printf("%d", i);
			x++;
		}
		else
		{
			printf("%d", i);
			x++;
		}
		if (x == n)
		{
			printf("\n");
			x = 0;
			n--;
		}
		if (n == 0)break;
	}
	return 0;
}