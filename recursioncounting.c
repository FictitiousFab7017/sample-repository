#include <stdio.h>

void counting(int x)
{
    if (x<1)
    return ;
    else
    {
        counting(x-1);
        printf("%d", x);
    }
}

void main()
{
    counting(9);
}