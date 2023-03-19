#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

int a[5005];

int cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n,cmp);
	printf("%d %d", a[0], a[1]);
}