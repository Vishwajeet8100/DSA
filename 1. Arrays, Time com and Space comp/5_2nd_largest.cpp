//not in course
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;            // to find the second largest element in the array 
                                   
int max_2(int arr[],int size){
    int lar = arr[0];
    int lar2 = -1;
    
    for(int i = 0; i<size; i++){
        if(arr[i]>lar ){
            
            lar2 = lar;
            lar = arr[i];
        }
    //     else if(arr[i]< lar && arr[i]> lar2) {
    //         lar2 = arr[i];
    // }
    else{
        if(arr[i]>lar2){
            lar2 = arr[i];
        }
    }
    }
    return lar2;
}
int main(){
    
    int arr[ ]= {24439, 32155, 6823, 9669, 17306, 15041, 30921, 21483};
    
    int size = sizeof(arr)/sizeof(arr[0]); 
    cout<<max_2(arr,size);

    return 0;
}