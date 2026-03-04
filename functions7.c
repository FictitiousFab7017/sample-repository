#include<stdio.h>
void main()
{
    int a = 10, b = 12, c;
    c = mul(a, b);
    printf("%d", c);
}

int mul (int x, int y)
{
    return x*y;
}