#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //  all pointers have same size though it be aa pointer to character or integer .
    int a = 10;
    int * ptr = & a;
    char ch = 'a';
    char * ctr = & ch ;

    cout<<sizeof(ptr)<<endl; 
    cout<<sizeof(ctr)<<endl;

    // ptr and tptr are both pointers 
    // tptr is said to be a copy pointer.
    // functions same as a ptr.
     
    // int a = 10;
    // int * ptr = &a;
    int * tptr = ptr;
    cout<<*ptr<<endl;
    cout<<*tptr<<endl;
    cout<<ptr<<endl;
    cout<<tptr;
    
    return 0;
} 