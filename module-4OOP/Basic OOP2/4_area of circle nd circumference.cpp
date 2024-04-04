//WAP TO IMPLIMENT A CLASS CALLED CIRCLE THAT HAS PRIVATE MEMBER VARIABLE OF RADIUS.
//INCLUDE MEMBER FUNCTION TO CALCULATE THE CIRCLE'S AREA AND CIRCUMFERENCE.

#include<iostream>
using namespace std;
class circle
{	private:
	float r,area,c;
	public:
	void radius()
	{
		cout<<"Enter radius of circle = ";
		cin>>r;
		area=3.14*r*r;
		cout<<"\nArea of circle is = "<<area;
		c=2*3.14*r;
		cout<<"\nCircumference of circle is = "<<c;
		
	}
};
main()
{	
	circle cl;
	cl.radius();
}
