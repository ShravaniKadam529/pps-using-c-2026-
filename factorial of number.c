#include<stdio.h>
int main()
{
	int num , fact =1 , i =1;
	printf("Enter the number to find its factorial: ");
	scanf("%d",&num);
	while(i<=num)
	{
		fact*=i;
		i++;
	}
	printf("Factorial of %d is: %d" , num,fact);
	return 0;
}
