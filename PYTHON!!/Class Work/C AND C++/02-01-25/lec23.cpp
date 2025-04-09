#include<iostream>
using namespace std;

template <typename K>
K cello(K n1,K n2,K n3)
{
	if (n1>n2)
	{
		if(n1>n2)
		{
			cout<<"n1 is greatest"<<endl;
		}
		else
		{
			cout<<"n3 is greatest"<<endl;
		}
	}
	else
	{
		if(n2>n3)
		{
			cout<<"n2 is greatest"<<endl;
		}
		else
		{
			cout<<"n3 is greatest"<<endl;
		}
	}
}
main()
{
	cello<int>(20,25,19);
}
