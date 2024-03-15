#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
  int row = 8;
  int col = 15;
  int tower = 3;
  vector<pair<int, int>> loc;
  loc.push_back({3, 8});
  loc.push_back({11, 2});
  loc.push_back({8, 6});

  // Pushing XDim
  vector<int> xDim;
  xDim.push_back(0);
  xDim.push_back(col + 1);

  for (int i = 0; i < loc.size(); i++)
  {
    xDim.push_back(loc[i].first);
  
  }

  sort(xDim.begin(), xDim.end());

 

  // Pushing YDim
  vector<int> yDim;
  yDim.push_back(0);
  yDim.push_back(row + 1);

  for (int i = 0; i < loc.size(); i++)
  {
    yDim.push_back(loc[i].second);
  }

  sort(yDim.begin(), yDim.end());

  vector<int> xAns;
  for (int i = 0; i < xDim.size(); i++)
  {
    int diff = xDim[i] - xDim[i - 1] - 1;
    xAns.push_back(diff);
  }


  vector<int> yAns;
  for (int i = 0; i < yDim.size(); i++)
  {
    int diff = yDim[i] - yDim[i - 1] - 1;
    yAns.push_back(diff);
  }

  int maxi = -1;
  for (int i = 0; i < xDim.size(); i++)
  {
    for (int j = 0; j < yAns.size(); j++)
    {
      int prod = xAns[i] * yAns[j];
      // cout << xAns[i] << " * " << yAns[j] << " = "<< prod << endl;
      maxi = max(maxi, prod);
    }
  }

  cout << "The final Ans is: " << maxi << endl;

  return 0;
}