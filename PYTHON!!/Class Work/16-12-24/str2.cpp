#include<stdio.h>
#include<string.h>
main()
{
	char a[10];
	int i;
	int length=0;
	printf("ENTER STRING : ");
	gets(a);
	
	//printf("\nlength of string : %d",strlen(a));
	// k a r a n '0'
	//0 1 2 3 4
	for (i=0;a[i]!='\0';i++)
	{
		length++;
	}
	printf("\nlength of string is : %d",length);
}
