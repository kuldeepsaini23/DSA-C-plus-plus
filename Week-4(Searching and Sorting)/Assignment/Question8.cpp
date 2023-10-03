#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

bool isPossibleSolution(vector<long long int> trees,long long int m,long long int mid){
  long long int woodCollected = 0;
  for (int i = 0; i < trees.size(); i++)
  {
    /* code */
    if(trees[i]>mid){
      woodCollected+= trees[i] - mid;
    }
  }
  
  // return woodCollected >= m ? true:false;
  //* Below statement also which same output as above
  return woodCollected >= m;

}


//* EKO SPOJ
long long int maxSawBladeHeight(vector<long long int> v, long long int h){

  long long int s =0;
  long long int e = *max_element(v.begin(),v.end());

  long long int ans = -1;
  while(s<=e){

    long long int mid = s + (e-s)/2;

    if(isPossibleSolution(v,h,mid)){
      ans = mid;
      s = mid+1;
    }else{
      e = mid-1;
    }
  }

  return ans;
}
 
int main(){
  // vector<long long int> a = {20,15,10,17};
  // long long int m = 7;

  vector<long long int> a = {4, 42, 40, 26, 46};
  long long int m = 20;

  cout<<maxSawBladeHeight(a,m);
  //* take custom input
  // long long int n,m;
	// vector<long long int> trees;
  // cin>>n>>m;
  // while(n--){
  // 	long long int height;
  // 	cin>>height;
  // 	trees.push_back(height);
  // }
  	
  // cout<<maxSawBladeHeight(trees,m)<<endl;
  
      
 return 0;
}




// long long int maxSawBladeHeight(vector<long long int> v, long long int h){

//   long long int s =0;
//   long long int e = *max_element(v.begin(),v.end());

//   long long int ans = -1;
//   while(s<=e){
//     long long int sum =0;
//     long long int mid = s + (e-s)/2;
//     long long int diff;
//     for (long long int i = 0; i < v.size(); i++)
//     {
//       /* code */
//       diff = v[i] - mid;
//       if(diff<0){
//         sum+=0;
//       }else{
//         sum+=diff;
//       }
//     }

//     if(sum == h){
//       return mid; 
//     }
//     else if(sum>h){
//       ans = mid;
//       s = mid + 1;
//     }else{
//       e = mid-1;
//     }

//   }

//   return ans;
// }
 