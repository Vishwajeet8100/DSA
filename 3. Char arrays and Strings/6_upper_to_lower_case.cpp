// converting char array from upper to lower case.

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void convert_upper(char arr[]){
    for (int i = 0; i < strlen(arr); i++)
    {
        arr[i] = arr[i] -  'A' + 'a' ; 
    }
    
}
int main()
{
    char brr[]="VISHWA";

    convert_upper(brr);
        for (int i = 0; i < strlen(brr); i++)
    {
        cout<<brr[i];
    }


    return 0;
}