#include<stdio.h>

int recursion (int a, int b)
{
    if (b==1)
    return a;
    else 
    return a*recursion(a, b-1);
}

int main()
{
    int result;
    result = recursion (5, 3);
    printf("%d", result);


    return result;


}