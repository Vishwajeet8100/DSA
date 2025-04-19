// leetcode 539.
//Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
 int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        
        for (int i = 0; i < timePoints.size(); i++)
        {
            string s = timePoints[i];
            int hrs = stoi(s.substr(0,2));
            int mins = stoi(s.substr(3,2));
            int total_mins =(hrs * 60) + mins;
           
            minutes.push_back(total_mins);
        }
        sort(minutes.begin(), minutes.end());
        int min_diff = INT_MAX;
        for(int i = 0 ; i<minutes.size()-1;i++){
            int diff = minutes[i+1]-minutes[i];
            min_diff = min(min_diff,diff);

        }
        int n = minutes.size();
        int last_diff = (minutes[0]+1440) - minutes[n-1];
        
      min_diff = min(min_diff, last_diff);
      return min_diff;


        
    }
int main()
{
    vector<string> arr = {"23:59","00:00"};
    cout<<findMinDifference(arr);
    return 0;
}