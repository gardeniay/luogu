#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double fn;
	scanf_s("%d", &n);
	fn = pow((1 + pow(5, 1.0 / 2)) / 2, n) - pow((1 - pow(5, 1.0 / 2)) / 2, n);
	printf("%.2lf", fn / pow(5, 1.0 / 2));
}