#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	printf("ENTER STRING 1: ");
	gets(a);
	printf("ENTER STRING 2: ");
	gets(b);
	
	strcat(a,b);
	
	printf("MERGED STRING IS : %s",a);
	
}
