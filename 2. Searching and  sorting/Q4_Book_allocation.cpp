// Q4  - book allocation problem .
//  done by me for M =2 (very specific answer , not all answer)
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int find_pages(int N, int arr[], int M ){
    
    vector<int> ans ;
    int j = 1;
    while(j<=(N-1)){
        int sum1 = 0;
        for (int i = 0; i < j; i++)
        {
            sum1 =  arr[i] + sum1;
        }
        int sum2 = 0;
         for (int i = j; i < N; i++)
        {
            sum2 =  arr[i] + sum2;
        }
        if(sum1 > sum2){
            ans.push_back(sum1);
        }
        else{
            ans.push_back(sum2);
        }
        j++;
    }
    sort(ans.begin(),ans.end());
    
    cout<<"Allocations can be done as : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    
    cout<<" Minimum of them is : ";
    return ans[0];
}
int main()
{
    // int N = 4; // no of books.
    // int A[]={12,34,67,90}; // pages in ith book .
    // int M = 2; //  no. of studnets.
    
    int N = 3; // no of books.
    int A[]={15,17,20}; // pages in ith book .
    int M = 2; //  no. of studnets.
   
    
    cout<<find_pages(N,A,M);
    return 0;
}