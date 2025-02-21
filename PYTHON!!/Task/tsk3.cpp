#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("\nPLEASE ENTER YOUR NUMBER 1 : ",n1);
	scanf("%d",&n1);
	printf("\nPLEASE ENTER YOUR NUMBER 2 : ",n2);
	scanf("%d",&n2);
	printf("\nPLEASE ENTER YOUR NUMBER 3 : ",n3);
	scanf("%d",&n3);
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("%d IS BIGGEST",n1);
		}
		else
		{
			printf("%d IS BIGGEST",n3);
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("%d IS GREATEST",n2);
		}
		else
		{
			printf("%d IS GREATEST",n3);
		}
	}
}
