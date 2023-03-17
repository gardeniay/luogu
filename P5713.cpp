#include<stdio.h>
int main()
{
	int n,a,b;
	scanf_s("%d", &n);
	a = n * 5;
	b = n * 3 + 11;
	if (a < b) { printf("Local"); }
	else printf("Luogu");
	return 0;
}