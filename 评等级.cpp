#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

typedef struct student
{
	int name;
	int study;
	int society;
	int sum;
	int all;
	int judge()
	{
		if (sum > 140 && all >= 800)
		{
			return 1;
		}
		else return 0;
	}
}stu;

int main()
{
	int n;
	stu* x;
	n = 1;
	scanf("%d", &n);
	x = (stu*)malloc((n + 1) * sizeof(stu));
	if (x == NULL)return 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i].name >> x[i].study >> x[i].society ;
		x[i].all = (x[i].study * 7 + x[i].society * 3);
		x[i].sum = x[i].study + x[i].society;
	}
	for (int i = 0; i < n; i++)
	{
		if (x[i].judge() == 1)printf("Excellent\n");
		else printf("Not excellent\n");
	}
	return 0;
}