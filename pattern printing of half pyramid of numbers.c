#include <stdio.h>
int main()
{
	int rows =4 ,i , j , k , number = 1;
	
	for(i =1;i<=rows;i++)
	{
		for(k=1; k<=rows-i;k++);
		{
		  	printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d " ,number);
			number++;
		}
		printf("\n");
	}
	
	return 0;
}
