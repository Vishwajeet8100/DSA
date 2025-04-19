#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


    void answer(vector<int>& arr, int i,int sum, int & maxi){
    if(i>=arr.size()){
        maxi = max(maxi, sum );
        return ;
    }

    // left side econdition (include condition)
    answer(arr,i+2,sum + arr[i],maxi );

    // right side condition(exclude condition)
    answer(arr,i+1,sum ,maxi);


}
int main()
{
    vector<int>arr ={2,1,4,9};
    int maxi = INT_MIN;
    int sum = 0;
    int i = 0;
    answer(arr,i,sum,maxi);

    cout<<maxi;
    return 0;
}