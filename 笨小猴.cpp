#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

string word;
int ans[26];

int cmp(int a, int b)
{
	return a > b;
}
int judge(int n)
{
	if (n == 1)return 0;
	else if (n == 0)return 0;
	else if (n == 2)return 1;
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)return 0;
		}
	}
	return 1;
}

int main()
{
	cin >> word;
	int j = 0,n = 0;
	int len = word.length();
	for (int i = 0; i < len; i++)
	{
		ans[int(word[i] - 'a')]+=1;
	}
	sort(ans, ans + 26,cmp);
	while (ans[j] > 0)
	{
		n++;
		j++;
	}
	if (judge(ans[0] - ans[n-1]) == 1)
	{
		printf("Lucky Word\n%d", ans[0] - ans[n-1]);
	}
	else
	{
		printf("No Answer\n%d", 0);
	}
}