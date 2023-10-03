#include<iostream>
#include<vector>
#include<algorithm>
#include <string.h>
#include<limits.h>
using namespace std;
 
//* Minimum Time Difference
int findMinimumDifference(vector<string> timePoints){
  
  vector<int> minutes;
  for(auto x: timePoints){
    int hours = stoi(x.substr(0, 2));
    int minute = stoi(x.substr(3, 2));
    int totalTime = hours * 60 + minute;
    minutes.push_back(totalTime);
  }

  // Sort the minutes array
  sort(minutes.begin(), minutes.end());
  int ans = INT_MAX;
  for(int i = 0; i < minutes.size() - 1; i++){
    // Calculate the time difference between consecutive time points
    int diff = minutes[i + 1] - minutes[i];
    ans = min(ans, diff);
  }

  // Corner case:
  // Calculating the circular difference between the last and first time points
  // 23:59 to 00:00 has a circular difference of 1 minute
  int lastCircularDiff = 1440 + minutes[0] - minutes[minutes.size() - 1];
  // Return the minimum of the circular difference and the calculated differences
  return min(lastCircularDiff, ans);

} 



int main(){
 vector<string> str = {"13:44","00:00"};
 cout<<findMinimumDifference(str);
 
      
 return 0;
}