#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> arr[4];
   
   arr[1].push_back(2);
   arr[2].push_back(3);
for (int i = 0; i < arr[1].size(); i++)
{
    cout<<arr[1][i]<<" ";
}

    return 0;
}