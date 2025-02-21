#include<stdio.h>
#include<string.h>
main()
{
	char a[10];
	int temp;
	printf("ENTER STRING : ");
	gets(a);
	int i; 
	          //printf("reverse string is : %s",strrev(a));
	int len = strlen(a);
	//heloo //ooleh
	
	
	for(i=0;i<len/2;i++)
	{
		temp=a[i];
		a[i]=a[len-i-1];
		a[len-i-1]=temp;
	}
	printf("REVERSE STRING IS :%s",a);
}
