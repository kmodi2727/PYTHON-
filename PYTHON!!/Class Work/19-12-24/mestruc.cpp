#include<stdio.h>
struct mestruc{
	int a[5];
	int i,j,temp;}
	s1;
	main()
	{
		struct mestruc s1;
	for(s1.i=0;s1.i<5;s1.i++)
	{
		printf("ENTER YOUR NUMBER : ");
		scanf("%d",&s1.a[s1.i]);
	}
	for(s1.i=0;s1.i<5;s1.i++)
	{
		for(s1.j=s1.i+1;s1.j<5;s1.j++)
		{
			if(s1.a[s1.i]>s1.a[s1.j])
			{
				s1.temp=s1.a[s1.i];
				s1.a[s1.i]=s1.a[s1.j];
				s1.a[s1.j]=s1.temp;
			}
		}
	}
	for(s1.i=0;s1.i<5;s1.i++)
	{
		printf("\nASSC NUMBER ARE :%d",s1.a[s1.i]);
	}
}
