//Q.To perform implement a class called Employee that has private member variables for name,
//employee ID, and salary.Include member functions to calculate and set salary based on employee performance. 
//Using of constructor.

#include<iostream>
using namespace std;
class employee
{
	private:
	char name[20];
	int id,sal,performance;
	
	public:
	employee()
	{
		
		cout<<"Enter employee name : ";
		cin>>name;
		cout<<"Enter employee id : ";
		cin>>id;
		cout<<"Enter employee salary : ";
		cin>>sal;
		cout<<"Enter employee performance rating(1 to 5) : ";
		cin>>performance;
		
		if(performance>=0 && performance<=5)
		{
			cout<<"\nName :  "<<name;
			cout<<"\n ID : "<<id;
			cout<<"\n Performance : "<<performance;
			if(performance == 0)
			{
				cout<<"\nEmployee Salary : "<<sal;
			}
			else if(performance == 1)
			{
				sal=sal+5000;
				cout<<"\nEmployee Salary : "<<sal;
			}
			else if(performance == 2)
			{
				sal=sal+4000;
				cout<<"\nEmployee Salary : "<<sal;
			}
			else if(performance == 3)
			{
				sal=sal+3000;
				cout<<"\nEmployee Salary : "<<sal;
			}
			else if(performance == 4)
			{
				sal=sal+2000;
				cout<<"\nEmployee Salary :  "<<sal;
			}
			else if(performance == 5)
			{
				sal=sal+1000;
				cout<<"\nEmployee Salary : "<<sal;
			}
		}
		else
		{
			cout<<"\nError! Enter Valid Performance Rating....";
		}
	}
};

main()
{
	employee emp;
}
