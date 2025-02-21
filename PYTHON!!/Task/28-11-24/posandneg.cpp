#include<stdio.h>
main()
{
	int a;
	printf("enter your number : ");
	scanf("%d",&a);
	if(a==0)
	{
		printf("number is zero");
	}
	else if(a>0)
	{
		printf("your number is +ve");
	}
	else 
	{
		printf("your number is -ve");
	}
}
