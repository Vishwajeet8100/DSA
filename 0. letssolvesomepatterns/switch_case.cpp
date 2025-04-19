#include<iostream>
using namespace std;
int main(){
    int n;
   for(int i=0;i<5;i++){   // you can do these using do while statement.
    cout<<"Enter the value"<<endl;
    cin>>n;
    
    if(n==4){
        break;
    }
    switch(n){
        case 1: cout<<"vishwa";
        continue;
        case 2: cout<<"vikas";
        break;
        case 4: cout<<"Exit";
        break;
        default: cout<<"Invalid Input";
        break;
    }}
return  1;
}