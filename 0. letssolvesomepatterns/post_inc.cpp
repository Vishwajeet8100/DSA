// #include<iostream>
// using namespace std;
// int main(){
//     int a = 4;
//     cout<<a++<<endl;  // post increament operator will be first printed and then added. 
//     cout<<a;
// return  0;
// }


#include<iostream>
using namespace std;
int main(){
    int b = 12;
    int c = b++ + 1;
    cout<<c;
    //answer will be c = 12 +1 = 13
    cout<<b; // now b will be 13
return  0;
}