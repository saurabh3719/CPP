Function overloading
For account class create following 3 overloaded functions
1) CreateAccount =>
It should create a default account with system assigned account number. Default balance is Rs. 500 and default date of birth is 1-1-2010
2) Create Account (int accno, int bal)
Create account as per given account number & balance. Make date of birth as 1-1-2010
3) Create Account (int accno, int bal, char *dob)
Create account as per given account number & balance. Make date of birth equal to "dob" passed as function argument.
In above functions demonstrate use of default argument values. #include<iostream.h>


#include<conio.h>
class account
{
	private:
	int an;
	int bal;
	char dob[];
	public:
		void createacc() ;
		void createacc(int an,int bal);
		void createacc(int an,int bal,char *dob);

};

      void account:: createacc()
	{
		an=1;
		bal=500;
		char dob[]="1-1-2018";
		cout<<"\naccount no is="<<an<<"\t balance is="<<bal<<"\t DOB is="<<dob;

	}
       void account :: createacc(int an,int bal)
	{
		char dob[]="1-1-2018";
		cout<<"\naccount no is="<<an<<"\t balance is="<<bal<<"\t DOB is="<<dob;
	}
	void account :: createacc(int an,int bal,char *dob)
	{
		cout<<"\naccount no is="<<an<<"\t balance is="<<bal<<"\t DOB is="<<dob;
	}
void main()
{
	account a;
	clrscr();
	a.createacc();
	a.createacc(2,1000);
	a.createacc(3,2000,"1-1-2018");
	getch();
}

