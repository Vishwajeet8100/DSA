// double pointer (thats a pointer to a pointer)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a = 10;
    int * p = &a;
    int ** q = &p;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    return 0;
}