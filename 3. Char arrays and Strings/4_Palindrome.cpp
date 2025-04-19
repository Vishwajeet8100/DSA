// palindorme

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
bool palindrome(char brr[]){
    int i =0;
    int j =strlen(brr)-1;
    while(i<=j){
        if(brr[i]!=brr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    char arr[100];
    cout<<"Enter the input : ";
    cin>>arr;

    if(palindrome(arr)){
        cout<<"The given input is a Palindrome";
    }
    else{
        cout<<"Not a Palindrome ";
    }

    return 0;
}