#include<iostream>
using namespace std;

class K{
	public : 
	K(int a,int b)
	{
		cout<<"THIS IS CONS METHOD"<<endl;
		cout<<a+b<<endl;
		cout<<a-b<<endl;
		cout<<a/b<<endl;
	}
	~K()
	{
		cout<<"THIS IS DES METHOD"<<endl;
	}
};
main()
{
	K obj(100000,2000000);
}
