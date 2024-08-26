#include <iostream>
#include<vector>
using namespace std;

class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

//* Path Sum - II
void helper(TreeNode *root, int targetSum, vector<int> temp, vector<vector<int>> &ans, int sum)
{
  // Base case
  if (root == NULL)
  {
    return;
  }

  // Ek case solve

  sum += root->val;
  temp.push_back(root->val);

  // extra case
  if (root->left == NULL && root->right == NULL)
  {
    // Verify
    if (sum == targetSum)
    {
      ans.push_back(temp);
    }
    else
    {
      return;
    }
  }

  // Recrusion work
  // Left part
  helper(root->left, targetSum, temp, ans, sum);
  helper(root->right, targetSum, temp, ans, sum);
}

vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
  vector<vector<int>> ans;
  vector<int> temp;
  int sum = 0;
  helper(root, targetSum, temp, ans, sum);
  return ans;
}

int main()
{

  return 0;
}