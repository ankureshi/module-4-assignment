//To create class called Rectangle that has private member variable for length and width.Impliment
//member function to calculate the rectangle's area and perameter.

#include<iostream>
using namespace std;
class rectangle
{
	private:
	int length,width,area,per;
	public:
	void getdata()
	{
		cout<<"Enter Length = ";
		cin>>length;
		cout<<"Enter width = ";
		cin>>width;
		
		area=length*width;
		cout<<"\nArea of rectangle is "<<area;
		
		per=2*length+2*width;
		cout<<"\nPerameter of rectangle is = "<<per;
		
		
	}
};
main()
{
	rectangle rec;
	rec.getdata();
}
