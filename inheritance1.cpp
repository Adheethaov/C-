/* A Bank  account maintain two accounts for customers, Savings and Current. Savings account provides compound interest  and withdrawal facilities but no cheque book facility. The current account provides cheque book facility but no interest.  Current account holders should also maintain  a minimum balance and  if the balance falls below this level a service charge is imposed

Create a class Account that stores customer name, account number and type of account. From this derive the classes cacct and sacct  to make them more specific to requirements. Include necessary member functions 
a) Accept deposit from a customer and update the balance
b) Display the balance
c) Compute and deposit interest
d) Permit withdrawal and update balance
e) Check for the minimal balance impose penalty necessary and update the balance */

#include<iostream>
#include<math.h>
using namespace std;

//creating a class with classname Account(base class)
//__________________________________________________________________________________________________________
class Account
{
	char cname;
	int ac_no;
	char ac_type;
	
	//deriving a class cacct from the base class Account
	public:
		
		void getdetails()
		{
			cout<<"\nEnter the name:";
			cin>>cname;
			cout<<"\nEnter the account number:";
			cin>>ac_no;
			cout<<"\nEnter the account type:";
			cin>>ac_type;
		}
		

		char getname();
		int getnumber();
		char gettype();
};
//____________________________________________________________________________________________________________

//deriving a class cacct from the base class Account

class cacct : public Account  //used public as access specifier so that private members cannot be accessed directly and the public men=mber willbe 					in public mode itself
{
	float balance;
	int penalty;
	char checkbook;
	
	
		
	public:

		cacct()
		{
			balance=0;
			penalty=5;
			checkbook='y';
		
		}
		cacct(float a)
		{
			balance=a;
		
		}
		 //getdetails();
		 
		void getdeposit();
		void display();
		void wdraw();
		void minbal();
		float getbal();
		char getcheck()
		{
			return(checkbook);
		}
};
//____________________________________________________________________________________________________________

//deriving a class sacct from the base class Account

class sacct : public Account
{
	float balance;
	
	char checkbook;
	
	
	public:

		sacct()
		{
			balance=0;
			checkbook='n';
		
		}
	
		sacct(float a)
		{
			balance=a;
		
		}
		//getdetails();
		 
		void getdeposit();
		void display();
		void wdraw();
		void cdintrest();
		char getcheck()
		{
			return(checkbook);
		}
		float getbals();
};
//________________________________________________________________________________________________________________

 
//defining member function in the base class Account


char Account::getname()
{
	return(cname);

}

int Account:: getnumber()
{
	return(ac_no);
}

char Account::gettype()
{
	return(ac_type);
}
//_________________________________________________________________________________________________________________


// defining the memeber functions in the derived class cacct


float cacct::getbal()
{
	return(balance);
}


void cacct::getdeposit()
{
	
	float deposit;
	cout<<"\nEnter the amount to be deposited:";
	cin>>deposit;
	balance=getbal()+deposit;
}

void cacct:: display()
{
	cout<<"\nBalance: "<<getbal();
}

void cacct ::wdraw()
{
	float wamount;
	cout<<"\nEnter the amount to be withdrawn:";
	cin>>wamount;
	if(wamount>getbal())
		cout<<"\nInsufficient balance";
	else
		balance=getbal()-wamount;
}

void cacct ::minbal()
{
	if(getbal()<100)
	{
		cout<<"\nMinimum balance required of 100 you have penalty";
		balance=getbal()-penalty;
	}
}

//________________________________________________________________________________________________________________________

//defining the memeber functions in the derived class sacct



float sacct::getbals()
{
	return(balance);
}

void sacct :: getdeposit()
{
	
	float deposit;
	cout<<"\nEnter the amount to be deposited:";
	cin>>deposit;
	balance=getbals()+deposit;
}

void sacct ::display()
{
	cout<<"\nBalance: "<<getbals();
}


void sacct::wdraw()
{
	float wamount;
	cout<<"\nEnter the amount to be withdrawn:";
	cin>>wamount;
	if(wamount>getbals())
		cout<<"\nInsufficient balance";
	else
		balance=getbals()-wamount;
}	

void sacct::cdintrest()
{
	int t;	//t is the no of years 
	float r;	//r is the rate of interest
	float CI;	//CI is the compound interest to be calculated
	float p,princamt;
	cout<<"\nEnter the no:of years: ";
	cin>>t;
	cout<<"\nEnter the principle amount:";
	cin>>princamt;
	cout<<"\nEnter the rate of interest:";
	cin>>r;
	
	
	//compound interest calculation is shown below
	p=pow((1+(r/100)),t);
	CI=(princamt*p)-princamt;
	cout<<"\nThe compound interest is "<<CI;
	balance=getbals()+CI;
	cout<<"\nInterest amount deposited";
}

//__________________________________________________________________________________________________________________


//main function

int main()
{
	char actype;
	int acno;
	cacct c1;
	sacct s1;
	
	//accepting the initial details to class Account through derived classes
	do
	{
	
	cout<<"\nEnter the account type (s/c):";
	cin>>actype;
	
	switch (actype)
	{
		case 's':
			s1.getdetails();
			s1.getdeposit();
		 	s1.display();
			s1.wdraw();
		 	s1.cdintrest();
			cout<<"\nStatus of checkbook:"<<s1.getcheck();
			break;
		case 'c':
			c1.getdetails();
			c1.getdeposit();
			c1.display();
			c1.wdraw();
			c1.minbal();
			cout<<"\nStatus of checkbook:"<<c1.getcheck();
			break;
	}
	}while(actype!='m');
}



			 
		
