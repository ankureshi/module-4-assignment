//11 calaculate area of circle , rectangle,and triangle using function overloading

#include<iostream>
#include<cmath>
using namespace std;
class calculator
{	public:
	cal (double area,double breadth)
	{
		area * breadth;
	}
	cal (double area,double breadth,int triangle)
	{
		0.5*area*breadth;
	}
	cal (double area,int circle)
	{
		3.14 *area*area;
	}
};
main()
{
	calculator calc ;
	int rectanglearea = calc.cal (3,3);
	int circlearea = calc.cal (3.14,3,3);
	int trianglearea = calc.cal (0.5,3,3);
	
	cout<<"\nArea of rectangle is "<<rectanglearea;
	cout<<"\nArea of circle is "<<circlearea;
	cout<<"\ntrianglearea is "<<trianglearea;
}

