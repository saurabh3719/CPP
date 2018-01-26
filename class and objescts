#include<iostream.h>
#include<conio.h>
#include<time.h>

int acc=0,an;

class account
{
	private:
		int d,m,y;
			int a,b,c;
			int cou;
		char name[20];
	public:
		void getdata();
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
void account :: getdata()
{
	cout<<"\n Enter name : ";
	cin>>name;

	cout<<"\n Enter date of birth : ";
	cin>>d>>m>>y;
}
void account :: showdata()
{
	cout<<"\n ur age is "<<a<<"yrs "<<b<<"months "<<c<<"days";
	if(acc==0)
	{
	 cout<< "\n ur acc no is "<<an;
	 acc=an;
	}
	else
	{
	an++;
	cout <<"\n ur acc no is "<<an;
	}
	cout<< "\n length of ur name is " <<cou<<"\n  \n";

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
	account a[3];
	a[0].getdata();
	cout<<"\n Enter account no : "    ;
	cin>>an;

	for(i=1;i<3;i++)
		a[i].getdata();

	for(i=0;i<3;i++)
	{
		a[i].findage();
		a[i].namelength();
		a[i].showdata();
	}
	getch();
}







