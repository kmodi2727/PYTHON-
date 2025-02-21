#include<iostream>
using namespace std;
class A{
	public :
		A()
		{
			cout<<"THIS IS CONSTRUCTOR METHOD"<<endl;
		}
		pat1()
		{
			int i,j;
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout<<"*";
				}
				cout<<"\n";
			}
		}
		~A()                         //destructor 
		{
			cout<<"THIS IS DESTRUCTOR METHOD"<<endl;
		}
};
main()
{
	A obj;
	obj.pat1();
}
