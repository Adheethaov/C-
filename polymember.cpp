/* write a program to add two polynomials (use constructors for intialization .Maximaum degree of the polynomial is 2 */

#include<iostream>
using namespace std;
class polynomial
{
	int a,b,c;
	public:
		void getvalues();
		void add(polynomial,polynomial);
		void display();
		polynomial ()
		{
			a=0;
			b=0;
			c=0;
		}
};
void polynomial::getvalues()
{
	cout<<"Enter the coefficient of x^2:";
	cin>>a;
	cout<<"Enter the coefficient of x:";
	cin>>b;
	cout<<"Enter the constant:";
	cin>>c;
}
void polynomial::add(polynomial p1, polynomial p2)
{
	a=p1.a+p2.a;
	b=p1.b+p2.b;
	c=p1.c+p2.c;
}
void polynomial::display()
{
	cout<<"\n The sum is: "<<a<<"x^2+"<<b<<"x+"<<c<<"\n";
}
int main()
{
	polynomial p1,p2,p3;
	//polynomial add();
	p1.display();
	p1.getvalues();
	p2.getvalues();
	p3.add(p1,p2);
	p3.display();
}

