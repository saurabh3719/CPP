#include<iostream.h>
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

	friend class it;

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