#include<iostream>
#include<string>
using namespace std;
class STRING
{
	char str[20];
	public:
		STRING getstring();
		void display();
		int stringlength();
		STRING operator +(STRING);//to concatinate two strings-used member function overloading
		void operator =(STRING);//to copy the content -used member function
		void operator <=(STRING);
		STRING toLower();//to convert into lower case
		STRING toUpper();
		

};
STRING STRING:: getstring()
{
	cout<<"\nEnter the string:";
	cin>>str;
}

void STRING:: display()
{
	cout<<"\n"<<str;
}
int STRING ::stringlength()
{
	int l1;

	for(l1=0;str[l1]!='\0';l1++);
	return (l1);
}

//to concatinate two strings
STRING STRING :: operator +(STRING st)
{
	int l1,l2,size,j,i;
	STRING temp;
	for(l1=0;str[l1]!='\0';l1++);
	for(l2=0;st.str[l2]!='\0';l2++);
	size=l1+l2;
	
		i=0;
		while(str[i]!='\0'&& i<size)
		{
			temp.str[i]=str[i];
			i++;
		}
		j=0;
		while(st.str[j]!='\0'&&i<size)
		{
			temp.str[i]=st.str[j];
			j++;
			i++;
		}
	return(temp);

}

//to copy the string
void STRING::operator =(STRING st)
{
	int i;
	
	
	for(i=0;st.str[i]!='\0';i++)
	{
		str[i]=st.str[i];
	}
	
}
//to compare two strings
void STRING::operator <=(STRING st)
{
	int l1,l2,i,j,flag=1;;
	l1=stringlength();
	l2=st.stringlength();
	for(i=0,j=0;i<l1,j<l2;i++)
	{
		if(str[i]<st.str[j])
		{
			cout<<"\n"<<st.str<<" is greatest";
			break;
		}		
		else if(str[i]>st.str[j])
		{		
			cout<<"\n"<<str<<" is greatest";
			break;
		}
		
		j++;
	}
	
	for(i=0,j=0;i<l1,j<l2;i++)
	{
		if(str[i]!=st.str[j])
		{
			flag=1;
			break;
		}
		else
			flag=0;

		j++;
	}	
	if(flag==0)
		cout<<"\nBoth the strings are same";
}



//to convert it into lower case
STRING STRING :: toLower()
{
	int l,i;
	STRING temp;
	cout<<"\nEnter the string:";
	cin>>temp.str;
	l=temp.stringlength();
	for(i=0;i<l;i++)
	{
		if(temp.str[i]<97)
			temp.str[i]=temp.str[i]+32;
		else
			temp.str[i]=temp.str[i];
	}
	return(temp);
}



//to convert it into upper case
STRING STRING :: toUpper()
{
	int l,i;
	STRING temp;
	cout<<"\nEnter the string:";
	cin>>temp.str;
	l=temp.stringlength();
	for(i=0;i<=l;i++)
	{
		if(temp.str[i]>91)
			temp.str[i]=temp.str[i]-32;
		else
			temp.str[i]=temp.str[i];
	}
	return(temp);
}
int main()
{
	STRING st1,st2,st3,st4,st5,st6;
	st1.getstring();
	st2.getstring();
	cout<<"\nThe first string is:";
	st1.display();
	cout<<"\nThe second string is :";
	st2.display();
	st3=st1+st2;
	cout<<"\nThe concatinated string is:";
	st3.display();
	st4=st1;
	cout<<"\nThe copied string is:";
	st4.display();
	cout<<"\nThe comparison between string 1 and 2 is:";
	st1<=st2;
	st5=st1.toLower();
	cout<<"\nThe lowercase string is:";
	st5.display();
	st6=st1.toUpper();
	cout<<"\nThe uppercase string is:";
	st6.display();
	
}






