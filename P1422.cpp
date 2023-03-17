#include<stdio.h>
int main()
{
    int a = 0;
    double b = 0;
    scanf_s("%d", &a);
    if (a <= 150)
    {
        b = a * 0.4463;
    }
    else if (a >= 151 && a <= 400)
    {
        b += 150 * 0.4463;
        b += (a - 150) * 0.4663;
    }
    else
    {
        b += 150 * 0.4463;
        b += (400 - 150) * 0.4663;
        b += (a - 400) * 0.5663;
    }
    printf("%.1lf", b);
    return 0;
}