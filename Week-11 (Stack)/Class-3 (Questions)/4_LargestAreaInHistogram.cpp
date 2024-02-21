#include <iostream>
#include <stack>
#include <limits.h>
#include <vector>
using namespace std;

vector<int> nextSmallestElement(vector<int> &arr)
{
  stack<int> st;
  vector<int> ans(arr.size());
  st.push(-1);

  for (int i = arr.size() - 1; i >= 0; i--)
  {
    int curr = arr[i];
    // Answer find kro current ke liye
    while (st.top() != -1 && arr[st.top()] >= curr)
    {
      st.pop();
    }
    // Stack ke top ab curr se chota element hh
    ans[i] = st.top();
    st.push(i);
  }
  return ans;
}

vector<int> prevSmallestElement(vector<int> &arr)
{
  stack<int> st;
  vector<int> ans(arr.size());
  st.push(-1);

  for (int i = 0; i < arr.size(); i++)
  {
    int curr = arr[i];
    // Answer find kro current ke liye
    while (st.top() != -1 && arr[st.top()] >= curr)
    {
      st.pop();
    }
    // Stack ke top ab curr se chota element hh
    ans[i] = st.top();
    st.push(i);
  }
  return ans;
}

int largestRectangleArea(vector<int> &heights)
{

  vector<int> next = nextSmallestElement(heights);
  vector<int> prev = prevSmallestElement(heights);

  for (int i = 0; i < next.size(); i++)
  {
    if (next[i] == -1)
    {
      next[i] = heights.size();
    }
  }

  vector<int> area(next.size());
  for (int i = 0; i < next.size(); i++)
  {
    int width = next[i] - prev[i] - 1;
    int length = heights[i];
    int currArea = width * length;
    area[i] = currArea;
  }

  int maxi = INT_MIN;
  for (auto ele : area)
  {
    maxi = max(ele, maxi);
  }

  return maxi;
}

int main(){
  // vector<int> arr = {2,1,5,6,2,3};
  vector<int> arr = {2,4};
  int ans = largestRectangleArea(arr);
  cout << ans <<" ";
  
}