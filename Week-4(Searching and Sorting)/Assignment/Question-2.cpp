#include<iostream>
#include<vector>
using namespace std;

//! Find K-th Closet Element in an Array

//* two pointer
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
  int s =0;
  int e = arr.size()-1; 
  vector<int> ans;
  while(e-s>=k){
    if(x-arr[s]>arr[e]-x){
      s++;
    }else{
      e--;
    }
  }

  for (int i = s; i <= e; i++)
  {
    /* code */
    ans.push_back(arr[i]);
  }
  return ans;
  
}


//*Bianry Search
  int lowerBound(vector<int>&arr, int x){
    int s=0,e=arr.size()-1;
    int ans=e;
    while(s<=e){
      int mid=  s+(e-s)/2;
      if(arr[mid]>=x){
        ans = mid;
        e = mid-1;
      }else if(x>arr[mid]){
        s = mid+1;
      }else{
        e = mid-1;
      }
    }
    return ans;
  }


vector<int> findClosestElementsBinarySearch(vector<int>& arr, int k, int x) {
  int h =lowerBound(arr,x);
  int l = h-1;
  vector<int> ans;
  while(k--){
    if(l<0){
      h++;
    }
    else if(h>=arr.size()){
      l--;
    }
    else if(x-arr[l]>arr[h]-x){
      h++;
    }else{
      l--;
    }
  }

  for (int i = l+1; i < h; i++)
  {
    /* code */
    ans.push_back(arr[i]);
  }
  return ans;
  
}




int main(){
  // vector<int> a = {12,16,22, 30,35,39,42,45,48,50,53,55,56};
  vector<int> a = {1,2,3,4,5};
  int k =4;
  int x = -1;
  //* Two pointer
  // vector<int> ans = findClosestElements(a,k,x);

  //* Binary Search
  vector<int> ans = findClosestElementsBinarySearch(a,k,x);  
  for (int i = 0; i < ans.size(); i++)
  {
    /* code */
    cout<<ans[i]<<" ";
  }
  
      
 return 0;
}