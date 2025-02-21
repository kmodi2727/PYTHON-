#include<iostream>
using namespace std;
main()
{
	int a[4][3];
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"ENTER YOUR NUMBER : ";
			cin>>a[i][j];
		}
		
	}
	for (i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
}
