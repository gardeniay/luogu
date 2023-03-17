#include<stdio.h>
#include<math.h>
double length(double a[], double b[], double c[])
{
	double s = 0,s1=0,s2=0,s3=0;
	s1 = sqrt( pow(b[0] - a[0], 2) + pow(b[1] - a[1], 2));
	s2 = sqrt(pow(b[0] - c[0], 2) + pow(b[1] - c[1], 2));
	s3 = sqrt(pow(c[0] - a[0], 2) + pow(c[1] - a[1], 2));
	s = s1 + s2 + s3;
	return s;
}
int main()
{
	double a[3] = { 0 }, b[3] = { 0 }, c[3] = { 0 };
	scanf_s("%lf %lf",& a[0],&  a[1]);
	scanf_s("%lf %lf",& b[0],& b[1]);
	scanf_s("%lf %lf",& c[0],&  c[1]);
	printf("%.2lf",length(a, b, c));

}