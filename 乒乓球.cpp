#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

char ans[65000], c;

void match_11(char a[])
{
	int w = 0, l = 0;
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 'W')w++;
		else if (a[i] == 'L')l++;
		if (max(w, l) >= 11 && abs(w - l) >= 2)
		{
			printf("%d:%d\n", w, l);
			w = 0; l = 0;
		}
	}
	printf("%d:%d\n\n", w, l);
	return;
}
void match_21(char a[])
{
	int w = 0, l = 0;
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 'W')w++;
		else if (a[i] == 'L')l++;
		if (max(w, l) >= 21 && abs(w - l) >= 2)
		{
			printf("%d:%d\n", w, l);
			w = 0; l = 0;
		}
	}
	printf("%d:%d\n", w, l);
	return;
}

int main()
{
	for (int i = 0;  ;)
	{
		c = getchar();
		if (c == 'W' || c == 'L')
		{
			ans[i] = c;
			i++;
		}
		else if (c == 'E')
		{
			break;
		}
		else if (c == '\n')
		{
			continue;
		}
	}
	//ans[strlen(ans)] = 'E';
	match_11(ans);
	match_21(ans);
	return 0;
}
