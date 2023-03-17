#include<cstdio>
using namespace std;
int main()
{
	int a, b,c;
	scanf_s("%d %d %d", &a, &b,&c);
	int n = a * 0.2 + 0.3 * b + 0.5 * c;
	printf("%d", n);
}