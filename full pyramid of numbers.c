#include<stdio.h>
int main()
{
	int totalnumberrows =4,i,space,j , num;
	for(i=1;i<=totalnumberrows;i++);
	{
		for(i=1;space<= (totalnumberrows-i);space++)
		{
			printf(" ");
		}
		for(j=1;j<=((2*i) - 1) ; j++)
		{
			printf("%d" , num);
		}
		printf("\n");
	}
	return 0;
}
