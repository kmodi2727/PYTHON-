#include<stdio.h>
main()
{
	int n,i=1,sum=1;
	printf("ENTER YOUR NUMBER : ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of number is : %d",sum);
}
