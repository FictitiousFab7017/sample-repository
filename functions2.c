#include<stdio.h>
mul (int, int);
void main()
{
    int a = 10, b = 20, c;
    c = mul(a, b);
    printf("%d", c);
}

mul (int x, int y)
{
    return x*y;
}