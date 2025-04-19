// finding prime no or not 
// we can find it by simple method where we use simple logic to find prime no .

// 1 method.
// #include<iostream>
// #include<vector>
// using namespace std;
// bool is_prime(int n){
//     for (int i = 2; i < n; i++)
//     {
//         if(n%i == 0){
//             return false;
//         }
//         return true;
//     }
    
// }
// int main()
// {
//     int n = 10;
//     bool t = is_prime(n);
//     if(t){
//         cout<<n<<" : is a prime no.";
//     }
//     else{
//         cout<<n<<" : is not a prime no ";
//     }
//     return 0;
// }


// another method is where we can reduce the no of comparisons and reduce time complexity

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool is_prime(int n){
    for (int i = 2; i <= ceil(sqrt(n)); i++)
    {
        if(n%i == 0){
            return false;
        }
        return true;
    }
    
}
int main()
{
    int n = 7;
    bool t = is_prime(n);
    if(t){
        cout<<n<<" : is a prime no.";
    }
    else{
        cout<<n<<" : is not a prime no.";
    }
    
    return 0;
}
