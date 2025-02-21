#include<stdio.h>
#include<string.h>
main()
{
	while(1)                       //infinite loop
	{
		printf("\nPRESS 1 FOR STRING COPY");
		printf("\nPRESS 2 FOR STRING LENGTH");
		printf("\nPRESS 3 FOR STRING CONCAT");
		
		int ch;
		
		printf("\nENTER YOUR CHOICE : ");
		scanf("%d",&ch);
		fflush(stdin);
		
		if(ch==1)
		{
			char a[10],b[10];
			int i;
			printf("ENTER NUMBER 1 : ");
			gets(a);
		
			for(i=0;a[i]!='\0';i++)
			{
				b[i]=a[i];
			}
			b[i]='\0';
		
			printf("String copy is : %s",b);
		}
		else if(ch==2)
		{
			char a[10];
			int i,len=0;
			printf("ENTER YOUR NAME : ");
			gets(a);
			fflush(stdin);
			for (i=0;a[i]!='\0';i++)
			{
				len++;
			}
			printf("LENGTH OF YOUR NAME IS : %d",len);
		}
		else if(ch==3)
		{
			char a[10];
			char b[10];
			int i,j;
			printf("ENTER STRING 1 : ");
			gets(a);
			fflush(stdin);
			printf("ENTER STRING 2 : ");
			gets(b);
			fflush(stdin);
			for(i=0;a[i]!='\0';i++);
			for(j=0;b[j]!='\0';j++)
			{
				a[i]=b[j];
				i++;
			}
			a[i]='\0';
			printf("MERGE STRING IS : %s",a);
		}
	}
}
