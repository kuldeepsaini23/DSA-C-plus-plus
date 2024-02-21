#include<iostream>
#include<queue>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int value){
    this->data = value;
    this->left = NULL;
    this->right = NULL;
  }
};
 
//level order tarversal
void levelOrderTraversal(Node* root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    Node* temp = q.front();
    q.pop();

    if(temp == NULL){
      cout << endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout << temp->data << " ";
      if(temp->left != NULL){
        q.push(temp->left);
      }

      if(temp->right != NULL){
        q.push(temp->right);
      }
    }

  }
} 

//* Create Bst using Inorder
Node* bstFromInorder(int inOrder[], int s, int e){
  //Base Case
  if(s>e){
    return NULL;
  }

  //1 Case solve krte hai
  int mid = (s+e)/2;
  int element = inOrder[mid];
  Node* root = new Node(element);

  //Baki recrusion krdegaa
  root->left = bstFromInorder(inOrder, s, mid-1);

  root->right = bstFromInorder(inOrder, mid+1, e);

  return root;

}
 
 
int main(){
 int inOrder[] = {10,20,30,40,50,60,70};
 int size = 7;
 int start = 0;
 int end = size - 1;
 Node* root = bstFromInorder(inOrder, start, end);

  cout << "Printing Levelwise: " <<endl;
  levelOrderTraversal(root);
 

      
 return 0;
}
