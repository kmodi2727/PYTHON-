#include<stdio.h>
main()
{
	int a[2][3]={{20,30,40},{60,70,80}};
	
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
}
