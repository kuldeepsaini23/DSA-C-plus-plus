#include<iostream>
#include<vector>
using namespace std;
 
//priting vector
void PrintVector(vector<int>v){
  for (int i = 0; i < v.size(); i++)
  {
    /* code */
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

//* find pivot element
int pivotIndex(vector<int>& nums) {
  int n = nums.size();


  for (int i = 1; i < n-1; i++)
  {
    int leftSum = 0;
    int rightSum = 0;
    /* code */
    for (int j = 0; j <i ; j++)
    {
      /* code */
      leftSum+=nums[j];
    }

    for (int j = i+1; j <n; j++)
    {
      /* code */
      rightSum+=nums[j];
    }
    
    if(leftSum == rightSum){
      return i;
    }
  }
  return -1;
}

//* Prefix sum Approach
int prefixSumApproach(vector<int> nums){
  vector<int> lSum(nums.size(),0);
  vector<int> rSum(nums.size(),0);

  //cal lsum array
  for (int i = 1; i < nums.size(); i++)
  {
    /* code */
    lSum[i] = lSum[i-1]+nums[i-1];
  }

  //cal rsum array
  for (int i = nums.size()-2; i >=0; i--)
  {
    /* code */
    rSum[i] = rSum[i+1] + nums[i+1];
  }
  
  PrintVector(lSum);
  PrintVector(rSum);

  //check krte hh
  for (int i = 0; i < nums.size(); i++)
  {
    /* code */
    if(lSum[i]==rSum[i]) return i;
  }
  return -1;
}

int main(){

  vector<int> v{1,7,3,6,5,6};
  cout<<pivotIndex(v)<<endl;

  cout<<prefixSumApproach(v);
      
 return 0;
}