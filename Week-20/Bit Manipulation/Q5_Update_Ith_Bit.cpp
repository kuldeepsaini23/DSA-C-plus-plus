#include <iostream>
using namespace std;

void clearIthBit(int &n, int i)
{
  int mask = ~(1 << i);
  n = n & mask;
  // cout << "Updated Number: " << ans;
}

void updateIthBit(int n, int i, int target)
{
  // clear the ith bit
  clearIthBit(n, i);
  // Creating mask
  int mask = (target << i);
  // update n
  int ans = n | mask;
  cout << "Updated Number: " << ans;
}

int main()
{
  int n = 10;
  int i = 2;
  int target = 1;
  updateIthBit(n, i, target);
  return 0;
}