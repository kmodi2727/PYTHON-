#include<stdio.h>
kbm3()
{
	int a;
	printf("ENTER YOUR NUMBER : ");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("your number is zero");
	}
	else if (a%2==0)
	{
		printf("your number is even");
	}
	else 
	{
		printf("your number is odd");
	}
}
main ()
{
	printf("%d",kbm3());
}
