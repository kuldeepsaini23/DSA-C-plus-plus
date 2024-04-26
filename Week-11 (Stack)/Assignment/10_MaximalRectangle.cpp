#include <iostream>
#include <bits/stdc++.h>
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
int maximalRectangle(vector<vector<char>> &matrix)
{
  vector<vector<int>> v;
  int n = matrix.size();
  int m = matrix[0].size();

  for (int i = 0; i < n; i++)
  {
    vector<int> t;
    for (int j = 0; j < m; j++)
    {
      t.push_back(matrix[i][j] - '0');
    }
    v.push_back(t);
  }

  int area = largestRectangleArea(v[0]);
  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      // lets update our histogram
      if (v[i][j])
      {
        v[i][j] += v[i - 1][j];
      }
    }
    area = max(area, largestRectangleArea(v[i]));
  }

  return area;
}

int main()
{
  vector<vector<char>> mat = {{'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'}, {'1', '1', '1', '1', '1'}, {'1', '0', '0', '1', '0'}};
  cout << maximalRectangle(mat);
  return 0;
}