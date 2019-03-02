/*5. Write a program in C++ to check the upper and lower limits of integer. 

Expected Output:

Check the upper and lower limits of integer :

--------------------------------------------------

The maximum limit of int data type : 2147483647 

The minimum limit of int data type : -2147483648 

The maximum limit of unsigned int data type : 4294967295 

The maximum limit of long long data type : 9223372036854775807

The minimum limit of long long data type : -9223372036854775808

The maximum limit of unsigned long long data type : 18446744073709551615

The Bits contain in char data type : 8 

The maximum limit of char data type : 127 

The minimum limit of char data type : -128

The maximum limit of signed char data type : 127 

The minimum limit of signed char data type : -128 

The maximum limit of unsigned char data type : 255 

The minimum limit of short data type : -32768 

The maximum limit of short data type : 32767 

The maximum limit of unsigned short data type : 65535*/



#include<iostream>

#include<climits>

using namespace std;

int main(void)

{

    cout<<"The maximaum limit of  int   data type :"<<INT_MAX<<endl;

    cout<<"The  minimum limit of   int  data type:"<<INT_MIN<<endl;

    cout<<"The maximaum limit of  unsigned int   data type :"<<UINT_MAX<<endl;

    cout<<"The  minimum limit of  char   data type:"<<CHAR_MIN<<endl;

    cout<<"The maximaum limit of  char   data type :"<<CHAR_MAX<<endl;

    cout<<"The  minimum limit of   long long  data type:"<<LLONG_MIN<<endl;

    

    

}
