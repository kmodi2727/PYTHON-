//abstraction : data hiding 
#include<iostream>
using namespace std;

class employer{
	public : 
	virtual salary()=0;             //pure virtual function
};
class karan : public employer{
	public : 
	salary()
	{
		cout<<"karan got 35k"<<endl;
	}
};
class bhumika : public employer{
	public : 
	salary()
	{
		cout<<"bhumika got 30k"<<endl;
	}
};
class hiren : public employer{
	public : 
	salary()
	{
		cout<<"hiren got 25k"<<endl;
	}
};
main()
{
	karan obj;
	obj.salary();
	bhumika obj1;
	obj1.salary();
	hiren obj2;
	obj2.salary();
}
