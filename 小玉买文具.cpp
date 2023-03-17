#include<cstdio>
using namespace std;
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	int m = a * 10 + b;
	printf("%d", m / 19);
}