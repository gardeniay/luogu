#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

int n, na, nb;
int ans_a[300], ans_b[300];
int socre_a, socre_b;

void match(int a, int b)
{
	if (a == 0)
	{
		if (b == 2 || b == 3)socre_a++;
		else if (b == 1 || b == 4)socre_b++;
	}
	else if (a == 1)
	{
		if (b == 0 || b == 3)socre_a++;
		else if (b == 2 || b == 4)socre_b++;
	}
	else if (a == 2)
	{
		if (b == 1 || b == 4)socre_a++;
		else if (b == 0 || b == 3)socre_b++;
	}
	else if (a == 3)
	{
		if (b == 2 || b == 4)socre_a++;
		else if (b == 1 || b == 0)socre_b++;
	}
	else if (a == 4)
	{
		if (b == 1 || b == 0)socre_a++;
		else if (b == 2 || b == 3)socre_b++;
	}
}

int main()
{
	int n1 = 1, n2 = 1;
	scanf("%d %d %d", &n, &na, &nb);
	for (int i = 1; i <= na; i++)
	{
		scanf("%d", &ans_a[i]);
	}
	for (int i = 1; i <= nb; i++)
	{
		scanf("%d", &ans_b[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		match(ans_a[n1], ans_b[n2]);
		n1++; n2++;
		if (n1 > na)n1 = 1;
		if (n2 > nb)n2 = 1;
	}
	printf("%d %d", socre_a, socre_b);
}