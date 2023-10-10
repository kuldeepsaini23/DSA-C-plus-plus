#include<iostream>
using namespace std;

//* Binary Search
int binarySearch(int arr[], int k, int s, int e){
  if(s>e){
    return -1;
  }

  int mid = s+(e-s)/2;
  if(arr[mid]==k){
    return mid;
  }
  else if(k>arr[mid]){
    return binarySearch(arr,k,mid+1,e);
  }else{
    return binarySearch(arr, k, s, mid-1);
  }
} 
 
int main(){
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(int);
  int target = 4;
  int start = 0;
  int end = size-1;

  cout<<binarySearch(arr,target,start,end);
      
 return 0;
}