#include<iostream>
using namespace std;
int binarySearch(int a[], int s, int e, int x){
  while(s<=e){
    int mid = s+(e-s)/2;

    if(a[mid]==x){
      return mid;
    }else if(a[mid]>x){
      e = mid-1;
    }else{
      s = mid+1;
    }
  }

  return -1;
}

//* Search in Unounded(infinite) Array
//Brute Force
int findtarget(int a[], int x){
  int i=0;
  int ans = -1;
  while(1){
    if(a[i]>x){
      break;
    }
    if(a[i]==x){
      ans = i;
    }
    i++;
  }
}

//Optimized Method
int expoSearch(int a[], int x){
  int i = 0;
  int j =1;

  while(a[j]<=x){
    i = j;
    j*=2;
  }

  return binarySearch(a,i,j,x);
}
 
int main(){
 
      
 return 0;
}