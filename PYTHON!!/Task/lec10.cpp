//method overloading

#include<iostream>
using namespace std;

class A{
	public :
		gun(int a)
		{
			cout<<"HIIIIIII!!!"<<endl;
		}
		gun(int a,int b)
		{
			cout<<"HELOOOOOO!!!"<<endl;
		}
		gun(string a)
		{
			cout<<"HOPE YOUR DAY WAS GOOD!!!"<<endl;
		}
		gun()
		{
			cout<<"OKAYYYYYYY!!!"<<endl;
		}
};
main()
{
	A obj;
	obj.gun(10);
	obj.gun(10,20);
	obj.gun("hii");
	obj.gun();
}
