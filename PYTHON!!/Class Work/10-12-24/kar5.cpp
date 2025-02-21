#include<stdio.h>
kar5(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
}
main()
{
	int n;
	printf("ENTER YOUR NUMBER : ");
	scanf("%d",&n);
	kar5(n);
}
