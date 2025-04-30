#include <stdio.h>
int main()
{
    int num1 , num2 , avg;

    printf("Enter first number : \t");
    scanf("%d" , &num1);

    printf("Enter second number : \t");
    scanf("%d" , &num2);

   avg = (num1 + num2)/2;

    printf("avg of %d and %d is %d " , &num1 , num2 , avg);

    return 0;
    
}