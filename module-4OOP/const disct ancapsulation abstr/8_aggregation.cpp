//8. Write a C++ program to implement a class called Student that has private member variables for name, 
//class, roll number, and marks. Includemember functions to calculate the grade based on the marks and 
//displaythe student's information. Accept address from each student implement using aggregation

#include<iostream>
#include<string.h>
using namespace std;
class Address
{
	public:
	string city,country;
	Address (string city, string country)
	{
		this ->city = city;
		this ->country = country;
	}
};
class student
{
	Address* address;
	public:
	int rollnm;
	int marks;
	string name ;
	student(int rollnm,string name,int marks,Address* address)
	{}
	{
		this ->rollnm = rollnm;
		this ->name = name;
		this -> address = address;
		this ->marks = marks;
		char calculate()
		{
			if (marks >=90)
			{
				cout<<"\nGrade A+";
			}
			else if (marks >=80)
			{
				cout<<"\nGrade A";
			}
			else if (marks >=70)
			{
				cout<<"\nGrade B";
			}
			else if (marks >=60)
			{
				cout<<"\nGrade c";
			}
			else
			{
				cout<<"\nGrade D";
			}
		}
		void display()
		{
			cout<<rollnm <<"  "<<name<<" "<<marks<< " "<<address ->city<<" "<<address->country;
		}
    }
	
};
main()
{
	
	Address add("Surat","India");
	student st(01,"abc",70,&add);
	calculate cal;
	st.display();
}
