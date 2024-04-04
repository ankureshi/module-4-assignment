//Q.8 Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of 
//two number using different parameters and Function Overloading

#include<iostream>
using namespace std;

class calculator
{
	public:
	void cal(int a,int b)
	{
		cout<<"\nSum of a and b is :"<<a+b;
	}
	void cal(float a,float b)
	{
		cout<<"\nSub of a and b is :"<<a-b;
	}
	void cal(double a,double b)
	{
		cout<<"\nmul of a and b is :"<<a*b;
	}
	void cal(double a,int b)
	{
		cout<<"\ndiv of a and b is :"<<a/b;
	}
};
main()
{
	calculator cl;
	cl.cal(40,50);
	cl.cal(50.5,40.3);
	cl.cal(30.02,30.06);
	cl.cal(20.5,4);
}
