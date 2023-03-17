#include<stdio.h>
int judge(int a)
{
	if (a % 4 == 0 && a % 100 != 0) { return 1; }
	else if (a % 4 == 0 && a % 400 == 0) { return 1; }
	else { return 0; }
}
int main()
{
	int y, m;
	int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf_s("%d %d", &y, &m);
	if (judge(y) == 1 && m == 2)printf("29");
	else
	{
		printf("%d", a[m]);
	}
	return 0;
}