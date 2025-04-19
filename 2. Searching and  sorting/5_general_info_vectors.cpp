// general information about vectors.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> arr = {1,2,3,4,5};
   arr.begin(); // pointer to first element 
   arr.end(); // pointer to last element 
   arr.size(); // size of vector
   cout<<arr.back(); // gives last element of vector
   arr.empty(); // checks if the vector is emty or not  
    return 0;
}