// basic linear search algorithm.
#include<iostream>
#include<vector>
using namespace std;
int search(vector <int> brr, int key){
    for (int i = 0; i <brr.size(); i++){
        if(brr[i]==key){
            return i + 1;
        }
    }
    


   }
int main()
{
    vector<int>arr ={ 1,4,2,5,6};
    int key = 5;
    cout<<search(arr, key);
    return 0;
}