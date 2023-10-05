#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


vector<bool> Sieve(int n){
  vector<bool> arr(n+1,true);
  arr[0]=arr[1] = false;
  int sqrtN = sqrt(n);
  // Ya toh i<= sqrt(n) or isko likho lo i*i <=n
  for (int i = 2; i*i <= n; i++) //* optimization 2 
  {
    /* code */
    if(arr[i]){
      // int j = 2*i;
      int j= i*i;//* optimiztion 1
      while(j<=n){
        arr[j] = false;
        j = j+i;
      }
    }
  }

  return arr;
}

//* Segemented Sieve
vector<bool> segementedSieve(int L, int R){
  //get me array, i will ise it to mark seg sieve
  //* Step-2
  vector<bool>sieve = Sieve(sqrt(R));
  vector<int>basePrime;
  for (int i = 0; i < sieve.size(); i++)
  {
    /* code */
    if(sieve[i]){
      basePrime.push_back(i);
    }
  }

  //* Step-2
  vector<bool>segSieve(R-L+1, true);
  if(L==1 || L==0){
    segSieve[L] = false;
  }

  for(auto prime:basePrime){
    int first_mul = (L/prime)*prime;
    // cout<<"The First_mul of "<<prime<<" is: "<<first_mul<<endl;
    if(first_mul<L){
      first_mul+=prime;
    }

    int j = max(first_mul, prime*prime);
    // cout<<"The Prime is: "<<prime<<" and j is: "<<j<<endl;
    while(j<=R){
      segSieve[j-L] = false;
      // cout<<"The Number is non prime "<<j<<endl;
      j+=prime;
    }
  }
  return segSieve;
}

 
int main(){
  int L = 110;
  int R = 130;
  vector<bool>segSieve = segementedSieve(L,R);


  for (int i = 0; i < segSieve.size(); i++)
  {
    /* code */
    if(segSieve[i]){
      cout<<L+i<<" ";
    }
  }
  
}
