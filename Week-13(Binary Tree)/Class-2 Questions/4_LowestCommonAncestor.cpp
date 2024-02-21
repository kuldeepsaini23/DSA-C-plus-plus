#include <iostream>
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

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
  // Bae Case
  if (root == NULL)
  {
    return NULL;
  }

  if (root->val == p->val)
    return p;
  if (root->val == q->val)
    return q;

  // Left answer
  TreeNode *leftAns = lowestCommonAncestor(root->left, p, q);
  TreeNode *rightAns = lowestCommonAncestor(root->right, p, q);

  if (leftAns == NULL && rightAns == NULL)
    return NULL;
  if (leftAns != NULL && rightAns == NULL)
    return leftAns;
  if (leftAns == NULL && rightAns != NULL)
    return rightAns;
  return root;
}

int main()
{

  return 0;
}