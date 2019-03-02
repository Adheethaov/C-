/*
Date : 22-03-2018
program 3:
Create a class library member having fields memberid, membername, address, ph_no. Derive two classes Student(rollno, stream) and Faculty(facultyid, designation).Use only one function name display() to display all the object details. Use virtual functions and call the function using only the base class pointer.*/

#include<iostream>
using namespace std;
class library
{
        int memberid;
        char membername[20];
        char address[20];
        int phonenumber;
        public:
                void getmemberid()
                {
                        cout<<"\nEnter the member id :";
                        cin>>memberid;
                }
                void getmembername()
                {
                        cout<<"\nEnter the member name:";
                        cin>>membername;
                }
                void getaddress()
                {
                        cout<<"\nEnter the address";
                        cin>>address;
                }
                void getphonenumber()
                {
                        cout<<"\nEnter the phone number:";
                        cin>>phonenumber;
                }
                virtual void display()
                {

                }
};
class student : public library
{
        int rollno;
        char stream[20];
        public:
                void display()
                {
                        getmemberid();
                        getmembername();
                        getaddress();
                        getphonenumber();
            
                }
}
class faculty: public library
{
        int facultyid;
        char designation[20];
        public:
                void display();
                {
                        getmemberid();
                        getmembername();
                        getaddress();
                        getphonenumber();
                }
}
int main()
{
        library l1;

