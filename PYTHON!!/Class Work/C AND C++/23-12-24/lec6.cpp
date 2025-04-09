#include<iostream>
using namespace std;
class A{
	public: 
		multiplex()
		{
			cout<<"\nPRESS 1 FOR CINEPOLIS!!"<<endl;
			cout<<"\nPRESS 2 FOR ACROPOLIS!!"<<endl;
			cout<<"\nPRESS 3 FOR PVR!!"<<endl;
			cout<<"\nPRESS 4 FOR CITY GOLD!!"<<endl;
			int ch;
			cin>>ch;
		}
};

class B : public A{
	public :
		fun2()
		{
			int seat,number,price=0;
			cout<<"HOW MANY TICKETS YOU WANT !!"<<endl;			
			cin>>number;
			cout<<"WHICH SEAT DO YOU COMFORTABLE WITH !!"<<endl;
			cin>>seat;
			cout<<"\nPRESS 1 FOR PREMIUM : 200$"<<endl;
			cout<<"\nPRESS 2 FOR EXECUITVE : 150$"<<endl;
			cout<<"\nPRESS 3 FOR ECONOMY : 100$"<<endl;
			cin>>number;
			if (seat==1)
			{
				price= 200;
			}
			else if(seat==2)
			{
				price=150;
			}
			else 
			{
				price=100;
			}
			
			
			
				cout<<"TOTAL YOUR BILL IS : "<<(number*price)<<endl;
		}
};


		

main()
{
	B obj;
	obj.multiplex();
	obj.fun2();
}
