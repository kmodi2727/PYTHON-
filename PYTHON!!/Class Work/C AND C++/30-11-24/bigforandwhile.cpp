#include<stdio.h>
main()
{
	int n;
	int i=1,ev=0,evsum=0,odd=0,oddsum=0;
	while(i<=5)
	{
		printf("\nENTER NUMBER %d : ",i);
		scanf("%d",&n);
		if(n%2==0)
		{
			printf("%d is even",n);
			ev++;
			evsum+=n;
		}
		else
		{
			printf("%d is odd",n);
			odd++;
			oddsum+=n;
		}
		i++;
	}
	printf("\nEVEN COUNT IS : %d",ev);
	printf("\nODD COUNT IS : %d",odd);
	printf("\nEVEN SUM IS : %d",evsum);
	printf("\nODD SUM IS : %d",oddsum);
}
