
// Printing sum of each row and column of a 2D array.


#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int brr[2][2] = {{2, 2},             
                     {3, 4}};
    for (int i = 0; i < 2; i++)
    {
    int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum = sum + brr[i][j];
        }
    cout<<" sum of "<<i<<"th row is : "<< sum<<endl;       // printing sum of each row.
    }
    return 0;
}



#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int brr[2][2] = {{2, 2},             
                     {3, 4}};
    for (int i = 0; i < 2; i++)
    {
    int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum = sum + brr[j][i];
        }
    cout<<" sum of "<<i<<"th column is : "<< sum<<endl;       // printing sum of each column.
    }
    return 0;
}
