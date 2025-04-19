// converting char array from lower too upper case.
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void convert_upper(char arr[]){
    for (int i = 0; i < strlen(arr); i++)
    {
        arr[i] = arr[i] -  'a' + 'A' ;   // add lower case a + uppercase A
                                    // or simply substract 32.
    }
    
}
int main()
{
    char brr[]="vishwajeet";

    convert_upper(brr);
        for (int i = 0; i < strlen(brr); i++)
    {
        cout<<brr[i];
    }


    return 0;
}