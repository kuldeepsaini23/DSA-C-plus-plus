#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// StockSpanner() {}

int next(int price)
{
  stack<pair<int, int>> st;
  int span = 1;
  while (!st.empty() && st.top().first <= price)
  {
    span += st.top().second;
    st.pop();
  }
  st.push({price, span});
  return span;
}

int main()
{

  return 0;
}
