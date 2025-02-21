#include<stdio.h>
union kar1{
	int a[8];
	int i;
	int j;
	int temp;
}u1,u2,u3,u4;
main()
{
	for(u2.i=0;u2.i<5;u2.i++)
	{
		printf("ENTER YOUR NUMBER : ");
		scanf("%d",&u1.a[u2.i]);
	}
	for(u2.i=0;u2.i<5;u2.i++)
	{
    	for(u3.j=u2.i+1;u3.j<5;u3.j++)
		{
			if(u1.a[u2.i]>u1.a[u3.j])
			{
				u4.temp=u1.a[u2.i];
				u1.a[u2.i]=u1.a[u3.j];
				u1.a[u3.j]=u4.temp;
			}
		}
	}
	for(u2.i=0;u2.i<5;u2.i++)
	{
		printf("\nASSC NUMBER ARE :%d",u1.a[u2.i]);
	}
};
