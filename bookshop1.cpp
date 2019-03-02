/*
Date- 22--3-2018
program:
Consider an example of book shop which sells books and video tapes. It is modeled by book and tape classes. These two classes are inherited from the base class called media. The media class has common data members such as title and publication. The book class has data members for storing a number of pages in a book and tape class has the playing time in a tape. Each class will have the member functions such as read ( ) and show ( ). In a base class, these members have to be defined as virtual functions. Write a program which models this class hierarchy and processes their objects using pointers to the base class only. (Use Virtual Functions and all classes must be template based (int and double data to be tested).*/

#include<iostream>
#include<string>
using namespace std;

//base class------------------------------------------------------------------------------------------------------------------------------------------------

class media
{
        protected:
                char title[20];
                char publication[20];
        public:
                virtual void  read()
                {

                }
                virtual void show()
                {

                }
};

//-------------------------------------------------------------------------------------------------------------------------------------------------------
//deriving a class book from the base class media in public mode

class book:public media
{
        int pagenumber;
        public:
                void read()
                {

                        cout<<"\nEnter the title: ";
                        cin>>title;
                        cout<<"\nEnter the name of publication: ";
                        cin>>publication;

                        cout<<"\nEnter the page number:";
                        cin>>pagenumber;
                }
                void show()
                {

                        cout<<"\nTitle: "<<title;
                        cout<<"\nPublication: "<<publication;
                        cout<<"\nThe pagenumber: "<<pagenumber;

                }
};
//deriving a class tape from the base class media in public mode
class tape:public media
{

        int playtime;

                void read()
                {
                         cout<<"\nEnter the title: ";
                        cin>>title;

                        cout<<"\nEnter the name of publication: ";
                        cin>>publication;


                        cout<<"\nEnter the play time: ";
                        cin>>playtime;
                }
                void show()
                {
                        cout<<"\nTitle: "<<title;
                        cout<<"\nPublication: "<<publication;
                        cout<<"\nThe play time is : "<<playtime;
                }
};
//---------------------------------------------------------------------------------------------------------------------------------------------------------
//main function

int main()
{
        int i,b,t,n,ch,j;
        book b1[10];
        tape t1[10];

        media *m[10];




                        cout<<"\nEnter the number of books:";
                        cin>>b;

                         cout<<"\nEnter the nummber of tapes:";
                        cin>>t;
                        n=b+t;
                        for(i=0;i<b;i++)
                        {
                                m[i]=new book;
                        }
                        for(i=b;i<n;i++)
                        {
                                m[i]=new tape;
                        }
                 cout<<"\n--------MAIN MENU__________";

        do
        {
                cout<<"\n1.Book\n2.Tape\n3.Show book\n4.Show tape\nEnter your choice: ";
                cin>>ch;


        switch(ch)
        {
                case 1:
			j=0;
                         cout<<"\n------Details of book:----------";

                        for(i=0;i<b;i++)
                        {
				cout<<"\nBook"<<j+1;
				j++;
                                m[i]->read();
				
                        }
                        break;
                case 2:
			j=0;
                        cout<<" \n-------Details of tape------";
                          for(i=b;i<n;i++)
                          {
				cout<<"\nTape"<<j+1;
				j++;
                                m[i]->read();
                          }
                        break;
                case 3:
			j=0;
                         cout<<"\n---------The entered details of book-------";
                        for(i=0;i<b;i++)
                        {
				cout<<"\nBook"<<j+1;
				j++;
        
                                 cout<<"\n";
                                  m[i]->show();
                                 cout<<"\n";
                        }
                        break;
                case 4:
			j=0;

                        cout<<"\n---------The entered details of tape-------";
                        for(i=b;i<n;i++)
                        {
       				cout<<"\nTape"<<j+1;
				j++;
                                 cout<<"\n";
                                  m[i]->show();
                                 cout<<"\n";
                        }
                        break;

        }
        }while(ch!=0);
}
