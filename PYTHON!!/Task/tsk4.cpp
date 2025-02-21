#include<stdio.h>
main()
{
	int i;
	printf("PLEASE ENTER YOUR AGE : ");
	scanf("%d",&i);
	
	if(i>=18)
	{
		printf("YOUR ARE ELGIBLE FOR VOTING!!");
	}
	else
	{
		printf("YOUR ARE NOT ELGIBLE FOR VOTING!!");
	}
}
