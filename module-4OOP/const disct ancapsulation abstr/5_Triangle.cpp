//Q.5 Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;
class triangle
{
	private:
	int s1,s2,s3;
	
	public:
	void getlength()
	{
		cout<<"\nEnter length side1 : ";
		cin>>s1;
		cout<<"\nEnter length side2 : ";
		cin>>s2;
		cout<<"\nEnter length side3 : ";
		cin>>s3;
	}
	void printlength()
	{
		if(s1 + s2 + s3 == 180)
		{
			if(s1 == s2 && s2  ==s3)
			{
				cout<<"\nTriangle shape is Equilateral.";
			}
		
			else if(s1==s2 || s1==s3 || s2==s3)
			{
				cout<<"\nTriangle shape is isosceles.";
			}
			else if(s1!=s2 &&  s1!=s3 && s2!=s3)
			{
				cout<<"\nTriangle shape is scalene.";
			}
			else
			{
				cout<<"\nError ! You are entered Invalid value. ";
			}
		}
	}
};
main()
{
	triangle t;
	t.getlength();
	t.printlength();
}

