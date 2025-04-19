// binary search on 2d array.
#include <iostream>
#include <vector>
using namespace std;
vector<int> search(int arr[][3], int key, int m, int n)
{
    vector<int> ans;
    int size = m * n;
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int i = mid / n;
    int j = mid % n;
    while (s <= e)
    {
        if (arr[i][j] == key)
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        else if (arr[i][j] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
        i = mid / n;
        j = mid % n;
    }
    return ans;
}
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int key = 8;
    int m = 3;
    int n = 3;

    vector<int> brr = search(arr, key, m, n);

    cout << "(" << brr[0] << "," << brr[1] << ")";

    return 0;
}