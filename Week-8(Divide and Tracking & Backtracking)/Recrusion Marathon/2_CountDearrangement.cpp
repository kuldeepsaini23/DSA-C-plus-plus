#include<iostream>
using namespace std;


//* Count Dearrangement

int solve(int n){
  //Base case
  if(n==1){
    return 0;
  }

  if(n==2){
    return 1;
  }

  //Processing and recrusion
  int ans  = (n-1) * (solve(n-1) + solve(n-2));
  return ans;
}
 
int main(){
  int n = 4;
  cout<<solve(n);
      
 return 0;
}