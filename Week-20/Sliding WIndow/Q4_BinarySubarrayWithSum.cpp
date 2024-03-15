#include<iostream>
#include<vector>
using namespace std;

//* Binary Subarray with Sum
int numSubarraysWithSum(vector<int>& nums, int goal) {
  int s = 0;
  int e = 0;
  int sum = 0;
  int prefixZero = 0;
  int count = 0;

  while(e < nums.size()){
    sum += nums[e];
    //minimize
    while(s < e && (sum > goal || nums[s] == 0)){
      // store zeroes
      if(nums[s] == 1){
        prefixZero = 0;
      }
      else{
        prefixZero++;
      }

      //sum
      sum -= nums[s];

      //start
      s++;
    }

    //verification
    if(sum == goal){
      count += prefixZero + 1;
      //+1 for aur current/actual ans without zeros
    }
    //explore
    e++;
  }

  return count;
}
 
int main(){
  vector<int> nums = {1,0,1,0,1};
  int goal = 2;
  int ans = numSubarraysWithSum(nums, goal);

  cout << " The number of subaaray are: " << ans; 
      
 return 0;
}