//template
#include<iostream>
using namespace std;

template <typename T>
T hello(T x,T y)
{
	if(x>y)
	{
		cout<<"\nVALUE 1 IS GREATEST!!";
	}
	else
	{
		cout<<"\nVALUE 2 IS GREATEST!!";
	}
}
main()
{
	hello<int>(5,6);
	hello<char>('a','e');
}
