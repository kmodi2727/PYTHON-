#include<stdio.h>
kbm()
{
	int n,sum=0,i;
	printf("ENTER YOUR NUMBER : ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
main()
{
	printf("%d",kbm());
}
