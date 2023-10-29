#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

//! Combination Sum II
//* No Duplicate and Only unique values
void combinationSumHelper(vector<int> &candidates, int target, vector<int> v, vector<vector<int>> &ans, int start)
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
    if (i > start && candidates[i] == candidates[i - 1])
    {
      continue;
    }

    v.push_back(candidates[i]);
    combinationSumHelper(candidates, target - candidates[i], v, ans, i + 1);
    // BackTracking
    v.pop_back();
  }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
  sort(candidates.begin(), candidates.end());
  vector<vector<int>> ans;
  vector<int> v;
  combinationSumHelper(candidates, target, v, ans, 0);
  // GIVING TLE
  //  set<vector<int>> st;
  //  for(auto e:ans){
  //      st.insert(e);
  //  }
  //  ans.clear();
  //  for(auto it:st){
  //      ans.push_back(it);
  //  }
  return ans;
}

int main()
{
  vector<int> candidates = {10,1,2,7,6,1,5};
  int target = 8;


  return 0;
}