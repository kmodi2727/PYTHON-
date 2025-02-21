#include<stdio.h>
#include<string.h>
main()
{
	char a[10],b[10];
	
	printf("ENTER STRING 1 : ");
	gets(a);
	
	strcpy(b,a);
	
	printf("copy string is : %s",b);
}
