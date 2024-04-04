//Q.6 Write a C++ program to create a class called Person that has private member variables for name,
 //age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class Person
{	private:
	char nm[20],country[20];
	int age;
	
	public:
	void set()
	{
		cout<<"Enter your name::";
		cin>>nm;
		cout<<"Enter your age::";
		cin>>age;
		cout<<"Enter your country::";
		cin>>country;
	}
	void get()
	{
		cout<<"Name is::"<<nm;
		cout<<"Age is::"<<age;
		cout<<"Country is::"<<country;
	}
};
main()
{
	person pr;
	pr.set();
	pr.get();
}
