//method overwriting
#include<iostream>
using namespace std;

class A {
	public :
		mygun()
		{
			cout<<"HEYYY!!!"<<endl;
		}
};
class B : public A{
	public :
		mygun()
		{
			A::mygun();
			cout<<"HIIIII!!!"<<endl;
		}
};
class C: public B{
	public : 
	mygun()
		{
			B::mygun();
			cout<<"HELLOOOOO!!!"<<endl;
	    }
};
main()
{
	C obj;
	obj.mygun();
}
