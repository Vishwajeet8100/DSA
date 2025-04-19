//arrays are always passed by reference and not by value 
#include<iostream>
using namespace std;
void print(int brr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<brr[i]<<", ";
    }
}
void inc(int crr[],int size){
     crr[0]=  crr[0] + 3;
     print(crr,size);
}
int main(){
    int arr[]={5,6};
    int size = 2;
    inc(arr,2);   // changes will be made in original array named arr.
    cout<<endl;
    print(arr,2);// changes will be printed here.
    return 0;
}