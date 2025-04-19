// return value of index of the first repeating element.

#include<iostream>
#include<vector>
#include <unordered_map>  // not understood 
using namespace std;
int abc(vector <int> & arr, unordered_map<int,int> tab){
   
    for (int i = 0; i < arr.size(); i++)
    {
        if (tab[arr[i]]> 1){
            return i+1 ;  // 1 based indexing(means index starts from 1 and not zero.)
        }
    }
     return -1;
}
int main()
{
    vector <int> brr = {5,1,3,4,3};
     unordered_map< int, int> tab; 
    for(int i = 0 ; i< brr.size() ; i++){
        tab[brr[i]]++;
    }
    
    cout<<abc(brr,tab);
    return 0;
}