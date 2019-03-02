#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
class polar
{
	float r;
	float angle;
	public:
		polar()
		{
			r=0;
			angle=0;
		}
		polar(float a, float b)
		{
			r=a;
			angle=b;
		}
		void display()
		{
		cout<<"\nIn polar form :- radius="<<r<<"and angle ="<<angle;
		}
		float getradius()
		{
			return r;
		}
		float getangle()
		{
			return angle;
		}
};

class rectangular
{
	float x;
	float y;
	public:
		rectangular()
		{
			x=0;
			y=0;
		}
		rectangular(polar p)
		{
			
			x=p.getradius()*cos(p.getangle());
			y=p.getradius()*sin(p.getangle());
		}

		void display()
		{
			cout<<"\nIn rectangular form:- (x,y)=("<<x<<","<<y<<")";
		}
		

};

int main()
{
	float r,ang;
	cout<<"Enter the radius and angle in polar form:";
	cin>>r>>ang;
	polar p1(r,ang);
	p1.display();
	rectangular r1(p1);
	
	r1.display();
}
	
		
