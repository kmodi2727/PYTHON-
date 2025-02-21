//abstraction : data hiding 
#include<iostream>
using namespace std;

class vehicle{
	public : 
	virtual tyre()=0;             //pure virtual function
};
class truck : public vehicle{
	public : 
	tyre()
	{
		cout<<"Truck has 6 wheels"<<endl;
		cout<<"Truck has red colour"<<endl;
	}
};
class car : public vehicle{
	public : 
	tyre()
	{
		cout<<"Car has 4 wheels"<<endl;
		cout<<"Car has blue colour"<<endl;
	}
};
class access125 : public vehicle{
	public : 
	tyre()
	{
		cout<<"Access125 has 2 wheels"<<endl;
		cout<<"Access125 has black colour"<<endl;
	}
};
main()
{
	truck obj;
	obj.tyre();
	car obj1;
	obj1.tyre();
	access125 obj2;
	obj2.tyre();
}
