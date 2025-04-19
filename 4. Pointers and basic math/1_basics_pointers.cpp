// pointer in cpp is a variable that stores the address of another variable .

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    int z = 10;
    cout<< " Adress of z is : "<<&z<<endl;
    cout<<"Value of z : "<<z<<endl;

    cout<<"or another way is through pointers "<<endl;
    int * ptr = &z;
    cout<< " Adress of z is : "<<ptr<<endl;
    cout<<"Value of z : "<<*ptr<<endl;   // "*ptr" will give the value(10) at the address(address of z) that is stored in variable ptr.

    return 0;
}