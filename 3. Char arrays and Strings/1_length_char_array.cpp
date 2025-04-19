// To calculate the lenghth of the char array 

#include<iostream>
#include<algorithm> 
#include<string.h> // to include stl related to strings.
#include<vector>
using namespace std;
int length(char arr[]){
    int length = 0;
    int i = 0;
    while(arr[i] != '\0'){    //  '\0' is null charachter which is automatically placed at end of of the char array to indicate termination of char array .
        length++;
        i++;
    }
    return length;
}
int main()
{
 
    char brr[100];
    cout<<"Enter your text : ";
    cin.getline(brr, 101);
    cout<<"Lenghth of the charachter array is : "<<length(brr)<<endl; // using function we created
    cout<<"Lenghth of the charachter array is : "<<strlen(brr);// using stl 

    return 0;
}