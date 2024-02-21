#include <iostream>
using namespace std;

//* Depth of the Bianry tree
class TreeNode
{
public:
  int data;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int val)
  {
    this->data = val;
    this->left = NULL;
    this->right = NULL;
  }
};

int maxDepth(TreeNode *root)
{
  if (root == NULL)
  {
    return 0;
  }

  int leftHeight = maxDepth(root->left);
  int rightHeight = maxDepth(root->right);
  int height = max(leftHeight, rightHeight) + 1;
  return height;

  //* Method 2 with Queue
  //  if(root == NULL){
  //           return 0;
  //       }
  //       queue<TreeNode*> q;
  //       q.push(root);
  //       q.push(NULL);
  //       int count = 1;

            //asli traversal start krte hai
  //       while(!q.empty()){
  //           TreeNode* front = q.front();
  //           q.pop();

  //           if(front == NULL){
  //           cout<<endl;
  //           if(!q.empty()){
  //               count++;
  //               q.push(NULL);
  //           }
            
  //           }
  //           else{
  //               cout<< front->val << " ";

  //               if(front->left != NULL){
  //                   q.push(front->left);
  //               }

  //               if(front->right != NULL){
  //                   q.push(front->right);
  //               }
  //           }
  //       }
  //       return count;
}

int main()
{

  return 0;
}