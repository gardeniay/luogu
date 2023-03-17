#include<stdio.h>
#include<math.h>
int air(int a)
{
	int b = 0,m=0,f=3,n;
	n = a;
	for (int j = 0; n!=0; j++)
	{
		n =n/10;
		m = j;
	}
	f = m;
	for (int i = f; i >= 0; i--)
	{
		b += (a % 10) * pow(10, i);
		a = a / 10;
	}
	return b;
}
int main()
{
	int q;
	scanf_s("%d", &q);
	printf("%d", air(q));
}