#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//* 0/1 KnapSack
//! 2-D Dp Problem
int solveUsingRecursion(int capacity, int wt[], int profit[], int index, int n)
{
  // Base Case
  if (index >= n || capacity == 0)
  {
    return 0;
  }

  // if(index == n-1){
  //   if(wt[n-1] > capacity ){
  //     return 0;
  //   }
  //   else{
  //     return profit[n-1];
  //   }
  // }

  // Recursion Relation ;
  int include = 0;

  //! I forgot this condition
  if (wt[index] <= capacity)
  {
    include = profit[index] + solveUsingRecursion(capacity - wt[index], wt, profit, index + 1, n);
  }
  int exclude = 0 + solveUsingRecursion(capacity, wt, profit, index + 1, n);

  int ans = max(include, exclude);
  return ans;
}

// Sove using Top-Down/ memoization
int solveUsingMemo(int capacity, int wt[], int profit[], int index, int n, vector<vector<int>> &dp)
{
  // Base Case
  if (index >= n || capacity == 0)
  {
    return 0;
  }

  // dp return
  if (dp[capacity][index] != -1)
  {
    return dp[capacity][index];
  }

  // Recursion Relation ;
  int include = 0;

  //! I forgot this condition
  if (wt[index] <= capacity)
  {
    include = profit[index] + solveUsingMemo(capacity - wt[index], wt, profit, index + 1, n, dp);
  }
  int exclude = 0 + solveUsingMemo(capacity, wt, profit, index + 1, n, dp);

  dp[capacity][index] = max(include, exclude);
  return dp[capacity][index];
}

// Solve using Tabulation
int solveUsingTab(int capacity, int wt[], int profit[], int index, int n)
{
  vector<vector<int>> dp(capacity + 1, vector<int>(n + 1, -1));
  int rows = capacity + 1;
  int cols = n + 1;
  for (int i = 0; i < rows; ++i)
  {
    dp[i][n] = 0;
  }

  for (int i = 0; i < rows; ++i)
  {
    for (int j = n-1; j >= 0; --j)
    {
      int include = 0;
      if (wt[j] <= i)
      {
        include = profit[j] + dp[i - wt[j]][j+1];
      }
      int exclude = 0 + dp[i][j+1];

      dp[i][j] = max(include, exclude);
    }
  }
  return dp[capacity][0];
}

//Space optimization
//* 2 vectors
int solveUsingSO(int capacity, int wt[], int profit[], int index, int n)
{
  vector<int> next(capacity+1,-1);
  vector<int> curr(capacity+1,-1);
  for (int row = 0; row < next.size(); ++row)
  {
    next[row] = 0;
  }

  for (int j = n-1; j >= 0; --j)
  {
     for (int i = 0; i < capacity+1; ++i)
    {
      int include = 0;
      if (wt[j] <= i)
      {
        include = profit[j] + next[i-wt[j]];
      }
      int exclude = 0 + next[i];

      curr[i] = max(include, exclude);
      
    }
    //!Shifting
      next = curr;
  }
  return curr[capacity];
}

//Space optimization
//* 1-vector
int solveUsingMoreSO(int capacity, int wt[], int profit[], int index, int n)
{
  vector<int> next(capacity+1,-1);
  for (int row = 0; row < next.size(); ++row)
  {
    next[row] = 0;
  }

  for (int j = n-1; j >= 0; --j)
  {
     for (int i = capacity; i >= 0; --i)
    {
      int include = 0;
      if (wt[j] <= i)
      {
        include = profit[j] + next[i-wt[j]];
      }
      int exclude = 0 + next[i];

      next[i] = max(include, exclude);
      
    }
  }
  return next[capacity];
}



int main()
{
  /* code */
  int profit[] = {40, 50, 120};
  int weights[] = {10, 20, 30};
  int n = 3;
  int index = 0;
  int capacity = 50;

  // Solve using Recursion
  //  cout << solveUsingRecursion(capacity, weights, profit, index, n);

  // Solve Using Memoization
  vector<vector<int>> dp(capacity + 1, vector<int>(n + 1, -1));
  // cout << solveUsingMemo(capacity, weights, profit, index, n, dp);

  // Solve Using Tabulation
  // cout << solveUsingTab(capacity, weights, profit, index, n);

  //Solve Using Space Optmization
  // cout << solveUsingSO(capacity, weights, profit, index, n);

  // Solve using So 1 Array
  cout << solveUsingMoreSO(capacity, weights, profit, index, n);

  return 0;
}
