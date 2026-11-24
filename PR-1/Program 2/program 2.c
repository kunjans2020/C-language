#include<stdio.h>
#include<conio.h>

void main()
{
	int baseSalary,hra,da,ta,grossSalary;
	
	printf("Base Salary :");
	scanf("%d",&baseSalary);
	
	printf("HRA :");
	scanf("%d",&hra);
	
	printf("DA :");
	scanf("%d",&da);
	
	printf("TA :");
	scanf("%d",&ta);
	
	grossSalary = baseSalary + (baseSalary * hra/100) + (baseSalary * da/100) + (baseSalary * ta/100);
	
	printf("Gross Salary : %d",grossSalary);
}
