// include ,exclude principle in recursion,

#include<iostream>
#include<vector>
using namespace std;
void subseq(string s, string out, int i){
    if(i>=s.size()){
        cout<<"'"<<out<<"'"<<"   ";
        return ;
    }
    // exclude case
    
    subseq(s,out,i+1);

    // include case 
    
    out.push_back(s[i]);
    //or output = output + str[i];
    subseq(s,out,i+1);

}
int main()
{
    string s = "ab";
    string out = "";
    int i = 0;
    subseq(s,out,i);
    return 0;
}