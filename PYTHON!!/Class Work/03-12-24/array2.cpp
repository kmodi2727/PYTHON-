#include<stdio.h>
main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("ENTER ELEMENTS : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nELEMENTS ARE : %d",a[i]);
	}
}
