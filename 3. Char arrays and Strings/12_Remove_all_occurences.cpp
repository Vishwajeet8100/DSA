//leetcode 1910 remove all occurences of a substring .
// done by me. betas 100%.
#include<iostream>
#include<vector>
using namespace std;

string remove_occurence(string s, string part){
    int size = part.size();
    while(s.find(part) != s.npos){
       cout<<" hello ";
        s.erase(s.find(part),size);

    }
    return s;
}

int main()
{
    string arr = "daabcbaabcbc";
    string part = "abc";
    
    string ans = remove_occurence(arr,part);
    cout<<ans;

    
    return 0;
}