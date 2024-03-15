#include <iostream>
#include <vector>
#include <deque>
using namespace std;

//* Sliding Window Maximum
vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
  deque<int> dq;
  vector<int> ans;

  // process first k elements
  for (int i = 0; i < k; i++)
  {
    // jo bhi number chote hai current element unko remove krdo
    while (!dq.empty() && nums[dq.back()] < nums[i])
    {
      dq.pop_back();
    }
    dq.push_back(i);
  }

  //storing ans for first window
  ans.push_back(nums[dq.front()]);

  // process remaining window
  for(int i=k; i<nums.size();i++){
    //removal
    //! Important 
    if(!dq.empty() && i-k >= dq.front()){
      dq.pop_front();
    }

    //addition
     while (!dq.empty() && nums[dq.back()] < nums[i])
    {
      dq.pop_back();
    }
    dq.push_back(i);
    //store ans
    ans.push_back(nums[dq.front()]);

  }
  return ans;
}

int main()
{

  vector<int> nums = {1,3,-1,-3,5,3,6,7};
  int k = 3;
  vector<int> ans = maxSlidingWindow(nums, k);
  //Printing Answer
  for(auto i:ans){
    cout << i << " ";
  }
  return 0;
}