#include<stdio.h>
kbm2()
{
	int n,fac=1,i;
	printf("ENTER YOUR NUMBER : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
}
main()
{
	printf("%d",kbm2());
}
