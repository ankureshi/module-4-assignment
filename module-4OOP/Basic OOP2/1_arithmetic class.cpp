#include<iostream>
using namespace std;
class cal
{
	public:
	int a,b,ch;
	void sum()
	{
		cout<<"enter num 1 and num 2";
		cin>>a>>b;
	}
	void print()
	{
		cout<<"\nsum of and b is"<<a+b;
		cout<<"\nsub of and b is"<<a-b;
		cout<<"\nmul of and b is"<<a*b;
		cout<<"\ndiv of and b is"<<a/b;
		
	}
};
main()
{
	cal cl;
	cl.sum();
	cl.print();
}
