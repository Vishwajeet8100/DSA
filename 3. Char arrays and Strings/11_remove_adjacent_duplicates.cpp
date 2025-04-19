// leetcode - 1047   Remove all adjacent duplicates in a string.
//done by me.
#include <iostream>
#include <string>
using namespace std;

string delete_duplicates(string s)
{
    string ans;
    if (s.empty() )
    {
        return "";
    }
    int i = 1;
    ans.push_back(s[0]);
    while (i < s.size())
    {
        int size = ans.size() - 1;
        if (!ans.empty() && ans[size] == s[i])
        {
            ans.pop_back();
            i++;
            continue;
        }
        ans.push_back(s[i]);
        i++;
    }
    return ans;
}

int main()
{
    string p = "aabbccdsa";
    string d = delete_duplicates(p);
    cout << "String after deleting duplicates: " << d << endl;
    return 0;
}
