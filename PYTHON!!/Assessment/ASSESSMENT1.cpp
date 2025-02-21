#include<iostream>
using namespace std;
class A{
	public: 
		multiplex()
		{
			cout<<"\nPRESS 1 FOR PIZZA      PRICE=180"<<endl;
			cout<<"\nPRESS 2 FOR BURGER     PRICE=100"<<endl;
			cout<<"\nPRESS 3 FOR DOSA       PRICE=120"<<endl;
			cout<<"\nPRESS 4 FOR IDLI       PRICE=50"<<endl;
			int ch;
			cin>>ch;
		}
};

class B : public A{
	public :
		fun2()
		{
			int seat,price=0;
			cout<<"PLEASE ENTER TO CHOOSE !!"<<endl;			
			cin>>seat;
			cout<<"\nENTER QUANTITY : "<<endl;
			cin>>price;
			if (seat==1)
			{
				price=180;
			}
			else if(seat==2)
			{
				price=100;
			}
			else if(seat==3)
			{
				price=120;
			}
			else
			{
				price=50;
			}
			
				cout<<"TOTAL YOUR BILL IS : "<<(seat*price)<<endl;
		}
};
class C:public B{
public :
	fun3()
	{
		cout<<"DO YOU WANT TO PLACE MORE ORDERS ??"<<endl;
		int ord;
		cin>>ord;
	}
};

		

main()
{
	C obj;
	obj.multiplex();
	obj.fun2();
	obj.fun3();
}
