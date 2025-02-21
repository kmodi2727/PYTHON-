#include<iostream>
using namespace std;
 
class A{
	public : 
	mygun()
	{
		cout<<"HEYY I'M BIGGER THAN ALL OF YOU"<<endl;
	}
};
class B:public A{
	public : 
	mygun2()
	{
		cout<<"HEYY I'M A LITTLE BIT SMALLER"<<endl;
	}
};
class C:public A{
	public :
		mygun3()
		{
			cout<<"HEYY I'M SMALLER THAN ALL OF YOU"<<endl;
		}
};
main()
{
	B obj;
	C obj1;
	obj.mygun();
	obj.mygun2();
	obj1.mygun3();
}
