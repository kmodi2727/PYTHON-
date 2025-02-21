#include<iostream>
using namespace std;
class A {
	public :
	int ch; 
	food1()
	{
		cout<<"\nPRESS 1 FOR PIZZA!!   :180"<<endl;
		cout<<"\nPRESS 2 FOR BURGER!!  :100"<<endl;
		cout<<"\nPRESS 3 FOR DOSA!!    :120"<<endl;
		cout<<"\nPRESS 4 FOR IDLI      :50"<<endl;
		
		cin>>ch;
	}
};
class B : public A{
	public :
		int chem;
		food2()
		{
			
			cout<<"PLEASE ENTER TO CHOOSE"<<endl;
			cin>>chem;
		}
};
class C : public B{
	public :
		int cum;
		food3()
		{
			cout<<"YOU HAVE SELECTED"<<chem<<endl;;
			cin>>cum;
		}
};
class D : public C{
	public :
		int type;
		food4()
		{
			
			cout<<"PLEASE SELECT QUANTITY : "<<endl;
			cin>>type;
		}
};
class E : public D{
	public :
		int price;
		food5()
		{
		if (type==1)
		{
			price=180;
		}
		else if (type==2)
		{
			price=100;
		}
		else if(type ==3)
		{
			price=120;
		}
		else 
		{
			price=50;
		}
	
		cout<<"YOUR TOTAL BILL IS : "<<ch*price<<endl;
	}
};
main()
{
D obj;
obj.food1();
obj.food2();
obj.food3();
obj.food4();
}
