#include<stdio.h>
int main()
{
	double a;
	int n;
	scanf_s("%lf %d", &a, &n);
	printf("%.3lf\n%d", a / n, n * 2);
}