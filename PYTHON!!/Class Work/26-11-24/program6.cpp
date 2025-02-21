#include<stdio.h>     // 3 variables
main()
{
	int a,b,temp;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	                           //a=50,b=80
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping a : %d",a);
	printf("\nafter swapping b : %d",b);
}
