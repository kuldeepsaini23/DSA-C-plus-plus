#include<iostream>
#include<vector>
using namespace std;

//* Debug the code. Find minimum in rotated sorted array. (Sorting was in ascending order).

int findMin(vector<int>& nums) {
  int start = 0;
  int end = nums.size()-1; //*Changed this
  int ans = start;
  while(nums[start] > nums[end]) {
      int mid = (start + end) >> 1; //* Changed this left shift to right shift
      if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
          end = mid;
      else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
          start = mid+1;//*changed this          
      else return nums[mid];
      ans = start;
  }
  return nums[ans];
}



int main(){
 vector<int> v ={3,4,5,6,1,2};

 cout<<findMin(v)<<endl;
      
 return 0;
}