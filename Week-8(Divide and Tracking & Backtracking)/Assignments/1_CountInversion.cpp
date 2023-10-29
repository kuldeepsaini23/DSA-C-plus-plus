#include<iostream>
#include<vector>
using namespace std;

//! Count Inversion
//* Method-1 Brute force
int countInversion(vector<int> arr){
  int count = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    /* code */
    for (int j = i+1; j < arr.size(); j++)
    {
      /* code */
      count = arr[i]>arr[j] ? count+1 : count;
    }
    
  }
  return count;
  
}

//* Method-2 with merge sort
int merge(vector<int> &arr, vector<int> &temp, int start, int mid, int end){
  int i = start, j = mid+1,  k = start;
  int c=0;
  while(i<= mid && j <= end){
    if(arr[i] <= arr[j]){
      temp[k++] = arr[i++];
    }
    else{//arr[i]>arr[j]
      temp[k++] = arr[j++];
      c += mid-i+1;
    }
  }

  while(i<=mid){
    temp[k++] = arr[i++];
  }

  while(j<=end){
    temp[k++] = arr[j++];
  }

  while(start <= end){
    arr[start] = temp[start];
    ++start;
  }
  return c;
}

int mergeSort(vector<int> &arr, vector<int> &temp, int start, int end){
  //Base Case 
  if(start >= end){
    return 0;
  }

  int mid = start + (end-start) /2;
  int c = 0;
  // Recrusion 
  c+=mergeSort(arr, temp, start, mid);
  c+=mergeSort(arr, temp, mid+1, end);

  c+=merge(arr,temp,start,mid, end);
  return c;
}

int countInversionWithMergeSort(vector<int> arr){
  int count = 0;
  vector<int> temp(arr.size(),0);
  count = mergeSort(arr, temp, 0, arr.size()-1);
  return count;
}
 
int main(){
  vector<int> arr = {8,6,3,1};      
  // cout<< countInversion(arr);
  cout<< countInversionWithMergeSort(arr);

 return 0;
}