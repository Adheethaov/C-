/*create a class student which has Data Members
a) name b)branch c) roll no d)age e)mark of 5 subjects and 
memeber functions
a) accept the student details
b) display the details of the student including percentage
write a program to test this function
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{
	private:
		char name[20];
		char branch[5];
		int age;
		int rollno;
		int mark[5];
	public:
		void details();
		void display();
};

void student::details()
{
	int i;
	cout<<"\nEnter the student name:";
	cin>>name;
	cout<<"\nEnter the branch:";
	cin>>branch;
	cout<<"\Enter the age:";
	cin>>age;
	cout<<"\nEnter the roll no:";
	cin>>rollno;
	cout<<"\nEnter the marks for 5 subjects:\n";
	for(i=0;i<5;i++)
		cin>>mark[i];
}

void student ::display()
{	int i;
	float avg,perc,sum=0;
	for(i=0;i<5;i++)
		sum=sum+mark[i];
	avg=sum/500;
	perc=avg*100;
	cout<<"\nName:"<<name<<"\nBranch"<<branch<<"\nAge:"<<age<<"\nRoll no:"<<rollno<<"\npercentage:"<<perc<<"%";
}
int main()
{
	student s;
	s.details();
	s.display();
}

