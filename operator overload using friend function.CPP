#include<iostream.h>
#include<conio.h>

class distance
{
	private:
		int cm,mm,km;
	public:
		distance(int a,int b,int c)
		{
			cm=a;
			mm=b;
			km=c;
		}
		void display()
		{
			cout<<"\n\nc="<<cm<<"\t m="<<mm<<"\t k="<<km;
		}

		distance operator +(distance);

		friend int operator <(distance,distance);

		friend distance operator ++(distance) ;


};

distance operator ++(distance zz)
{
	zz.cm=++zz.cm;
	zz.mm=++zz.mm;
	zz.km=++zz.km;
	return zz;
}
int operator <(distance aa,distance bb)
	{
		int i=0;

		if(aa.km < bb.km)
		   {
		     if (aa.mm < bb.mm)
			{
			  if (aa.cm < bb.cm)
			     {
			       i=-1;
			     }
			 }
		    }

		    if(aa.km == bb.km)
		   {
		     if (aa.mm == bb.mm)
			{
			  if (aa.cm == bb.cm)
			     {
			       i=0;
			     }
			 }
		    }
		    if(aa.km > bb.km)
		   {
		     if (aa.mm > bb.mm)
			{
			  if (aa.cm > bb.cm)
			     {
			      i=1;
			     }
			 }
		    }
		    return i;
	 }
	distance distance::operator +(distance z)
	{
		distance temp(0,0,0);
		temp.cm=cm+z.cm;
		temp.mm=mm+z.mm;
		temp.km=km+z.km;
	       //	cout<<"\ncm=="<<temp.cm<<"Km="<<temp.km<<"MM="<<temp.mm;
			if(temp.cm>=100)
			{
				temp.mm=temp.mm+1;
				temp.cm=temp.cm-100;
			}

			if(temp.mm>=1000)
			{
				temp.km=temp.km+1;
				temp.mm=temp.mm-1000;
			}
			return temp;
		}



void main()
{
	clrscr();
	int x;
	distance d1(10,20,30);
	distance d2(70,80,90);
	distance d3=d1+d2;
	cout<<"\n+ operator ";
	d3.display();
	d1=++d1;
	cout<<"\n++ operator" ;
	d1.display();
	x=d1<d2;
	cout<<"\n < operator\nvalue of x is ="<<x;
	getch();
}