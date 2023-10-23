#include<iostream>
using namespace std;

//* Painting Fence Algorithm
int getPaintWays(int n, int k){
  //n->

  //base Case
  if(n==1){
    return k;
  } 

  if(n==2){
    return k + k*(k-1);
  }

  int ans = (k-1)*(getPaintWays(n-1,k) + getPaintWays(n-2,k));  
  return ans;
}

int main(){
  int n=4, k=3;
  int ans = getPaintWays(n,k);
  cout<<ans;
      
 return 0;
}