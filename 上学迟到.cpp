#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int s, v;
	scanf("%d %d", &s, &v);
	int t = ceil(1.0 * s / v) + 10;
	int f = 60 * (8 + 24) - t;
	int hh = (f / 60) % 24;
	int mm = f % 60;
	printf("%02d:%02d", hh, mm);
}