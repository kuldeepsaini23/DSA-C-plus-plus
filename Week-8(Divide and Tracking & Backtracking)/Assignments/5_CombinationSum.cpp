#include <iostream>
#include<vector>
using namespace std;

//! Combination Sum

void combinationSumHelper(vector<int> &candidates, int target, vector<int> v, vector<vector<int>> &ans,int start)
{
  // Base Case
  if (target == 0)
  {
    ans.push_back(v);
    return;
  }

  if (target < 0)
  {
    return;
  }

  for (int i = start; i < candidates.size(); i++)
  {
    v.push_back(candidates[i]);
    combinationSumHelper(candidates, target - candidates[i], v, ans, i);
    // BackTracking
    v.pop_back();
  }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
  vector<vector<int>> ans;
  vector<int> v;
  combinationSumHelper(candidates, target, v, ans, 0);
  return ans;
}

int main()
{

  vector<int> v = {1,2,3,2,4};
  int target = 4;
  vector<vector<int>> ans = combinationSum(v, target);
  return 0;
}