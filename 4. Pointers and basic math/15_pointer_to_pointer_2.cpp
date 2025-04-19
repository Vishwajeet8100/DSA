#include<iostream>
#include<vector>
using namespace std;
void example(int ** q){
    // run one at a time and observe changes on "a"
    // q = q + 1;         
    // *q = *q + 1;
    **q = **q + 1;
    // only the last one will give change.
    // running the second one and last one will not change a.
}
int main()
{
    int a = 10;
    int * ptr = &a;
    int **p = &ptr;

    example(p);

    cout<<a;

    return 0;
}