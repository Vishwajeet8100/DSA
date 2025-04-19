// // first way is to pass size only 
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(int arr[], int n){
//     if(n < 0){
//         return ;
//     }
//     print(arr,n-1);
//     cout<<arr[n]<<" ";

// }
// int main()
// {
//     int arr[]= {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int)-1;
//     print(arr,n);
//     return 0;
// }


//another way passing indedx.

#include<iostream>
#include<vector>
using namespace std;
void print(int arr[], int n, int i){
    if(i >= n){
        return ;
    }
    cout<<arr[i]<<" ";
    print(arr,n, i+1);

}
int main()
{
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int i = 0;
    print(arr,n,i);
    return 0;
}