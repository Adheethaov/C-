#include<iostream>
using namespace std;
class matrix
{
	int **a,**b;
	int m,n;
	public:
		void initialization();
		void display(int);
		void transpose();
		void deallocation();
};

void matrix :: initialization()
{
	int i,j;
	cout<<"\nEnter the no of rows and coloumns:";
	cin>>m>>n;
	a=new int *[m];
	for(i=0;i<m;i++)
		a[i]=new int [n];
	
	cout<<"\nEnter the elements:";

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			//cout<<a[i][j];
		}
	}
	
	/*b=new int *[m];
	for(i=0;i<m;i++)
		a[i]=new int [n];*/
			
	
}

void matrix::display(int m)
{
	int i,j;
	
	cout<<"\nEntered  elements are \n:";

	for(i=0;i<m;i++)
	{
		cout<<"\n";
		for(j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
			
		}
		cout<<"\n";
	}
	
}

void matrix::transpose()
{
	int i,j,k;
	cout<<"\nEnter the size:";
	cin>>k;
	
	for(j=0;j<k;j++)
	{
		for(i=0;i<k;i++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}

}

void matrix:: deallocation()
{
	int i,k;
	cout<<"\nEnter the size:";
	cin>>k;
	for(i=0;i<k;i++)
	{
		delete [] a[i];
		delete [] a;
	}
	cout<<"\nSuccessfully deallocated memmory";

}
	

	
int main()
{
	int size;
	matrix m;
	m.initialization();
	cout<<"\nEnter the size of the array enterd:";
	cin>>size;
	m.display(size);
	cout<<"\nThe transpose of given matrix is:\n";
	m.transpose();
	m.deallocation();
}
	
