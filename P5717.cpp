#include<stdio.h>
void sort(int a[])
{
	int n;
	if (a[2] > a[1])
	{
		n = a[1];
		a[1] = a[2];
		a[2] = n;
	}
	if (a[1] > a[0])
	{
		n = a[0];
		a[0] = a[1];
		a[1] = n;
	}
	return;
}
int main()
{
	int a[3];
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &a[i]);
	}
	sort(a);
	if (a[0] >= a[1] + a[2])
	{
		printf("Not triangle\n");
		return 0;
	}
	else
	{
		if (a[0] * a[0] == a[1] * a[1] + a[2] * a[2])printf("Right triangle\n");
		else if (a[0] * a[0] < a[1] * a[1] + a[2] * a[2])printf("Acute triangle\n");
		else if (a[0] * a[0] > a[1] * a[1] + a[2] * a[2])printf("Obtuse triangle\n");
		if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2])printf("Isosceles triangle\n");
		if (a[0] == a[1] && a[0] == a[2])printf("Equilateral triangle\n");
	}
	return 0;
}
