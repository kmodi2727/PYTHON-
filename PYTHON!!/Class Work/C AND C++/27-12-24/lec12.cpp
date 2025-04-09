//encapsulation
//Data binding into single entity it is called encapsulation
//getter
//better 
//pointer: store the address of other variable
//  e.g. class 
#include<iostream>
using namespace std;

class Encaps{
	public : 
	int a,b;
	getter(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	setter()
	{
		cout<<"A : "<<this->a<<endl;
		cout<<"B : "<<this->b<<endl;
	}
};
main()
{
	Encaps obj;
	obj.getter(10,20);
	obj.setter();
}
