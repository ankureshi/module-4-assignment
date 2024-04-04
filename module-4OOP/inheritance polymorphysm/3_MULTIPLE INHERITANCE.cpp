//Q.3. Create a class person having members name and age. Derive a class student having member percentage. 
//Derive another class teacher having membersalary. Write necessary member function 
//to initialize, read and write data. Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;
class person
{
	public:
	char nm[20];
	int age;
	
	void get()
	{
		cout<<"Enter person Name : ";
		cin>>nm;
		cout<<"Enter person's Age : ";
		cin>>age;
	}
};
class student
{
	public:
	int per;
	
	void percantage()
	{
		cout<<"\nEnter student percentage :";
		cin>>per;
	}
};
class teacher
{
	public:
	char nm1[20];
	int sal;
	
	void salary()
	{
		cout<<"\nEnter Teacher Name : ";
		cin>>nm1;
		cout<<"Enter Salary  : ";
		cin>>sal;
	}
};
class detail:public person,public student, public teacher
{
	public:
	void print()
	{
		cout<<"\n===============================================\n";
		cout<<"\nStudent Name is : "<<nm;
		cout<<"\nStudent Age is : "<<age;
		cout<<"\nStudent Percentage is : "<<per<<"%";
		cout<<"\n\nTeacher Name is : "<<nm1;
		cout<<"\nTeacher Salary is : "<<sal;
	}
};
main()
{
	detail dt;
	dt.get();
	dt.percantage();
	dt.salary();
	dt.print();
}
	
		
	

