#include<stdio.h>

int sum_digits (int b)
{
    if (b<10)
    return b;
    else
    return b%10 + sum_digits(b/10);
}

int main()
{
    int x;
    x = sum_digits(12345);
    printf("%d", x);
    return x;

}