#include<stdio.h>
main()
{
	int n;
	printf("ENTER AGE : ");
	scanf("%d",&n);
	if(n>100)

{
 printf("invalid age");

}
else if (n>=18)
{
	printf("eligible for voting");
}
else 
{
	printf("not eligible for voting");
}
}
