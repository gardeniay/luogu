#include<cstdio>
#include<cmath>
#include <iostream>
using namespace std;
int main()
{
	int a;
	const double p = 3.141593;
	scanf_s("%d", &a);
	if (a == 1) printf("I love Luogu!");
	else if (a == 2)printf("6 4");
	else if (a == 3)printf("3\n12\n2");
	else if (a == 4)printf("%.3lf", 500.0 / 3);
	else if (a == 5)printf("%d", (220 + 260) / 32);
	else if (a == 6)cout << sqrt(36 + 81);
	else if (a == 7)printf("110\n90\n0");
	else if (a == 8)cout << p * 10 << endl << p * 25 << endl << (4.0 / 3) * p * 125 << endl;
	else if (a == 9)printf("%d", (((1 + 1) * 2 + 1) * 2 + 1) * 2);
	else if (a == 10)
	{
		float v = (8 * 30 - 6 * 10)*1.0 / 24;
		int n = (240 - 20 * v) / 10;
		printf("%d", n);
	}
	else if (a == 11)cout << 1.0 * 100 / 3;
	else if (a == 12)printf("%d\n%c", 13, 'R');
	else if (a == 13)
	{
		int a = pow((4.0 / 3) * p * (pow(4, 3) + pow(10, 3)), 1.0 / 3);
		printf("%d", a);
	}
	else if (a == 14)printf("50");
}