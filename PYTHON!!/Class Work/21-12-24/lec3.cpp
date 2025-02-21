#include<iostream>
using namespace std;
main()
{
	int a[2][3];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"ENTER YOUR ELEMENTS : ";
			cin>>a[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	
	
	
}
