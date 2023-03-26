#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

char ans[15];
int ans1, ans2, ans3;

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
		x[i].sum = (x[i].Chinese + x[i].Math + x[i].English) / 3;
	}
	for (int i = 0; i <= strlen(x[0].name); i++)
	{
		ans[i] = x[0].name[i];
	}
	ans1 = x[0].Chinese, ans2 = x[0].Math, ans3 = x[0].English;
	int flag = (ans1 + ans2 + ans3) / 3;
	for (int i = 1; i < n; i++)
	{
		if (x[i].sum > flag)
		{
			for (int k = 0; k < 15; k++)
			{
				ans[k] = 0;
			}
			for (int j = 0; j < 15; j++)
			{
				ans[j] = x[i].name[j];
			}
			ans1 = x[i].Chinese, ans2 = x[i].Math, ans3 = x[i].English;
			flag = (ans1 + ans2 + ans3) / 3;
		}
	}
	printf("%s %d %d %d", ans, ans1, ans2, ans3);
}