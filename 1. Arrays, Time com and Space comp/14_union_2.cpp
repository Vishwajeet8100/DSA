#include <iostream>
#include <vector> //union by first doing intersection,
// will only work if each array has all unique elements.
#include <climits>
using namespace std;
vector<int> inter(int arr[], int brr[], int sizea, int sizeb)
{
    // vector<int> ans;
    vector<int> dol;
    for (int i = 0; i < sizea; i++) // here we will intersesct the two arrays.
    {
        for (int j = 0; j < sizeb; j++)
        {
            if (arr[i] == brr[j])
            {
                // ans.push_back(arr[i]);      // just to mark the element as duplicate in brr array.
                brr[j] = INT_MIN;
            }
        }
    }

    for (int i = 0; i < sizea; i++)
    {
        dol.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        if (brr[i] != INT_MIN)
        {
            dol.push_back(brr[i]);
        }
    }
    return dol;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 7, 2};
    int brr[] = {2, 3, 4, 5, 6, 7};
    int sizea = 6;
    int sizeb = 6;
    vector<int> crr = inter(arr, brr, sizea, sizeb);
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }

    return 0;
}