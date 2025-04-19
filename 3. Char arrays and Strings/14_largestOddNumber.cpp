// leetcode : 1903. Largest Odd Number in String
// done by me beats 100% . 
// to find  the largets odd no from the string and return it.

#include<iostream>
#include<vector>
using namespace std;
string largestOddNumber(string num) {
                int sizes = num.size();
        for (int i = num.size()-1; i >=0; i--)
        {
            char number  = num[i];
            int len = 0;
            int integer = number - '0';   // imp - convert charachter to integer .

            if(integer%2 != 0){
                return num.substr(0,sizes);
            }
                len++;
                sizes = sizes - len ;
        }
        return "";
    }

        
    
int main()
{
    
    string s = "184678";
    cout<<largestOddNumber(s);

    return 0;
}