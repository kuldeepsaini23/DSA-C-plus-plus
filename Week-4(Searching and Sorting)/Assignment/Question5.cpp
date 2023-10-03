#include<iostream>
#include<numeric>
using namespace std;
//* Book Allocation
// N--> no of books
// M -> no of students
bool isPossibleSolution(int A[], int N, int M, int sol){
  int pageSum = 0;
  int counter = 1;

  for (int i = 0; i < N; i++)
  {
    /* code */
    if(A[i]>sol){
      return false;
    }
    if(pageSum + A[i] > sol){
      counter++;
      pageSum = A[i];
      if(counter>M){
        return false;
      }
    }else{
      pageSum+=A[i];
    }
  }
  return true;
}


int findPages(int A[], int N, int M) {
  if(M>N) return -1;

  int s = 0;
  int e = accumulate(A,A+N,0);
  int ans = -1;
  while(s<=e){
    int mid = s + (e-s)/2;

    if(isPossibleSolution(A,N,M,mid)){
      ans = mid;
      e = mid-1;
    }else{
      s = mid+1;
    }
  }

  return ans;
}
 
int main(){
  int A[] = {12,34,67,90};
  int N = 4;
  int M = 2;
  cout<<findPages(A,N,M);
      
 return 0;
}