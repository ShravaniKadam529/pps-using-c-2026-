#include <stdio.h>
int main()
{
    int l , b , area , perimeter;
    printf("Enter the value of length : \t");
    scanf("%d" , &l);

    printf("Enter the value of breadth : \t");
    scanf("%d" , &b);

    area = l * b;
    printf(" area of  rectangle of %d and %d is : %d \t" , &l , b, area);
   

    perimeter = 2 * (l+b);
    printf("\n perimeter of  rectangle of %d and %d is : %d" , &l , b , perimeter);
   

    return 0;
}