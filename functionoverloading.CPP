#include<iostream.h>
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

