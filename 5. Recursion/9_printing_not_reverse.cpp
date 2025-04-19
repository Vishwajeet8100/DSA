// printing the nos opposite of the printing revrse,    (head recursion) .

#include<iostream>
#include<vector>
using namespace std;
void print(int n){
    if(n == 0){
        return ;
    }
    print(n-1);
    cout<<n<<" ";
}
int main()
{
    int n = 5;
    print(n);
    return 0;
}

// all values are printed but in opposite direction, gehence head recursion.