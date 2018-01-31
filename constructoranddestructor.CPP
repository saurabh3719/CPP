#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<string.h>

int acc=0;

class account
{
	private:
		int d,m,y;
		int a,b,c;
		int cou;
		int an;
		char *name;
	public:
		account();
		~account();
		account(int n,char *ch,int q,int w,int e)
		{
			strcpy(name,ch);
			an=n;
			d=q;
			m=w ;
			y=e ;

		}
		void showdata();
		void findage();
		void namelength();

};
void account :: namelength()
{
	int i;
	for(i=0;i<20;i++)
	{
		if(name[i]!='\0')
		{
			cou++;
		}
		else
		{
			cou=i;
			break;
		}

	}
}


account:: ~account(void)
{
	cout<<"\n \n destructor is called \n ";


}

void account :: account()
{
	if(an==0)
	{
		cout<<"\n Enter account no : ";
		cin>>an;
		acc++;
	}
	else
	{
		an=an++;
		acc++;
	}
	name=new char[20];
	cout<<"\n Enter name : ";
	cin>>name;
	cout<<"\n Enter date of birth : ";
	cin>>d>>m>>y;
}
void account :: showdata()
{
	cout<<"\n ur name is "<<name;
	cout<<"\n ur name length is " <<cou;
	cout<<"\n ur age is "<<a<<"yrs "<<b<<"months "<<c<<"days";
	cout<<"\n ur acc no is "<<an;


}
void account :: findage()
{

	 time_t t=time(0);
	 struct tm *now = localtime(&t);
	 a=(now->tm_year+1900)-y;
	 b=(now->tm_mon +1)-m;
	 c=(now->tm_mday)-d;

	if(((now->tm_mon +1)<m)||((now->tm_mon +1)==m)&&((now->tm_mday)<d) )
	{
		a--;
	}
	b=(12-m)+(now->tm_mon +1);
	if((now->tm_mday)<d)
	{
		c--;
	}
}
void main()
{
	int i;
	clrscr();
	account a;
	cout<<"\n default constructor \n" ;
	account a2=a;
	a.findage();
	a.namelength();
	a.showdata();

	cout<<"\n \n copy constructor \n " ;
	a2.findage();
	a2.namelength();
	a2.showdata();

	cout<<"\n \n paramaterised constructor \n ";
	account a1(1,"sara",12,12,2012);
	a1.findage();
	a1.namelength();
	a1.showdata();

	cout<<"\n \n dynamic constructor";
	account *a3;
	a3=new account;
	a3->findage();
	a3->namelength();
	a3->showdata();
	delete a3;

	getch();
}