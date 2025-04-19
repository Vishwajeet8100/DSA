#include<iostream>
#include<vector>
using namespace std;
void find(string s, char key, int size,int i, vector<int>& index){
    if(i>=size){
        return;
    }
    if(s[i]==key){
        index.push_back(i);
    }
     find(s,key,size,i+1,index);
}
int main()
{
    string s = "vishwajeetphadtare";
    char key = 'e';
    int size = s.size();
    int i = 0;
    vector<int>index;
    find(s,key,size,i,index);
    
    for(auto val : index){
        cout<< val<<" ";
    }
    return 0;
}