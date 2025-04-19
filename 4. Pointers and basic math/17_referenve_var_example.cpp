// importance of reference variable- we use it to pass in fucntions.


 
#include<iostream>
#include<vector>
using namespace std;
void solve2(int& b){  // pass by reference(use refernece variable points the same location)
    b++;
}
void solve(int a){   // pass by value.(cretes a copy variable a at a diff location)
    a++;
}
int main()
{
    int a = 5;
    solve(a);
    cout<<a<<endl; // a will not change it will remain 5.
    solve2(a);
    cout<<a<<endl;   //  a will change to 6.
    return 0;
}


