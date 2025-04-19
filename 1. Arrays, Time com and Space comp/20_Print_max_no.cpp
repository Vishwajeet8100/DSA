//  Printing max no in a 2D array.

#include<iostream>
#include<vector>
using namespace std;
int printmax( int arr[2][3]){    // dont leave the [][] empty atleat one should be filled.
        int max = 0;
    for (int i = 0; i < 2;i++)
    {
        for(int j = 0; j< 3;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
       
    }
    return max;
    
}
int main()
{
    int brr[2][3]={{1,2,3},
                 {4,15,6}};
  
    cout<<printmax(brr);
    return 0;
}