#include<stdio.h>
int main()
{
	int n;
	int x,m;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		if (i == 0) { scanf_s("%d", &x); m = x; }
		else scanf_s("%d", &m);
		if (x > m)x = m;
	}
	printf("%d", x);
}