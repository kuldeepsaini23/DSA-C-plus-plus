#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//* Also a hashmap approach or unordered set can be used in this question but I didnot know that solution now so using other approaches
 
 //* Key Pair Tc--> o(n^2)--> this only works for leetcode solution(if have to return index)
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v;

    for(int i = 0;i<nums.size();i++){
      for (int j = i+1; j < nums.size(); j++)
      {
        /* code */
        if(nums[i]+nums[j]==target){
          v.push_back(i);
          v.push_back(j);
          return v;
        }; 
      }
    }
  v.push_back(-1);
  return v;
}


//* Tc--> o(n)-> this works for geeks for geeks only(If have to retuen that element is present or not)
vector<int> twoSumWithTwoPointer(vector<int>& nums, int target) {
  vector<int> v;
  sort(nums.begin(),nums.end());
  int l = 0;
  int r = nums.size()-1;

  while(l<r){
    if(nums[l]+nums[r]==target){
      v.push_back(l);
      v.push_back(r);
      return v;
    }else if(nums[l]+nums[r]>target){
      r--;
    }else{
      l++;
    }
  }
  v.push_back(-1);
  return v;
}


 
int main(){
  vector<int> v{2,11,7,15};
  int target = 9;
  //* Nested Loop
  // vector<int> ans = twoSum(v,target);
  // for (int i = 0; i < ans.size();i++)
  // {
  //   /* code */
  //   cout<<ans[i]<<" ";
  // }

  //* Two pointer-->O(n)
  vector<int>ans = twoSumWithTwoPointer(v,target);
  for (int i = 0; i < ans.size();i++)
  {
    /* code */
    if(ans[0]==-1){
      cout<<"not Found";
    }else{
      cout<<ans[i]<<" ";
    }
  
  }

  

 return 0;
}