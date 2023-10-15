#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
//* Coin Change

// int solve(vector<int> &coins, int amount)
// {
//   // Base Case
//   if (amount == 0)
//   {
//     return 0;
//   }
//   int mini = INT_MAX;
//   int ans = INT_MAX;
//   for (auto coin : coins)
//   {
//     // current coin jo jab use krege agar uski value <= amount hh
//     if (coin <= amount)
//     {
//       int recAns = solve(coins, amount - coin);
//       if (recAns != INT_MAX)
//         ans = 1 + recAns;
//     }

//     mini = min(mini, ans);
//   }

//   return mini;
// }

//* ANother approach if you donot wanna take int ans
int solve(vector<int> &coins, int amount)
{
  // Base Case
  if (amount == 0)
  {
    return 0;
  }

  if (amount < 0)
  {
    return INT_MAX;
  }
  int mini = INT_MAX;

  for (auto coin : coins)
  {
    // current coin jo jab use krege agar uski value <= amount hh
    if (coin <= amount)
    {
      int recAns = solve(coins, amount - coin);
      if (recAns != INT_MAX)
      {
        int ans = 1 + recAns;
        mini = min(mini, ans);
      }
    }
  }

  return mini;
}

int coinChange(vector<int> &coins, int amount)
{
  int ans = solve(coins, amount);
  return ans == INT_MAX ? -1 : ans;
}

int main()
{
  //* Coin Change
  vector<int> nums = {1, 2, 5};
  int amount = 11;
  cout << coinChange(nums, amount);

  return 0;
}