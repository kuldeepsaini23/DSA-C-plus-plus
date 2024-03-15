#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

//* Minimum Size Subarray Sum
int minSubArrayLen(int target, vector<int> &nums)
{
  int s, e;
  s = e = 0;
  int len = INT_MAX;
  int sum = 0;

  while (e < nums.size())
  {
    // sum me include kro
    sum += nums[e];
    // ho skta hai sum == target ho

    // ho skta hai sum > target ho

    // ho skta hai sum < target ho

    // minimize -> equal or greater
    // explore -> lesser

    while (sum >= target)
    {
      // minimize
      len = min(len, e - s + 1);
      // current element, pointed by start should be removed for sum
      sum = sum - nums[s];
      s++;
    }

    // loop se bahar matalb, guarntee -> sum < target
    // explore
    e++;
  }

  if (len == INT_MAX)
  {
    return 0;
  }

  return len;
}

int main()
{
  vector<int> nums = {2, 3, 1, 2, 4, 3};
  int target = 7;
  int ans = minSubArrayLen(target, nums);
  // Printing the ans
  cout << "The ans is: " << ans << endl;

  return 0;
}