#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string simplifyPath(string path)
{
  stack<string> st;
  int i = 0;
  while (i < path.length())
  {
    if ((path[i] >= 'a' && path[i] <= 'z') || (path[i] >= 'A' && path[i] <= 'Z'))
    {
      string temp = "";
      while (i < path.length() && (path[i] != '/'))
      {
        temp += path[i];
        i++;
      }
      st.push(temp);
    }
    else if (path[i] == '.')
    {
      string temp = "";
      while (i < path.length() && (path[i] != '/'))
      {
        temp += path[i];
        i++;
      }
      if (temp == "..")
      {
        if (st.size())
          st.pop();
      }
      else if (temp == ".")
      {
      }
      else
      {
        st.push(temp);
      }
    }
    i++;
  }

  if (st.empty())
  {
    return "/";
  }

  string ans = "";

  while (!st.empty())
  {
    // cout << st.top() << endl;
    ans = "/" + st.top() + ans;
    st.pop();
  }

  return ans;
}

int main()
{
  string s = "/a/b/../../c";
  cout << simplifyPath(s);

  return 0;
}
