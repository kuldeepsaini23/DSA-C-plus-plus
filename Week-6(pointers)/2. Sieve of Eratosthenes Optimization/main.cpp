#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//* optimization of Sieve of Eth

int primCounts(int n){
  vector<bool> arr(n+1,true);

  arr[0]=arr[1] = false;
  int count = 0;
  int sqrtN = sqrt(n);
  // Ya toh i<= sqrt(n) or isko likho lo i*i <=n
  for (int i = 2; i*i <= n; i++) //* optimization 2 
  {
    /* code */
    if(arr[i]){
      count++;
      // int j = 2*i;
      int j= i*i;//* optimiztion 1
      while(j<=n){
        arr[j] = false;
        j = j+i;
      }
    }
  }

  for (int i = 0; i < arr.size(); i++)
  {
    /* code */
    if(arr[i]){
      cout<<i<<" ";
    }
  }
  cout<<endl;
  return count;
}

 
int main(){
  int n=7;
  cout<<primCounts(n);
      
 return 0;
}
