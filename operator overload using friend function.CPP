Operator Overloading
Create class "Distance" with following specifications :
Data members => Km, Meter and CM
Member functions => Constructor to initialize object, Display function to display values
1) Overload Binary +
Should add 2 distance objects and assign value to 3rd object.
d3=d1+d2;    
Overload using member function.
Note -: After addition value of cm should not be greater then 100. In that case, it should increase value of "meter" by 1. Similarly it should work for "meters".
2) Overload Unary ++
Should increment value of km, meter, and cm by 1.
++d1;
Overload using friend function.
3) Overload < operator
Should compare 2 distance objects and return an integer value.
int x= d1 < d2;
Value of 'x' = 0 if d1==d1
x=-1 if d1>d2
x=1 if d1<d2
Overload using friend function.#include<iostream.h>

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
