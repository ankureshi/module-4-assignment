//4. Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
using namespace std;
class marksheet 
{
	public:
	char nm[20];
	void student()
	{
		
		cout<<"Enter your Name :";
		cin>>nm;
		
	}
};
class English
{
	public:
	int Emarks;
	void marks1()
	{
		cout<<"\nEnter your English marks : ";
		cin>>Emarks;
	}
};
class Maths
{
	public:
	int Mmarks;
	void marks2()
	{
		cout<<"\nEnter your maths marks : ";
		cin>>Mmarks;
	}
};

class Science
{
	public:
	int Smarks;
	void marks3()
	{
		cout<<"\nEnter your Science marks : ";
		cin>>Smarks;
	}
};
class result :public marksheet,public English,public Maths,public Science
{
	public:
	void print()
	{
		cout<<"\n************MARKSHEET**************";
		cout<<"\n Name is :"<<nm;
		cout<<"\n English Marks is : "<<Emarks;
		cout<<"\n Maths Marks is : "<<Mmarks;
		cout<<"\n Science Marks is : "<<Smarks;
	}
};
main()
{
	result rs;
	rs.student();
	rs.marks1();
	rs.marks2();
	rs.marks3();
	rs.print();
}

