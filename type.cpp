/*3.Write a program in C++ to find Size of fundamental data types. 

Sample Output:

Find Size of fundamental data types : 

------------------------------------------ 

The sizeof(char) is : 1 bytes 

The sizeof(short) is : 2 bytes

The sizeof(int) is : 4 bytes 

The sizeof(long) is : 8 bytes 

The sizeof(long long) is : 8 bytes 

The sizeof(float) is : 4 bytes 

The sizeof(double) is : 8 bytes 

The sizeof(long double) is : 16 bytes 

The sizeof(bool) is : 1 bytes */



#include <iostream>

using namespace std;

int main(void){

     cout << " Size of fundamental data types" ;

     cout<<"___________________________________";

     cout<<"The sizeof(char) is:"<<sizeof(char)<<"bytes\n";

     cout<<"The sizeof(short) is:"<<sizeof(short)<<"bytes\n";

     cout<<"The sizeof(int) is:"<<sizeof(int)<<"bytes\n";

     cout<<"The sizeof(long) is:"<<sizeof(long)<<"bytes\n";

     cout<<"The sizeof(long long) is:"<<sizeof(long long)<<"bytes\n";

     cout<<"The sizeof(float) is:"<<sizeof(float)<<"bytes\n";

     cout<<"The sizeof(double) is:"<<sizeof(double)<<"bytes\n";

     cout<<"The sizeof(long double) is:"<<sizeof(long double)<<"bytes\n";

     cout<<"The sizeof(bool) is:"<<sizeof(bool)<<"bytes\n";

     

}
