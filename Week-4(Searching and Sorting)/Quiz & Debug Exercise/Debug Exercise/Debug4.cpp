#include<iostream>
#include<vector>
using namespace std;

//* Debug the code. A peak element is an element that is strictly greater than its neighbors. Find the peak element.
int findPeakElement(vector<int>& nums) {
  int n = nums.size();
  int low = 0;
  int high = n-1;
  while(low < high){
      int mid = (low + high) >> 1; //* Changed this
      if(nums[mid] > nums[mid+1]){ //* Renove equal to sign
          high = mid;
      }
      else{
          low = mid+1; //* added +1
      }
  }
  return low;//*Return low
}
 
int main(){

  vector<int> v = {1,2,5,4,3};

  cout<<findPeakElement(v);
 
      
 return 0;
}