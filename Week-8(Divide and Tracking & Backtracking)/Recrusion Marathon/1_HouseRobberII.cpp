#include<iostream>
#include<vector>
using namespace std;
 
//! House Robber - II

 int solve(vector<int> nums, int index, int size){
       //Base Case
       if(index>=size){
           return 0;
       }
       //chori lkrlo 
       int option1 = nums[index] + solve(nums, index+2, size);
       //Ya toh chori mt karo
       int option2 = 0 + solve(nums, index+1, size);
       int finalAns = max(option1, option2);
       return finalAns;
 }

  int rob(vector<int>& nums) {
      int size = nums.size();
      int index = 0;
      //*Single Element Case --> yha pe maine gltii ki thi (Edge Case)
      if(size==1){
          return nums[0];
      }
      int option1 = solve(nums, 0, size-1);
      int option2 =  solve(nums, 1, size);
      int ans = max(option1, option2);
      return ans;
  }



int main(){
  vector<int> nums = {1,2,3,1};
  cout<<rob(nums);
      
 return 0;
}
