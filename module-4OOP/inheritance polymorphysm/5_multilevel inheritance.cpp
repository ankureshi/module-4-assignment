//Q.5 Assume that the test results of a batch of students are stored in three different classes. 
//Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class 
//result contains the total marks obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;
class student
{
	public:
	int rnm;
	
	void rollnm()
	{
		cout<<"Enter ROll number : ";
		cin>>rnm;
	}
};
class test:public student
{
	public:
	int s1,s2,total;
	
	void testdata()
	{
		cout<<"Enter subject 1 marks : ";
		cin>>s1;
		cout<<"Enter subject 2 marks : ";
		cin>>s2;
		
		total=s1+s2;		
	}
};
class result:public test
{
	public:
	void detail()
	{
		cout<<"\nROll number is : "<<rnm;
		cout<<"\nTotal marks of 2 subjects are : "<<total;
	}
};
main()
{
	result rs;
	rs.rollnm();
	rs.testdata();
	rs.detail();
}
