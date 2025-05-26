#include <stdio.h>
int main ()
{
    int i , x , fact;
    printf("The factorial of number is:");
    scanf("%d" , &x);

    for(i=1; i <= x; i++)
    {
        fact = i * fact;
    }
    
    printf("factorial of %d is: %d" , fact , x);

    return 0;
}