//  to make a fucntion  to question in slide 18 

#include<iostream>
#include<vector>
using namespace std;
void printsum( int arr[2][3]){    // dont leave the [][] empty atleat one should be filled.
    for (int i = 0; i < 2;i++)
    {
        int sum = 0;
        for(int j = 0; j< 3;j++){
            sum = sum  + arr[i][j];
        }
        cout<<" sum of "<<i<<" th row is : "<<sum<<endl;   // we just made a function for previous question.
    }
    
}
int main()
{
    int brr[2][3]={{1,2,3},
                 {4,5,6}};
  
    printsum(brr);
    return 0;
}