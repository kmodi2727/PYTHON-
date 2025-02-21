#include<iostream>

using namespace std;
class lecclass
{
	
		public:
			int a,b;
			myfun()
			{
				cout<<"ENTER NUMBER 1 : ";
				cin>>a;
				cout<<"ENTER NUMBER 2 : ";
				cin>>b;
				cout<<"ADDITION OF TWO NUMBERS IS : "<<a+b<<endl;
			}
			myfun1()
			{
				cout<<"ENTER NUMBER 1 : ";
				cin>>a;
				cout<<"ENTER NUMBER 2 : ";
				cin>>b;
				cout<<"MULTIPLICATION OF TWO NUMBERS IS : "<<a*b<<endl;
			}
			myfun2()
			{
				cout<<"ENTER NUMBER 1 : ";
				cin>>a;
				cout<<"ENTER NUMBER 2 : ";
				cin>>b;
				cout<<"SUBSTRACTION OF TWO NUMBERS IS : "<<a-b<<endl;
			}
	};
	main()
	{
		lecclass obj;
		obj.myfun();
		obj.myfun1();
		obj.myfun2();
	}



	
	

