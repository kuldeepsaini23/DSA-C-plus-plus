#include<iostream>
using namespace std;
 
 bool binarySearch(int arr[][4], int rows, int cols, int target){
  int s = 0;
  int e = rows*cols-1;
  while(s<=e){
    int mid = s + (e-s)/2;
    int rowIndex = mid/cols;

    int colIndex = mid%cols;

    int element = arr[rowIndex][colIndex]; //* That element is present at the mid position

    if(element == target){
      return true;
    }else if(element < target){
      s = mid+1;
    }else{
      e = mid -1;
    }
  }
    return false;
 }
 
int main(){
 int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}, {17,18,19,20}};
 int row=5;
 int cols =4;

 int target = 200;

 bool ans = binarySearch(arr, row, cols, target);

 if(ans){
  cout<<"Found"<<endl;
 } else{
  cout<<"Not Found";
 }
      
 return 0;
}