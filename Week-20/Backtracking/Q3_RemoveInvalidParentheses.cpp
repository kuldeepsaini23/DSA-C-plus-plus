#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void solve(string &s, unordered_set<string> &ans, int invalidOpen, int invalidClose, int balance, int index, string  &output)
{
  // Base Case
  if (index >= s.length())
  {
    // valid ans
    if (invalidOpen == 0 && invalidClose == 0 && balance == 0)
    {
      ans.insert(output);
    }
    return;
  }

  // exclude/include
  if (s[index] != '(' && s[index] != ')')
  {
    // Letter case (a to z)
    output.push_back(s[index]);
    solve(s, ans, invalidOpen, invalidClose, balance, index + 1, output);
    // BackTracking
    output.pop_back();
  }
  else
  {
    // brackets
    // 2 case -> ( or )
    // open bracket
    if (s[index] == '(')
    {
      // include/exclude
      // Remove kru
      if (invalidOpen > 0)
      {
        solve(s, ans, invalidOpen - 1, invalidClose, balance, index + 1, output);
      }
      // Remove na kru
      output.push_back('(');
      solve(s, ans, invalidOpen, invalidClose, balance + 1, index + 1, output);
      output.pop_back();
    }
    // close bracket
    else if (s[index] == ')')
    {
      // remove kro
      if (invalidClose > 0)
      {
        solve(s, ans, invalidOpen, invalidClose - 1, balance, index + 1, output);
      }

      // Remove na kru
      //! yha pe Mistake ke chances zayda hai
      // aap el closed bracket pr ho pehel se koi opening bracket nhi hai toh me isse remove kru
      // ha remove kro but check balance
      if (balance > 0)
      {
        //opening ka closing milgya
        output.push_back(')');
        solve(s, ans, invalidOpen, invalidClose, balance-1, index+1, output);
        output.pop_back();
      }
    }
  }
}

vector<string> removeInvalidParentheses(string s)
{
  unordered_set<string> ans;
  int invalidOpen = 0;
  int invalidClose = 0;
  for (auto ch : s)
  {
    if (ch == '(')
    {
      invalidOpen++;
    }
    else if (ch == ')')
    {
      if (invalidOpen > 0)
      {
        invalidOpen--;
      }
      else
      {
        invalidClose++;
      }
    }
  }

    int balance = 0;
  int index = 0;
  string output = "";
  solve(s, ans, invalidOpen, invalidClose, balance, index, output);
  vector<string> finalAns(ans.begin(), ans.end()) ;
  return finalAns;
}

int main()
{
  string s = "()())()";
  vector<string> ans = removeInvalidParentheses(s);

  for (auto str : ans)
  {
    cout << str << endl;
  }

  return 0;
}