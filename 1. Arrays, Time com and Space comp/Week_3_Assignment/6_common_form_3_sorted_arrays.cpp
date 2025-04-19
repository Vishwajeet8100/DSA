// print common elements from 3 sorted arrays.
// time and space complexity should be order of n.
// not to print repeated common elements.

#include<iostream>
#include<vector>
using namespace std;
vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3)
{
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> ans;
 while(i<arr1.size()&& j< arr2.size()&& k< arr3.size()){
    if(arr1[i]==arr2[j]&&arr2[j]==arr3[k]){
       if(ans.empty() || ans.back() != arr1[i]){  //  this condition so we not print repeated common elemnts.
         
        ans.push_back(arr1[i]);
       }
        i++;j++;k++;
    }
    else if(arr1[i]<arr2[j]){
        i++;
    }
    else if(arr2[j]<arr3[k]){
        j++;
    }
    else{k++;};
 }

  return ans;
}
int main()
{
    vector<int> arr1 ={3,4,5,6,7,12,12};
    vector<int> arr2 ={1,3,5,7,9,12,12};
    vector<int> arr3 ={1,4,5,9,11,12,12};
    vector <int> ans2 = commonElements(arr1,arr2,arr3);
    for (int i = 0; i < ans2.size(); i++)
    {
        cout<<ans2[i]<<" ";
    }
    
    return 0;
}