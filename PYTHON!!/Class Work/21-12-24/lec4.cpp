//OOPS
//1)class&objects
//2)inheritance
//3)encapsulation
//4)polymorphism
//5)abstraction

//1)class
//class is a collection data members &member fuction 
//2)object
//object is instance of class through the object we ca access all the properties of class

//access specifiers
//1)public 
//2)private 
//3)protected

#include<iostream>
using namespace std;
class myclass{
	public:
		int a,b;
		myfun()
		{
			cout<<"ENTER A : ";
			cin>>a;
			cout<<"ENTER B : ";
			cin>>b;
			cout<<"ADDITION : "<<a+b<<endl;
			
		}
		myfun1()
		{
			cout<<"ENTER A : ";
			cin>>a;
			cout<<"ENTER B : ";
			cin>>b;
			cout<<"SUBSTRACTION : "<<a-b<<endl;
			
		}
		myfun2()
		{
			cout<<"ENTER A : ";
			cin>>a;
			cout<<"ENTER B : ";
			cin>>b;
			cout<<"MULTIPLY : "<<a*b<<endl;
			
		}
};
main()
{
	myclass obj;           //object creation 
	obj.myfun();
	obj.myfun1();
	obj.myfun2();
}

