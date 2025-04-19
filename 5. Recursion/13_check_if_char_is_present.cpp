// check if a charachter is present in the string or not.


#include<iostream>
#include<vector>
using namespace std;
bool check(string s, char key, int size){
    if(size <0){
        return false;
    }
    if(s[size]==key){
        return true;
    }
    bool ans = check(s,key,size-1);
    return ans;
}
int main()
{
    string s = "vishwajeet";
    char key = 'i';
    int size = s.size()-1;
    bool ans = check(s,key,size);
    cout<<ans;
    return 0;
}