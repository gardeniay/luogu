#include<stdio.h>
int main()
{
	double s=0;
	int k;
	scanf_s("%d", &k);
	for (double i = 1.0; i < 10000000.0; i++)
	{
		s += 1.0 / i;
		if (s > k) 
		{
			printf("%d", i);
			break;
		}
	}
}