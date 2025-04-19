// example

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    char str[] = "ancdefgh";
    char * ptr ;
    ptr = str;
    ptr = ptr + 5;
    cout<<ptr;

    return 0;
}