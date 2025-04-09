//method overloading
#include<iostream>
using namespace std;

class A{
	public : 
	myfun(int a)
	{
		cout<<"hello"<<endl;
	}
	myfun(int a,int b)
	{
		cout<<"welcome"<<endl;
	}
	myfun(string a)
	{
		cout<<"can you"<<endl;
	}
	myfun()
	{
		cout<<"come"<<endl;
	}
};
main()
{
	A obj;
	obj.myfun(10);
	obj.myfun(10,20);
	obj.myfun("cat");
	obj.myfun();
}
