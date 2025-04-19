// not understood a bit. sir didnt explain what to do in question (lecture 4 question 2)

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int answer(int x , int a, int b , int c){
    if(x == 0){
        return 0;
    }
    if(x<0){
        return INT_MIN;
    }
    int ans1 = (x-a,a,b,c) +1;
    int ans2 = (x-b,a,b,c) +1; 
    int ans3 = (x-c,a,b,c) +1; 

}
int main()
{
    int x = 7;
    int a = 3;
    int b = 2;
    int c = 2;

    return 0;
}