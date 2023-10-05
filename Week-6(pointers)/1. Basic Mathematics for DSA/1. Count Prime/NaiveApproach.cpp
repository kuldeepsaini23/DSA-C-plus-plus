#include<iostream>
#include<math.h>
using namespace std;

//* Count Prime

// 1. Navie Approach
bool isPrime(int n){
  if(n<=1) return false;
  for (int i = 2; i < n; i++)
  {
    /* code */
    if(n%i==0){
      return false;
    }
  }
  return true;
}



int countPrimes(int n){
  if(n==0) return 0;
  int c = 0;

  for (int i = 2; i < n; i++)
  {
    /* code */
    if(isPrime(i)){
      ++c;
    }
  }
  return c;
}
 
int main(){
 int n = 7;
 cout<<countPrimes(n);
      
 return 0;
}