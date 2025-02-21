#include<stdio.h>

main()

{
	FILE*fptr;
	fptr=fopen("test2.txt","a");                         // w for write 
	fprintf(fptr,"\nHello this append method");
    //fgets(a,100,fptr);
	//printf("%s",a);            										// a for append
	fclose(fptr);													// r for read
}
