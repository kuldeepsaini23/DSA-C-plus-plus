#include<iostream>
using namespace std;
 
//* Diameter of the Bianry tree
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

//* use height of the Tree
int height(TreeNode *root){
        if (root == NULL){
            return 0;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int height = max(leftHeight, rightHeight) + 1;
        return height;
    }
 

    int diameterOfBinaryTree(TreeNode* root) {
        // Base Case
        if(root == NULL){
            return 0;
        }

        int option1 = diameterOfBinaryTree(root->left);
        int option2 = diameterOfBinaryTree(root->right);
        int option3 = height(root->left) + height(root->right);

        return max(option1, max(option2,option3));
    }
int main(){
 
      
 return 0;
}