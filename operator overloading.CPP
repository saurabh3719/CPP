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

		int operator <(distance);

		distance operator ++()
		{
			distance x(0,0,0);
			x.cm=++cm;
			x.mm=++mm;
			x.km=++km;
			if(x.cm>=100)
			{
				x.mm++;
				x.cm=x.cm-100;
			}

			if(x.mm>=1000)
			{
				x.km++;
				x.mm=x.mm-1000;
			}

		 return x;
		 }


};
int distance::operator <(distance aa)
	{
		int i=0;

		if(aa.km < km)
		   {
		     if (aa.mm < mm)
			{
			  if (aa.cm < cm)
			     {
			       i=-1;
			     }
			 }
		    }

		    if(aa.km == km)
		   {
		     if (aa.mm == mm)
			{
			  if (aa.cm == cm)
			     {
			       i=0;
			     }
			 }
		    }
		    if(aa.km > km)
		   {
		     if (aa.mm > mm)
			{
			  if (aa.cm > cm)
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