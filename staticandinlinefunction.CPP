#include<iostream.h>
#include<conio.h>
#include<dos.h>
struct dosdate_t l;
class account
{      	private:
	static int x;
	int an,cou;
	int d,m,y;
	int a,b,c;
	char ch[20];

	public :

		void age();
		void namelength();
		void getdata()
		{
			cout<<"\n enter the name \n ";
			cin>>ch;
			cout<<"\n enter the DOB";
			cin>>d>>m>>y;
			an=++x;

		}

       inline void showdata()
	{
		cout<<"\n ur name is "<<ch;
		cout<<"\n ur account number is "<<an;
		cout<<"\n ur age is "<<a<<"yrs"<<b<<"months"<<c<<"days";
		cout<<"\n length of ur name is" <<cou;

	}

	static void display()
		{
			cout<<"\n value of static variable is " <<x;
		}

		inline void fun()
		{
		 cout<<"\n inline function is called"  ;
		 }
};
int account::x;
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


     void account:: age()
	{
		int p,q,r;
	     //	int a,b,c;
	_dos_getdate(&l);

	p=l.day;
	q=l.month;
	r=l.year;
       //	cout<<p<<q<<r;


		a=r-y;
		b=q-m;
		c=p-d;
	      //	 cout<<a<<b<<c;
		if(b<0)
		{
			a=a-1;
			b=b+12;
		}
		if(c<0)
		{
			b=b-1;
			c=c+30;
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
		a[i].age();
		a[i].namelength();
	}

	for(i=0;i<2;i++)
	a[i].showdata();
	account::display();
	b.fun();
	getch();
}