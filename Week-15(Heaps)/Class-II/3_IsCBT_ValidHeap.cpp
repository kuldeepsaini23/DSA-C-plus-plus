#include<iostream>
#include<limits.h>
using namespace std;

//* CBT is Valid heap or Not
pair<int,bool> checkMaxHeap(Node* root){
  if(!root) return make_pair(INT_MIN,true);

  if(!root->left && !root->right){
    return make_pair(root->data, true);
  }

  pair<int,bool> leftAns = checkMaxHeap(root->left);
  pair<int,bool> rightAns = checkMaxHeap(root->right);

  // ek case hum solve kr lete hai
    pair<int, bool> ans;
  if(root->data > leftAns.first && root->data > rightAns.first && leftAns.second && rightAns.second){
    ans.first = root->data;
    ans.second = true;
    return ans;
  }
  else{
    ans.first = max(root->data,max(leftAns.first,rightAns.first));
    ans.second = false;
    return ans;
  }
}
 
int main(){
 
      
 return 0;
}