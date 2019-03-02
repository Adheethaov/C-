//Write a C++ program to perform matrix addition using operator overloading concept.

#include<iostream>
using namespace std;
class matrix
{
	int a[5][5];
	public:
		void getvalue(int n);
		void display(int n);
		friend matrix operator +(matrix A,matrix B);
};

void matrix::getvalue(int n)
{
	int i,j;
	cout<<"\nEnter "<<n*n<<"elements\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
}

void matrix:: display(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		cout<<"\n";
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}

matrix operator +(matrix a, matrix b)
{
	int i,j,n;
	cout<<"Enter the size of the matrix you have assigned:";
	cin>>n;
	cout<<"\nThe sum of the matrix is :\n";
	matrix temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			temp.a[i][j]=a.a[i][j]+b.a[i][j];
		}
	}
	return(temp);
}
int main()
{
	matrix A,B,C;
	int n;
	cout<<"Enter the size of the matrix:";
	cin>>n;
	A.getvalue(n);
	B.getvalue(n);
	cout<<"\nThe first enterd matrix is \n:";
	A.display(n);
	cout<<"\nThe second entered matrix is \n:";
	B.display(n);
	C=A+B;
	C.display(n);
}

