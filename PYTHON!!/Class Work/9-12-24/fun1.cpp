#include<stdio.h>           //function
karan1()                    //defination
{
	int n,i,prime=0;
	printf("ENTER NUMBER : ");
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
		printf("%d is prime",n);
	}
	else 
	{
		printf("%d is not prime ",n);
	}
}
main()
{
	karan1();                 //calling
}
