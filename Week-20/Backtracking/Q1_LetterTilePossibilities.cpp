#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &freq)
{
  int ans = 0;
  // hr ek dabbe me , A->Z tk insert krne ka try krna hai
  for (int i = 0; i < 26; i++)
  {
    // character exist krta hai ya nhi

    if (freq[i] != 0)
    {
      // ek ans nikal gya
      ans++;
      // freq update
      freq[i]--;
      // baki recrusion sabmal lega
      int recrusionKaAns = solve(freq);
      ans += recrusionKaAns;
      // backtracking
      freq[i]++;
    }
  }
  return ans;
}

int numTilePossibilities(string tiles)
{
  vector<int> freq(26, 0);
  // count frequency of characters
  for (auto ch : tiles)
  {
    freq[ch - 'A']++;
  }
  int ans = solve(freq);
  return ans;
}

int main()
{
  string tiles = "AAB";

  cout << numTilePossibilities(tiles);

  return 0;
}