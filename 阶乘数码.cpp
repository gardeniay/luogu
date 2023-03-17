#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int s1[100000];
int main()
{
	int t, n, a;
	scanf("%d", &t);
	while (t)
	{
		scanf("%d %d", &n, &a);
		int num = 0, l = 1, j = 0, p = 1;
		for (int i = 0; i < 100000; i++)
		{
			s1[i] = 0;
		}
		s1[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			l = 0;
			for (j = 1; j  <= p; j ++)
			{
				s1[j] = s1[j]*i + l;
				l = s1[j] / 10;
				s1[j] %= 10;
			}
			while (l > 0)
			{
				s1[j] = l % 10;
				l /= 10;
				j++;
			}
			p = j - 1;
		}
		for (int i = 1; i <= p; i++)
		{
			if (s1[i] == a)num++;
		}
		printf("%d\n", num);
		t--;
	}
}