#include<stdio.h>
main()
{
	int a,b;                 // data members
	
	printf("enter number 1: ");
	scanf("%d",&a);
	printf("enter number 2: ");
	scanf("%d",&b);
	
	printf(" a: %d",a);
	printf("\n b: %d",b);
	
	printf("\n addition : %d",a+b);
	printf("\n subtraction : %d",a-b);
	printf("\n division : %.2f",(float)a/b);
	printf("\n multiply :%d",a*b);
}
