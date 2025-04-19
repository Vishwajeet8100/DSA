// tranpose a array by creating another array.
// we cannot using swap method as it will swap the array twice and we will get original array back.
#include <iostream>
#include <vector>
using namespace std;
void transpose(int arr[][3], int rows, int col, int transposeArr[][3])  // transpse function.
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transposeArr[j][i] = arr[i][j];
        }
    }
}
void print(int arr[][3], int rows, int col)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int tranposeArr[3][3];
    print(arr, 3, 3);   // original array.
    cout<<endl;
    transpose(arr, 3, 3, tranposeArr);
    print(tranposeArr, 3, 3);   // transposed array.
 
    return 0;
}