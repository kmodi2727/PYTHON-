#include<stdio.h>
main()
{
	int a;
	printf("enter your number:");
	scanf("%d",&a);
	if (a==0)
	{
		printf("zero is not negative or positve");
		
	}
	else if (a>0)
	{
		printf("number is positive");
	}
	else 
	{
		printf("number is negative");
	}
}
