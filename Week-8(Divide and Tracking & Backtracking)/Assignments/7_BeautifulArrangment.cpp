#include <iostream>
#include<vector>
using namespace std;

//! Beautiful Arrangement
void countArrangementHelper(vector<int> &v, int n, int &ans, int currNum)
{
  // Base Case
  if (currNum == v.size())
  {
    ans++;
    return;
  }

  for (int i = 1; i <= n; i++)
  {
    if (v[i] == 0 && (currNum % i == 0 || i % currNum == 0))
    {
      v[i] = currNum;
      countArrangementHelper(v, n, ans, currNum + 1);
      v[i] = 0; // Backtracking
    }
  }
}

int countArrangement(int n)
{
  vector<int> v(n + 1);
  int ans = 0;
  countArrangementHelper(v, n, ans, 1);
  return ans;
}

int main()
{
  int n = 3;
  cout << countArrangement(n);

  return 0;
}
