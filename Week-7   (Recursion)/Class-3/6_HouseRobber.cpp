#include<iostream>
#include<vector>
using namespace std;

//* House Robber
int solve(vector<int> nums, int size, int index){
  //Base Case
  if(index>=size){
      return 0;
  }
  //chori lkrlo 
  int option1 = nums[index] + solve(nums, size, index+2);
  //Ya toh chori mt karo
  int option2 = 0 + solve(nums, size, index+1);
  int finalAns = max(option1, option2);
  return finalAns;
}


int rob(vector<int>& nums) {
   int size = nums.size();
  int index = 0;
  int ans =  solve(nums,size,index);
  return ans;     
}
 
int main(){
  //* House Robber
  vector<int> nums = {1,2,3,1};
  cout<<rob(nums);
      
 return 0;
}