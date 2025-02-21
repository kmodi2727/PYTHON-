//string : collection of characters 
// built in methods : 1)length

#include<stdio.h>
#include<string.h>
main()
{
	char a[5];
	
	printf("ENTER STRING : ");
	gets(a);
	
	printf("%s",a);
	
	printf("\nlength of string is : %d",strlen(a));
}
