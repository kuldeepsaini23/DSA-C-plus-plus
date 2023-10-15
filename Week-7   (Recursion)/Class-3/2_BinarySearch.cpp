#include<iostream>
using namespace std;

//* Binary Search
int binarySearch(int arr[], int s, int e, int target){
  //BAse case
  if(s>e){
    return -1;
  }

  //Processing -> ek khud se krni hh
  int mid = s+(e-s)/2;
  if(arr[mid]==target){
    return mid;
  }

  //Baki recrusion dekhlegaa
  if(arr[mid]>target){
    return binarySearch(arr,s,mid-1,target);
  }
  else{
    return binarySearch(arr,mid+1,e,target);
  }
}


 
int main(){
  //* Binary Search
  int arr[] = {10,20,30,40,50};
  int size = 5;
  int start = 0;
  int end = size-1;
  int target = 60;

  cout<<binarySearch(arr,start,end,target);


 return 0;
}