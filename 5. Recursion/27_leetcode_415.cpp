// leetcode 415 
// important understand string concepts through this.

class Solution {
    public:
        void addstr(string& num1,int ptr1, string& num2, int ptr2 ,string& final, int carry = 0){
            // base case 
            if(ptr1<0 && ptr2<0){
                if(carry != 0){
                    final.push_back(carry + '0');
                }
                return;
            }
    
            // ek case solve.
            int a = (ptr1 >= 0 ? num1[ptr1] : '0') - '0';
            int b = (ptr2 >= 0 ? num2[ptr2] : '0') - '0';
            
            int d = a+b+carry;
            carry = d/10;
            int e = d%10;
            final.push_back(e +'0');
            
    
            //call recursion
            addstr(num1, ptr1 -1, num2, ptr2 - 1,final, carry);
            
    
            
        }
        string addStrings(string num1, string num2) {
            int ptr1 = num1.size()-1;
            int ptr2 = num2.size()-1;
            string final = "";
            addstr(num1,ptr1,num2,ptr2,final);
             reverse(final.begin(),final.end());
             return final;
    
        }
    };