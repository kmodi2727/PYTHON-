#include<stdio.h>

main()

{
	FILE*fptr;
	fptr=fopen("test1.txt","w");                         // w for write 
	fprintf(fptr,"Hello this write method");
    //fgets(a,100,fptr);
	//printf("%s",a);            										// a for append
	fclose(fptr);													// r for read
}
