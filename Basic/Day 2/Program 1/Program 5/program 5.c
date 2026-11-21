#include<stdio.h>
#include<conio.h>

void main()
{
	// WAP to second to hh:mm:ss
	
	int second;
	int hours;
	int minutes;
	int secs;
	
	printf("Enter second : ");
	scanf("%d",&second);
	
	 hours = second/3600;
	 minutes = (second%3600)/60;
	 secs = second%60;
	
	printf("%02d:%02d:%02d\n",hours,minutes,secs);
	
	
}
