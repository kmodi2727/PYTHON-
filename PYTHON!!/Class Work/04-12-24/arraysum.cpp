#include<stdio.h>
main()
{
	int a[5];
	int i,sum=0;
	for (i=0;i<5;i++)
	{
		printf("ENTER YOUR ELEMENTS : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("SUM OF ARRAY IS : %d",sum);
}
