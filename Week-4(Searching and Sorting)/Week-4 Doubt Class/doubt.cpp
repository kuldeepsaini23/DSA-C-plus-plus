#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



//*Rearrange Array by sign
vector<int> rearrangeArray(vector<int>& nums) {
        // Method 2. Two pointer
        vector<int>ans(nums.size(), -1);
        int odd = 1, even = 0;
        for(int i=0;i<nums.size();++i){
            int num = nums[i];
            if(num > 0){
                ans[even] = num;
                even += 2;
            }
            else{
                ans[odd] = num;
                odd+=2;
            }
        }
        return ans;

        // Method 1. Brute Force with Temp Array
        // vector<int>pos, neg;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i] < 0)
        //         neg.push_back(nums[i]);
        //     else
        //         pos.push_back(nums[i]);
        // }
        // vector<int>ans;
        // int i=0;
        // while(i < pos.size()){
        //     ans.push_back(pos[i]);
        //     ans.push_back(neg[i]);
        //     i++;
        // }
        // return ans;
}


//* Peak Element in a mountain array
int peakIndexInMountainArray(vector<int>& a) {
        int ans = -1;
        int start = 0;
        int end = a.size() - 1;

        while(start <= end){
            int mid = (start + end) / 2;
            if(a[mid + 1] > a[mid]){
                start = mid + 1;
            }
            else if(a[mid - 1] > a[mid]){
                end = mid - 1;
            }
            else {
                // It must be Peak
                ans = mid;
                break;
            }
        }
        return ans;
    }


int main(){
  //*Matrix Diagonal sum
  // int arr[][3] = {
  //   {1,2,3},
  //   {4,5,6},
  //   {7,8,9}
  // };
  // int sum = 0;
  // int i=0,j=2;
  // for (; j >= 0; j--)
  // {
  //   /* code */
  //   sum+=arr[i++][j];
  // }
  // cout<<sum<<endl;

  //*Swap two numbers
  //Done

  //* Reverse an Array
    //*Reversal Approach
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 3;
  k = k%n;
  reverse(arr,arr+n);
  reverse(arr,arr+k);
  reverse(arr+k,arr+n);

  for (int i = 0; i < n; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }


  
  

 return 0;
}