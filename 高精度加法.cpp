#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
int n1[1000], n2[1000], ans[1000];
int main()
{
	string  s1 , s2;
	cin >> s1 >> s2;
	int len1 = s1.length(), len2 = s2.length();
	int l = max(len1, len2);
	for (int i = 0; i < len1; i++)
	{
		n1[i] = s1[len1 - i - 1] - '0';
	}
	for (int i = 0; i < len2; i++)
	{
		n2[i] = s2[len2 - i - 1] - '0';
	}
	for (int i = 0; i < l; i++)
	{
		ans[i] += n1[i] + n2[i];
		if (ans[i] > 9)
		{
			ans[i + 1] += ans[i] / 10;
			ans[i] %= 10;
		}
	}
	while (ans[l] > 0)l++;
	for (int i = l-1; i >= 0; i--)
	{
		printf("%d", ans[i]);
	}
	return 0;
}