#include <stdio.h>
int main()
{
    int gs , bs, ta , hra;
    printf("Enter the bs of ramesh: \t");
    scanf("%d" , &bs);

    ta = bs * (0.40);
    printf("\nta is %d" , &ta);

    hra = bs * (0.20);
    printf("\nhra is %d" , &hra);

    gs = bs + ta+ hra ;
    printf("\ngs if %d" , &gs);

    return 0;
}