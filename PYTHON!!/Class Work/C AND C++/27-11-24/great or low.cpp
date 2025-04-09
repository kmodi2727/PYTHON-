#include<stdio.h>
main()
{
	int a,b;
	printf("enter your number a :");
	scanf("%d",&a);
	printf("enter your number b :");
	scanf("%d",&b);
	if (a==b)
	{
		printf("number a and b is same");
		
	}
	else if (a>b)
	{
		printf("number a is bigger");
	}
	else 
	{
		printf("number b is bigger");
	}
}
