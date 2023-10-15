#include<iostream>
#include<vector>
using namespace std;


//* Print All subarrays using RE
void printSubarrays_util(vector<int> nums, int s, int e){
  //Base Case
  if(e == nums.size()){
    return;
  }

  // if(s == nums.size()){
  //   return;
  // }

  //Processing
  for (int i = s; i <= e; i++)
  {
    /* code */
    cout<<nums[i]<<" ";
  }
  cout<<endl;

  //Recrusive Calls
  printSubarrays_util(nums, s, e+1);
} 
 
void printSubarrays(vector<int> nums){
  for (int start = 0; start < nums.size(); start++)
  {
    /* code */
    int end = start;
    printSubarrays_util(nums,start, end);
  }
  
}

int main(){
  //* Print All subarrays using RE
  vector<int> nums{1,2,3,4,5};
  printSubarrays(nums);
      
 return 0;
}