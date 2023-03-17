#include<stdio.h>
int main()
{
	int n, k;
	scanf_s("%d %d", &n, &k);
	int n1 = 0, n2 = 0;
	double s1=0, s2=0;
	for (int i = 1; i <= n; i++)
	{
		if (i % k == 0)
		{
			n1++;
			s1 += i;
		}
		else
		{
			n2++;
			s2 += i;
		}
	}
	printf("%.1lf %.1lf", s1 / n1, s2 / n2);
}