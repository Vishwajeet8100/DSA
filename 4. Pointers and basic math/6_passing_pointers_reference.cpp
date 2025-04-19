// passing pointers directly.
// here we just passed the pointers in the fucntion.
#include<iostream>
using namespace std;
void pass(int * p, int * q){
    *p = 2100;
    *q = 3100;
}
int main(){
    int a = 10;
    int b = 20;
    int * ptr = &a;
    int * ntr = &b;
    pass(ptr,ntr);
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b;

}