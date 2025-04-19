#include <iostream>
#include <vector> // union of two arrays done by me high time complexity.
using namespace std;
vector<int> inter(int arr[], int brr[], int sizea, int sizeb)
{
    vector<int> ans;
    vector<int> sol;
    
    for (int i = 0; i < sizea; i++)
    {
       ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
       ans.push_back(brr[i]);
    }
    sol.push_back(ans[0]);

    
    for (int i = 0; i < ans.size(); i++)
    {
       int count = 0;
       for(int j =0;j<sol.size();j++){
         
         if(ans[i]==sol[j]){
            count++;   
               
         }
       }
       if(count==0){
        sol.push_back(ans[i]);
       }
    }

    return sol;
}
int main()
{
    int arr[] = {1,2,3,4};
    int brr[] = {3,4,5,6};
    int sizea = 4;
    int sizeb = 4;
    vector<int> crr = inter(arr, brr, sizea, sizeb);
    for (auto value: crr)
    {
        cout << value;
    }

    return 0;
}