#include<iostream>
#include<vector>
using namespace std;
 
//* Sieve of Erastosthenes

int countPrimes(int n){
  if(n==0) return 0;
  vector<bool> prime(n,true);// all are prime marked already
  prime[0] = prime[1] = false;

  int ans = 0;

  for (int i = 0; i <= n; i++)
  {
    /* code */
    if(prime[i]){
      ans++;

      int j = 2*i;
      while(j<n){
        prime[j] = false;
        j+=i;
      }
    }
  }
  return ans;

}

int main(){
  int n = 7;
  cout<<countPrimes(n);
      
 return 0;
}