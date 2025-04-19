#include <iostream>
#include <vector> // intersection of two arrays having unique elements.
#include<climits>
using namespace std;
vector<int> inter(int arr[], int brr[], int sizea, int sizeb)
{
    vector<int> ans;
    for (int i = 0; i < sizea; i++)
    {
        for (int j = 0; j < sizeb; j++)
        {
            if (arr[i] == brr[j])
            {
                ans.push_back(arr[i]);
                brr[j]==INT_MIN;
            }
        }
    }
   

    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 7};
    int brr[] = {2, 3, 4, 5, 6, 7};
    int sizea = 5;
    int sizeb = 6;
    vector<int> crr = inter(arr, brr, sizea, sizeb);
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }

    return 0;
}