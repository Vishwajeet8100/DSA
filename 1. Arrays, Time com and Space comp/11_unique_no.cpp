#include<iostream>
using namespace std;            //  finding no which doesnt repeat two times.   // done by me  // easy soln in video.
void check(int arr[],int size){
    for(int i = 0;i<size;i++){
    int check=  0;
        for(int j = 0;j<size;j++){
            // if(i==j){
            //     continue;
            // }
            if(arr[i]==arr[j]){
                check = check +1;
            }
            
        }
        if(check <= 1){
            // cout<<"j";
            cout<< arr[i];
        }
    }
}
int main()
{
    int arr[]={1,2,3,1,2,3,4,1,1,5};
    int size = 10;
    check(arr,size);
    return 0;
}