/*
Date:22-03-2018
program 2
Create an inheritance hierarchy that a bank might use to represent customers' bank accounts. All customers at this bank can deposit (i.e., credit) money into their accounts and withdraw (i.e., debit) money from their accounts. More specific types of accounts also exist. Savings accounts, for instance, earn interest on the money they hold. Checking accounts, on the other hand, charge a fee per transaction (i.e., credit or debit).*/

#include<iostream>
#include<math.h>
using namespace std;

class Account
{
        char cname;
        int ac_no;
        char ac_type;

       

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
		virtual void withdraw()
		{
		
		}
		virtual void deposit()
		{
			
		}


                char getname();
                int getnumber();
                char gettype();
};
//____________________________________________________________________________________________________________

//deriving a class cacct from the base class Account

class cacct : public Account  //used public as access specifier so that private members cannot be accessed directly and the public men=mber willbe                                      in public mode itself
{
        float balance;
        int penalty;
        char checkbook;



        public:

              	  cacct()
                {
                        balance=0;
      
                }
                cacct(float a)
                {
                        balance=a;

                }
                

                void deposit()
		{
			float damount;
			int transactionfee=5;
			cout<<"\nEnter the amount to be deposited:";
			cin>>damount;
			balance =getbal()+damount-transactionfee;
			cout<<"\ntransaction fee duducted from your account";
		}
                void display();
                void withdraw()
		{
			float wamount;
       	 		int transactionfee=5;
        		cout<<"\nEnter the amount to be withdrawn:";
        		cin>>wamount;
        		if(wamount>getbal())
                	cout<<"\nInsufficient balance";
        		else
        		{

                		balance=getbal()-wamount;
              	 	 	balance=getbal()-transactionfee;
                		cout<<"\ntransaction fee duducted from your account";
        		}
		}
        
                float getbal();
      
};
//____________________________________________________________________________________________________________

//deriving a class sacct from the base class Account

class sacct : public Account
{
        float balance;

//      char checkbook;


        public:

                sacct()
                {
                        balance=0;
//                      checkbook='n';

                }

                sacct(float a)
                {
                        balance=a;

                }
               

                void deposit()
		{
			float damount;
			int transactionfee=5;
			cout<<"\nEnter the amount to be deposited:";
			cin>>damount;
			balance =getbals()+damount;
			

		}
                void display();
                void withdraw()
		{
			 float wamount;
        		cout<<"\nEnter the amount to be withdrawn:";
        		cin>>wamount;
        		if(wamount>getbals())
                		cout<<"\nInsufficient balance";
        		else
                		balance=getbals()-wamount;
		}

                void cdintrest();

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



void cacct:: display()
{
        cout<<"\nBalance: "<<getbal();
}




//________________________________________________________________________________________________________________________

//defining the memeber functions in the derived class sacct
float sacct::getbals()
{
        return(balance);
}



void sacct ::display()
{
        cout<<"\nBalance: "<<getbals();
}




void sacct::cdintrest()
{
        int t;  //t is the no of years
        float r;        //r is the rate of interest
        float CI;       //CI is the compound interest to be calculated
        float p,princamt;
        cout<<"\nEnter the no:of years: ";
        cin>>t;

        princamt=getbals();
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
        int acno,choice,num;
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
                  do
                  {
                        cout<<"\n1.Deposit \n2.Know your balance\n3.withdraw\nEnter your choice: ";
                        cin>>choice;
                        switch(choice)
                        {
                         case 1:
				
                                s1.deposit();
                                break;
                         case 2:
                                s1.display();
                                break;
                         case 3:
                                s1.withdraw();
                                break;
                        }

                 }while(choice!=0);


        //              cout<<"\nStatus of checkbook:"<<s1.getcheck();
                         s1.cdintrest();
                         cout<<"\nEnter the account type (s/c):";
                         cin>>actype;
                        break;
                case 'c':
                        c1.getdetails();
                    do
                    {
                        cout<<"\n1.Deposit \n2.Know your balance\n3.withdraw\nEnter your choice: ";
                        cin>>choice;
                        switch(choice)
                        {
                          case 1:
                                c1.deposit();
                                break;
                          case 2:
                                c1.display();
                                break;
                          case 3:
                                c1.withdraw();
                        }
        //              c1.minbal();
        //              cout<<"\nStatus of checkbook:"<<c1.getcheck();
                    }while(choice!=0);
                        cout<<"\nEnter the account type (s/c):";
                         cin>>actype;
                        break;
        }
        }while(actype!='m');
}


