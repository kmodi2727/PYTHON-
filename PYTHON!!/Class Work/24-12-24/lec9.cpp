//types of inheritance 
//hybrid 
#include<iostream>
using namespace std;

class A{
	public : 
	mysun()
	{
		cout<<"I'M LARGEST!!"<<endl;
	}
};
class B : public A{
	public : 
	mysun2()
	{
		cout<<"I'M MEDIUM!!"<<endl;
	}
};
class C {
	public : 
	mysun3()
	{
		cout<<"I'M SMALL!!"<<endl;
	}
};
class D : public B,public C{
	public : 
	mysun4()
	{
		cout<<"I'M EXTRA SMALL"<<endl;
	}
};
main()
{

	D obj;
	obj.mysun();
	obj.mysun2();
	obj.mysun3();
	obj.mysun4();
}



