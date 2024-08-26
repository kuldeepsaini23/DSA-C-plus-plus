#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> inorderTraversal(TreeNode *root)
{
  vector<int> ans;
  TreeNode*curr = root;
  while(root){
    //left node is NULL, then , visit it and go right
    if(curr->left == nullptr){
      ans.push_back(curr->val);
      curr = curr->right;
    }
    //left node is not null
    else{
      //find inorder predecessor
      TreeNode* pred = curr->left;
      while(pred->right != curr && pred->right){
        pred = pred->right;
      }

      //If right Node is null then go left after establishing link from pred to curr
      if(pred->right == nullptr){
        pred->right = curr;
        curr = curr->left;
      }
      else{
        //right node is not null -> left is already visited, Go right after visiting curr node
        pred->right = nullptr;
        ans.push_back(curr->val);
        curr->right;
      }
    }
  }
  return ans;
}

int main()
{

  return 0;
}