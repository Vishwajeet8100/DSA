#include<iostream>
#include<vector>
using namespace std;
int main()                          
{
    int brr[2][2]={{1,2},
                   {3,4}};
       for(int i = 0;i<2;i++){
    for(int j = 0;j<2;j++){
        cout<<brr[i][j]<<" ";           // this code will print elements row wise
    }} 
  
    return 0;
}


#include<iostream>
#include<vector>
using namespace std;
int main()                          
{
    int brr[2][2]={{1,2},
                   {3,4}};
       for(int i = 0;i<2;i++){
    for(int j = 0;j<2;j++){
        cout<<brr[i][j]<<" ";           // this code will print elements column wise, just change i and j position in code as done in line 26.
    }} 
  
    return 0;
}