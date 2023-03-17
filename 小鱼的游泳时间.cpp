#include<cstdio>
using namespace std;
int main()
{
	int a, b, c, d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	int t = (c - a) * 60 + d - b;
	int hh = t / 60;
	int mm = t % 60;
	printf("%d %d", hh, mm);
}
