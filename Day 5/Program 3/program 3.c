#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	
	printf("Enter your age :");
	scanf("%d",&age);
	
	if(age>100)
	{
		printf("Enter valid age !");
	}
	else if(age>=18)
	{
		printf("You are eligble for vote !");
	}
	 else if(age<0)
	{
		printf("Enter valid age !");
	}
	else
	{
		printf("You are not eligble for vote !");
	}
}
