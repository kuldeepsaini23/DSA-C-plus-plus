#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> deckRevealedIncreasing(vector<int> &deck)
{
  sort(deck.begin(), deck.end());
  vector<int> ans(deck.size(), 0);
  queue<int> q;

  for (int i = 0; i < deck.size(); ++i)
  {
    q.push(i);
  }

  int i = 0;
  while (!q.empty())
  {
    int front = q.front();
    q.pop();
    ans[front] = deck[i++];

    if (!q.empty())
    {
      int nextFront = q.front();
      q.pop();
      q.push(nextFront);
    }
  }
  return ans;
}

int main()
{
  vector<int> deck = {17,13,11,2,3,5,7};
  vector<int> ans = deckRevealedIncreasing(deck);

  for(auto i:ans){
    cout << i << " ";
  }
  return 0;
}