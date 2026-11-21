#include<stdio.h>
#include<conio.h>

void main()
{
	// WAP to convert meter into km
	
	int meter;
	
	printf("Enter meter value: ");
	scanf("%d",&meter);
	
	float km = meter/1000;
	
	printf("Kilometer = %f",km);
}
