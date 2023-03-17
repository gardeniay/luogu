#include<cstdio>
#include<string>
using namespace std;
int main()
{
	int n;
	char x;
	int m = 0;
	scanf_s("%d %c", &n, &x);
	for (int i = 1; i <= n; i++)
	{
		string s = to_string(i);
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == x)m++;
		}
	}
	printf("%d", m);
	return 0;
}