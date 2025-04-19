#include<iostream>
using namespace std;
int main(){
    for(int j = 0;j<6;j++){
        for(int i = 6;i>j;i--){
        cout<<"* ";
        }
        cout<<endl;
    }

return  0;
}   


// or

// #include<iostream>
// using namespace std;
// int main(){
//     for(int j = 0;j<6;j++){
//         for(int i= 0; i<6-j;i++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// return  0;
// }