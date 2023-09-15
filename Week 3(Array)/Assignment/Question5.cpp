#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

//* Maximum Average Subarray
double findMaxAverage(vector<int>& nums, int k) {
  if (nums.size() == 1) {
    return static_cast<double>(nums[0]); // If there's only one element, return it as a double.
  }

  double ans = INT_MIN;

  for (int i = 0; i <= nums.size() - k; i++) {
    int avg = 0;

    // Corrected the inner loop here
    for (int j = i; j < i + k; j++) {
      avg += nums[j]; // Use j to access the elements in the subarray.
    }

    cout << "index " << i + 1 << ": " << avg << endl;
    if (avg > ans) {
      ans =avg; 
    }
  }
  ans/=k;
  return ans;
}

//*Sliding Window Algorithm
double findMaxAverageWindow(vector<int>& nums, int k) {
 int sum = 0 ;
        for(int i = 0 ; i < k ; i++){
            sum += nums[i];
        }

        int maxSum = sum;
        int Start_idx = 0 ;

        int End_idx = k;

        while(End_idx < nums.size()){
            sum -= nums[Start_idx];
            Start_idx++; 

            sum += nums[End_idx];
            End_idx++;

            maxSum = max(sum , maxSum); 
        }
        return (double) maxSum/k; 
  }

 
int main(){
 vector<int> v{1,12,-5,-6,50,3};
 int k = 3;
 cout<<findMaxAverage(v,k);

 cout<<findMaxAverageWindow(v,k);

 return 0;
}