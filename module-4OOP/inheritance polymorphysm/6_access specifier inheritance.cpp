//6. Write a C++ Program to show access to Private Public and Protected using inheritance.
#include<iostream>
using namespace std;
class base
{
	private:
	int prmember;
	protected:
	int promember;
	public:
	 int pubmember;
	 
	 base() : prmember(1),promember(2),pubmember(3)
	 {
	 	
	 }
	 void display()
	 {
	 	cout<<"\n this is private member.."<<prmember;
	 	cout<<"n this is protected member.."<<promember;
	 	cout<<"\nthis is public member.."<<pubmember;
	 }
};
class derived : public base
{
	public:
	void accessmember()	
	
{
	cout<<"Access public member from derived :"<<pubmember;
	cout<<"Access protected member from derived :"<<promember;
};
int main()
{
	base bs;
	cout<<"access member from base..";
	bs.display();
	
	derived dr;
	cout<<"access member from derived..";
	dr.accessmember();
	return 0;
}
	

