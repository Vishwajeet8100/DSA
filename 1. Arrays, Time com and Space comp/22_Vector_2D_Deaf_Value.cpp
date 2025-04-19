// Creating 2D vector with same valuse.
// we use the method of vector<int> array(size, value) to do this.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int rows = 3;
    int col = 3;
    vector<vector<int>> arr(rows,vector<int>(col,-101));
    for(int i = 0; i<arr.size();i++){
        for(int j = 0;j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}