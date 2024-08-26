#include<iostream>
#include<vector>
using namespace std;

//* Paint Fence
int solveUsingRecrusion(int n, int k){
  //Base case 
  if( n == 1){
    return k;
  }

  if(n==2){
    return (k + k*(k-1));
  }

  int ans = (solveUsingRecrusion(n-1,k) + solveUsingRecrusion(n-2,k))*(k-1);

  return ans;
}
 

//solve using memo
int solveUsingMemo(int n, int k, vector<int> &dp){
  //Base case 
  if( n == 1){
    return k;
  }

  if(n==2){
    return (k + k*(k-1));
  }

  if(dp[n] != -1){
    return dp[n];
  }

  dp[n] = (solveUsingMemo(n-1,k, dp) + solveUsingMemo(n-2,k,dp))*(k-1);

  return dp[n];
} 

//solve using memo
int solveUsingTab(int n, int k){

  vector<int> dp(n+1, -1);
  dp[1] = k;
  dp[2] = k+k*(k-1);
  
  for(int i=2; i<dp.size(); ++i){
    dp[n] = (dp[n-1] + dp[n-2])*(k-1);
  }
 
  return dp[n];
} 

//solve using Space optmization
int solveUsingSpace(int n, int k){

  int prevSecond = k;
  int prev = k+k*(k-1);
  if(n==1){
    return prevSecond;
  }

  if(n==2){
    return prev;
  }
  int curr = 0;
  for(int i=3; i<=n; ++i){
    curr = (prevSecond + prev)*(k-1);
    prevSecond = prev;
    prev = curr;
  }
 
  return curr;
} 

int main(){
  int n = 3;
  int k = 3;

  //Solve using Recusrsion
  // cout << solveUsingRecrusion(n,k);

  //Solve using Memo
  // vector<int> dp(n+1, -1);
  // cout << solveUsingMemo(n,k,dp);

  //Solve using Tabulation
  // cout << solveUsingTab(n,k);


  //Space optimiztion
  cout << solveUsingSpace(n,k);

      
 return 0;
}