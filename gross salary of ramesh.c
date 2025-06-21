#include<stdio.h>
int main()
{
	float basic_salary, da , hra , gross_salary;
	
	printf("Enter thr basic salary of Ramesh:  \n");
	scanf("%f",&basic_salary);
	
	da = basic_salary*0.20;
	hra = basic_salary*0.40;
	gross_salary= basic_salary + da + hra;
	printf("house allowance of  ramesh is: %.2f\n" , hra);
	printf("Dearnance allowance of ramesh is: %.2f\n" , da);
	
	printf("Gross salary of ramesh is: %.2f\n" , gross_salary);
	
	return 0;
}
