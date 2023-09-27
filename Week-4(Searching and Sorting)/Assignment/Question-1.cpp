#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;

 //!K-diff Pairs in an Array

 //Brute force


 //Two pointer
 int findPairsTwoPointer(vector<int>& nums, int k){
  sort(nums.begin(), nums.end());
  set<pair<int,int>> ans;
  int i=0,j=1;
  while(j<nums.size()){
    int diff = nums[j] - nums[i];
    cout<<diff<<endl;
    if(diff == k){
      cout<<"Iam here"<<endl;
      ans.insert({nums[i],nums[j]});
      i++, j++;
    }else if(diff<k){
      j++;
    }else{
      i++;
    }
    if(i==j) j++;
  }

  return ans.size();
 }



  //Binary search will ne used so
bool binarySearch(vector<int>& arr,int s,int target){
  int e = arr.size()-1;
  while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid]==target){
      return true;
    }else if(arr[mid]>target){
      e=mid-1;
    }else{
      s = mid+1;
    }
  }
  return false;
}
 
int main(){

  vector<int> arr = {3,1,4,1,5};
  int k = 2;

  //* Two pointer approach
  // cout<<findPairsTwoPointer(arr,k)<<endl;

  //* Binary search approach
  set<pair<int,int>> ans;
  sort(arr.begin(),arr.end());
  for(int i =0; i<arr.size(); i++){
    int target = arr[i]+k;
    bool searching = binarySearch(arr,i+1,target);
    if(searching){
      ans.insert({arr[i],target});
    }
  }
  cout<<ans.size()<<endl;
      
 return 0;
}