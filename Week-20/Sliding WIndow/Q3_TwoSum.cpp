#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  vector<pair<int,int>> temp;

  int n = nums.size();

  for(int i=0; i<n; i++){
    int index = i;
    int value = nums[i];
    pair<int,int> p = make_pair(value,index);
    temp.push_back (p);
  }

  //sort on the basis of value
  sort(temp.begin(), temp.end());

  //logic
  int s = 0;
  int e = nums.size() - 1;
  vector<int> ans;
  while(s<e){
    int sum=temp[s].first + temp[e].first;
    if(sum==target){
      ans.push_back(temp[s].second);
      ans.push_back(temp[e].second);
      return ans;
    }
    else if(sum > target){
      e--;
    }
    else{
      s++;
    }
  }

  

  //-->O(nlogn)
  // unordered_map<int,int> hash;
  // for(int i=0;i<nums.size();i++){
  //     int more = target - nums[i];
  //     if(hash.find(more) != hash.end()){
  //         ans.push_back(hash[more]);
  //         ans.push_back(i);
  //         break;
  //     }
  //     hash[nums[i]] = i;
  // }
  return ans;
}

int main()
{
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> ans = twoSum(nums, target);

  for (auto i : ans)
  {
    cout << nums[i] << " ";
  }
  cout << " = " << target;

  return 0;
}