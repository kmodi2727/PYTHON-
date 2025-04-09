#include<stdio.h>
#include<string.h>
main()
{
	        int i;
            char a[10],b[10];
			printf("ENTER NUMBER 1 : ");
			gets(a);
		
			for(i=0;a[i]!='\0';i++)
			{
				b[i]=a[i];
			}
			b[i]='\0';
		
			printf("String copy is : %s",b);
		}
		
