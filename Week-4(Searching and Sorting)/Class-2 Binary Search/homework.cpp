#include<iostream>
using namespace std;

//* Find Minimum Element in Array 
int findMin(int arr[], int n){
  int s= 0 ;
  int e = n-1;

  while(s<=e){
    int mid = s +(e-s)/2;

    if(s==e) return s;

    if(mid+1<=n-1 && arr[mid]>arr[mid+1]) return mid+1;
    else if(mid-1>=0 && arr[mid-1]>arr[mid]) return mid;
    else if(arr[s]>arr[mid]) e = mid-1;
    else s = mid+1;
  }
  return -1;
}

int sqrtDecimal(int x){
  
}

 
int main(){
  //* Find Minimum Element in Rotated and Sorted Array
  int arr[]={12,14,16,2,4,6,8,10};
  int n = 8;
  cout<<findMin(arr,n);

  //*Sqrt(x) in Decimals
      
 return 0;
}