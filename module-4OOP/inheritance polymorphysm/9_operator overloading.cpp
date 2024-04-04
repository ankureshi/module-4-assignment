//Q.9 Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class Operator
{
	public:
	int a[3][3]={{20,40,60},{10,30,50},{70,80,90}};
	
	int i,j;
	Operator()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"\t"<<a[i][j];
			}
			cout<<"\n";
		}
	}
};
main()
{
	Operator op;
}

