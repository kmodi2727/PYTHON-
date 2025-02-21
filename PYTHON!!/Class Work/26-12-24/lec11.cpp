//method overwriting
#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"HIIIIIIIIIII !!!"<<endl;
		}
};
class B:public A{
	public:
		myfun()
		{
			A::myfun();
			cout<<"HELOOOOOOOOO"<<endl;
		}
};
class C:public B{
	public:
		myfun()
		{
			B::myfun();
			cout<<"WELCOMEEEEEEE"<<endl;
		}
};

main()
{
	C obj;
	obj.myfun();
}
