#include<stdio.h>
int main()
{
	int a=30,c=65;
	double b=0.3;
	char d='A';
	printf("I am a student\n");
	printf("%d %lf\n", a, b);
	printf("%d %c\n", (int)d, (char)c);
	printf(" %d %d\n", a++, ++a);
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(long double));
	printf("%d\n", sizeof(short));
	printf("%d %o %x\n", a, a, a);
}