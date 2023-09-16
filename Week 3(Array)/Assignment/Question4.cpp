#include<iostream>
#include<vector>
using namespace std;

//!Fastest Approach maybe Binary search
//print vector
void printVector(vector<int>& v){
  for (int i = 0; i < v.size(); i++)
  {
    /* code */
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

//* Remove Duplicate Elements from a Sorted Array
// void removeDuplicates(vector<int>& nums){
//   int differentElement = 0;
//   vector<int> temp;
//   for (int i = 0; i < nums.size()-1; i++)
//   {
//     /* code */
//     if(nums[i]!=nums[i+1]){
//       temp.push_back(nums[i]);
//     }
//   }
//   temp.push_back(nums[nums.size()-1]);
//   //***********************OR**********************/
//   temp.push_back(nums[0]);
//   for (int i = 1; i < nums.size(); i++)
//   {
//     /* code */
//     if(nums[i]!=nums[i-1]){
//       temp.push_back(nums[i]);
//     }
//   }
//   differentElement = temp.size();
//   printVector(temp);
//   cout<<differentElement<<endl;

// }

//*Another Method-->(Leetcode)
int removeDuplicates(vector<int>& nums) {
  if(nums.size()<=1) return nums.size();
  int position=1;
  for(int i=1;i<nums.size();++i){
    if(nums[i]!=nums[position-1]){
      nums[position]=nums[i];
      position++;
    }
  }

  for (int i = 0; i < position; i++)
  {
    /* code */
    cout<<nums[i]<<" ";
  }
  cout<<endl;
  return position;
}


int main(){
//  vector<int>v{0,0,2};
 vector<int>v{0,0,1,1,1,2,2,3,3,4};
//  removeDuplicates(v);

 cout<<removeDuplicates(v)<<endl;

 return 0;
}