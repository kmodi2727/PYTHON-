#include<stdio.h>
main()
{
	int n;
	int i=1,ev=0,evsum=0,odd=0,oddsum=0;
	while(i<=7)
	{
		printf("\nENTER YOUR NUMBER %d : ",i);\
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
	printf("\nYOUR EVEN COUNT IS : %d",ev);
	printf("\nYOUR ODD COUNT IS : %d",odd);
	printf("\nYOUR EVEN SUM IS : %d",evsum);
	printf("\nYOUR ODD SUM IS : %d",oddsum);
}
