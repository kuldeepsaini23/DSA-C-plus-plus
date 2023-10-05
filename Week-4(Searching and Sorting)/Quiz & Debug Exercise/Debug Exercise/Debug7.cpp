#include<iostream>
#include<vector>
using namespace std;

//* Debug the code.
int binarySearch(vector<int>& nums, int target) {
  int left = 0, right = int(nums.size());
  while (left < right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] <= target) {
        left = mid+1;//*changed this
        
      } else {
        right = mid;
      }
  }                     //*Changed this
  if (left >= 0 and nums[left-1] == target) {
      return left-1;//* Changed this
  } else {
      return -1;
  }
}
 
//* This below code is also correct when you donot wanna return left-1
int binarySearch(vector<int>& nums, int target) {
  int left = 0, right = int(nums.size())-1; //*update by -1
  while (left < right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] <= target) {
        left = mid+1;
        
      } else {
        right = mid;
      }
  }                 //* change left
  if (left >= 0 and nums[left] == target) {
      return left; //* only left
  } else {
      return -1;
  }
}
 
 
int main(){
  vector<int> v = {1,2,3,4,5};
  int target = 5;
  cout<<binarySearch(v,target);
      
 return 0;
}