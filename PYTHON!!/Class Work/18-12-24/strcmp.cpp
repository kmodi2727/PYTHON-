#include<stdio.h>
#include<string.h>
main()
{
	char a[10],b[10];
	printf("ENTER YOUR NUMBER 1: ");
	gets(a);
	printf("ENTER YOUR NUMBER 2: ");
	gets(b);
	
	int result=	strcmp(a,b);
	printf("BIGGEST NUMBER IS : %d",result);
}
