// Strings.

// string -->  data type (acts similar as a vecctor)
// char array --> data structure of char data type.

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
    string str = "Babbar";
    char arr[] = "vishwajeet";
    
    
    // size of string 
    cout<<str.size();  // can use string_name.size() or str_name.length()  to get size.

    // cout<<strlen(str);  // " strlen() " STL is not compatible with string.
    cout<<strlen(arr);  // compatible with char array.


    
    // taking input
    string xyz ;
    cout<<endl;
    cout<<"Enter your input : ";
    cin>>xyz;   // cant input after spaces(delimiter).
    cout<<xyz;   

    // taking input containig spaces 
    string abc;
    cout<<"Enter the input of abc ";
    getline(cin,abc);
    cout<<abc;
    // cant use cin.getline(char_array,limit) it is used for char array.
    
    return 0;
}