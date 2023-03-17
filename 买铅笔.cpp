#include<stdio.h>
int mul(int n,int a, int b)
{
	int c=0,d=0,i;
	for (i = 0;d<n ;i++)
	{
		d = i * a;
	}
	c = (i-1) * b;
	return c;
}
int main()
{
	int n, a1, b1, a2, b2, a3, b3,n1=0,n2=0,n3=0;
	scanf_s("%d", &n);
	scanf_s("%d %d", &a1, &b1);
	scanf_s("%d %d", &a2, &b2);
	scanf_s("%d %d", &a3, &b3);
	n1 = mul(n ,a1, b1);
	n2 = mul(n ,a2, b2);
	n3 = mul(n ,a3, b3);
	if (n3 <= n1 && n3 <= n2) { printf("%d", n3); }
	else if (n2 <= n1 && n2 <= n3) { printf("%d", n2); }
	else if (n1 <= n3 && n1 <= n2) { printf("%d", n1); }
}