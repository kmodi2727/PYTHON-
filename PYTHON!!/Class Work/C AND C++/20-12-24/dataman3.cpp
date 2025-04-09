#include<stdio.h>

main()

{
	FILE*fptr;
	fptr=fopen("test1.txt","r");                         // w for write 
//	fprintf(fptr,"Hello this write method");
    char a[100];
    fgets(a,100,fptr);
	printf("%s",a);            										// a for append
	fclose(fptr);													// r for read
}
