#include<iostream>
using namespace std;

class TreeNode{
public:
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int val){
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
}; 

//* Path Sum
bool helper(TreeNode* root, int targetSum, int sum){
        //Base Case
        //Base Case
        if(root == NULL){
            return false;
        }
        
        sum+= root->val;
        if(root->left == NULL && root->right == NULL){
            // I am currently standing at the leaf Node
            return sum == targetSum ? true : false;
        }

        //Left Ans
        bool leftAns = helper(root->left, targetSum, sum);
        //Right Ans
        bool rightAns = helper(root->right, targetSum, sum);
        return leftAns || rightAns;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        bool ans = helper(root, targetSum, sum);
        return ans;
    }
 
int main(){
 
      
 return 0;
}