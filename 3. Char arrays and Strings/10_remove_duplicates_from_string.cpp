// remove duplicates ( i did it wrong here just returned unique values, you have to delete the duplicate ones , done in next question Q11.)
#include<iostream>
#include<vector>
#include<set>
using namespace std;
string remove_duplicates(string p){
    set <char> arr;
    string ans;
    for (int i = 0; i < p.size()-1; i++)
    {
        arr.insert(p[i]);
    }

    for (char ch : arr)
    {
        ans.push_back(ch);
    }
    return ans;
    
}
int main()
{
    string s = "aabbcdad";
    string ans;
    ans = remove_duplicates(s);
    cout<<ans;
    return 0;
}