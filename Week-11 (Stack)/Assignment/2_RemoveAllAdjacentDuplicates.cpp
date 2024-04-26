#include <iostream>
using namespace std;

string removeDuplicates(string s)
{
  string ans;
  int index = 0;
  while (index < s.length())
  {
    // same hh ans ke right most charcater se
    if (ans.length() > 0 && ans[ans.length() - 1] == s[index])
    {
      ans.pop_back();
    }
    else
    {
      ans.push_back(s[index]);
    }
    index++;
  }
  return ans;
}

int main()
{
  string s = "abbabcd";

  string ans = removeDuplicates(s);
  cout << ans;

  return 0;
}