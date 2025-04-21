// same as question 29 but we used two fucntions done by sir.


#include<iostream>
#include<vector>
using namespace std;
void printsub(vector<int>& arr,int start,int end){
    // base case 
    if(end >= arr.size()){
        return;
    }
    // one case 
    for (int i = start; i <= end; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // recrusion 
    printsub(arr,start,end+1);
    
}
void printsubmain(vector<int>arr ,int start){
    for (start = 0; start < arr.size(); start++)
    {
        int end = start;
        printsub(arr,start,end);
    }
    
}
int main()
{
    vector<int> arr = {1,2,3,4};
    printsubmain(arr,0);
    return 0;
}