// // regular fibonacchii series.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n ;
//     cout<<" How many no of series you wnat : ";
//     cin>>n;
//     int a = 0 ;
//     int b = 1 ;
//     cout<<0<<" "<<1<<" ";

//     int sum = 1;
//     for (int i = 0; i < n-2; i++)  // here we did n-2 as we already printed 0 and 1.
//     {
//          sum = a + b ;
//          cout<<sum<<" ";
//          a = b;
//          b = sum;
         
//     }
    
//     return 0;
// }

// recursive fibonachi series.

#include<iostream>
#include<vector>
using namespace std;
int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    cout<<"fibonachi of what index you want : ";
    // 0 1 1 2 3 5 8 13 21
    cin>>n;
    cout<<fib(n);
    return 0;
}