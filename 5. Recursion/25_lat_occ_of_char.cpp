// beginning of the assignment.
// last occ of a charchter in string.


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void answer(string s, int i, int & max){
    if(i == s.size()){
        return;
    }
    if(s[i] == 'e'){
        max = i;
    }
    answer(s,i+1,max);
}
int main()
{
    // 1_simple method using iteration.

    // string s = "Vishwajeet";
    // char key = 'e';
    // int ans = -1;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if(s[i] == key){
    //         ans = i;
    //     }
    // }
    // cout<<ans;

    // 2_simple method iterating form back.

    // string s = "Vishwajeet";
    // for (int i = s.size()-1; i >= 0; i--)
    // {
    //     if(s[i] == 'e'){
    //     cout<<i<<" ";
    //     break;
    //     }    
    // } 

    //using recursion.

    int i = 0 ;
    string s = "Vishwajeet Vikas Phadtare";
    int max = INT_MIN;
    answer(s,i,max);
    cout<<max;

    return 0;
}