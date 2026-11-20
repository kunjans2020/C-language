#include<stdio.h>
#include<conio.h>

void main()
{
	// WAP to convert temprature Celcuis to Ferhenhight
	
	int celcuis;
	
	printf("Enter temprature in celcuis: ");
	scanf("%d",&celcuis);
	
	float f = (celcuis * 9/5) + 32;
	
	printf("f = %f",f);
	
	
}
