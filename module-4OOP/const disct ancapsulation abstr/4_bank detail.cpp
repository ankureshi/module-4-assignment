//Q.4To perform implement a class called Bank Account that has private member variables for account number
 //and balance. Include member functions to deposit and withdraw money from the account.
 
 #include<iostream>
 using namespace std;
 class bank
 {	
 	private:
 	long int acnum,amount;
 	int bal=50000,dep,withdraw;
 	
 	public:
 	void get()
 	{
 		cout<<"Enter your account number : ";
 		cin>>acnum;
	 }
	 void deposite()
	 {
		cout<<"enter amount you deposite..";
	 	cin>>amount;
	 	dep=bal+amount;
	 	cout<<"\nYour deposite successfull. Balance is rs. "<<dep;
	 }
	 void widthraw()
	 {
	 	cout<<"enter amount you withdraw..";
	 	cin>>amount;
	 	withdraw=bal-amount;
	 	cout<<"\nYour withdraw successfull. Balance is rs. "<<withdraw;
	 }
	 void print()
	 {
	 	cout<<"\nYour Account number is : "<<acnum;
	 	cout<<"\nBalance is : "<<bal;
	 }
};
main()
{
	bank bk;
	bk.get();
	bk.deposite();
	bk.widthraw();
	bk.print();
}
