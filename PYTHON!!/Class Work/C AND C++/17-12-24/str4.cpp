#include<stdio.h>
#include<string.h>
main()
{
	char a[10];
	char b[10];
	int i,j;
	printf("enter string 1 : ");
	gets(a);
	printf("enter string 2 : ");
	gets(b);
	
	for(i=0;a[i]!='\0';i++);
	
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("merge the string is : %s",a);
	
}

