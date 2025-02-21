#include<iostream>
using namespace std;

class A{
	public :
		gun1()
		{
			cout<<"THIS IS BIG FUNCTION"<<endl;
		}
};
class B:public A{
	public :
		gun2()
		{
			cout<<"THIS IS SMALL FUNCTION"<<endl;
		}
};
main()
{
	B obj;
	obj.gun1();
	obj.gun2();
}
