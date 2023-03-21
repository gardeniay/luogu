#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;


typedef long long int ll;
typedef double d;


int main()
{
	d p, q;
	scanf("%lf", &p);
	scanf("%lf", &q);
	for (int i = 1; i < 100000000; i++)
	{
		int a = q * i / 100;
		int b = p * i / 100;
		if ((a - b) == 1)
		{
			printf("%d", i);
			break;
		}
	}
}