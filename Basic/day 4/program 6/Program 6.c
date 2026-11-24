#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z,answer;
	
	printf("Enter value of x :");
	scanf("%d",&x);
	
	printf("Enter value of y :");
	scanf("%d",&y);
	
	printf("Enter value of z :");
	scanf("%d",&z);
	
	answer = (x+y+z) * (x+y+z);
	
	printf("(x+y+z)2 solution is = %d",answer);
}
