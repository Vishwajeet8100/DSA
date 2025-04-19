#include<iostream>
#include<vector>
using namespace std;
int main()
{
    char st []  ="ABCD";
    for (int i = 0; st[i] != '\0'; i++)
    {
        cout<<st[i]<<" "<<*(st)+i<<endl;
    }
    
    return 0;
}