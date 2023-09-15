#include<iostream>
#include<vector>
using namespace std;

//* Spiral Print in a Matrix
  //*Print--> 1. Starting Row -- Ending Col -- Ending Row -- Starting Col
vector<int> spiralOrder(vector<vector<int>>& matrix) {
  int count = 0;
  int row = matrix.size();
  int col = matrix[0].size();
  int totalElement = row*col;

  int startingRow = 0;
  int endingRow = col-1;
  int startingCol = 0;
  int endingCol = row-1; 

  vector<int> ans;

  while(count<totalElement){
    // 1. Print Starting Row
    for (int i = startingCol; i <= endingCol && count< totalElement; i++)
    {
      /* code */
      ans.push_back(matrix[startingCol][i]);
      count++;
    }
    startingRow++;

// 2. Print Ending Col
   for (int i = startingRow; i <= endingRow && count< totalElement; i++)
    {
      /* code */
      ans.push_back(matrix[i][endingCol]);
      count++;
    }
    endingCol--;

// 3. Print Ending Row
    for (int i = endingCol; i >= endingRow && count< totalElement; i--)
    {
      /* code */
      ans.push_back(matrix[endingRow][i]);
      count++;
    }
     endingRow--;

// 4. Print Starting Column
    for (int i = endingRow; i >= startingRow && count< totalElement; i++)
    {
      /* code */
      ans.push_back(matrix[i][startingCol]);
      count++;
    }
    startingRow++;
  }

  for (int i = 0; i < ans.size(); i++)
  {
    /* code */
    cout<<ans[i]<<" ";
  }
  return ans;
}
 
int main(){
  vector<vector<int>> v;
  vector<int> v1{1,2,3};
  vector<int> v2{4,5,6};
  vector<int> v3{7,8,9};
  vector<int> v4{10,11,12};

  v.push_back(v1);
  v.push_back(v2);
  v.push_back(v3);
  v.push_back(v4);
  

 spiralOrder(v);
      
 return 0;
}
