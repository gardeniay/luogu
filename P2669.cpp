#include<cstdio>
#include<string>
using namespace std;
int main()
{
	int k;
	scanf_s("%d", &k);
	int ans=0,n=1,m=0;
	for (int i = 0; i < k; )
	{
		for (int j = 0; j < n; j++)
		{
			if (m == 0)j = 0;
			if (i >= k)break;
			m++;
			ans += n;
			i++;
		}
		n++;
		m = 0;
	}
	printf("%d", ans);
	return 0;
}