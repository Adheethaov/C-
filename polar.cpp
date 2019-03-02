#include<iostream>
#include<math.h>
using namespace std;
class polar
{
	float radius,angle;
	public:
		polar()
		{
			radius=0;
			angle=0;
		}
		void polaraccept()
		{
			cout<<"\nEnter the radious and angle:";
			cin>>radius>>angle;
		}
		void change_angle(float a)
		{
			angle=a;
		}
		void change_radius(float a)
		{
			radius=a;
		}
		void polardisplay()
		{
			cout<<"\nPolar form:  Radius="<<radius<<"  and angle="<<angle;
		}
		float getradius()
		{
			return radius;
		}
		float getangle()
		{
			return angle;
		}
};

class rectangular
{
	float x,y;
	public:
		rectangular()
		{
			x=0;
			y=0;
		}
		void rectangularaccept()
		{
			cout<<"\nEnter the x and y cordinates:";
			cin>>x>>y;
		}
		void rectangulardisplay()
		{
			cout<<"\nRectangular form:  (x,y)=("<<x<<","<<y<<")";
		}
		float getx()
		{
			return x;
		}
		float gety()
		{
			return y;
		}
		void convert_to_rectangular(polar p1);
		polar convert_to_polar(rectangular r1);
};
	
polar rectangular:: convert_to_polar(rectangular r1)
{
	float p,u;
	polar temp;
	p=(r1.getx()*r1.getx())+(r1.gety()*r1.gety());
	u=atan(r1.gety()/r1.getx());
	temp.change_angle(u);
	temp.change_radius(pow(p,0.5));
	return temp;
}

void rectangular :: convert_to_rectangular(polar p1)
{
	float a,b;
	a=p1.getangle();
	b=p1.getradius();
	cout<<a<<b;
	x=b*cos(a);
	y=b*sin(a);
}

int main()
{
	rectangular r1;
	polar p1;
	int a,b,q;
	do
	{
	
		cout<<"\n1.Polar to rectangular\n2.Rectangle to polar";
		cout<<"\nEnter the choice:";
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"\nEnter the polar form";
				p1.polaraccept();
				p1.polardisplay();
				cout<<"\nAfter the conversion to rectangular form:";
				r1.convert_to_rectangular(p1);
				r1.rectangulardisplay();
				break;
			case 2:
				cout<<"\nEnter the values in rectangular form";
				r1.rectangularaccept();	
				r1.rectangulardisplay();
				cout<<"\nAfter the conversion to polar form:";
				p1=r1.convert_to_polar(r1);
				p1.polardisplay();
				break;
		}
		cout<<"\nPress 1 to continue";
		cin>>q;
	}while(q==1);
	return 0;
}
