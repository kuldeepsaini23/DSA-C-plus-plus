#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

//! Minimum Score Triangulation of Polygon
int minScoreTriangulationHelper(vector<int> &v, int i, int j)
{
  // Base Case
  if (i + 1 == j)
  {
    return 0;
  }

  int ans = INT_MAX;
  for (int k = i + 1; k < j; k++)
  {
    ans = min(ans, v[i] * v[j] * v[k] + minScoreTriangulationHelper(v, i, k) + minScoreTriangulationHelper(v, k, j));
  }
  return ans;
}

int minScoreTriangulation(vector<int> &values)
{
  int n = values.size() - 1;
  return minScoreTriangulationHelper(values, 0, n);
}

int main()
{
  vector<int> values = {3,7,4,5};
  cout<< minScoreTriangulation(values);
  return 0;
}