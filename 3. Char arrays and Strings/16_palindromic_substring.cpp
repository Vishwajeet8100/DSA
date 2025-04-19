// Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.

// A substring is a contiguous sequence of characters within the string.

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

// answer using n^3 time complexity done by me, takes lot of time 
class Solution {
public:
    bool palin(string j){
        int s = 0;
        int e = j.size()-1;
        while(s<=e){
            if(j[s] != j[e]){
                return false; 
            }
            s++;
            e--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0 ; i<s.size();i++){
            string siz = s.substr(i);
            int size = siz.size();
            for(int j = 1 ; j<=size;j++ ){
                string k = s.substr(i,j);
                if(palin(k)==true){
                    count++;
                }
            }
        }
        return count;
    }
};


// answer using  n^2 time complexity 

// we will use expanding form center stratergy .
