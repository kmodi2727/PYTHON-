#include<iostream>
using namespace std;

class Bank{
	public : 
	string name;
	int ac_no,bal=5000,de,we;
	register1()
	{
		cout<<"PLEASE ENTER YOUR NAME : ";
		cin>>name;
		cout<<"PLEASE ENTER YOUR ACC NUMBER : ";
		cin>>ac_no;
		
		cout<<"YOUR INITIAL BALANCE DEPOSIT IS : "<<bal<<endl;
		cout<<"BANK ACCOUNT OPENED SUCCESSFULLY!!"<<endl;
		
		this->bal=bal;
		this->name=name;
	}
	deposit()
	{
		cout<<"ENTER AMOUNT FOR DEPOSIT : ";
		cin>>de;
		cout<<"YOUR DEPOSITED AMOUNT IS : "<<de<<endl;
		
		this->bal=de+this->bal;
	}
	withdrawl()
	{
		cout<<"ENTER AMOUT FOR WITHDRAWL : ";
		cin>>we;
		cout<<"YOUR WITHDRAWL AMOUNT IS : "<<we<<endl;
		
		if(this->bal>we)
		{
			this->bal=this->bal-we;
		 } 
		 else
		 {
		 	cout<<"INSUFFICIENT BALANCE"<<endl;
		 }
	}
	checkbal()
	{
		cout<<this->name<<"YOUR BALANCE IS : "<<this->bal<<endl;
	}
};

main()
{
	Bank obj;
	cout<<"PRESS 1 FOR OPENING A BANK ACCOUNT"<<endl;
	cout<<"PRESS ANY KEY FOR EXIT"<<endl;
	
	int ch;
	cout<<"\nENTER YOUR CHOICE : ";
	cin>>ch;
	
	if(ch==1)
	{
		obj.register1();
		
		while(1)
		{
			cout<<"\nPRESS 1 FOR DEPOSIT"<<endl;
			cout<<"\nPRESS 2 FOR WITHDRAWL"<<endl;
			cout<<"\nPRESS 3 FOR CHECK BALANCE"<<endl;
			cout<<"\nPRESS 4 FOR EXIT"<<endl;
			
			int ch1;
			cout<<"ENTER YOUR CHOICE : ";
			cin>>ch1;
			
			if (ch1==1)
			{
				obj.deposit();
			}
			else if (ch1==2)
			{
				obj.withdrawl();
			}
			else if (ch1==3)
			{
				obj.checkbal();
			}
			else if (ch==4)
			{
				cout<<"THANK YOU!!"<<endl;
				break;
			}
			else
			{
				cout<<"INVALID CHOICE!!"<<endl;
			}
		}
	}
}
