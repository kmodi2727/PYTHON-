#include <stdio.h>
fun6()
{
	int n,fac=1,i;
	printf("ENTER NUMBER : ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
	
}
main()
{
	//int result = fun5();
	//printf("%d",result);
	printf("%d",fun6());
}
