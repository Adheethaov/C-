/* write a program to initialize a complex number with 
a) default value
b) if one argument is passed assign that argument to both real part and also to imaginary part
c) If two arguments are provided, assign the first argument to real part and the second argument to imaginary part
Also find the sum of two complex numbers */

#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
	public:
		void display();
		complex()
		{
			real=0;
			img=0;
		}
		complex(int a)
		{
			real=a;
			img=a;
		}
		complex(int a ,int b)
		{
			real=a;
			img=b;
		}
};

void complex::display()
{
	cout<<"\n\nThe ocmplex number is :"<<real<<"+i"<<img<<"\n";
}

int main()
{
	complex c1;
	int a,b,ch;
	c1.display();
	cout<<"1.Only one value";
	cout<<"Enter the value:";
	cin>>a;
	complex c4(a);
	c4.display();
	cout<<"\nTwo values";
	cout<<"\nEnter the values:";
	cin>>a>>b;
	complex c3(a,b);
	c3.display();
}
