#include <stdio.h>
fun7(int n)
{
	int sum=0,i;

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
	printf("%d",fun7(20));
}
