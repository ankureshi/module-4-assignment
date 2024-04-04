//7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
#include<iostream>
using namespace std;
class base
{
	private:
	int a;
	public:
	void input()
	{
		cout<<"Enter value of base class :";
		cin>>a;		
	}
	void show()
	{
		cout<<"\nvalue of a is "<<a;
	}	
};
class derive1 : public base
{	private:
	int b;
	public:
	void input1()
	{
		cout<<"\nEnter value of derive class :";
		cin>>b;		
	}
	void show1()
	{
		cout<<"\nvalue of b is "<<b;
	}	
	
};
class derive2 : public derive1
{	private:
	int c;
	public:
	void input2()
	{
		cout<<"\nEnter value of derive2 class :";
		cin>>c;		
	}
	void show2()
	{
		cout<<"\nvalue of c is "<<c;
	}	
	
};
main()
{
	base bs;
	bs.input();
	bs.show();
	
	derive1 dr;
	dr.input1();
	dr.show1();
	
	derive2 d2;
	d2.input2();
	d2.show2();
	
}

