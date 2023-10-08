#include<iostream>
#include<vector>
using namespace std;

//* Find the Length of Longest common Prefix
int longestSubsequence(int n, int nums[])
{
  // your code here
  vector<int> ans;
  ans.push_back(nums[0]);
  for(int i=1; i<n; i++)
  {
    if(nums[i]>ans.back())
    {
      ans.push_back(nums[i]);
    }
    else
    {
      int index=lower_bound(ans.begin(), ans.end(), nums[i])-ans.begin(); // Before solving get acquainted with lower_bound()
      ans[index]=nums[i];
    }
  }    
  
  for(auto i:ans){
    cout<<i<<" ";
  }
  cout<<endl;
  return ans.size();
}
 
int main(){
  int arr[16] = {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
  int n =16;
  cout<<longestSubsequence(n,arr);
      
 return 0;
}