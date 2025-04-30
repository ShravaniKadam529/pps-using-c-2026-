#include <stdio.h>
int main()
{
    int a , b;
    printf("Enter the value of a : \t");
    scanf("%d" , &a);

    printf("Enter the value of b : \t");
    scanf("%d" , &b);

    if( a > b )
    {
        printf("a is greater than b");
    }
    else if ( a==b)
    {
        printf("a is equal to b");
    }
    else
    {
        printf("b is greater than a");
    }
    return 0;
}