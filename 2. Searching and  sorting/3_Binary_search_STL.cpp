// we used binary seacrh STL over here.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr = {1,2,34,5,6};
    int brr[]={1,2,3,4,5,6,7};
    int size = sizeof(brr)/sizeof(int);
    cout<<binary_search(arr.begin(),arr.end(), 35)<<endl;  // binary_seacrh(start iterator , end iterator, key to search)
    cout<<binary_search(brr, brr+ size,6);   // iterator is the address of the element.
    return 0;
}