#include<iostream>
#include<queue>
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
  // void coundNode(TreeNode* root, int &count){
  //     if(!root) return;
  //     count++;
  //     coundNode(root->left);
  //     coundNode(root->right);
  // }

  bool levelOrderTraversal(TreeNode *root)
  {
    queue<TreeNode *> q;
    q.push(root);
    bool nullFound = false;
    while (!q.empty())
    {
      auto front = q.front();
      q.pop();

      if (front == NULL)
      {
        nullFound = true;
      }
      else
      {
        if (nullFound)
        {
          return false;
        }
        q.push(front->left);
        q.push(front->right);
      }
    }
    return true;
  }

  bool isCompleteTree(TreeNode *root)
  {
    // int totalNodes = 0;
    // Node Count(excluding NULL)
    // countNodes(root, totalNodes);

    // last Node Cound(including NULL)
    //  int lastNode = 0;
    return levelOrderTraversal(root);

    // return lastNode == totalNode ? true :false;
  }
};

int main(){
  return 0;
  
}