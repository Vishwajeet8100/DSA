// reference variable
// create two variables for same memory location so you can access the memory location by 
// either of the variables.

// reference variables have easy readability(easy to understand) than pointers.
// reference vairbales cannot point to null whereas pointers can point to null
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a = 10;
    int & b = a;

    cout<<"printing a will give : "<<a<<endl;
    cout<<"printing b will give : "<<b<<endl;
    b = b+1;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}



