#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//! Maximum Subarray Sum
int maxSubArrayHelper(vector<int> &v, int start, int end)
{
  if (start == end)
  {
    return v[start];
  }

  int maxLeftBorderSum = INT_MIN, maxRightBorderSum = INT_MIN;
  int leftBorderSum = 0, rightBorderSum = 0;

  int mid = start + (end - start) / 2;

  int maxLeftSum = maxSubArrayHelper(v, start, mid);
  int maxRightSum = maxSubArrayHelper(v, mid + 1, end);

  // max Cross border sum
  for (int i = mid; i >= start; i--)
  {
    leftBorderSum += v[i];
    if (leftBorderSum > maxLeftBorderSum)
    {
      maxLeftBorderSum = leftBorderSum;
    }
  }

  for (int i = mid + 1; i <= end; i++)
  {
    rightBorderSum += v[i];
    if (rightBorderSum > maxRightBorderSum)
    {
      maxRightBorderSum = rightBorderSum;
    }
  }

  int crossBorderSum = maxLeftBorderSum + maxRightBorderSum;
  return max(crossBorderSum, max(maxLeftSum, maxRightSum));
}

int maxSubArray(vector<int> &nums)
{
  // int sum = 0;
  // int maxi = nums[0];
  // for(auto ele:nums){
  //     sum += ele;

  //     maxi = max(maxi,sum);

  //     if(sum<0){
  //         sum = 0;
  //     }
  // }

  // return maxi;

  // For negative Numbers
  //  int sum = 0;
  //  int maxi = nums[0];
  //  for(auto ele:nums){
  //      if(sum<0){
  //          sum = ele;
  //      }else{
  //          sum += ele;
  //      }
  //      maxi = max(maxi,sum);
  //  }

  return maxSubArrayHelper(nums, 0, nums.size() - 1);
}

int main()
{
  vector<int> nums = {5, 4, -1, 7, 8};
  cout << maxSubArray(nums);

  return 0;
}