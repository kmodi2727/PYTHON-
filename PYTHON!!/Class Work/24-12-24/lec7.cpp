//multiple inheritance 
// A      B   
//     |   
//     C

// HIERARCHI
//     A     
//     |     
// B       C 

#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"hello"<<endl;
		}
};
class B{
	public:
		myfun2()
		{
			cout<<"world"<<endl;
		}
};
class C:public A,public B{
	public :
	myfun3()
	{
		cout<<"woooow"<<endl;
	}
};
main()
{
	C obj;
	obj.myfun();
	obj.myfun2();
	obj.myfun3();
}
