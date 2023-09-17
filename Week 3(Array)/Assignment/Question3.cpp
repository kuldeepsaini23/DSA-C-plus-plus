#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 //* Missing Number[1-->n] Range (may be fail in [0,1]) 
int missingNumber(vector<int>& nums) {
  int n = nums.size();
  // int sum = ((n)*(n+1))/2;--> in this we will not able to cover [0,1] this case

  // so to sum use--> for loopp
  int sum = 0;
  for (int i = 0; i <= nums.size(); i++)
  {
    /* code */
    sum+=nums[i];
  }
  

  int numsSum=0;
  for (int i = 0; i < n; i++)
  {
    /* code */
    numsSum+=nums[i];
  }
  int missingNumber = sum- numsSum;
  return missingNumber;
}

//* Sorting method
int missingNumberWithXor(vector<int>& nums) {
  sort(nums.begin(),nums.end());

  for (int i = 0; i < nums.size(); i++)
  {
    /* code */
    if(nums[i] != i){
      return i;
    }
  }
  return nums[nums.size()-1];
}
 

//* Best Method XOR[0-->n]
int missingNumberWithXor(vector<int>& nums) {
  int n = nums.size();
  int ans = 0;
  //if you XOR 0 with anything it will give same number
  for (int i = 0; i < n; i++)
  {
    /* code */
    ans^=nums[i];
  }
  

  //now xor with every index
  for (int i = 0; i <= n; i++)
  {
    /* code */
    ans^=i;
  }
  return ans;
}


//* Brute Force Linear Search
bool linearSearch(vector<int> nums, int target){
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target){
                return 1;
            }
        }
        return 0;
    }


    int missingNumber(vector<int>& nums) {
        int ans;
        for(int i = 0;i<=nums.size();i++){
            bool result = linearSearch(nums,i);
            if(result){
                continue;
            }else{
                ans = i;
                break;
            }
        }
        return ans;
    }
 
int main(){
 
 vector<int> v{9,6,4,2,3,5,7,0,1};
 cout<<missingNumber(v);
      
 return 0;
}