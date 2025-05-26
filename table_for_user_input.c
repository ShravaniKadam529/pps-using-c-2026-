#include <stdio.h>
int main ()
{
    int i , x, table;

    printf("Table of x:");
    scanf("%d" , &x);

    for (i = 1; i<= 10; i++)
    {
        table = (x * i);
        printf("%d\n" , table);
    }



    return 0;
}