// sort colors where three different colors represent 3 differnt no.
// we can use this method which has o(n) time complexity.
// or can sort array using two for loops o(n^2) time complexity.
#include<iostream>
#include<vector>
using namespace std;
void sortcolor(vector  <int>  & arr){
    int h = arr.size()-1;
    int l = 0;
    int m = 0;
  while(m<=h){
    if(arr[m]==2){
        swap(arr[m],arr[h]);
        h--;
    }
    if(arr[m]==0){
        swap(arr[m],arr[l]);
        l++;
        m++;
    }
    if(arr[m]==1){
        m++;
    }
  }
    for (int  i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    vector<int>brr={2,1,0,1,2,2};
    sortcolor(brr);
    // print (brr);
    
    return 0;
}