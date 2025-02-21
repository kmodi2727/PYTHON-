#include<stdio.h>
struct mystructure{
	int a[5];
	int i;
}s1;

main()
{
	struct mystructure s1;
//	printf("ENTER NUMBER 1 : ");
//	scanf("%d",&s1.a);
//	
	for(s1.i=0;s1.i<5;s1.i++)
	{
		printf("ENTER ELEMENTS : ");
		scanf("%d",&s1.a[s1.i]);
	 } 
	 for(s1.i=0;s1.i<5;s1.i++)
	 {
	 	printf("\nELEMENTS ARE : %d",s1.a[s1.i]);
	 }
}
