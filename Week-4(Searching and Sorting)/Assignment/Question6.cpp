#include<iostream>
#include<numeric>
using namespace std;
//*  Painters Partition
// n--> no of Boards
// k -> no of Palong longers
bool isPossibleSolution(int arr[], int n, int k, int sol){
  long long timeSum = 0;
  int counter = 1;

  for (long long i = 0; i < n; i++)
  {
    /* code */
    if(arr[i]>sol){
      return false;
    }
    if(timeSum + arr[i] > sol){
      counter++;
      timeSum = arr[i];
      if(counter>k){
        return false;
      }
    }else{
      timeSum+=arr[i];
    }
  }
  return true;
}


long long minTime(int arr[], int n, int k) {
  if(k>n) return -1;

  long long s = 0;
  long long e = accumulate(arr,arr+n,0);
  long long ans = -1;
  while(s<=e){
    long long mid = s + (e-s)/2;

    if(isPossibleSolution(arr,n,k,mid)){
      ans = mid;
      e = mid-1;
    }else{
      s = mid+1;
    }
  }

  return ans;
}
 
int main(){
  int A[] = {5,10,30,20,15};
  int N = 5;
  int M = 3;
  cout<<minTime(A,N,M);
      
 return 0;
}