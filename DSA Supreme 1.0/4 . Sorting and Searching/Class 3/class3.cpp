#include<iostream>
#include <vector>
using namespace std;
 
 //!B.s in a nearly sorted Array
 int binarySearch(vector<int> arr, int target){

  int s= 0;
  int e =arr.size();
  while(s<=e){
    int mid = s + (e-s)/2;

    if(arr[mid]==target){
      return mid;
    }

     if(mid+1 < arr.size() && arr[mid + 1]==target){
      return mid + 1;
    }
     if(mid-1>= s && arr[mid-1]==target){
      return mid-1;
     }

     if(arr[mid] > target){
      //*left search
      e = mid-2; 
     }else{

      //*Right search
      s = mid+2;
     }
  }

  return -1;
 }
 
int main(){
  
 //!B.s in a nearly sorted Array
 vector<int> arr{10,3,40,20,50,80,70};
 int target = 40;

 int ans = binarySearch(arr, target);
 cout<<"Index of "<<target<<" is "<<ans<<endl;
 return 0;
}