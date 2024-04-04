//Q.3 Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member
//functions to get and set these variables.

#include<iostream>
using namespace std;
class Car
{
	private:
		char company[20],model[20];
		int year;
	public:
	void get()
	{
		cout<<"Enter your company name : ";
		cin>>company;
		cout<<"Enter your model detail : ";
		cin>>model;
		cout<<"Enter your year : ";
		cin>>year;
	}
	void set()
	{
		cout<<"\n\t\t****** Car Detail ******\n";
		cout<<"\nCar Company name : "<<company;
		cout<<"\nCar Model : "<<model;
		cout<<"\nYear : "<<year;
	}
};

main()
{
	Car c;
	c.get();
	c.set();
}

