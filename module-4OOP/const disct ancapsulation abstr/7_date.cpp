//Q.7 Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;
class date
{
	private:
	int day,month,year;
	
	public:
	void set()
	{
		cout<<"Enter Day : ";
		cin>>day;
		cout<<"\nEnter Month : ";
		cin>>month;
		cout<<"\nEnter Year : ";
		cin>>year;
	}
	void get()
	{
		cout<<"\n\t\t\t  Date :";
		cout<<"\n";
		if(month==1 || month==3|| month==5 || month==8 || month==10 || month==12)
		{
			if(day<=31 && day>=1)
			{
				cout<<day<<"/";	
			}
			else
			{
				cout<<"Error ! enter valid day..";
			}
		}
			else if(month==4 || month==6 || month==9 || month==11)
			{
				if(day<=30 && day>=1)
				{
					cout<<day<<"/";
				}
				else
				{
					cout<<"Error... ENter valid day";
				}
			}
			else if(month==2)
			{
				if (day<=29 && day>=1)
				{
					cout<<day<<"/";
				}
				else
				{
					cout<<"Error... ENter valid day";
				}
			}
			if (month <=12 && month >=1)
			{
				cout<<month<<"/";
			}
			else
			{
				cout<<"\nError! Enter valid day\n";
			}

			cout<<year;
		
	}
		
};
main()
{
	date dt;
	dt.set();
	dt.get();
}
