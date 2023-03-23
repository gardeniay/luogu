#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long int ll;
typedef double dou;

string s;
int l, h;
char ans[10][500];

int main()
{
	int n, a[100] = { 0 };
	scanf("%d", &n);
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		a[i] = s[i] - '0';
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			ans[h][l] = 'X';
			ans[h][l + 1] = 'X';
			ans[h][l + 2] = 'X';

			ans[h + 1][l] = 'X';
			ans[h + 1][l + 1] = '.';
			ans[h + 1][l + 2] = 'X';

			ans[h + 2][l] = 'X';
			ans[h + 2][l + 1] = '.';
			ans[h + 2][l + 2] = 'X';

			ans[h + 3][l] = 'X';
			ans[h + 3][l + 1] = '.';
			ans[h + 3][l + 2] = 'X';

			ans[h + 4][l] = 'X';
			ans[h + 4][l + 1] = 'X';
			ans[h + 4][l + 2] = 'X';
		}
		else if (a[i] == 1)
		{
			ans[h][l] = '.';
			ans[h][l + 1] = '.';
			ans[h][l + 2] = 'X';

			ans[h + 1][l] = '.';
			ans[h + 1][l + 1] = '.';
			ans[h + 1][l + 2] = 'X';

			ans[h + 2][l] = '.';
			ans[h + 2][l + 1] = '.';
			ans[h + 2][l + 2] = 'X';

			ans[h + 3][l] = '.';
			ans[h + 3][l + 1] = '.';
			ans[h + 3][l + 2] = 'X';

			ans[h + 4][l] = '.';
			ans[h + 4][l + 1] = '.';
			ans[h + 4][l + 2] = 'X';
		}
		else if (a[i] == 2)
		{
			ans[h][l] = 'X';
			ans[h][l + 1] = 'X';
			ans[h][l + 2] = 'X';

			ans[h + 1][l] = '.';
			ans[h + 1][l + 1] = '.';
			ans[h + 1][l + 2] = 'X';

			ans[h + 2][l] = 'X';
			ans[h + 2][l + 1] = 'X';
			ans[h + 2][l + 2] = 'X';

			ans[h + 3][l] = 'X';
			ans[h + 3][l + 1] = '.';
			ans[h + 3][l + 2] = '.';

			ans[h + 4][l] = 'X';
			ans[h + 4][l + 1] = 'X';
			ans[h + 4][l + 2] = 'X';
		}
		else if (a[i] == 3)
		{
			ans[h][l] = 'X';
			ans[h][l + 1] = 'X';
			ans[h][l + 2] = 'X';

			ans[h + 1][l] = '.';
			ans[h + 1][l + 1] = '.';
			ans[h + 1][l + 2] = 'X';

			ans[h + 2][l] = 'X';
			ans[h + 2][l + 1] = 'X';
			ans[h + 2][l + 2] = 'X';

			ans[h + 3][l] = '.';
			ans[h + 3][l + 1] = '.';
			ans[h + 3][l + 2] = 'X';

			ans[h + 4][l] = 'X';
			ans[h + 4][l + 1] = 'X';
			ans[h + 4][l + 2] = 'X';
		}
		else if (a[i] == 4)
		{
			ans[h][l] = 'X';
			ans[h][l + 1] = '.';
			ans[h][l + 2] = 'X';

			ans[h + 1][l] = 'X';
			ans[h + 1][l + 1] = '.';
			ans[h + 1][l + 2] = 'X';

			ans[h + 2][l] = 'X';
			ans[h + 2][l + 1] = 'X';
			ans[h + 2][l + 2] = 'X';

			ans[h + 3][l] = '.';
			ans[h + 3][l + 1] = '.';
			ans[h + 3][l + 2] = 'X';

			ans[h + 4][l] = '.';
			ans[h + 4][l + 1] = '.';
			ans[h + 4][l + 2] = 'X';
		}
		else if (a[i] == 5)
		{
			ans[h][l] = 'X';
			ans[h][l + 1] = 'X';
			ans[h][l + 2] = 'X';

			ans[h + 1][l] = 'X';
			ans[h + 1][l + 1] = '.';
			ans[h + 1][l + 2] = '.';

			ans[h + 2][l] = 'X';
			ans[h + 2][l + 1] = 'X';
			ans[h + 2][l + 2] = 'X';

			ans[h + 3][l] = '.';
			ans[h + 3][l + 1] = '.';
			ans[h + 3][l + 2] = 'X';

			ans[h + 4][l] = 'X';
			ans[h + 4][l + 1] = 'X';
			ans[h + 4][l + 2] = 'X';
		}
		else if (a[i] == 6)
		{
			ans[h][l] = 'X';
			ans[h][l + 1] = 'X';
			ans[h][l + 2] = 'X';

			ans[h + 1][l] = 'X';
			ans[h + 1][l + 1] = '.';
			ans[h + 1][l + 2] = '.';

			ans[h + 2][l] = 'X';
			ans[h + 2][l + 1] = 'X';
			ans[h + 2][l + 2] = 'X';

			ans[h + 3][l] = 'X';
			ans[h + 3][l + 1] = '.';
			ans[h + 3][l + 2] = 'X';

			ans[h + 4][l] = 'X';
			ans[h + 4][l + 1] = 'X';
			ans[h + 4][l + 2] = 'X';
		}
		else if (a[i] == 7)
		{
			ans[h][l] = 'X';
			ans[h][l + 1] = 'X';
			ans[h][l + 2] = 'X';

			ans[h + 1][l] = '.';
			ans[h + 1][l + 1] = '.';
			ans[h + 1][l + 2] = 'X';

			ans[h + 2][l] = '.';
			ans[h + 2][l + 1] = '.';
			ans[h + 2][l + 2] = 'X';

			ans[h + 3][l] = '.';
			ans[h + 3][l + 1] = '.';
			ans[h + 3][l + 2] = 'X';

			ans[h + 4][l] = '.';
			ans[h + 4][l + 1] = '.';
			ans[h + 4][l + 2] = 'X';
		}
		else if (a[i] == 8)
		{
			ans[h][l] = 'X';
			ans[h][l + 1] = 'X';
			ans[h][l + 2] = 'X';

			ans[h + 1][l] = 'X';
			ans[h + 1][l + 1] = '.';
			ans[h + 1][l + 2] = 'X';

			ans[h + 2][l] = 'X';
			ans[h + 2][l + 1] = 'X';
			ans[h + 2][l + 2] = 'X';

			ans[h + 3][l] = 'X';
			ans[h + 3][l + 1] = '.';
			ans[h + 3][l + 2] = 'X';

			ans[h + 4][l] = 'X';
			ans[h + 4][l + 1] = 'X';
			ans[h + 4][l + 2] = 'X';
		}
		else if (a[i] == 9)
		{
			ans[h][l] = 'X';
			ans[h][l + 1] = 'X';
			ans[h][l + 2] = 'X';

			ans[h + 1][l] = 'X';
			ans[h + 1][l + 1] = '.';
			ans[h + 1][l + 2] = 'X';

			ans[h + 2][l] = 'X';
			ans[h + 2][l + 1] = 'X';
			ans[h + 2][l + 2] = 'X';

			ans[h + 3][l] = '.';
			ans[h + 3][l + 1] = '.';
			ans[h + 3][l + 2] = 'X';

			ans[h + 4][l] = 'X';
			ans[h + 4][l + 1] = 'X';
			ans[h + 4][l + 2] = 'X';
		}
		l += 3;
		ans[h][l] = '.';
		ans[h + 1][l] = '.';
		ans[h + 2][l] = '.';
		ans[h + 3][l] = '.';
		ans[h + 4][l] = '.';
		l++;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 * n - 1; j++)
		{
			printf("%c", ans[i][j]);
		}
		printf("\n");
	}
}