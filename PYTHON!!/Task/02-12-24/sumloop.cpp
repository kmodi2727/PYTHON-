#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("ENTER YOUR NUMBER : ");
	scanf("%d,",&n);
    while(i<=n)
	{
		sum=sum+i;
		i=i+1;
		
		}	
	printf("SUM OF NUMBER IS : %d",sum);
	
}
