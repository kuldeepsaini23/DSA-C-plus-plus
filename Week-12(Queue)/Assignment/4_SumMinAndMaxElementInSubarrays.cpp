#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> maxAndMinSumSlidingWindow(vector<int> &nums, int k)
{
  vector<int> ans;
  deque<int> max, min;

  // first window ko process karo
  for (int i = 0; i < k; i++)
  {
    int element = nums[i];

    // jitne bhi queue ke ander chotte elments hh remove krdo
    while (!max.empty() && element > nums[max.back()])
    {
      max.pop_back();
    }

    // now insert kardo
    max.push_back(i);

    // jitne bhi queue ke ander bade elments hh remove krdo
    while (!min.empty() && element < nums[min.back()])
    {
      min.pop_back();
    }

    // now insert kardo
    min.push_back(i);
  }
  ans.push_back(nums[max.front()] + nums[min.front()]);
  // remaining window ko process kro
  // removal
  //  addition
  // store ans
  for (int i = k; i < nums.size(); i++)
  {

    // removal
    // out of range element
    if (!max.empty() && i - max.front() >= k)
    {
      max.pop_front();
    }

    // for min array
    if (!min.empty() && i - min.front() >= k)
    {
      min.pop_front();
    }

    // chotte elment pop krado
    int element = nums[i];
    while (!max.empty() && element > nums[max.back()])
    {
      max.pop_back();
    }
    // addition
    max.push_back(i);

    // for minimum
    while (!min.empty() && element < nums[min.back()])
    {
      min.pop_back();
    }

    // now insert kardo
    min.push_back(i);

    // ans store
    ans.push_back(nums[max.front()] + nums[min.front()]);
  }

  return ans;
}

int main()
{
  vector<int> nums = {2, 5, -1, 7, -3, -1, -2} ;
  int K = 4;
  vector<int> ans = maxAndMinSumSlidingWindow(nums, K);

  for(int i=0; i<ans.size(); ++i){
    cout << ans[i]<<" , ";
  }

  return 0;
}