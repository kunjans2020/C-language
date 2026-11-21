#include<stdio.h>
#include<conio.h>

void main()
{
	// WAP to convert inches into feet
	
	int inches;
	
	printf("Enter inches value: ");
	scanf("%d",&inches);
	
	float feet = inches * 0.0833;
	
	printf(" feet value = %f",feet);
}
