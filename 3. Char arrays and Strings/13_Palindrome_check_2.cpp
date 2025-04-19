// leetcode 680 Valid Palindrome II.
// check if given string can be converted to palindorme by removing at most 1 charachter 
// done by me beats 100%. 
// solution done by is also easy check it once 
 
#include<iostream>
#include<vector>
using namespace std;
bool palindrome(string s){
    int end = s.size()-1;
    int i = 0;
    while(i<=end){
        if(s[i] != s[end]){
            return false;
        }
        i++;
        end--;
    }
    return true;
}
bool validPalindrome(string s) {
        
        string ans = s;
        int i = 0;
        int end = s.size()-1;
        while(i<=end){
            if(s[i] != s[end]){
                ans.erase(i,1);
                if(palindrome(ans)){
                    return true;
                }
                ans = s;
                ans.erase(end,1);
                 if(palindrome(ans)){
                    return true;
                }
                return false;
            }
            i++;
            end--;
        }
        return true;
        
    }
int main()
{
    string arr = "abcba";
    if(validPalindrome(arr)){
        cout<<"Yes , The string "<<arr<< " Can be converted to Palindrome by removing 1 element";
    }
    else{
        cout<<"No string cannot be converted to palindorme";
    }
    return 0;
}