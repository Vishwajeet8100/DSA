// function to compare two strings.
#include<iostream>
#include<vector>
using namespace std;
bool compare_string(string arr, string brr){
    for (int i = 0; i < arr.length(); i++)
    {
       if(arr[i] != brr[i]){
        return false;
       }
        
    }
    return true;
    
}
int main()
{
    string arr = "vishwajeet";
    string brr = "vishwajeet";
    cout<<compare_string(arr,brr);
    return 0;
}