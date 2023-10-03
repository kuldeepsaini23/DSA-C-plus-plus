#include<iostream>
#include<math.h>
using namespace std;

//* Count Prime

//  Sqrt Appraoch
bool isPrime(int n){
  if(n<=1) return false;
  int SqrtN = sqrt(n);
  for (int i = 2; i <= SqrtN; i++)
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

  for (int i = 0; i < n; i++)
  {
    /* code */
    if(isPrime(i)){
      cout<<"I am Prime: "<<i<<endl;
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