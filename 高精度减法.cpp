#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
string s1, s2;
int n1[10200], n2[10200], ans[10200],len1,len2;
int cmp(string a, string b, int lo)
{
	if (len1 > len2)return 1;
	else if (len1 < len2)return -1;
	else
	{
		for (int i = 0; i < lo; i++)
		{
			if (a[i] < b[i])
			{
				return -1;
			}
			else if (a[i] > b[i])
			{
				return 1;
			}
		}
	}
	return 0;
}
int cum1(int a[], int l)
{
	for (int i = 0; i < l; i++)
	{
		if (a[i] != 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	cin >> s1 >> s2;
	int t;
	len1 = s1.length(), len2 = s2.length();
	int l = max(len1, len2);
	if (cmp(s1, s2,len1) < 0)
	{
		printf("-");
		swap(s1, s2);
		t = len1;
		len1 = len2;
		len2 = t;
	}
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
		if (n1[i] < n2[i])
		{
			n1[i + 1]--;
			n1[i] += 10;
		}
		ans[i] = n1[i] - n2[i];
	}
	if (cum1(ans, l) == 1)
	{
		printf("0");
		return 0;
	}
	while (ans[l] == 0)l--;
	for (int i = l; i >= 0; i--)
	{
		printf("%d", ans[i]);
	}
}