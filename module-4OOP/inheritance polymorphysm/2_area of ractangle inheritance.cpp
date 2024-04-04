//2. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class rectangle
{
	public:
	int area,length,width;
	void getdata()
	{
		cout<<"Enter length::";
		cin>>length;
		cout<<"Enter width::";
		cin>>width;
	}
};
class data: public rectangle
{
	public:
	void display()
	{
	
		cout<<"Area of rectangle is::"<<length*width;
	}
};
main()
{
	data ar;
	ar.getdata();
	ar.display();
}
