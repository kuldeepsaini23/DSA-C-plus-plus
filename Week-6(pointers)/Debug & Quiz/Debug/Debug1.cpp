#include<iostream>
#include<vector>
using namespace std;

//* Debug the code 
void SieveOfEratosthenes(int n) 
{
   vector<bool> prime(n+1, true);//* change false to true
    prime[0] = prime[1] = false; //* Added this
    for (int p = 2; p * p <= n; p++) {
      for (int i = p * p; i <= n; i += p) {
        prime[i] = false; //* Changed true to false
      } 
    } 
  
    for (int p = 0; p <= n; p++){
      if (prime[p]) {
        cout << p << " ";
      }
    }
         
}


int main(){
  int n = 7;
  SieveOfEratosthenes(n);
      
 return 0;
}