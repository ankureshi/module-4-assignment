//1.Assume a class cricketer is declared. Declare a derived class batsman from Cricketer.
//Data member of batsman. Total runs, Average runs and bestperformance. Member functions input data, 
//calculate average runs, Display data. (Single Inheritance)

#include<iostream>
using namespace std;

class cricketer
{
	public:
	int i=0,n,run[5],avg=0,best,pos=0;
	char nm[5][20];

	void inputdata()
	{
		cout<<"enter number of batsman::";
		cin>>n;
		for(i=0;i<n;i++)
		{	
			cout<<"\n enter name ["<<i+1<<"]::";
			cin>>nm[i];
			cout<<"\n enter run ["<<i+1<<"]::";
			cin>>run[i];
		}
	
	}
};
class batsman:public cricketer
{
	public:
	void avaragerun()
	{
		for(i=0;i<n;i++)
		{
			avg+=run[i]/n;
		}
		cout<<"\nAvarage run is::"<<avg;
	}
	void bestper()
	{
		for(i=1;i<n;i++)
		{
			if(run[0]<run[i])
			{
				run[0]=run[i];
				pos=i;
				
			}
		}
		cout<<"\n\n Best performance is ["<<pos+1<<"]"<<nm[pos]<<" :"<<run[0];
	}
	
};
main()
{
	batsman bs;
	bs.inputdata();
	bs.avaragerun();
	bs.bestper();
}

