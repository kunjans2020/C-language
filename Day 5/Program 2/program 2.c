#include<stdio.h>
#include<conio.h>

void main()
{
	int number;
	
	printf("Enter the number: ",number);
	scanf("%d",&number);
	
	if (number>=1)
	{
		printf("The number is positive: ");
	}
	else if (number<0)
	{
		printf("The number is negetive: ");
	}
	else if (number==0)
	{
		printf("The number is netural: ");
	}
}
