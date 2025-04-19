//reversing the charachter array.

#include<iostream> 
#include<string.h> 
#include<vector>
using namespace std;
void reverse_string(char brr[]){
int s= 0;
    int e = strlen(brr)-1;
    while(s<=e){
        swap(brr[s],brr[e]);
        s++;
        e--;
    }
    
}
int main()
{
    char arr[100];
    cout<<"Enter the input : ";
    cin>>arr;
    int size = strlen(arr);
    // printing the reversed string.
    reverse_string(arr);
    for (int i = 0; i < size; i++)
    {
        cout<<"Reversed string is: "<<arr[i];
    }
    
    return 0;
}