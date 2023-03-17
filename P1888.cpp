#include<stdio.h>
int max, min;
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	max = a; min = a;
	if (b > max)max = b;
	if (c > max)max = c;
	if (b < min)min = b;
	if (c < min)min = c;
	for (int i = max-1; i > 1; i--)
	{
		if (max % i == 0 && min % i == 0)
		{
			max /= i; min /= i;
			break;
		}
	}
	printf("%d/%d", min, max);
	return 0;
}