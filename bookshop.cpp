/*
Date- 22--3-2018
program:
Consider an example of book shop which sells books and video tapes. It is modeled by book and tape classes. These two classes are inherited from the base class called media. The media class has common data members such as title and publication. The book class has data members for storing a number of pages in a book and tape class has the playing time in a tape. Each class will have the member functions such as read ( ) and show ( ). In a base class, these members have to be defined as virtual functions. Write a program which models this class hierarchy and processes their objects using pointers to the base class only. (Use Virtual Functions and all classes must be template based (int and double data to be tested).*/

#include<iostream>
#include<string>
using namespace std;

//base class------------------------------------------------------------------------------------------------------------------------------------------------
template<class T>
class media
{
        char title[20];
        char publication[20];
        public:
                void gettitle()
                {
                        cout<<"\nEnter the title: ";
                        cin>>title;
                }
                void getpublication()
                {
                        cout<<"\nEnter the name of publication: ";
                        cin>>publication;
                }
                virtual void read()
                {

                }
                virtual void show()
                {

                }
};

//-------------------------------------------------------------------------------------------------------------------------------------------------------
//deriving a class book from the base class media in public mode
template <class T>
class book:public media<double>
{
        int pagenumber;
        public:
                void read()
                {
                        cout<<"\nEnter the no: of pages in the book : ";
                        cin>>pagenumber;
              	  }
                void show()
                {
                        cout<<"\nThe number of pages in the book is - "<<pagenumber;
                }
};
//------------------------------------------------------------------------------------------------------------------------------------------------------------
//deriving a class tape from the base class media in public mode
template <class T>
class tape:public media<double>
{
        int playtime;
        public:
                void read()
                {
                        cout<<"\nEnter the play time: ";
                        cin>>playtime;
                }
                void show()
                {
                        cout<<"\nThe play time is : "<<playtime;
                }
};
//---------------------------------------------------------------------------------------------------------------------------------------------------------
//main function

int main()
{
        int i,j=0;
        book b1[10];
        tape t1[10];
        media *m[]={&b1,&t1};
		
		cout<<"Enter the details of book :";
		for(i=0;i<10;i++)
		{
			
			cout<<"--";

		}
			
	

        for(i=0;i<2;i++)
        {
                m[i]->read();
                cout<<"\n";
                m[i]->show();
                cout<<"\n";
        }
}



