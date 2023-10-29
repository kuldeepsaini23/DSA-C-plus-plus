#include <iostream>
#include<vector>
#include<bits/stdc++.h>
#include<map>
using namespace std;

//! Distribute Repeating Integers
bool canDistributeHelper(vector<int> &counts, vector<int> &quantity, int ithCustomer)
{
  // Base Case
  if (ithCustomer == quantity.size())
  {
    return true;
  }

  // Processing
  for (int i = 0; i < counts.size(); ++i)
  {
    if (counts[i] >= quantity[ithCustomer])
    {
      counts[i] -= quantity[ithCustomer];
      if (canDistributeHelper(counts, quantity, ithCustomer + 1))
      {
        return true;
      }
      counts[i] += quantity[ithCustomer]; // backtracking
    }
  }
  return false;
}

bool canDistribute(vector<int> &nums, vector<int> &quantity)
{
  unordered_map<int, int> countMap;
  for (auto num : nums)
  {
    countMap[num]++;
  }

  vector<int> counts;
  for (auto it : countMap)
  {
    counts.push_back(it.second);
  }

  sort(quantity.rbegin(), quantity.rend());
  return canDistributeHelper(counts, quantity, 0);
}

int main()
{
  vector<int> nums = {1,2,3,4}; 
  vector<int> quantity = {2};

  return 0;
}