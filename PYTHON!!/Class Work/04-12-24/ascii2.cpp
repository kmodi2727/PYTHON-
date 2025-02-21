#include<stdio.h>
main()
{
	int i,j,n;
	for(i=1;i<=5;i++)
	{
		n=69;
		for(j=1;j<=i;j++)
		{
			printf("%c",n);
			n++;
		}
		printf("\n");
	}
}
