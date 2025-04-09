#include<stdio.h>
main()
{
	int i,n,prime=0;
	printf("enter a number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			prime++;
		}
	}
	if (prime==2)
	{
		printf("enter number is prime number : %d",n);
		
	}
	else 
	{
		printf("entered number is not prime number : %d",n);
	}
}
