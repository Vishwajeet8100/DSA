#include <iostream>
#include <vector>    
using namespace std;
int main()
{                          // 2D  arrays are formed like matrix, but are stored linearly in the memory.
    int x = 2;
    int y = 2;
    int arr[x][y];                   // stored linearly in the nth index by formula n= ( total no of columns * i th row ) + j th column
   for(int i = 0;i<x;i++){
    for(int j = 0;j<y;j++){
        cin>>arr[i][j];
    }
   }
   for(int i = 0;i<x;i++){
    for(int j = 0;j<y;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;
   
   return 0;

}

// Another way to declare 2D array.

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int brr[2][2]={{1,2},{3,4}};
//        for(int i = 0;i<2;i++){
//     for(int j = 0;j<2;j++){
//         cout<<brr[i][j]<<" ";
//     }}
  
//     return 0;
// }