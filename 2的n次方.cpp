#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;


typedef long long int ll;
typedef double d;

int main()
{
	ll n, len = 0;
	scanf("%lld", &n);
	for (int i = 0; n != 1; i++)
	{
		n /= 2;
		len++;
	}
	printf("%lld", len);
}