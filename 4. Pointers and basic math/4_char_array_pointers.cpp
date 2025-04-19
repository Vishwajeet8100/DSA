#include<iostream>
#include<vector>
using namespace std;
int main()
{
   
   // pointgers to integer arrays and char arrays or strings will perform differently.
    cout<<"About the character array "<<endl;
    char ch[] = "hello";
    
    
    char *  c =&ch[0];    // both this and below one will give same answers.
    char *  p =ch;
    // you cannot do chr * ptr = &ch  // remember no solid reason found 
    cout<<c<<endl;
    cout<<p<<endl;
    cout<<*c<<endl;
    cout<<*p<<endl;
    cout<<*ch<<endl;
    
    // st[i]  & i[st] & *(st + i)  are same thing .


    return 0;
}



// sher bano
// address of name 
//r
//address of name(base)
//adddress of cptr
// r
//