#include<iostream>
#include<string.h>
using namespace std;
class strings
{
	char str[20];
	public:
		void acceptstring();
		void displaystring();
		void display()
		{
			cout<<str;
		}
		strings reverse(strings);
		int stringlength(strings);
		
		void pallindrome(strings);
};

void strings :: acceptstring()
{
	char *ptr;
	cout<<"\nEnter the string:";
	cin>>str;
	ptr=str;
	cout<<"\nAccepted the string";
}
void strings::displaystring()
{
	char *ptr;
	int i;
	ptr=str;
	cout<<"\nThe entered string is : ";
	for(i=0;*(ptr+i)!='\0';i++)
	{
		cout<<*(ptr+i);
	}

}

int strings :: stringlength(strings s)
{
	char *ptr;
	int i;
	ptr=s.str;
	for(i=0;*(ptr+i)!='\0';i++);
	return i;
}

strings strings :: reverse(strings s)
{
	char *ptr,*ptr1;
	strings temp;
	int len,i,j=0;
	ptr=s.str;
	len=s.stringlength(s);
	for(i=len-1;i>=0;i--)
	{
		
		//cout<<*(ptr+i);
		*(ptr1+j)=*(ptr+i);	
		temp.str[j]=*(ptr1+j);
		j++;
		
	}
	
	return temp;
}

void strings :: pallindrome(strings s)
{
	char *ptr,*ptr1;
	int i,f;
	ptr=s.str;
	strings temp , rev;
	temp=temp.reverse(s);
	ptr1=temp.str;
	//cout<<"\nThe reversed string is "<<temp.str;
	for(i=0;*(ptr+i)!='\0';i++)
	{
		if(*(ptr+i)!=*(ptr1+i))
		{
			f=0;
			break;
		}
		f=1;
	}
	if(f==1)
		cout<<"\nThe given string is pallindrome";
	else
		cout<<"\nThe given string is not pallindrome";
}
	

int main()
{
	strings s1,s2,s3;
	char str1[20],rev[20];
	int len;
	s1.acceptstring();
	s1.displaystring();
	len=s1.stringlength(s1);
	cout<<"\nThe length of the given string is "<<len;
	
	cout<<"\nThe reversed string is : ";
	s2=s1.reverse(s1);
	s2.display();
	s1.pallindrome(s1);
		
	
}
