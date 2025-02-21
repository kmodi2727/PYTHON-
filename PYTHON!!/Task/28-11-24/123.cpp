#include<stdio.h>
main()
{
	float a,b;
	printf("ENTER YOU NUMBER : ");
	scanf("%f",&a);
	if (a==0)
	{
		printf("your number is zero");
	}
	else if(a==0.00) 
	{
		printf("your number is in decimal");
	}
	else 
	{
		printf("your number is not in decimal");
	}
}
