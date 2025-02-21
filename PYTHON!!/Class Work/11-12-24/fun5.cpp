#include <stdio.h>
fun5()
{
	int n,sum=0,i;
	printf("ENTER NUMBER : ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
	
}
main()
{
	//int result = fun5();
	//printf("%d",result);
 	printf("%d",fun5());
}
