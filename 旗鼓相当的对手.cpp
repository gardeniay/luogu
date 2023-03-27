#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

struct student
{
	char name[15];
	int Chinese;
	int Math;
	int English;
	int sum;
};

int main()
{
	int n;
	struct student* x;
	n = 1;
	scanf("%d", &n);
	x = (struct student*)malloc((n+1) * sizeof(struct student));
	if (x == NULL)return 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i].name >> x[i].Chinese >> x[i].Math >> x[i].English;
		x[i].sum = (x[i].Chinese + x[i].Math + x[i].English);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (abs(x[j].Chinese - x[i].Chinese) <= 5 && abs(x[j].Math - x[i].Math) <= 5 && abs(x[j].English - x[i].English) <= 5 && abs(x[j].sum - x[i].sum) <= 10)
			{
				printf("%s %s\n", x[i].name, x[j].name);
			}
		}
	}
	return 0;
}