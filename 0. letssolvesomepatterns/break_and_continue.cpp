// # include <iostream>;
// using namespace std;
// int main(){
//     for(int i = 0;i<5;i++){
//         if(i == 3){
//             continue;  // using continue will get you topo start of the loop and ignore the content at the end .
//         }
//         cout<<i<<endl;

//     }
// }


#include<iostream>
using namespace std;
int main(){
    for(int i = 6;i>0;i--){
        if(i==3){
            break;// break will get out of the loop.
        }
        cout<<i<<endl;
    }
return  0;
}


