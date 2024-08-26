#include<iostream>
using namespace std;

class TreeNode{
public:
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int val){
    this-> val = val;
    this->left = NULL;
    this->right = NULL;
  }
};


 int height(TreeNode* root){
        //base case
        if(root == NULL){
            return 0;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int finalAns = max(leftHeight, rightHeight) + 1;
        return finalAns;
    }

    bool isBalanced(TreeNode* root) {
        //Base Case
        if(root == NULL){
            return true;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int diff = abs(leftHeight - rightHeight);

        bool cuurNode = (diff <=1);

        //left tree ka ans
        bool leftAns = isBalanced(root->left);
        //Right Tree ka ans
        bool rightAns = isBalanced(root->right);  

        if(cuurNode && leftAns && rightAns){
            return true;
        } 
        return false;
    }
 
int main(){
 
      
 return 0;
}