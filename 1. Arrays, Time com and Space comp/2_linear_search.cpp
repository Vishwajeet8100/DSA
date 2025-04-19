#include<iostream>
using namespace std;
    
void search(int arr[],int size,int key){
        bool check= 0;
    for(int i = 0;i<size;i++){
        if(arr[i]==key){
             check = 1;
            break;
            cout<<"Array is at index : "<<i;
        }   
    }
    if(check==0){
        cout<<"Index not found";
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int size = 6;
    search(arr,size,50);
    return 0;
}