#include<cstdio>
#include<cmath>
#define p 3.14156926
using namespace std;
int main()
{
	int h, r;
	scanf_s("%d %d", &h, &r);
	int n = ceil(1.0*2e4 / (h * p * r * r));
	printf("%d", n);
}