#include <iostream>
using namespace std;

//* isomorphic Strings
void createMapping(string &s)
{
  int start = 'a';
  char mapping[256] = {0};

  for (auto ch : s)
  {
    if (mapping[ch] == 0)
    {
      mapping[ch] = start;
      start++;
    }
  }

  for (int i = 0; i < s.length(); i++)
  {
    char ch = s[i];
    s[i] = mapping[ch];
  }
}
bool isIsomorphic(string s, string t)
{
  if (s.size() != t.size())
    return false;
  createMapping(s);
  createMapping(t);

  return s == t ? true : false;
}

int main()
{
  string s ="foo";
  string t = "too";
  cout<<isIsomorphic(s,t);

  return 0;
}