# include<stdio.h>
# include<conio.h>

void main()
{
	// Swaping using third varaible
	
	int a = 10;
	int b = 20;
	int c = a;
	
	a = b;
	b = c;
	
	printf("Swaping using third varaible\n\n");
	printf("a = %d",a);
	printf("\n");
	printf("b = %d",b);
	
	printf("\n\n");
	
	// swaping of two varaible without using third varaible

    int d = 10;
    int e = 20;

    d = d + e;// 10 + 20 = 30
    e = d - e;// 30 - 20 = 10
    d = d - e;// 30 - 10 = 20
    
    printf("Swaping of two varaible without using third varaible\n\n");
    printf("d = %d",d);
    printf("\n");
    printf("e = %d",e);
    
    printf("\n\n");
    
    // Swaping of two varaible without using third variable and without using + and -
    
    int f = 10;
    int g = 20;
    
    f = f * g;// 10 * 20 = 200
    g = f / g;// 200 / 20 = 10
    f = f / g;// 200 / 10 = 20
    
    printf("Swaping of two varaible without using third variable and without using + and -\n\n");
    printf("f = %d",f);
    printf("\n");
    printf("g = %d",g);
    
}
