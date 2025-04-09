//constructor : it is special method that call itself when object is created 
//it has 3 types 
//1)default constructor 
//2)parameterized
//3)copy constructor

#include<iostream>
using namespace std;

class myclass{
	public :
    myclass()               //constructor 
    {
    	cout<<"HELLO THIS IS CONSTRUCTOR CLASS"<<endl;
	}
	myfun1()                 //method
	{
		cout<<"HELLO!!!"<<endl;
	}
};
main()
{
	myclass obj;
	obj.myfun1(); 
}

