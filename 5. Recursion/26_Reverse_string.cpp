// Reverse a string using recursion.

// two pointer approach.

#include<iostream>
#include<vector>
using namespace std;
void rev(string& str, int s , int e ){
    if(s>=e){
        return;
    }
    swap(str[s],str[e]);

    rev(str, s+1, e-1);

}
int main()
{
    string str = "Phadtare";
    int s = 0;
    int e = str.size()-1;
    rev(str,s,e);
    for (int i = 0; i < str.size(); i++)
    {
        cout<<str[i];
    }
    

    return 0;
}