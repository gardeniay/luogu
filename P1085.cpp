#include<stdio.h>
int main()
{
	int a, b, c, d,n=0;
	scanf_s("%d %d", &a,&b);
	if ((a + b) > 8)n = 1;
	for (int i = 2; i <= 7; i++)
	{
		scanf_s("%d %d", &c, &d);
		if ((c + d) > 8)
		{
			if ((c + d) > (a + b)) { a = c; b = d; n = i; }
		}
	}
	printf("%d", n);
	return 0;
}