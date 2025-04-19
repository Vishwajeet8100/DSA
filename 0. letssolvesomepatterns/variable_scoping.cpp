#include<iostream>
using namespace std;
int main(){
    int b = 5;
    b = 20;  // here we can update b. But cannot redclare like int b.
    if(true){
        int b = 10;  // we can redeclare b in new braces 
        cout<<b<<endl;
    }
    cout<<b<<endl;
return  0;
}
// check output for better understanding.


#include<iostream>
using namespace std;
int main(){
    int b = 5;
    b = 20;
    if(true){
        b = 10; // here we did not redclare b but update the existing b.
        cout<<b<<endl;
    }
    cout<<b<<endl;
return  0;
}