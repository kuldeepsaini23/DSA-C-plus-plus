#include<iostream>
#include<vector>
using namespace std;

//* Debug the code. Find the length of the longest strictly increasing subsequence.

int lengthOfLIS(vector<int>& nums){
  vector<int> ans;
  ans.push_back(nums[0]);
  for(int i=0; i<nums.size(); i++)
  {
    if(nums[i]<ans.back())
    {
      ans.push_back(nums[i]);
    }
    else
    {
      int index=lower_bound(ans.begin(), ans.end(), nums[i])-ans.begin(); // Before solving get acquainted with lower_bound()
      ans[index]=nums[i];
    }
  }    
  return ans.size();
}
 
int main(){
 
      
 return 0;
}