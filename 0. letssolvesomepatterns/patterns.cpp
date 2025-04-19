#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Total no of rows"<<endl;
    cin>>n;
    int m;
    cout<<"Total no of columns"<<endl;
    cin>>m;
    for(int j = 1; j<=n;j++){       // for printing no of rows
    if(j!=1 && j!=n){
        cout<<"* ";
        for(int k=1;k<=(m-2);k++){
            cout<<"  ";
        }
        cout<<"*"<<endl;
    }
    else
    {
    for(int i = 1;i<= m;i++){       // for printing no of columns   i.e. no of stars

        cout<< "* ";
    }
    cout<<endl;
    }
    }
return  0;

// or

// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter no of rows "<<endl;
//     cin>>m;
//     int n;
//     cout<<"Enter no of colums "<<endl;
//     cin>>n;
//     for(int j = 1;j<=m;j++){
//         for(int i=1;i<=n;i++){
//                 if(j==1||j==m){
//                     cout<<"*";
//                 }
//                 else if(i==1||i==n){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
            
//         }
//         cout<<endl;
//     }
// return  0;
// }
