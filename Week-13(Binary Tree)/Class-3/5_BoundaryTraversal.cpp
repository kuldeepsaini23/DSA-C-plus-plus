#include<iostream>
using namespace std;

//* Boundary Traversal
// Making Binary Tree class
class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int val){
    this->data = val;
    this->left = NULL;
    this->right = NULL;
  }
};

//Creating Binary Trree
Node* createTree(){
  cout <<"enter the value for the Node: ";
  int value;
  cin>>value;

  if(value == -1){
    return NULL;
  }

  //Create Node
  Node* root = new Node(value);
  cout << "Entering in the left of: " << value <<endl;
  root->left = createTree();

  cout << "Entering in the right of: " << value <<endl;
  root->right = createTree();

  return root;
}

//Pre order
void preOrder(Node* root){
  if(root == NULL){
    return;
  }

  cout << root->data <<" ";

  preOrder(root->left);

  preOrder(root->right);
}

//Inorder
void inOrder(Node* root){
  if(root == NULL){
    return;
  }
  inOrder(root->left);
  cout << root->data <<" ";
  inOrder(root->right);
}

//PostOrder
void postOrder(Node* root){
  if(root == NULL){
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data <<" ";
}

//* Boundary Traversal
//* Left Boundary 
void printLeftBoundary(Node* root){
  //Base Case
  if(root == NULL){
    return;  
  }

  if(root->left == NULL && root->right == NULL){
    return;
  }
  cout << root->data << " ";
  if(root->left != NULL){
    printLeftBoundary(root->left);
  }
  else{
    printLeftBoundary(root->right);
  }
}

//* Leaf Boundary
void printLeafBoundary(Node* root){
  //Base Case
  if(root == NULL){
    return;  
  }

  if(root->left == NULL && root->right == NULL){
    cout << root->data << " ";
  }
  printLeafBoundary(root->left);
  printLeafBoundary(root->right);
  
}

//* Right Boundary
void printRightBoundary(Node* root){
  //Base Case
  if(root == NULL){
    return;  
  }

  if(root->left == NULL && root->right == NULL){
    return;
  }
 
  if(root->right != NULL){
    printRightBoundary(root->right);
  }
  else{
    printRightBoundary(root->left);
  }

  cout << root->data << " ";
}

//* Boundary traversal
void boundaryTraversal(Node* root){
  if(root == NULL){
    return;
  }

  //old and na smaj ane vala method
  // printLeafBoundary(root);
  // printLeafBoundary(root);
  // if(root->right != NULL){
  //   printRightBoundary(root->right);
  // }
  // else{
  //   printRightBoundary(root->left);
  // }

  //* new and smaj ane vala method
  cout << root->data << " ";
  printLeafBoundary(root->left);
  printLeafBoundary(root->left);
  printLeafBoundary(root->right);
  printRightBoundary(root->right);
}
 
int main(){
  Node* root = createTree();
  cout << endl;
  cout << "Boundary traversal: "<<endl;
  boundaryTraversal(root);
      
 return 0;
}