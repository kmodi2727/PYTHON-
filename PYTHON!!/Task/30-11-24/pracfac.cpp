#include<stdio.h>
main()
{
	int n,i=1,fac=1;
	printf("ENTER YOUR NUMBER : ");
	scanf("%d",&n);
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}
	printf("sum of number is : %d",fac);
}
