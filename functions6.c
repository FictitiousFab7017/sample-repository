#include<stdio.h>
double mul (double, double);
void main()
{
    double x = 10.2, y = 12.8, z;
    z = mul(x, y);
    printf("%lf", z);
}

double mul(double a, double b)
{
    return a*b;
}