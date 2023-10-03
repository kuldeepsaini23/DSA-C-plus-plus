#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//* Agggressive cows
//n-> no of stalls and stalls contains position on number line
//K-> no of aggressive cows

bool isPossibleSolution(vector<int>& stalls, int k , int mid){
  //can place k cows with atleast mid distance between them
  int count = 1;// count of cows
  int pos = stalls[0];

  for(int i = 0; i<stalls.size(); i++){
    if(stalls[i]-pos >= mid){
      count++;//placed one cow
      pos = stalls[i];//last cow position get update 
        if(count==k){
        return true;
      }
    }
  
  }  
  return false;
}

int solve(int n, int k, vector<int> &stalls) {
  sort(stalls.begin(),stalls.end());
  int s = 0;// min distance one because cannot place two cows on same stalls
  int e = stalls[stalls.size()-1] - stalls[0];
  int ans = -1;
  while(s<=e){
    int mid = s+(e-s)/2;
    if(isPossibleSolution(stalls,k,mid)){
      ans = mid;
      s = mid+1;
    }else{
      e = mid-1;
    }
  }  
  return ans;
}


int main(){
 vector<int> stalls = {1,2,4,8,9};
 int n = 5;
 int k = 3;
 cout<<solve(n,k,stalls);
      
 return 0;
}