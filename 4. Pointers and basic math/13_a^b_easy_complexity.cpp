// called as fast exponentiation 
// finding power by less time complexity i.e. a^b.
// i think its not so important
// hard logic

#include<iostream>
#include<vector>
using namespace std;
int ans(int a, int b ){
    int ans = 1;
    while(b>0){
        if(b & 1){
            ans = ans * a;
        }
        a = a*a;
        b = b/2;
        
        
    }
    return ans;
}
int main()
{
    int a = 2;
    int b = 6;
    // by simple iteration method(slow exponentation) we will need 4 iterations of multiplication
    // but by this method we only need two.

    cout<<ans(a,b);
    return 0;
}



