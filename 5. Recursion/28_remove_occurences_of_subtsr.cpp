// leetcode question, already solved easily using o(n) 
// now we will solve using recursion, it increases time complexity though .


#include<iostream>
#include<vector>
using namespace std;
string clear (string& s, string& part, int& size){
    // base case 
    if(s.find(part) == s.npos){
        return s;
    }
    // one case 
    s.erase(s.find(part),size);

    // recursion 
    clear(s,part,size);
    return s;




    
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    int part_size = part.size();

    string ans = clear(s, part,part_size);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    

    return 0;
}