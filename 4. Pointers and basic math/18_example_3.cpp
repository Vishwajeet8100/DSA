#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int numbers[5];
    int * ptr;
    ptr = numbers;
    *ptr = 10;
    ptr = &numbers[2];
    *ptr = 20;
    ptr--;
    *ptr = 30;
    ptr = numbers + 3;
    *ptr = 40;
    ptr = numbers;
    *(ptr + 4) = 50;
    for (int i = 0; i < 5; i++)
    {
        cout<<numbers[i]<<" ";   // what will be the output.
    }
    

    return 0;
}