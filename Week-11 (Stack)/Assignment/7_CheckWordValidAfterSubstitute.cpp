#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
  if (s[0] != 'a')
    return false;
  stack<char> st;

  for (auto ch : s)
  {
    if (ch == 'c')
    {
      if (!st.empty() && st.top() == 'b')
      {
        st.pop();
      }
      else
      {
        return false;
      }

      if (!st.empty() && st.top() == 'a')
      {
        st.pop();
      }
      else
      {
        return false;
      }
    }
    else
    {
      st.push(ch);
    }
  }

  return st.size() > 0 ? false : true;
}

// Recrusion Method
bool isValidRecrusion(string s)
{
  if (s.size() == 0)
  {
    return true;
  }
  int fnd = s.find("abc");
  if (fnd != string::npos)
  {
    // found
    string tleft = s.substr(0, fnd);
    string tright = s.substr(fnd + 3, s.length());
    string t = tleft + tright;
    return isValid(t);
  }
  return false;
}

int main()
{
  string s = "aabcbc";
  bool ans = isValid(s);
  if (ans)
  {
    cout << "Valid" << endl;
  }
  else
  {
    cout << "Invalid" << endl;
  }

  bool ansR = isValidRecrusion(s);
  if (ansR)
  {
    cout << "Valid" << endl;
  }
  else
  {
    cout << "Invalid" << endl;
  }
  return 0;
}