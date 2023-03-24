#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cctype>
using namespace std;

typedef long long int ll;
typedef double dou;

char start[10001],ans[10001], k;
int a, b, n;

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &start);
		if (isalpha(start[0]) != 0)
		{
			k = start[0];
			scanf("%d %d", &a, &b);
		}
		else
		{
			a = atoi(start);
			scanf("%d", &b);
		}
		if (k == 'a')
		{
			sprintf(ans, "%d+%d=%d", a, b, a + b);
		}
		else if (k == 'b')
		{
			sprintf(ans, "%d-%d=%d", a, b, a - b);
		}
		else if (k == 'c')
		{
			sprintf(ans, "%d*%d=%d", a, b, a * b);
		}
		cout << ans << endl;
		printf("%d\n",strlen(ans));
	}
	return 0;
}