//1. Write a program to find the multiplication values and the cubic values using inline
#include<iostream>
using namespace std;
class line
{
	inline int mul(int a,int b)
	{
		 return a*b; 
	}
	inline int cube(int nm)
	{
		
		return nm*nm*nm;
	}
};
main()
{
	line ln;
	int x,y;
	cout<<"Enter two values :";
	cin>>x>>y;
	
	int multiresult = mul(x,y);
	cout<<"multiplication is"<<ln.multiresult;
	int cubic = cube(x);
	cout<<"cubic value is "<<ln.cube;
	return 0;
}
