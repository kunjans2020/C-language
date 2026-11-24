#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	int y;
	int answer;
	
	printf("Enter value of x :");
	scanf("%d",&x);
	
	printf("Enter value of y :");
	scanf("%d",&y);
	
	answer = (x-y) * (x-y) * (x-y);
	
	printf("(x-y)3 solution is = %d",answer);
}
