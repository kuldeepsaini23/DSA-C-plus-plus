#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> asteroidCollision(vector<int> &asteroids)
{
  stack<int> st;

  for (auto ast : asteroids)
  {
    // initially nothing is destoryed
    bool destory = false;
    if (ast > 0)
    {
      st.push(ast);
    }
    else
    {
      // ast < 0
      if (st.empty() || st.top() < 0)
      {
        st.push(ast);
      }
      else
      {
        // condition ast-> negative st.top()-> positive collide
        while (!st.empty() && st.top() > 0)
        {
          if (abs(ast) == st.top())
          {
            st.pop();
            break;
          }
          else if (abs(ast) > st.top())
          {
            st.pop();
          }
          else
          {
            // abs(ast) < st.top()
            destory = true;
            break;
          }
        }
        if (!destory)
        {
          st.push(ast);
        }
      }
    }
  }

  vector<int> ans(st.size(), 0);

  for (int i = st.size() - 1; i >= 0; i--)
  {
    ans[i] = st.top();
    st.pop();
  }
  return ans;
}

int main()
{
  vector<int> asteroids = {5, 10, -5};

  vector<int> ans = asteroidCollision(asteroids);

  for (auto i : ans)
  {
    cout << i << " , ";
  }

  return 0;
}