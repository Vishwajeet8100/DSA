#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cst(char a, char b){   // custom comparator, first charachter will be returned in this case its a.
    return a < b;     
}
int main()
{
   string s = "bcaabca";
   sort(s.begin(),s.end(),cst);  // by default sort fucntion will sort in ascending order(lexilogical order), but we cna use cutom comparatot to sort in descending order. 
   cout<<s;
    return 0;
}