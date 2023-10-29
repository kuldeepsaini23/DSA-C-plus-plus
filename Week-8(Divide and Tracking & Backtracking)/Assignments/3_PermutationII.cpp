#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permutationHelper(vector<vector<int>> &ans, vector<int> &nums, int start)
{
  // Base Case
  if (start == nums.size())
  {
    ans.push_back(nums);
    return;
  }

  // Unoreder Map
  unordered_map<int, bool> visited;

  for (int i = start; i < nums.size(); i++)
  {
    if (visited.find(nums[i]) != visited.end())
    {
      continue;
    }
    visited[nums[i]] = true;
    swap(nums[i], nums[start]);
    permutationHelper(ans, nums, start + 1);
    // Backtracking
    swap(nums[i], nums[start]);
  }
}

vector<vector<int>> permuteUnique(vector<int> &nums)
{
  vector<vector<int>> ans;
  permutationHelper(ans, nums, 0);
  // Set ethod with high Complexity
  // set<vector<int>> st;
  // for(auto i:ans){
  //     st.insert(i);
  // }

  // ans.clear();
  // for(auto i:st){
  //     ans.push_back(i);
  // }
  return ans;
}

int main()
{
  vector<int> v = {1, 1, 2};
  vector<vector<int>> ans = permuteUnique(v);

  return 0;
}