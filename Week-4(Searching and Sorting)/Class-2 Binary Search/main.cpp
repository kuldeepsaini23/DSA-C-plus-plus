#include<iostream>
#include<vector>
using namespace std;

//Bianary Search
int searchMatrix(vector<int>& arr, int target) {
  int n = arr.size();
  int s =0;
  int e = n-1;
  int mid = s+(e-s)/2;

    while(s<=e){


    if(arr[mid] == target) return mid;
    else if(arr[mid]<target) s = mid+1;//right
    else e = mid-1;//left

    mid = s+(e-s)/2;
  }

  return -1;
}


//* Find Pivot Element
int findMax(int arr[], int n){
  int s= 0 ;
  int e = n-1;

  while(s<=e){
    int mid = s +(e-s)/2;

    if(s==e) return s;

    if(mid+1<=n-1 && arr[mid]>arr[mid+1]) return mid;
    else if(mid-1>=0 && arr[mid]<arr[mid-1]) return mid-1;
    else if(arr[s]>arr[mid]) e = mid-1;
    else s = mid+1;
  }
  return -1;
}


//* Sqrt of a Number
int mySqrt(int x){
  int s = 0;
  int e = x;
  int mid = s+(e-s)/2;
  int ans = -1;

  while(s<=e){
    long long int predicateFunction = mid*mid;
    //kya mid hi toh answer nhi hh
    if(predicateFunction==x){
      ans = mid;
      return ans;
    }else if(predicateFunction<x){
      ans = mid;
      s = mid+1;
    }else{
      e = mid - 1;
    }
  }
  return ans;
}

//* Binary Search in 2-d array
bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int row = matrix.size();
  int col = matrix[0].size();
  int n = row*col;

  int s =0;
  int e = n-1;
  int mid = s+(e-s)/2;

    while(s<=e){
    int rowIndex = mid/col;
    int colIndex = mid%col;
    int currentNumber = matrix[rowIndex][colIndex];

    if(currentNumber==target) return true;
    else if(currentNumber<target) s = mid+1;//right
    else e = mid-1;//left

    mid = s+(e-s)/2;
  }

  return -1;
}

 
int main(){
 //! Binary Search Questions

 //* Find Pivot Index
//  int arr[]={12,14,16,2,4,6,8,10};
//  int n = 8;
//  cout<<findMax(arr,n);

 //* Search in a Rotated Sorted Array
//  int arr[]={12,14,16,2,4,6,8,10};
//  int n = 8;
//  int target = 16;
//  cout<<searchInRotatedSortedArray(arr,n,target);




 //* Sqrt of a Number
 int x = 64;
 cout<<mySqrt(x);

 //* Binary Search in 2-d array
//  vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//  int target = 3;
//  cout<<searchMatrix(matrix,target);
      
 return 0;
}