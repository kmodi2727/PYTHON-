#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)             //row
	{
		for (j=1;j<=i;j++)         //column
		{
			printf("*");
		}
		printf("\n");             //new line 
		}          
	}
