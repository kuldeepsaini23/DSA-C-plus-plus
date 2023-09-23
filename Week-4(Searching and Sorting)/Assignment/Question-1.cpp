#include<iostream>
#include<vector>
using namespace std;

 //*K-diff Pairs in an Array
  //Binary search will ne used so
  bool binarySearch(vector<int> arr,int target){
    int s=0;
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
  int pairs = 0;
  for(int i =0; i<arr.size(); i++){
    int target = arr[i]+k;
    bool searching = binarySearch(arr,target);
    if(searching){
      pairs++;
    }
  }
  cout<<pairs<<endl;
      
 return 0;
}