#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//* Find the Winner of the Circular Game
int findTheWinner(int n, int k)
{
  queue<int> q;
  // all player should go in queue
  for (int i = 1; i <= n; i++)
  {
    q.push(i);
  }

  while (q.size() > 1)
  {
    // simulate the game
    for (int i = 1; i < k; i++)
    {
      auto player = q.front();
      q.pop();
      // it is not eliminated yet
      q.push(player);
    }

    // kth player must be elminated
    q.pop();
  }

  return q.front();
}

int main()
{
  int n = 5;
  int k = 2;
  cout << findTheWinner(n, k) << endl;

  return 0;
}