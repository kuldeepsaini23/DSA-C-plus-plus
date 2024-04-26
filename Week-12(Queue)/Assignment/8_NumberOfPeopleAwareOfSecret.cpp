#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//* Queue Approach
int peopleAwareOfSecret(int n, int delay, int forget)
{
  const int M = 1e9 + 7;
  int curr = 0;                          // active spreader
  int ans = 1;                           // persons who knows the secret
  queue<pair<int, int>> delayQ, forgetQ; //<uss din, kitne new logo ko secret pta lga>

  delayQ.push({1, 1});
  forgetQ.push({1, 1});

  for (int i = 1; i <= n; i++)
  {
    // Step-1:
    if (!forgetQ.empty() && forgetQ.front().first + forget <= i)
    {
      auto front = forgetQ.front();
      forgetQ.pop();
      auto no = front.second;
      curr = (curr - no + M) % M;
      ans = (ans - no + M) % M;
    }

    // Step-2: Make new Active Spreader
    if (!delayQ.empty() && delayQ.front().first + delay <= i)
    {
      auto front = delayQ.front();
      delayQ.pop();
      auto no = front.second;
      curr = (curr + no) % M;
    }

    // Step-3: Spread the Secret
    if (curr > 0)
    {
      ans = (ans + curr) % M;
      delayQ.push({i, curr});
      forgetQ.push({i, curr});
    }
  }

  return ans;
}

int main()
{
  int n = 6, delay = 2, forget = 4;
  cout << peopleAwareOfSecret(n, delay, forget);

  return 0;
}