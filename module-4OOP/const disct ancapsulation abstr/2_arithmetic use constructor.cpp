//To perfeorm addition,subtraction,multiplication,divison using constructor::

#include<iostream>
using namespace std;
class calculator
{
	public:
	calculator()
	{
		int a,b;
		cout<<"Enter value of A and B = ";
		cin>>a>>b;
		
		cout<<"\nSum is.."<<a+b;
		cout<<"\nSub is.."<<a-b;
		cout<<"\nmul is.."<<a*b;
		cout<<"\ndivison is.."<<a/b;
		
	}
};
main()
{
	calculator ar;
}
