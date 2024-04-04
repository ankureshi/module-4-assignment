#include<iostream>
using namespace std;
class getdata
{
	public:
	char name[20];
	char acc_type[20];
	long int acc_no;
	long int bal=50000;
	long int deposite;
	long int withdraw;
	
	void cst_info()
	{
		cout<<"Enter Your Name= ";
		cin>>name;
		cout<<"Enter Your Bank Account Type= ";
		cin>>acc_type;
		cout<<"Enter Your Bank Account NUmber= ";
		cin>>acc_no;
	}	
};

class cash_deposite:public getdata
{
	public:
	void depo()
	{
		cout<<"\n===============Cash_Deposite===============";
		cout<<"\nEnter Deposite Amount= ";
		cin>>deposite;
		bal=bal+deposite;
		cout<<"\nYour Bank Balance Is= "<<bal;
	}
		
};

class cash_withdraw:public cash_deposite
{
	public:
	void wd()
	{
		cout<<"\n*************Cash_Withdraw***************";
		cout<<"\nEnter Withdraw Amount= ";
		cin>>withdraw;
		if(withdraw>bal)
		{
			cout<<"\nSorry! Insuficient Balance....";
		}
		else
		{
			bal=bal-withdraw;
			cout<<"\nYour Bank Balance is= "<<bal;
		}	
	}
	
};

class stmt:public cash_withdraw
{
	public:
	void statement()
	{
		cout<<"\n***************Statement****************";
		cout<<"\nAccount Name= "<<name;
		cout<<"\nAccount Type= "<<acc_type;
		cout<<"\nAccount Number= "<<acc_no;
		cout<<"\nBanlk Balance= "<<bal;
		
	}
};

main()
{
	stmt st;
	st.cst_info();
	st.depo();
	st.wd();
	st.statement();
}
