#include <iostream>
#include <vector>
using namespace std;

// Plane Recrusion
int solveUsingRecursion(int n)
{
  // Base Case
  if (n == 0 || n == 1)
  {
    return n;
  }

  // Recrusion
  int ans = solveUsingRecursion(n - 1) + solveUsingRecursion(n - 2);

  return ans;
}

// Top-Down(Recrusion + memoisation)
int solveUsingMemo(int n, vector<int> &dp)
{
  // Base Case
  if (n == 0 || n == 1)
  {
    return n;
  }

  // Step-3: check if value exist or not adn if exist then return
  if (dp[n] != -1)
  {
    return dp[n];
  }

  // Step-2: store value in dp array
  dp[n] = solveUsingMemo(n - 1, dp) + solveUsingMemo(n - 2, dp);
  return dp[n];
}

int solveUsingTabulation(int n)
{
  // Step-1: Create an dp array
  vector<int> dp(n + 1, -1);
  // Step-2: analyse base case and fill dp array
  dp[0] = 0;
  //! yha pe khayal rkho
  if (n == 0)
    return dp[0];
  dp[1] = 1;

  // step-3: fill the remaining dp array
  //  size = n+1;
  //  index-> 0 to <= n
  // index fill ho chukha hai ->0 and 1
  // bacha hai 2 se n tak
  for (int i = 2; i <= n; i++)
  {
    // copy paste the recrusive  logic
    // replace recrusive calls with dp array
    // make sure dp array is using looping variable i
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  return dp[n];
}


//Space Optimization
int solveUsingTabulationAndSpaceOptimization(int n)
{
  int prev = 0;
  if (n == 0)
  {
    return prev;
  }

  int curr = 1;
  if (n == 1)
  {
    return curr;
  }
  int ans;
  for (int i = 2; i <= n; i++)
  {
    ans = prev + curr;
    prev = curr;
    curr = ans;
  }
  return ans;
}

int main()
{
  int n = 5;
  // Plane Recrusion
  cout << "Plane Recrusion: " << solveUsingRecursion(n) << endl;

  // Top Down(Recrusion + memoisation)
  // Step-1: create an dp array
  vector<int> dp(n + 1, -1);
  cout << "solveUsingMemo: " << solveUsingMemo(n, dp) << endl;

  // Bottom-up(tabulation)
  cout << "solveUsingTabulation: " << solveUsingTabulation(n) << endl;

  // Space Optmization
  cout << "SPACE Optimization: " << solveUsingTabulationAndSpaceOptimization(n) << endl;

  return 0;
}