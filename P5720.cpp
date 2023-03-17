#include<stdio.h>
int main()
{
	long long int a;
	int t=0;
	scanf_s("%lld", &a);
	for (int i = 1;  ; i++)
	{
		a /= 2;
		if (a == 0)
		{
			t = i;
			break;
		}
	}
	printf("%d", t);
}