/*Define a class to represent a bank accoutn which includes the following as Data embers
a) Name of the depositor b)Account Number c)Withdrawal amount d)Balance amount on th account 
Member functions
a) To assining initial values 
b) To deposit an amount
c) To withdraw an amount agrer checking the balance
d) To display name and objects.

Write a program to handle n no:of account holders using array of objects.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
class bank
{
	public:
		int ac_no;
		char name[20];
	private:
		int withdraw;
		int balance;
	public:
		void assign();
		void deposit();
		void wdraw();
		void display();
};

void bank::assign()
{
	cout<<"+++++++++++++++++++++";
	cout<<"Enter the name:";
	cin>>name;
	cout<<"\nEnter the account no:";
	cin>>ac_no;
	cout<<"\nEnter the initial balance:";
	cin>>balance;
	cout<<"+++++++++++";
}
void bank::deposit()
{
	int deposit;
	cout<<"\nEnter the amount to be deposited:";
	cin>>deposit;
	balance=balance+deposit;
}
void bank::wdraw()
{
	int withdraw;
	cout<<"\nEnter the amount ot be withdrawn:";
	cin>>withdraw;
	if(balance>withdraw)
		balance=balance-withdraw;
	else
		cout<<"Insufficient balance";
}

void bank:: display()
{
	cout<<"____________\nName:"<<name<<"\nBalance:"<<balance<<"\n____________________________";
}

int main()
{
	int n,i, ch, ac;
	bank b[5];
	cout<<"\nEnter the no:of account holders:";
	cin>>n;
	for(i=0;i<n;i++)
		b[i].assign();
	do
	{
		cout<<"\n\nEnter your accunt no:";
		cin>>ac;
		for(i=0;i<n;i++)
		{
			if(b[i].ac_no==ac)
			{
				cout<<"\n___Welcome "<<b[i].name<<"_______";
				do
				{
					cout<<"\n______Bank Account____________";
					cout<<"\n2.Deposit \n3.Withdraw \n Display \nEnter your choice:";
					cin>>ch;
					switch(ch)
					{
						case 2:
							b[i].deposit();
							break;
						case 3:
							b[i].wdraw();
							break;
						case 4:
							b[i].display();
							break;
					}
				}while(ch!=5);
			}
		}
	}while(ac!=0);
}

