//inheritance :
// when one class derived the properties into another class another class inheritance 
// it has five types 
//1)single level
//2)multilevel
//3)multiple 
//4)hierarchi 
//5)hybrid

//1)single 
// A(parent,base,root)
// |
//B(child,sub-class.derieved)

#include<iostream>
using namespace std;

class a{
	public:
		fun1()
		{
			cout<<"THIS IS PARENT CLASS"<<endl;
		}
};

class b : public a{
	public :
		fun2()
		{
			cout<<"THIS IS CHILD CLASS"<<endl;
		}
};
main()
{
	b obj;
	obj.fun1();
	obj.fun2();
}






