#include<iostream>
using namespace std;
class pattern{
	public : 
	pattern()
	{
	for(int i=1;i<=5;i++)
	{
		for(int k=1;k<=5-i;k++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<" *";
		}
		cout<< endl;
	}
	}
};
class B{
	public : 
	B()
	{
	int a[];
	{
		cout<<"ENTER ELEMENTS : ";
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
		}
		cout<<"\nELEMENTS ARE : ";
		for (int i=0;i<5;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
};
class C{
	public : 
	karan()
	{
		int i,n,prime=0;
		
	for(i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			prime++;
		}
	}
	if (prime==2)
	{
		cout<<"enter number is prime number : ",n;
		
	}
	else 
	{
		cout<<"entered number is not prime number : ",n;
	}
}
};
main()
{
	pattern obj;
	obj.kmodi();
	obj1.karan();
}
