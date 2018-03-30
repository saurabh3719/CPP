Friend Function & Friend Class

Implement program with following features :
1) Making a regular function friend of the class
Add a non-member function Bonus().
The function should accept Account class object as argument & increase balance of the account by Rs. 5000/-
2) Making a member function of one class friend of other class
Add another class IncomeTax having member functions  CalculateTax() and DisplayTax(). The class should have one data member as Calculated_tax.
CalculateTax() ==> Should be friend of Account class. Should calculate tax as below:
Tax= 10% of account balance
DisplayTax() ==> Should display calculated tax:#include<iostream.h>

#include<conio.h>

class account;
class it
{

	int tax;
	public:
	int caltax(account) ;
	void display(int z)
	{
		cout<<"\ntax is ="<<z;
	}

};
class account
{
	int bal;
	public:
	account()
	{
		bal=500;
		cout<<"\ninitial bal is="<<bal;
	}

	friend void bonus(account *);
	friend int it :: caltax(account);

};


int it::caltax(account a)
	{
		tax=(a.bal*(0.1));
		return tax;
	}





void bonus(account *a)
{
	a->bal=a->bal+5000;
	cout<<"\nincreamented bal is="<<a->bal ;
}


 void main()
 {     	clrscr();
	int z;
	account a;
	it p;

	bonus (&a);
	z=p.caltax(a);
	p.display(z);
	getch();
 }
