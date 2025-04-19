// replacing spaces in char array with some other symbol.

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void replace_spaces(char brr[]){
    for (int i = 0; i < strlen(brr); i++)
    {
        if(brr[i]==' '){
            brr[i] = '$';   // replace with dollar.
        }
    }
    
}
int main()
{
    char arr[100];
    cout<<"Enter your input : ";
    cin.getline(arr,100);
    
    //printing the replaced char array.
    replace_spaces(arr);

    for (int i = 0; i < strlen(arr); i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}