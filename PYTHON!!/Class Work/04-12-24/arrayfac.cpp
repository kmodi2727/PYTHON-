#include<stdio.h>
main()
{
	int a[5];
	int i,fac=1;
	for (i=0;i<5;i++)
	{
		printf("ENTER YOUR ELEMENTS : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		fac=fac*a[i];
	}
	printf("fac OF ARRAY IS : %d",fac);
}
