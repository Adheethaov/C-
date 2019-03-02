/*
Date : 22-03-2018
program 3:
Create a class library member having fields memberid, membername, address, ph_no. Derive two classes Student(rollno, stream) and Faculty(facultyid, designation).Use only one function name display() to display all the object details. Use virtual functions and call the function using only the base class pointer.*/

#include<iostream>
using namespace std;
class library1
{
        protected:
        int memberid;
        char membername[20];
        char address[20];
        int phonenumber;
        public:
                virtual void read()
                {

                }
                virtual void display()
                {

                }
};
class student : public library1
{
        int rollno;
        char stream[20];
        public:
                void read()
                {
                         cout<<"\nEnter the rollno: ";
                        cin>>rollno;
                        cout<<"\nnEnter the stream: ";
                        cin>>stream;
                        cout<<"\nEnter the member id : ";
                        cin>>memberid;
                        cout<<"\nEnter the member name: ";
                        cin>>membername;
                        cout<<"\nEnter the address: ";
                        cin>>address;
                        cout<<"\nEnter the phonenumber: ";
                        cin>>phonenumber;
                }
                void display()
                {
                        cout<<"\nRoll no:"<<rollno;
                        cout<<"\nStream: "<<stream;
                        cout<<"\nThe member id is:"<<memberid;
                        cout<<"\nmember name "<<membername;
                        cout<<"\nAddress:"<<address;
                        cout<<"\nPhonenumeber " <<phonenumber;
                }
};
class faculty: public library1
{
        int facultyid;
        char designation[20];
        public:
                         void read()
                        {
                                 cout<<"\nEnter the faculty id:";
                                cin>>facultyid;
                                cout<<"\nEnter the designation:";
                                cin>>designation;
                                 cout<<"\nEnter the member id :";
                                 cin>>memberid;
                                   cout<<"\nEnter the member name:";
                                cin>>membername;
                                cout<<"\nEnter the address";
                                 cin>>address;
                                cout<<"\nEnter the phonenumber:";
                                cin>>phonenumber;


                        }
                void display()
                {
                        cout<<"\nFaculty id :"<<facultyid;
                        cout<<"\nDesignation :"<<designation;
                         cout<<"\nThe member id is:"<<memberid;
                         cout<<"\nmember name "<<membername;
                        cout<<"\nAddress:"<<address;
                         cout<<"\nPhonenumeber " <<phonenumber;
                }
                                     };
int main()
{
        int i,s,f,n,ch,j;
//      student s1[10];
//      faculty f1[10];
        library1 *l[10];

        cout<<"\nEnter the no of student:";
        cin>>s;
        cout<<"\nEnter the no of faculty:";
        cin>>f;
        n=f+s;
        for(i=0;i<s;i++)
        {
                l[i]=new student;
        }
        for(i=s;i<n;i++)
        {
                l[i]=new faculty;
        }

        cout<<"\n-----------Main Menu----------";
        do
        {
        cout<<"\n";
        cout<<"\n1.Student\n2.Faculty\n3.Show Student Details\n4.Show Faculty Details\nEnter your choice:";
        cin>>ch;
        switch(ch)
        {
                case 1:
                        j=0;
                        cout<<"\n_______Enter the details of the student:___________";
                        for(i=0;i<s;i++)
                        {
                                cout<<"\n";
                                cout<<"\nStudent "<<j+1;
                                cout<<"\n";
                                l[i]->read();
                                j++;
                }
                        break;
                case 2:
                        j=0;
                        cout<<"\n------------Enter the details of faculty:---------";
                        for(i=s;i<n;i++)
                        {
                                cout<<"\n";
                                cout<<"\nFaculty "<<j+1;
                                cout<<"\n";
                                l[i]->read();
                                j++;
                        }
                        break;
                case 3:
                        j=0;
                        cout<<"\n---------------The student details-----------";
                        for(i=0;i<s;i++)
                        {
                                cout<<"\n";
                                cout<<"\nStudent "<<j+1;
                                cout<<"\n";
                                l[i]->display();
                                j++;
                        }
                        break;
                case 4:
                        j=0;
                        cout<<"\n-------------The faculty details------------";
                        for(i=s;i<n;i++)
                        {
                                cout<<"\n";
                                cout<<"\nFaculty "<<j+1;
                                cout<<"\n";
                                l[i]->display();
                                j++;
                        }
                        break;
                default:
                        cout<<"invalid option";
        }
        }while(ch!=0);
}
                                      
