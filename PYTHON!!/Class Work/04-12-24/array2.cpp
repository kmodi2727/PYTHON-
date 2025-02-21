#include<stdio.h>
main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nENTER ELEMENTS : ");
		scanf("%d",&a[i]);
	 } 
	for(i=0;i<5;i++)
	{
		printf("\nyour Array elements are :%d",a[i]);
	}
}
