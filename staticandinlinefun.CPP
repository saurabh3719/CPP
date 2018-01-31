#include<iostream.h>
#include<conio.h>
#include<time.h>
class account
{
	static int x;
	int an,cou;
	int d,m,y;
	int a,b,c;
	char ch[20];

	public :
		void findage();
		void namelength();
		void getdata()
		{
			cout<<"\n enter the name \n ";
			cin>>ch;
			cout<<"\n enter the DOB";
			cin>>d>>m>>y;
			an=++x;
		}

       void showdata()
	{
		cout<<"\n ur name is "<<ch;
		cout<<"\n ur account number is "<<an;
		cout<<"\n ur age is "<<a<<"yrs"<<b<<"months"<<c<<"days";
		cout<<"length of ur name is" <<cou;
	}

	static void display()
		{
			cout<<"\n value of x is " <<x;
		}

		inline void fun()
		{
		 cout<<"\n inline function is called"  ;
		 }
};

void account :: namelength()
{
	int i;
	for(i=0;i<20;i++)
	{
		if(ch[i]!='\0')
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

       int account::x;
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
{  	int i;
	clrscr();
	account a[2] ;
	account b;
	for(i=0;i<2;i++)
	{
		a[i].getdata();
		a[i].findage();
		a[i].namelength();
	}

	for(i=0;i<2;i++)
	a[i].showdata();
	account::display();
	b.fun();
	getch();
}